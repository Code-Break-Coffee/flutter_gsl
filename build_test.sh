#!/bin/bash

# Exit on error
set -e

# Define variables
GSL_VERSION="2.8"  # Update this to your desired version
ANDROID_NDK="/home/darth-kartikey/Android/Sdk/ndk/28.0.12674087"  # Update to your actual NDK path
BUILD_DIR="$(pwd)/gsl_build"
INSTALL_DIR="$(pwd)/gsl"
GSL_SOURCE_DIR="$BUILD_DIR/gsl-$GSL_VERSION"

# Define Android architectures
declare -A ARCH_MAP
ARCH_MAP=(
#    ["arm64-v8a"]="aarch64"
#    ["armeabi-v7a"]="armv7a"
#    ["x86"]="i686"
    ["x86_64"]="x86_64"
)

ANDROID_API=21  # Minimum supported API level

# Check if NDK is valid
if [ ! -d "$ANDROID_NDK" ]; then
    echo "Error: Android NDK not found at $ANDROID_NDK"
    exit 1
fi

# Download and extract GSL if not already present
if [ ! -d "$GSL_SOURCE_DIR" ]; then
    mkdir -p "$BUILD_DIR"
    cd "$BUILD_DIR"
    wget "https://ftp.gnu.org/gnu/gsl/gsl-$GSL_VERSION.tar.gz"
    tar -xzf "gsl-$GSL_VERSION.tar.gz"
    cd -
fi

# Clean previous builds
#rm -rf "$INSTALL_DIR"

# Function to build for a specific architecture
build_arch() {
    local android_abi=$1
    local arch=$2

    echo "Building for $android_abi ($arch)"

    mkdir -p "$BUILD_DIR/$android_abi"
    cd "$BUILD_DIR/$android_abi"

    # Set up the cross-compilation environment
    TOOLCHAIN="$ANDROID_NDK/toolchains/llvm/prebuilt/linux-x86_64"
    export AR="$TOOLCHAIN/bin/llvm-ar"
    export CC="$TOOLCHAIN/bin/$arch-linux-androideabi$ANDROID_API-clang"
    export AS="$CC"
    export CXX="$TOOLCHAIN/bin/$arch-linux-androideabi$ANDROID_API-clang++"
    export LD="$TOOLCHAIN/bin/ld"
    export RANLIB="$TOOLCHAIN/bin/llvm-ranlib"
    export STRIP="$TOOLCHAIN/bin/llvm-strip"

    # Configure and build
    "$GSL_SOURCE_DIR/configure" \
        --host="$arch-linux-android" \
        --prefix="$INSTALL_DIR/$android_abi" \
        --enable-shared \
        --disable-static

    # Compile and install
    make -j$(nproc || 1)
    make install

    cd -
}

# Build for each architecture
for android_abi in "${!ARCH_MAP[@]}"; do
    build_arch "$android_abi" "${ARCH_MAP[$android_abi]}"
done

echo "GSL built successfully for all architectures!"

#!/bin/bash

# Exit on error
set -e

# Set up variables
GSL_VERSION="2.7"  # Update this to the version you want to use
ANDROID_NDK="/home/darth-kartikey/Android/Sdk/ndk/28.0.12674087"  # Update this to your NDK path
BUILD_DIR="$(pwd)/gsl_build"
INSTALL_DIR="$(pwd)/gsl"
GSL_SOURCE_DIR="$BUILD_DIR/gsl-$GSL_VERSION"

# Download and extract GSL if not already present
if [ ! -d "$GSL_SOURCE_DIR" ]; then
    mkdir -p "$BUILD_DIR"
    cd "$BUILD_DIR"
    wget "https://ftp.gnu.org/gnu/gsl/gsl-$GSL_VERSION.tar.gz"
    tar -xzf "gsl-$GSL_VERSION.tar.gz"
    cd -
fi

# Function to build for a specific architecture
build_arch() {
    local arch=$1
    local android_abi=$2
    local android_api=21  # Minimum supported API level

    echo "Building for $arch"

    mkdir -p "$BUILD_DIR/$arch"
    cd "$BUILD_DIR/$arch"

    # Set up the cross-compilation environment
    export TOOLCHAIN="$ANDROID_NDK/toolchains/llvm/prebuilt/linux-x86_64"
    export AR="$TOOLCHAIN/bin/llvm-ar"
    export CC="$TOOLCHAIN/bin/$arch-linux-android$android_api-clang"
    export AS="$CC"
    export CXX="$TOOLCHAIN/bin/$arch-linux-android$android_api-clang++"
    export LD="$TOOLCHAIN/bin/ld"
    export RANLIB="$TOOLCHAIN/bin/llvm-ranlib"
    export STRIP="$TOOLCHAIN/bin/llvm-strip"

    # Configure and build
    "$GSL_SOURCE_DIR/configure" --host="$arch-linux-android" --prefix="$INSTALL_DIR/$android_abi" --enable-shared --disable-static
    make -j$(nproc)
    make install

    cd -
}

# Build for each architecture
#build_arch "aarch64" "arm64-v8a"
#build_arch "armv7a" "armeabi-v7a"
#build_arch "i686" "x86"
#build_arch "x86_64" "x86_64"

echo "GSL built successfully for all architectures"
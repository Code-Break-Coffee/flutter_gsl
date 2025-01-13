#!/bin/bash

# Exit on error
set -e

# Define variables
GSL_VERSION="2.8"  # Update this to your desired version
BUILD_DIR="$(pwd)/gsl_build"
INSTALL_DIR="$(pwd)/gsl/linux"
GSL_SOURCE_DIR="$BUILD_DIR/gsl-$GSL_VERSION"

# Download and extract GSL if not already present
if [ ! -d "$GSL_SOURCE_DIR" ]; then
    mkdir -p "$BUILD_DIR"
    cd "$BUILD_DIR"
    wget "https://ftp.gnu.org/gnu/gsl/gsl-$GSL_VERSION.tar.gz"
    tar -xzf "gsl-$GSL_VERSION.tar.gz"
    cd -
fi

# Clean previous builds
rm -rf "$INSTALL_DIR"

# Function to build for x86_64 architecture
build_x86_64() {
    echo "Building for x86_64"

    mkdir -p "$BUILD_DIR/x86_64"
    cd "$BUILD_DIR/x86_64"

    # Configure and build
    "$GSL_SOURCE_DIR/configure" \
        --prefix="$INSTALL_DIR/x86_64" \
        --enable-shared \
        --disable-static

    # Compile and install
    make -j$(nproc || 1)
    make install

    cd -
}

# Build for x86_64 architecture
build_x86_64

echo "GSL built successfully for x86_64 architecture!"
# C Development with Nix

This repository is set up as a Nix flake to provide a consistent C development environment across Linux and macOS.

## Getting Started

1. Install Nix via the [Lix installer](https://lix.systems/install/) to get a flakes-ready setup.
2. Run `nix develop` in the project root to enter the dev shell.

The dev shell supplies `gdb` for debugging and initializes the [Starship](https://starship.rs/) prompt for Bash so your shell looks the same everywhere. The compiler comes from the default stdenv (`clang` on macOS, `gcc` on most Linux systems), but you can add explicit toolchain packages to `flake.nix` as the project grows.

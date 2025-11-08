# C Development with Nix

This repository is set up as a Nix flake to provide a consistent C development environment across Linux and macOS.

## Getting Started

1. Install Nix via the [Lix installer](https://lix.systems/install/) to get a flakes-ready setup.
2. Run `nix develop` in the project root to enter the dev shell.

The dev shell supplies a minimal toolchain—`clang` for compilation, `gdb` for debugging—and initializes the [Starship](https://starship.rs/) prompt for Bash so your shell looks the same everywhere. Add extra tools to `flake.nix` as the project grows.

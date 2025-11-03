# C Development with Nix

This repository is set up as a Nix flake to provide a consistent C development environment across Linux and macOS.

## Getting Started

1. Install Nix via the [Lix installer](https://lix.systems/installer/) to get a flakes-ready setup.
2. Run `nix develop` in the project root to enter the dev shell.

The dev shell includes common C tooling (CMocka for testing, Meson + Ninja for builds, pkg-config for dependency discovery) and configures the [Starship](https://starship.rs/) prompt automatically for both zsh and bash.

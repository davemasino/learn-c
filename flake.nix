{
  description = "C Development with Nix";

  inputs = {
    flake-parts.url = "github:hercules-ci/flake-parts";
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = inputs@{ flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = [ "x86_64-linux" "aarch64-linux" "aarch64-darwin" "x86_64-darwin" ];
      perSystem = { config, self', inputs', pkgs, system, ... }: {
        # Per-system attributes can be defined here. The self' and inputs'
        # module parameters provide easy access to attributes of the same
        # system.

        devShells.default = pkgs.mkShell {
            packages = with pkgs; [
              # C compiler is already part of stdenv; Meson/Ninja drive the build
              cmocka
              meson
              ninja
              pkg-config
              starship
            ];
            shellHook = ''
              if [ -n "$ZSH_VERSION" ]; then
                eval "$(starship init zsh)"
              elif [ -n "$BASH_VERSION" ]; then
                eval "$(starship init bash)"
              fi
            '';
          };

        };
    };
}

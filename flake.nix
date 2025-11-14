{
  description = "learn-c dev shell";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = { nixpkgs, ... }:
    let
      supportedSystems = [ "x86_64-linux" "aarch64-linux" "aarch64-darwin" "x86_64-darwin" ];
      forEachSystem = nixpkgs.lib.genAttrs supportedSystems;
    in {
      devShells = forEachSystem (system:
        let
          pkgs = import nixpkgs { inherit system; };
        in {
          default = pkgs.mkShell {
            packages = with pkgs; [
              gdb
              starship
            ];
            shellHook = ''
              eval "$(starship init bash)"
            '';
          };
        });
    };
}

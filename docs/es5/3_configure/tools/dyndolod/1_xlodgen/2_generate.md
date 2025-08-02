# Generate

## Run

1. Input : In MO2, enable mod `xLODGen Resource - SSE Terrain Tamriel Full Extend` (or whatever we named it previously).
2. Use LOOT to sort our entire load order.
3. Output : In MO2, enable empty mod `GENERATED OUTPUT XLODGEN` (or whatever we named it previously).
4. Run : In MO2, select and run `xLODGenx64` (or whatever we named it previously).
5. `xLODGenx64` will churn and then present an Options panel.
6. Select worldspace `Tamriel "Skyrim"`.
7. Disable "Objects LOD", "Trees LOD", and "Occlusion".
8. Enable "Terrain LOD".
9. Enable "build meshes", "build diffuse", "build normal", "bake normal maps", "protect borders", and "hide quads".
10. Click the "Generate" button.

## Validate

1. Inspect the output in `GENERATED OUTPUT XLODGEN`. There should be content in `meshes/terrain` and `textures/terrain`.
2. View conflicts (right-click > "Information") for `GENERATED OUTPUT XLODGEN`. We should be overriding many existing meshes.
3. Disable `xLODGen Resource - SSE Terrain Tamriel Full Extend` (although the author says it's harmless if we forget).

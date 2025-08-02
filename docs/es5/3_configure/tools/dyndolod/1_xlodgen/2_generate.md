# Generate

## Run

1. Input : In MO2, enable mod `xLODGen Resource - SSE Terrain Tamriel Full Extend` (or whatever we named it previously).
2. Use LOOT to sort our entire load order.
3. Output : In MO2, enable empty mod `GENERATED OUTPUT XLODGEN` (or whatever we named it previously).
4. Run : In MO2, select and run `xLODGenx64` (or whatever we named it previously).
5. `xLODGenx64` will churn and then present an Options panel.
6. Select desired worldspaces, including (at least) `Tamriel "Skyrim"`.
7. Disable "Objects LOD", "Trees LOD", and "Occlusion".
8. Enable "Terrain LOD" and "build meshes".
9. Enable "build diffuse", "build normal", and "bake normal maps".
10. Select other Options as documented below.
11. Click the "Generate" button.

## Options

- Format : BC7 Quick.
- LOD4 : Set quality 0-5 (0 = highest quality). Set size to 256, 512 or 1024. Enable "protect borders".
- LOD8 : Set quality 0-8. Set size to 512 or 1024. Set "optimize unseen" to 550.
- LOD16 : Set quality 0-8. Set size to 512 or 1024. Set "optimize unseen" to 550.
- LOD32 : Set quality 0-10. Set size to 512 or 1024. Set "optimize unseen" to 550.

## Validate

1. Inspect the output in `GENERATED OUTPUT XLODGEN`. There should be content in `meshes/terrain` and `textures/terrain`.
2. View conflicts (right-click > "Information") for `GENERATED OUTPUT XLODGEN`. We should be overriding many existing meshes.
3. Disable `xLODGen Resource - SSE Terrain Tamriel Full Extend` (although the author says it's harmless if we forget).

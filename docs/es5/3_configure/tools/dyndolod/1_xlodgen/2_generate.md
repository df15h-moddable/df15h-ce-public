# Generate

1. Input : In MO2, enable mod `xLODGen Resource - SSE Terrain Tamriel Full Extend` (or whatever we named it previously).
2. Use LOOT to sort our entire load order.
3. Output : In MO2, enable empty mod `GENERATED OUTPUT XLODGEN` (or whatever we named it previously).
4. Run : In MO2, select and run `xLODGenx64` (or whatever we named it previously).

When complete ...

1. Notice that it generated `meshes/terrain` and `textures/terrain` in our previously empty "GENERATED OUTPUT XLODGEN" mod directory.
2. Notice, if we inspect the mod (right-click > "Information"), that in the "Conflicts" tab we are now overriding many existing meshes. (Presumably these represent a reconciliation, as with a bashed patch).
3. Disable "xLODGen Resource - SSE Terrain Tamriel" (although the author says it's harmless if we forget).

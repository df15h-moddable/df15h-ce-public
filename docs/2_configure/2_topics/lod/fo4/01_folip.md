# Far Object LOD Improvement

- "Adds missing LOD models for objects that don't currently have them."
- Does not break precombines.

Read ...

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.

Required ...

1. TexGen (from DynDOLOD) to generate correct textures.
2. Synthesis [patcher](https://github.com/DoubleYouC/FOLIP) for FOLIP and HasDistantLOD patches.
3. [xLODGen](https://stepmodifications.org/forum/topic/13451-xlodgen-terrain-lod-beta-102-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal-enderalse/).
See [documentation](https://dyndolod.info/Help/xLODGen).

## Resources

### FO4LODGen Resources

- Required.
- Obtain at [FO4LODGen Resources](https://www.nexusmods.com/fallout4/mods/80276) by sheson @ nexusmods.
- Select ONLY `FO4LODGen.esp`.

### HD LOD Textures

- Optional, not recommended by author.
- Obtain at [HD LOD Textures](https://www.nexusmods.com/fallout4/mods/56138) by Phlunder @ nexusmods.
- Or Luxor's.
- Or Neural.

### Terrain Noise

"Consider using an LOD noise retexture. Phlunder has several on the HD LOD Textures page. I use the "DoubleYou Is a Sexy Beast" noise texture from FAR - Faraway Area Reform by CaptainCockerel."

### Tree LOD

- [Optimized Vanilla Tree LODs](https://www.nexusmods.com/fallout4/mods/63198) by DoubleYou @ nexusmods.
- [Far Harbor 3D Tree LODs](https://www.nexusmods.com/fallout4/mods/63191) by DoubleYou @ nexusmods.

Regarding trees ...

- If you use a tree mod that provides LOD texture resources for _vanilla replacements_, the pregenerated LOD will use the tree mod's textures.
- This works out of the box with vanilla, Barren Trees, Luxor's Summer, Make Like a Tree, and probably others (those were the few tested).
- This method does not work for any tree mod that _adds_ new trees ( Boston Natural Surroundings, A Forest, etc).

### Other

Recommended by author ...

- [ModernHouseLOD](https://www.nexusmods.com/fallout4/mods/62975) by Trsdib @ nexusmods.

## Config

Recommended settings for `Fallout4Prefs.ini ` ...

```
[TerrainManager]
fBlockLevel0Distance=32768
fBlockLevel1Distance=65536
fBlockLevel2Distance=131072
fBlockMaximumDistance=262144
fSplitDistanceMult=1.000
```

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

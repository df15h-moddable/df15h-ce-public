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

Regarding trees ...

- If you use a tree mod that provides LOD texture resources for _vanilla replacements_, the pregenerated LOD will use the tree mod's textures.
- This works out of the box with vanilla, Barren Trees, Luxor's Summer, Make Like a Tree, and probably others (those were the few tested).
- This method does not work for any tree mod that _adds_ new trees ( Boston Natural Surroundings, A Forest, etc).

## Resources

You should be using the FO4LODGen Resources made by sheson. In the installer, tick only the FO4LODGen.esp option. If not using my Optimized Vanilla Tree LODs, also tick FO4LODGen-HighTrees.esp. Optimized Vanilla Tree LODs is recommended for everyone so long as you use TexGen. The same is the case for my Far Harbor 3D Tree LODs. Both of these are compatible with tree mods if you use TexGen. Please read the instructions in the FOMOD installers to ensure compatible options are selected. If confused, the installers default to the most compatible options possible.

It is optional to use an LOD texture upscale, such as HD LOD Textures by phlunder. I no longer personally recommend using one, as they no longer make much, if any, visual improvement, as a large amount of the affected LODs have been replaced.

I highly recommend this retexture for the Sanctuary Hills house LODs: ModernHouseLOD by Trsdib.

Consider using an LOD noise retexture. Phlunder has several on the HD LOD Textures page. I use the "DoubleYou Is a Sexy Beast" noise texture from FAR - Faraway Area Reform by CaptainCockerel.

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

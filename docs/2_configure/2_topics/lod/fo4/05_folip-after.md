# FOLIP Post-Processing

This document covers only the post-processing phase of the overall FOLIP process.

## Why?

- "to fix blinking object LOD when working in settlements"
- "prevent the infamous stuck object LOD bug"

## After Generation

Presuming both are up-to-date, we can use ...

- xEdit (rec. by Midnight Ride), or ...
- Synthesis (rec. by STEP)

Based on our experience with ES5, Synthesis may be able to handle very large load orders where xEdit goes out-of-memory.

IMPORTANT : Although DoubleYou maintains both, it looks like the xEdit scripts have been updated more recently.

### xEdit

1. Launch xEdit and load all mods.
2. Right-click relevant plugins and choose "Apply Script".
3. From the dropdown, select `FOLIP - After Generation.pas`.
4. The default options are recommended. "These settings impact whether or not you will get the stuck object LOD engine bug, so don't touch if you are unsure.﻿"
5. Start.
6. Generates `FOLIP - After Generation.esp`.
7. Save the new plugin and exit.
8. Enable `FOLIP - After Generation.esp`.

### Synthesis

Disable these patchers ...

- `FOLIP`

Enable these patchers ...

- `HasDistantLOD`
- `POVMessages`
- `WorkbenchOrganizer`

## Runtime

### Plugins

Disable ...

- `FO4LODGen.esp`
- `Optimized Vanilla Tree LODs.esp`
- `Far Harbor 3d Tree LODs.esp`
- `FOLIP - Before Generation.esp`

Enable ...

- `FOLIP - New LODs.esp`
- `FOLIP - After Generation.esp`

### Config

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
- [FOLIP](https://github.com/DoubleYouC/FOLIP) Synthesis Patcher by DoubleYouC @ github.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

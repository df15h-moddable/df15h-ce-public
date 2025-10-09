# Far Object LOD Improvement

This document covers only the post-processing phase of the overall FOLIP process.

## After Generation

Presuming both are up-to-date, we can use ...

- xEdit (rec. by Midnight Ride), or ...
- Synthesis (rec. by STEP)

Based on our experience with ES5, Synthesis may be able to handle very large load orders where xEdit goes out-of-memory.

IMPORTANT : Although DoubleYou maintains both, it looks like the xEdit scripts have been updated more recently.

### xEdit

Run `FOLIP - After Generation` to fix blinking object LOD when working in settlements and prevent the infamous stuck object LOD bug.

1. Launch xEdit and load all your mods.
2. Right-click any of your plugins and choose Apply Script.
3. From the dropdown, select the FOLIP - After Generation.pas file and click OK.
4. Optionally configure the options presented in the script's GUI. The default options are the recommended options, but do tick the bottom option if you intend to remove the FOLIP - Before Generation plugin afterwards. These settings impact whether or not you will get the stuck object LOD engine bug, so don't touch if you are unsure.﻿
5. Click Start
6. Wait until it completes. It will generate FOLIP - After Generation.esp. This will take a few minutes.
7. Once the patch successful message is shown, exit xEdit, saving the plugin.
8. Ensure you activate the FOLIP - After Generation.esp plugin.

### Synthesis

- Deselect `FOLIP` patcher.
- Select `HasDistantLOD` patcher.
- Select `POVMessages` and `WorkbenchOrganizer` patchers.

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

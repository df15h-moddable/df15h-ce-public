# FOLIP Pre-Processing

## Before Generation

Presuming both are up-to-date, we can use ...

- xEdit (rec. by Midnight Ride), or ...
- Synthesis (rec. by STEP)

Based on our experience with ES5, Synthesis may be able to handle very large load orders where xEdit goes out-of-memory.

IMPORTANT : Although DoubleYou maintains both, it looks like the xEdit scripts have been updated more recently.

### xEdit

Setup ...

1. Disable Simple Records. Launch xEdit and and go to the Other > Options menu and untick Simple Records. Close xEdit when finished. You will need to launch again before it will take effect.
2. Install FOLIP xEdit Scripts. Download the latest FOLIP xEdit Scripts﻿ optional file and extract into the `Edit Scripts` folder inside your xEdit install location.

Run `FOLIP - Before Generation` ...

1. Launch xEdit and load all mods.
2. Right-click relevant plugins and select "Apply Script".
3. From the dropdown, select `FOLIP - Before Generation.pas`.
4. The default options are recommended.
5. Start.
6. The script will generate records into `FOLIP - Before Generation.esp`. This will take some time. 
7. The output is `FOLIP Before Generation Output.zip` in `xEdit\Edit Scripts\FOLIP\output`.
8. Install `FOLIP Before Generation Output.zip` with your mod manager and activate the `FOLIP - Before Generation.esp` plugin.

### Synthesis

- Select and run the `FOLIP` patcher.

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [FOLIP](https://github.com/DoubleYouC/FOLIP) Synthesis Patcher by DoubleYouC @ github.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

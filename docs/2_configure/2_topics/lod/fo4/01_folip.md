# Far Object LOD Improvement

- "Adds missing LOD models for objects that don't currently have them."
- Does not break precombines.

Read ...

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.

## Tools

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

- Optional, but recommended by author.
- Phlunder
- CaptainCockerel

### Tree LOD

- For vanilla trees, use DoubleYou's LODs w TexGen.
- [Optimized Vanilla Tree LODs](https://www.nexusmods.com/fallout4/mods/63198) by DoubleYou @ nexusmods.
- [Far Harbor 3D Tree LODs](https://www.nexusmods.com/fallout4/mods/63191) by DoubleYou @ nexusmods.

Regarding tree mods ...

- LOD resources for vanilla tree replacers can overwrite vanilla LOD resources.
- LOD pregen for vanilla tree replacers can overwrite vanilla LOD.
- Resources and pregen for mods that ADD trees (like Boston Natural Surroundings) are their own problem, of course.

### Other

Recommended by author ...

- [ModernHouseLOD](https://www.nexusmods.com/fallout4/mods/62975) by Trsdib @ nexusmods.

## Load Order

1. `FO4LODGen.esp` always comes first, is always overwritten.
2. All other LOD resources.
3. `FOLIP - New LODs.esp` always comes after, always overwrites.
4. All other mods.
5. `FOLIP - Before Generation.esp` generated patch, always overwrites all.

## Before Generation

We can use ...

- xEdit (rec. by Midnight Ride), or ...
- Synthesis (rec. by STEP)

### xEdit

Setup ...

1. Disable Simple Records. Launch xEdit and and go to the Other > Options menu and untick Simple Records. Close xEdit when finished. You will need to launch again before it will take effect.
2. Install FOLIP xEdit Scripts. Download the latest FOLIP xEdit Scripts﻿ optional file and extract into the Edit Scripts folder inside your xEdit install location.

Run `FOLIP - Before Generation` ...

1. Launch xEdit and load all mods.
2. Right-click relevant plugins and select "Apply Script".
3. From the dropdown, select `FOLIP - Before Generation.pas`.
4. The default options are recommended.
5. Start.
6. The script will generate records into `FOLIP - Before Generation.esp`. This will take some time. 
7. When the patch is complete, a Windows Explorer window will open `FOLIP Before Generation Output.zip` in `xEdit\Edit Scripts\FOLIP\output`.
8. Install `FOLIP Before Generation Output.zip` with your mod manager and activate the `FOLIP - Before Generation.esp` plugin.

### Synthesis

We will use the Synthesis FOLIP patcher to add additional LOD information.

Run Synthesis from the MO executable drop-down list.

Choose Fallout4 if prompted to choose the game to target.

Click the Git Repository button, third from top left.

NOTE: The Blocking Error messages are there because no patchers have been added yet.

Find FOLIP in the list, and click the [+] button that says Add patcher.

Wait until it says Ready, then go to FOLIP's Settings and tick the Moveable Statics checkbox.

Click the triangular [Run] button at bottom left.

Once the patcher says it has Completed, close Synthesis.

The patch has been completed and saved to the Step Fallout4 - Synthesis Output mod that was set up during installation in Step 4.

## After Generation

We can use ...

- xEdit (rec. by Midnight Ride), or ...
- Synthesis (rec. by STEP)

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

We will run Synthesis again for final setup.
Run Synthesis from the MO executable drop-down list.
Un-tick FOLIP.
Click the Git Repository button, third from top left.
Find HasDistantLOD in the list, and click the [+] button that says Add patcher.
Repeat the last two steps, adding POVMessages and WorkbenchOrganizer patchers.
Wait until it says Ready, then click the triangular [Run] button at bottom left.
Once the patcher says it has Completed, close Synthesis.
The patch has been completed and saved to the Step Fallout4 - Synthesis Output mod.

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
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

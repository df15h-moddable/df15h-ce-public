# Far Object LOD Improvement

## Why?

- Vanilla LOD is incomplete.

## How?

- FOLIP adds models where they were missing.
- FOLIP adds higher-quality models than vanilla.
- FOLIP relies on TexGen and xLODGen, but ...
- FOLIP adds pre- and post-processing ("before" and "after" patching).
- (FOLIP does not break precombines.)

## Documentation

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.

## Tools

1. xEdit & FOLIP scripts, or ...
2. Synthesis [patcher](https://github.com/DoubleYouC/FOLIP).
3. TexGen (from DynDOLOD) to generate correct textures.
4. [xLODGen](https://stepmodifications.org/forum/topic/13451-xlodgen-terrain-lod-beta-102-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal-enderalse/).
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

Presuming both are up-to-date, we can use ...

- xEdit (rec. by Midnight Ride), or ...
- Synthesis (rec. by STEP)

Based on our experience with ES5, Synthesis may be able to handle very large load orders where xEdit goes out-of-memory.

IMPORTANT : Although DoubleYou maintains both, it looks like the xEdit scripts have been updated more recently.

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

- Select and run the `FOLIP` patcher.



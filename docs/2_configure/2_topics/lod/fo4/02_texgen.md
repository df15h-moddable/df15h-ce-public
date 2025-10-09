# TexGen

"TexGen will generate custom object LOD textures based on enabled mods."

## Setup

- Download the latest DynDOLOD 3 Alpha.
- Once the download has finished, extract the contents of the archive to any location of your choice (do not use a UAC protected folder or the game folder).
- In MO2, select the MO2 executables button at the top of MO2 to open the executables menu.
- Click the + at the top of the window and the select Add from file...
- From the pop-up, navigate to where TexGen is installed and select TexGenx64.exe.
- In the Arguments box in the right pane, enter -FO4 (ie configure TexGenx64.exe with the argument -FO4 to launch in Fallout 4 mode)

## Resources

### FOLIP

Enable ...

- Required : `FOLIP - New LODs.esp`
- Optional : `Optimized Vanilla Tree LODs.esp`
- Optional : `Far Harbor 3d Tree LODs.esp`

## Generate

- Select TexGen from the executables drop-down in the top right of MO2 and click Run.
- Once the program has loaded, click Start.
- Default options should generate to a TexGen_Output folder where you installed the tool.
- Ensure that Base Size is set to 256 (1440p) says DoubleYou. "Higher resolutions are unsupported due to game engine mipmap bugs associated with exceeding the Object LOD atlas."
- Once complete, click "Zip & Exit" button and install the generated zip like any other mod. It should overwrite all textures provided from any other mod.﻿
- When complete, you will see a message saying "TexGen completed successfully", click Zip and Exit.
- Install the TexGen output by clicking the MO2 archive button button at the top of MO2.
- From the new window, navigate to the DynDOLOD folder you installed in step 2, then double-click TexGen_Output.zip and install it.

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

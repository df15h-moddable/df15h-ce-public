# TexGen

## DoubleYou says ...

(Optional, but highly recommended!) Use TexGen to automatically generate LOD textures that match your mods perfectly

Sheson has made TexGen capable of generating stitched object LOD textures. This is important to use so that the textures for your mods match the LODs. Not all textures can be made this way, but a very large amount of them can, and 99% of the 1000 or so new models I have added uses textures generated via TexGen that will perfectly match your modded textures. If you do not wish to use TexGen, check the appropriate installation option in the FOMOD installer and it will provide TexGen generated textures based off vanilla textures.

Warning! The following plugins MUST be active in your load order for all LOD textures to be generated:
FOLIP - New LODs.esp
Optimized Vanilla Tree LODs.esp (if using it)
Far Harbor 3d Tree LODs.esp (if using it)

1. Download from the DynDOLOD 3 Alpha SSE mod page here: https://www.nexusmods.com/skyrimspecialedition/mods/DynDOLOD-3/68518
2. Install to wherever you install tools and configure TexGenx64.exe with the argument -FO4 to launch in Fallout 4 mode as shown in the example below.
3. Default options should generate to a TexGen_Output folder where you installed the tool.
4. Ensure that Base Size is set to 256 (1440p) and click Start to generate the textures. Higher resolutions are unsupported due to game engine mipmap bugs associated with exceeding the Object LOD atlas.
5. Once complete, click "Zip & Exit" button and install the generated zip like any other mod. It should overwrite all textures provided from any other mod.﻿

## STEP says ...

TexGen will generate custom object LOD textures based on enabled mods.

Warning-Logo.png
WARNING

Using higher resolutions than recommended will result in a waste of PC resources with NO BENEFIT. It makes ZERO sense to impulsively increase the resolutions beyond the specifications indicated.
Run TexGen from the MO executable drop-down list.
Set Base size to 256 if it isn't automatically.
Click [Start].
Once the completed message has appeared (1-5 minutes, depending on the PC), click [Exit].
NOTE: If the TexGen window closes itself, post in the DynDOLOD 3 Alpha topic and include ../Modding/Tools/DynDOLOD/bugreport.txt and any logs created.
Navigate to the DynDOLOD TexGen_Output folder location (e.g. ../Modding/Tools/DynDOLOD/TexGen_Output).
Move the files from the TexGen_Output folder into the Step Fallout4 - TexGen Output mod:
In MO, hold down the Ctrl key and double-click the Step Fallout4 - TexGen Output mod. Alternatively, right click the mod to open it in an Explorer window.
Enable the Step Fallout4 - TexGen Output mod in MO.

## Midnight Ride says ...

Download the latest DynDOLOD 3 Alpha.
Once the download has finished, extract the contents of the archive to any location of your choice (do not use a UAC protected folder or the game folder).
In MO2, select the MO2 executables button at the top of MO2 to open the executables menu.
Click the + at the top of the window and the select Add from file...
From the pop-up, navigate to where TexGen is installed and select TexGenx64.exe.
In the Arguments box in the right pane, enter -FO4
Select TexGen from the executables drop-down in the top right of MO2 and click Run.
Once the program has loaded, click Start.
When complete, you will see a message saying "TexGen completed successfully", click Zip and Exit.
Install the TexGen output by clicking the MO2 archive button button at the top of MO2.
From the new window, navigate to the DynDOLOD folder you installed in step 2, then double-click TexGen_Output.zip and install it.

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

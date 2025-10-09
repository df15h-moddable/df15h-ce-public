# xLODGen

## DoubleYou says ...

The following plugins should be active in your load order for xLODGen generation:

FO4LODGen.esp
Optimized Vanilla Tree LODs.esp
Far Harbor 3d Tree LODs.esp
FOLIP - New LODs.esp
FOLIP - Before Generation.esp

Warning! Ensure that any previously generated FOLIP - After Generation.esp is DISABLED before generating LODS!

Warning! Failure to correctly set Arguments for xLODGen to output to a safe directory outside of Mod Organizer, Vortex, or UAC controlled directories will result in broken LODs. See image below for a correct example.

We will use xLODGen (download from here) to generate LOD. Install to wherever you install tools and configure with the arguments needed to direct the output to your specified location (should be outside of Mod Organizer, Vortex, or UAC controlled directories). 

Specific steps for Mod Organizer:
Spoiler:  Show

Generate using the following options. 

Pro tip: Consider generating Object LOD and Terrain LOD separately. You can just tick/untick the Object LOD/Terrain LOD checkboxes on separate generations to do so. Terrain LOD rarely ever needs updating, which makes it easy to update Object LOD only if your setup changes.

First time users are often confused by the layout of the GUI, specifically as relates to the "Settings for" LOD dropdown. The dropdown changes the behavior the settings in the Terrain LOD box for the LOD level displayed in the dropdown. YOU DO NOT NEED TO REGENERATE FOR EACH DROPDOWN LEVEL. I'm not sure why people seem to invent steps in their brains here, but I've seen people run it multiple times far too often because "the dropdown was only for LOD4." That is not how this works. The dropdown sets the SETTINGS for LOD level. The generate button merely generates all LOD with the settings given.

## STEP says ...

We will use xLODGen to generate terrain and object LOD. For this guide, we separate generation of terrain LOD from generation of object LOD, even though they can be generated at the same time. We have chosen to do this because:

Terrain LOD rarely ever needs to be updated.
Terrain LOD takes the most time to generate.
Terrain LOD is less difficult to get right the first time.
Object LOD is more likely to need updating.
Object LOD is more difficult to get right the first time.
Object LOD
xLODGen is run to generate updated LOD Object textures and meshes so that object LOD is updated with mod changes:

Ensure that any previous xLODGen generations have been removed, including any generated terrain LOD.
Ensure the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output) is completely empty.
Run xLODGen from the MO executable drop-down list.
Tick the following worldspaces in the left pane:
Commonwealth
DLC03FarHarbor
NukaWorld
Ensure that ONLY the Object LOD box is ticked in the right pane.
Use the following settings:
NOTE: Resist the urge to blindly alter the texture resolutions shown, which will only reduce FPS and degrade texture fidelity. The resolution settings do NOT scale object LOD textures in any way, shape, or form, and are instead used to determine the maximum size of textures placed on the atlas for draw call optimization purposes.
highslide=xLODGenObjects:xLODGen Object LOD settings
Click [Generate] to run the process, which will require upwards of 10 minutes, depending on the PC.
Once the "LOD generation complete" message has appeared, close xLODGen.
NOTE: If the xLODGen window closes itself, post in the xLODGen topic and include ../Modding/Tools/xLODGen/bugreport.txt and any logs created.
Object LOD Wrap-Up
Browse to the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output).
In MO, open the Step Fallout4 - xLODGen Object Output mod in Windows Explorer (Ctrl + double-click).
Cut and paste the files from ../xLODGen_Output into the Step Fallout4 - xLODGen Object Output folder.
Copy the Step Fallout4 - xLODGen Object Output mod folder path to your clipboard.
Follow the Cathedral Assets Optimizer Usage Instructions.
Terrain LOD
xLODGen is run again to generate updated LOD terrain textures and meshes so that landscape LOD is updated with mod changes:

Ensure the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output) is completely empty.
Run xLODGen from the MO executable drop-down list.
Tick the following worldspaces in the left pane:
Commonwealth
DLC03FarHarbor
NukaWorld
Ensure that ONLY the Terrain LOD box is ticked in the right pane.
Use the following settings:
NOTE: Unless you are running FO4 at ≥ 4k resolution, resist the urge to wastefully increase the texture resolutions shown, which will only reduce FPS with NO BENEFIT. Those running ≥ 4k resolution WILL benefit by doubling the resolution for LOD4, LOD8, and LOD16 from 256 to 512.
highslide=xLODGenTerrain:LOD4
highslide=xLODGenTerrain:LOD8
highslide=xLODGenTerrain:LOD16
highslide=xLODGenTerrain:LOD32
Click [Generate] to run the process, which will require upwards of 20 minutes, depending on the PC.
Once the "LOD generation complete" message has appeared, close xLODGen.
NOTE: If the xLODGen window closes itself, post in the xLODGen topic and include ../Modding/Tools/xLODGen/bugreport.txt and any logs created.
Terrain LOD Wrap-Up
Browse to the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output).
In MO, open the Step Fallout4 - xLODGen Terrain Output mod in Windows Explorer (Ctrl + double-click).
Cut and paste the files from ../xLODGen_Output into the Step Fallout4 - xLODGen Terrain Output folder.
Copy the Step Fallout4 - xLODGen Terrain Output mod folder path to your clipboard.
Follow the Cathedral Assets Optimizer Usage Instructions.

## Midnight Ride says ...

xLODGen
xLODGen is an xEdit-based tool that allows you to generate LOD meshes for your game. Similarly to xEdit, it has a single executable that can be be turned into a game specific version by adding arguments.
Download the latest xLODGen from here.
Once the download has finished, extract the contents of the archive anywhere outside of the default Windows folders.
In MO2, select the MO2 executables button at the top of MO2 to open the executables menu.
Click the + at the top of the window and the select Add from file...
From the pop-up, navigate to where xLODGen is installed and select xLODGenx64.exe.
In the Arguments box in the right pane, enter -FO4 -O:"C:\Output"
This argument will send the LOD output to a folder called Output on your C drive (the drive Windows is installed on).
You can change this path if you would prefer the files to be generated elsewhere (do not use a UAC protected folder or the game folder).

Make sure that the output folder is empty before generating LOD.

Select xLODGen from the executables drop-down in the top right of MO2 and click Run.
Copy all settings from the image below:
Main LOD Settings - Objects and Trees
Generating LOD for the DLC03VRWorldspace is a waste of time and disk space as you won't be able to see any LOD in that location.

After Generation Instructions

After generation, it is recommended to package the LOD into BA2 archives. This may improve load times and performance slightly. Be mindful, however, that any loose files will overwrite. If this is too hard, it isn't a big deal if you skip this.

Of course, install the generated LOD as a mod in your mod manager.

It is recommended to test your LOD before returning to your game:

### Terrain LOD Generation instructions (Optional but Recommended)

Generating Terrain LOD is very CPU intensive and can take a long time depending on the settings and your CPU's multithreaded performance.

It's needed only if you have mods that edit the landscape or landscape textures. But the visual improvement is big regardless.

In the right pane, check Terrain LOD.
Landscape LOD has 4 quality levels for different distances (with LOD4 being the closest to you, and LOD32 being the farthest).
All LOD levels are generated at once! You don't have to do anything besides configuring every level!
This is not something that you pick and choose - those are not quality "settings", just how the game works.

Copy the settings for each LOD level from images below:

### Settings Explanation
Objects:
Atlas size: The atlas is what contains all textures for the Object LOD meshes, increasing its size means that you can have more textures on the atlas (from the new resources) and they could also be higher resolution.
Keep in mind that the tool will create this atlas with just the resolution it ends up needing (e.g. if you only need 1024x512 for your atlas, that will be the final resolution of it, what we set is simply the max allowed).
Max texture size: Object textures above this resolution will not be allowed on the atlas, we increase this to make sure everything makes it there.
Landscape
Protect borders: Prevents ugly terrain drops at the cell borders.
Size: 512 on LOD4 and 256 on the next levels will suffice for most cases (especially in a list such as TMR), but high resolutions and retextured terrain may benefit from higher settings. Note that this setting can increase the generation time and file size of the output considerably.
Bake normal-maps: Roughens the terrain LOD textures to match the actual terrain's normal map.
Mipmap: Mipmapping textures prevents pixel crawling artifacts at a minor VRAM and storage utilization cost.
Quality: This controls the amount of detail in the LOD's geometry. Lower values have more detail and have a minor performance cost because of the amount of triangles in the mesh.
Optimize Unseen: Reduces the amount of triangles of geometry below a configurable height, this is meant to optimize unseen areas underwater. Even though most people recommend a value of 550, it seems to break the terrain in the map of minor worldspaces such as Soul Cairn.

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

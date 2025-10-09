# xLODGen

## Setup

1. Install xLODGen (anywhere, but not in game or MO2 directories).
2. Register xLODGen as an executable (`xLODGenx64.exe`) in MO2.
3. Add arguments `-lodgen -FO4 -o:"C:\Modding\Tools\xLODGen\xLODGen_Output"`.

## Resources

### FOLIP

Enabled ...

- Required : `FO4LODGen.esp`
- Optional : `Optimized Vanilla Tree LODs.esp`
- Optional : `Far Harbor 3d Tree LODs.esp`
- Required : `FOLIP - New LODs.esp`
- Required : `FOLIP - Before Generation.esp`

Disabled ...

- Any previously generated `FOLIP - After Generation.esp`.

## Generate

### Pro Tip

DoubleYou says : "Consider generating Object LOD and Terrain LOD separately. You can just tick/untick the Object LOD/Terrain LOD checkboxes on separate generations to do so. Terrain LOD rarely ever needs updating, which makes it easy to update Object LOD only if your setup changes."

STEP says : "We will use xLODGen to generate terrain and object LOD. For this guide, we separate generation of terrain LOD from generation of object LOD, even though they can be generated at the same time. We have chosen to do this because ..."

- Terrain LOD rarely ever needs to be updated.
- Terrain LOD takes the most time to generate.
- Terrain LOD is less difficult to get right the first time.
- Object LOD is more likely to need updating.
- Object LOD is more difficult to get right the first time.

### Object LOD

1. Ensure that any previous xLODGen generations have been removed, including any generated terrain LOD.
2. Ensure the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output) is completely empty.
3. Run xLODGen from the MO executable drop-down list.
4. Tick the following worldspaces in the left pane: `Commonwealth`, `DLC03FarHarbor`, `NukaWorld`.
5. Ensure that ONLY the "Object LOD" box is ticked in the right pane.
6. Use the following settings ....???
7. Generate.
8. Once the "LOD generation complete" message has appeared, close xLODGen.
9. Browse to the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output).
   . In MO, open the Step Fallout4 - xLODGen Object Output mod in Windows Explorer (Ctrl + double-click).
11. Cut and paste the files from ../xLODGen_Output into the Step Fallout4 - xLODGen Object Output folder.
12. Copy the Step Fallout4 - xLODGen Object Output mod folder path to your clipboard.
13. Follow the Cathedral Assets Optimizer Usage Instructions.

### Terrain LOD

1. Ensure the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output) is completely empty.
2. Run xLODGen from the MO executable drop-down list.
3. Tick the following worldspaces in the left pane: `Commonwealth`, `DLC03FarHarbor`, `NukaWorld`.
4. Ensure that ONLY the "Terrain LOD" box is ticked in the right pane.
5. Use the following settings: `highslide=xLODGenTerrain:LOD4`, `highslide=xLODGenTerrain:LOD8`, `highslide=xLODGenTerrain:LOD16`, `highslide=xLODGenTerrain:LOD32`.
6. Generate.
7. Once the "LOD generation complete" message has appeared, close xLODGen.
8. Browse to the xLODGen output folder (e.g. ..Modding/Tools/xLODGen/xLODGen_Output).
9. In MO, open the Step Fallout4 - xLODGen Terrain Output mod in Windows Explorer (Ctrl + double-click).
10. Cut and paste the files from ../xLODGen_Output into the Step Fallout4 - xLODGen Terrain Output folder.
11. Copy the Step Fallout4 - xLODGen Terrain Output mod folder path to your clipboard.
12. Follow the Cathedral Assets Optimizer Usage Instructions.

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

## Luxor says ...

This is a small and hopefully simple guide on how to use FO4LODGen to generate LOD 
for objects like buildings, trees and terrain to improve the level of detail.

First of all, a few tools and resources that we need:
-xLODGen
-LOD Textures for FO4LODGen
-FO4LODGen Resources
-Far Object LOD Improvement Project
-Archive2 (comes with the Creation Kit)
...........................................................................................................................................................................................................................................
latest xlodgen download here:
https://forum.step-project.com/topic/13451-xlodgen-terrain-lod-beta-67-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal/
FO4LODGen Resources here:
https://mega.nz/file/BZhlVCAJ#s-GqqbnJlZDvCLPiRw1Wm1EWGqMQCuh4CR8Zzn8POM4
Far Object LOD Improvement Project here:
https://www.nexusmods.com/fallout4/mods/61884
LOD Textures for FO4LODGen here:
https://www.nexusmods.com/fallout4/mods/61565

..........................................................................................................................................................................................................................................
First download xLODGen and unzip it.
Now open the xLOGEN folder and you will see two exe files in it.
xLODGen and xLODGenx64. change the name of the xLODGenx64 to FO4LODGenx64. Finished for now.
Now install the FO4LODGen Resources, Far Object LOD Improvement Project
and the LOD Textures for FO4LODGen with your mod manager.

One more info:
Delete the FO4LODGen-HighTrees esp. 
This plugin is buggy and I had some problems with it.

Tip:
if you are using environment and landscape mods like Landscape Overhaul HD which comes with it's own LOD textures, open the ba2 archive and extract the LOD folder into your game folder. this overwrites all other LOD textures with the correct textures.
Now start FO4LODGenx64 and wait until all plugins are loaded.
..........................................................................................................................................................................................................................................
you can now see this window:



We now want to generate LOD for the main game and the DLC's.
we also want to generate terrain LOD.
activate the 3 worldspaces in the left window as shown in the picture.
In the right window activate objects LOD, build atlas and then terrain LOD. Change atlas size to 8192x8192, 
max texture size to 1024, compression diffuse DXT 5, normal BC5 max and specular DXT1, use source alpha treshold,
optimize unseen 500, mipmap, bake normalmaps.
terrain LOD size: 256, diffuse: DXT1, normalmaps: BC7 Quick.




now about the level of detail for the levels. we have 4 different ones. LOD4, LOD8, LOD16 and LOD32.
We change the quality for LOD4 to 8, for LOD8 to 14, LOD16 to 20 and for LOD32 to 25.
activate terrain LOD, enable build meshes, build diffuse and build normal. diffuse: DXT1, normalmaps: BC7 Quick.
change all other settings like in these following pics.






after you have made all the settings, click on generate. 
this process will take a while as the tool now has to generate tens of thousands of objects and textures. 
so don't get impatient. take a coffee break or something else.
now to the possible question why I have not changed the output path for all the LOD files.
well, i save the time not having to generate everything in a separate folder.
after FO4LODGen is done with everything, start the game and check if everything is ok.
..........................................................................................................................................................................................
You can find all terrain meshes in the Fallout 4 \ Data \ Meshes \ Terrain folder and all 
objects and terrain LOD textures in the Fallout 4 \ Data \ Textures \ Terrain folder.
if you are satisfied with the result you can pack all these files, meshes and textures, as ba2 archives.
..........................................................................................................................................................................................
you need the tool Archive2 for this.
make two new folders. rename them to meshes and textures.
now go to the Fallout 4 \ Data \ meshes folder and cut out the terrain folder.
put the terrain folder in the new created meshes folder.
do the same with the texture folder. go to the Fallout 4 \ Data \ textures folder and cut out the Terrain folder. 
put the terrain folder in the new created textures folder.



....................................................................................................................................................................
now start the tool Archive2. create a new archive, format: general and add the meshes folder with the terrain meshes. 
save it as MyLOD - Main. create a new archive. format: DDS and add the textures folder with the terrain textures. 
save the archive as MyLOD - Textures. what you need now is a dummy esp plugin so that the game loads your ba2 archives. 
I have uploaded an empty dummy plugin (marked as esl) for you.

some people having issues to generate terrain LOD. so i provide you a full Set (under optional files). you have only to generate the objects LOD meshes and textures.
....................................................................................................................................................................
Now pack MyLOD - Main, MyLOD - Textures and the MyLOD esp plugin with winrar or another packing tool into an archive. 
call it MyLOD. then manually add it to your mod manager and activate it. the plugin should be near the end of your load order.
the load order of all FO4LODGEN plugins + your plugin should look like this:



finished. that's it already.
enjoy now your new high detailed LOD.

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

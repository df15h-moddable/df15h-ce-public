# xLODGen

## Why?

- Generates custom object LOD meshes based on our our modlist.
- Generates custom terrain LOD meshes based on our our modlist.

## Setup

xLODGen is a tool created by sheson for ES5, but it can also run in a `-FO4` mode.

1. Download [xLODGen](https://stepmodifications.org/forum/topic/13451-xlodgen-terrain-lod-beta-132-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal-enderalse/).
1. Install (anywhere, but not in game or MO2 directories).
2. Register as an executable (`xLODGenx64.exe`) in MO2.
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

## Settings

Per Midnight Ride ...

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

Worldspaces ...

```
Commonwealth
SanctuaryHillsWorld
DLC03FarHarbor
NukaWorld
```

Settings ...

```
Build Atlas : true
Atlas Size :  8192 x 8192
Compress Diffuse : BC7 Quick
No Vertex Colors : true
No Tangents : False
Use Source Alpha Threshold : true
Use Backlight Power : true
```

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

Settings ...

```
[LOD4]
Build Meshes : true
Quality : 0
Optimize Unseen : off
Build Diffuse : true
Size : 512
Build Normal : true
Size : 512
Bake Normal Maps : true
Default Size ; Diffuse : 4 ; Normal : 4
[LOD8]
Build Meshes : true
Quality : 14
Optimize Unseen : 525
Build Diffuse : true
Size : 256
Build Normal : true
Size : 256
Bake Normal Maps : true
Default Size ; Diffuse : 4 ; Normal : 4
[LOD16]
Build Meshes : true
Quality : 20
Optimize Unseen : 625
Build Diffuse : true
Size : 256
Build Normal : true
Size : 256
Bake Normal Maps : true
Default Size ; Diffuse : 4 ; Normal : 4
[LOD32]
Build Meshes : true
Quality : 25
Optimize Unseen : 550
Build Diffuse : true
Size : 256
Build Normal : true
Size : 256
Bake Normal Maps : true
Default Size ; Diffuse : 4 ; Normal : 4
```

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

## Reference

- [xLODGen](https://dyndolod.info/Help/xLODGen) @ dyndolod.info.
- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

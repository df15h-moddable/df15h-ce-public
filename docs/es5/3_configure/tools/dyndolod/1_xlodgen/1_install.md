# Install

## Output

1. In MO2, create an empty mod named e.g. "GENERATED OUTPUT XLODGEN".
2. In MO2, move it to the end of the list of all installed mods.
3. Enable it.

## Resources

1. Download [xLODGen Resource - SSE Terrain Tamriel](https://www.nexusmods.com/skyrimspecialedition/mods/54680) by sheson @ nexusmods.
2. Install "xLODGen Resource - SSE Terrain Tamriel" as a usual mod.
3. Notice that this is an ESM plugin. It contains no meshes or textures.
4. Enable it.
5. Sort it with LOOT.

## xLODGen

1. Download xLODGen from [xLODGen - Terrain LOD beta 98](https://stepmodifications.org/forum/topic/13451-xlodgen-terrain-lod-beta-98-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal-enderalse/) by sheson @ stepmodifications.
2. Unzip in our external tools directory (next to LOOT, etc). Do not attempt to install in the MO2 directory -- it will simply fail and exit immediately.
3. Register as an executable in MO2.
4. In the MO2 executable properties panel, set "Create files in mod ..." to the empty mod created above, "GENERATED OUTPUT XLODGEN".
5. For "Arguments", set e.g. `-lodgen -SSE -o:"I:\Games\MO2\ESV\mods\GENERATED OUTPUT XLODGEN"`. Note that "-SSE" is essential, or it won't bother to look at our MO2 resources.

## Reference

1. Sheson's [xLODGen - Terrain LOD beta 98](https://stepmodifications.org/forum/topic/13451-xlodgen-terrain-lod-beta-98-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal-enderalse/) @ stepmodifications.
2. Sheson's [xLODGen Resource - SSE Terrain Tamriel](https://www.nexusmods.com/skyrimspecialedition/mods/54680) @ nexusmods.
3. [Tool Setup](https://stepmodifications.org/wiki/SkyrimSE:2.2.0#Tool_Setup) @ stepmodifications.
4. [Step 5: Level of Detail (LOD)](https://stepmodifications.org/wiki/SkyrimSE:2.2.0#STEP_5) @ stepmodifications.
5. [xLODGen](https://dyndolod.info/Help/xLODGen) @ dyndolod.info.
6. [Exactly how do you use xLODGen?](https://www.reddit.com/r/skyrimmods/comments/n63r26/exactly_how_do_you_use_xlodgen_step_project_setup/) @ reddit.


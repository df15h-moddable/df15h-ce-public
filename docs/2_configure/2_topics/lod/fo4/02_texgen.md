# TexGen

Generates custom object LOD textures based on enabled mods.

## Setup

1. Download the latest DynDOLOD 3 Alpha.
2. Extract the contents to any location (but not the game directory).
3. In MO2, add an executable.
4. Navigate to and select `TexGenx64.exe`.
5. In the "Arguments" box in the right pane, enter `-FO4` (to run in Fallout 4 mode).

## Resources

### FOLIP

Enable ...

- Required : `FOLIP - New LODs.esp`
- Optional : `Optimized Vanilla Tree LODs.esp`
- Optional : `Far Harbor 3d Tree LODs.esp`

## Generate

1. In MO2, run the TexGen executable we added above.
2. Ensure that "Base Size" is set to 256 (1440p). DoubleYou says, "Higher resolutions are unsupported due to game engine mipmap bugs associated with exceeding the Object LOD atlas."
3. Start.
4. Default options will generate to a `TexGen_Output` directory where `TexGenx64.exe` was installed.
5. When complete, "Zip & Exit".
6. Install the generated ZIP like any other mod. Overwrite _all_ textures provided by all other mods.﻿

## Reference

- [Far Object LOD Improvement Project](https://www.nexusmods.com/fallout4/mods/61884) aka FOLIP by DoubleYou @ nexusmods.
- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [LOD Guide](https://themidnightride.moddinglinked.com/lod.html) @ themidnightride.
- [FO4LODGen - A Guide on how to generate LOD](https://www.nexusmods.com/fallout4/mods/49362) by luxor8071 @ nexusmods.
- [Step 5 Dynamic Modding](https://stepmodifications.org/wiki/Fallout4:1.0#STEP_5) incl LOD @ stepmodifications.

# Generate

## Prerequisites

1. Finalize load order. Create and activate all patches.
2. Use xLODGen to generate terrain LOD meshes and textures. Enable.
3. Use ParallaxGen to generate `ParallaxGen_Diff.json`. TexGen will use this data. Allow ParallaxGen assets to overwrite everything.
4. If using "No Grass In Objects", generate the grass pre-cache.

## Run

Output : A `.zip` file that we will subsequently install into MO2.

1. Start TexGen.
2. Select an output path.
3. Choose options. The defaults are generally useful as-is. 
4. Click Start. Wait for the process to complete.
5. Record errors, particularly `file not found textures`.
6. If the process succeeds, we should see `TexGen completed successfully`.
7. Select "Zip & Exit" to create an installable archive.
9. Install the archive as a mod. It should overwrite everything.

## Options

"The defaults are fine for standard tree, object and dynamic LOD generation with DynDOLOD. Generate HD tree LOD billboards and rendered billboards for ultra tree LOD generation. Enable grass LOD billboards for grass LOD generation with DynDOLOD."

## Troubleshooting

"Ignore wrong 3rd party advice to temporarily disable plugins, mods, meshes or textures. Such advice is categorically wrong or outdated. In case of issues, solve the cause or use appropriate mesh mask rules or settings for desired results. Disabling plugins, mods, meshes or textures is a troubleshooting step and not a fix."

## Resources

- [TexGen](https://dyndolod.info/Help/TexGen) @ dyndolod.info.
- [Generation Instructions](https://dyndolod.info/Generation-Instructions) @ dyndolod.info.

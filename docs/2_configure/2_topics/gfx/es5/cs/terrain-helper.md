# Terrain Helper

by hakasapl.

Provides supplementary landscape record parallax data to ENB or Community Shaders.

Relevance ...

- for parallax landscape mods.
- _not_ for PBR landscape mods.

## Problem

According to author ...

- Vanilla Skyrim landscape records include texture slots only for diffuse and normal.
- Therefore (for example) parallax would have to be implemented as the alpha layer of a diffuse texture.
- This technique broke alpha blending (hence the mod, "Terrain Parallax Blending Fix﻿", is a work-around).
- This technique required a parallax map to be the same resolution as the diffuse (often very hi-res) -- degrading performance. Parallax doesn't usually have to be hi-res.
- This technique required separate parallax maps for meshes and terrain (e.g. dirt cliff is mesh and terrain).

## Solution

According to author ...

- "allows Skyrim to read additional texture slots from landscape records"
- "adds slots (e.g. height) and includes them in the terrain shader for ENB or CS to read"
- parallax maps can be shared by meshes and terrain
- works with ENB or Community Shaders

## Notes

- Author says "PBR has its own method and does not need Terrain Helper" @ nexusmods.
- Author says Terrain Helper replaces "Terrain Parallax Blending Fix" IFF "you have a terrain mod that uses Terrain Helper"  @ nexusmods.

## Reference

- [Terrain Helper](https://www.nexusmods.com/skyrimspecialedition/mods/143149) @ nexusmods.
- [TerrainHelper.cpp](https://github.com/doodlum/skyrim-community-shaders/blob/dev/src/Features/TerrainHelper.cpp) @ doodlum @ github.
- [TerrainHelper](https://github.com/hakasapl/TerrainHelper) @ hakasapl @ github.
- [Terrain Parallax Blending Fix](https://www.nexusmods.com/skyrimspecialedition/mods/88261) @ nexusmods.

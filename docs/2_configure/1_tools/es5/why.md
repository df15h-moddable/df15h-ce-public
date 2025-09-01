# Why ...?

Q : Why do we need _all_ of these tools? Surely some are _optional_, right?

A : Most if not all of these tools are essential. Here's why ....

- BethINI : One of its edits is the one that enables the engine to _load mods_.
- BodySlide : Many outfit mods are NOT packaged with default meshes. Without BodySlide, you see _nothing_.
- DynDOLOD : Some mods indlude default LOD assets. Many DO NOT. Without DynDOLOD, you see mismatched vanilla LOD or _none_ (which results in pop-in).
- LOOT : Yes, you could study and manually manage every dependency yourself, but that would be insane. LOOT includes a crowd-sourced dependency graph, often including doc, hints, and warnings, too.
- Mod Organizer : Old school managers work directly on the file-system (a recipe for disaster). MO2 uses a virtual filesystem.
- Pandora : Not just for cosmetic animations -- many essential combat mods require animation (re)generation.
- Synthesis : Rarely necessary, but when it is (e.g. "Placed Light") it's NOT optional.
- Wrye Bash : Old-school leveled lists can clobber each other (last-in wins and the rest are ignored). A "bashed" patch solves these kinds of bugs via merge.

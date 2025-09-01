
See "Reference Handle" doc elsewhere in this repository.

- Most modern expansive mods (new lands, etc) are falgged ESM.
- Because ... if they aren't, they are so fat they're likely to blow the Reference Handle limit.
- Blowing the Reference Handle limit causes _all sorts_ of rutime bugs.
- Older mods of this type are more often very fat ESPs.
- Therefore older mods of this type are likely to break our game.

Criteria ...

- Already naturally sorted early in the load order.
- Is the root of dependencies, rather than dependent itself.
- Older, prior to best practice.
- Similar in scope and intent to mods that are made ESM today.
- Contain many referenceable data objects, such that there is benefit.

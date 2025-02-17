# Engine Changes
Sackboy: A Big Adventure uses a modified version of Unreal Engine 4.25.1. The engine (on PC at least) seems to be based off [Nvidia's Unreal Engine 4.25.1 RTX DLSS](https://github.com/NvRTX/UnrealEngine/tree/rtx-dlss-4.25.1) branch. 

When DLSS 3 + Nvidia Reflex were added into the game, the modifications from [Nvidia's DLSS Streamline 4.25 Engine Changes](https://github.com/NvRTX/UnrealEngine/tree/dlss-streamline-4.25-engine-changes) branch were added to the game.

I tried compiling my custom UE4.25.1 build with the RTX DLSS changes and used an older version of the game, but custom materials still crash the game. 😢

Some material domains still function, like UI and post-processing, though Volume materials won't crash but don't show. Deferred Decals will show up with no texture, and z-fight with the floor, so they are unusable.

# Limitations
  * BSP Brushes will crash the game upon Sackboy stepping on them, I don't know why this happens but it does. It is best to convert all BSP brushes to Static Meshes.

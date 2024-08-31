# GingerBread
# What is this?
This is a base project that you can use to make SABA mods. (i.e custom levels, restore unused features) This project tries not to make use of cooked (assets taken straight from the game files) blueprints, as most of them are simply C++ classes. A template map can be found in Content/Maps/Template1. If you wish to use [lbphaxmods' mod loader](https://gamebanana.com/tools/17882), then use the template in /Content/Mods/Template
# Prerequisites
* Sackboy: A Big Adventure (PC, PS4 untested)
* Unreal Engine 4.25 (can be installed from Epic Games Store as 4.25.4, but if you can compile it, use 4.25.1)
* Basic Unreal Engine knowledge
# Basic Setup 
* Open the .uproject and if asked to do anything click yes, you may be asked to compile modules.
* Once everything has compiled, you can do anything you please from there.
* (Optional) If you want to play the game's Wwise Events, then extract the Audio and WwiseAudio folder from the game and place them in the Content folder.
# Known Issues
* Cooking is likely to fail, but it should get far enough to at least cook the assets and put them in the Saved/Cooked folder
# Special Thanks
* Special Thanks to the developers of UE4SS, this wouldn't have been possible without their tools.

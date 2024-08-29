# GingerBread
# What is this?
This is a base project that you can use to make SABA mods. (i.e custom levels, restore unused features) This project tries not to make use of cooked (assets taken straight from the game files) blueprints, as most of them are simply C++ classes. A template map can be found in Content/Maps/Template1
# Prerequisites
* Sackboy: A Big Adventure (PC, PS4 untested)
* Wwise Launcher
* Unreal Engine 4.25 (can be installed from Epic Games Store as 4.25.4, but if you can compile it, use 4.25.1)
* Basic Unreal Engine knowledge
# Basic Setup 
  _the first two steps might be entirely unnecessary, but I have not checked._
* Open Wwise Launcher, and in the Unreal Engine tab, find the project and click **Integrate Wwise in Project...**
* Set the Integration Version to **All > 2019.1 > 2019.1.9.7221.1609** and press Integrate
* Open the .uproject and if asked to do anything click yes, you may be asked to compile modules.
* Once everything has compiled, you can do anything you please from there.
* (Optional) If you want to play the game's Wwise Events, then extract the Audio and WwiseAudio folder from the game and place them in the Content folder.
# Known Issues
* Cooking is likely to fail, but it should get far enough to at least cook the assets and put them in the Saved/Cooked folder
# Important Blueprints / Classes
## /Cameras/BP_CameraARea
  This defines the properties for a camera area box, a Camera Collider Actor must be attached to it and put in the properties, which will define where the camera area will work.
## /Cameras/BP_SingleScreenCamera
  This is the actual camera used in a level, you generally don't need to do anything with this after putting it in a level.
## /Blueprints/Objects/Checkpoint
  This is the actual checkpoint / entrance for Sackboy, you generally don't need to do anything with this after putting it in a level.
## /Blueprints/Objects/MemoryOrb/MemoryOrb_C_BP
  This is a dreamer orb, while you can collect these in your custom level, the game doesn't know what to do with these, so the dreamer orb cloud will not show.
## /Blueprints/Objects/MultiGrabKnot/MultiGrabKnow_C_BP
  This is a knot that you can grab on, you can configure what comes out of these.
## /Blueprints/Objects/Snowball2/Snowball2_C_BP
  This is a snowball that Sackboy can enter.
## /Blueprints/Audio/GameplayAudioManager_BP
  This is necessary for a lot of the audio to work.
## /Blueprints/Audio/BP_PhysicalAudioManager
  Unknown, but I would recommend placing it in your level anyways.
## /Blueprints/Cutscenes/CutsceneController_BP
  This is used for playing Fly-Through/Intro cutscenes, I have not figured it out entirely yet.
## /Blueprints/Cutscenes/Stuntboy
  This is the Sackboy that appears in cutscenes.

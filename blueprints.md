# Important Blueprints / Classes
**NOTE: Some of these will crash, and I'm not sure why**
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
## /Blueprints/Managers/GingerbreadEventDispatcher_BP
  This is a blueprint used to communicate between Sackboy and Blueprints. From my experience, only the "Sackboy Spawned" and "Sackboy Died" events actually fire.
## /Blueprints/Audio/GameplayAudioManager_BP
  This is necessary for a lot of the audio to work.
## /Blueprints/Audio/BP_PhysicalAudioManager
  Unknown, but I would recommend placing it in your level anyways.
## /Blueprints/Audio/AudioManager
  If you have any special gameplay objects or enemies in your level, then use this to load their audio banks, otherwise their sounds may not work. This will require having the games Audio and WwiseAudio folders extracted.
## /Blueprints/Cutscenes/CutsceneController_BP
  This is used for playing Fly-Through/Intro cutscenes, I have not figured it out entirely yet.
## /Blueprints/Cutscenes/Stuntboy
  This is the Sackboy that appears in cutscenes.

static const FString FullUriList[] = {
    // Retrieve global Wwise information.
    TEXT("ak.wwise.core.getInfo"),
    // Bring Wwise main window to foreground. Refer to SetForegroundWindow and AllowSetForegroundWindow on MSDN for more information on the restrictions. Refer to ak.wwise.core.getInfo to obtain the Wwise process ID for AllowSetForegroundWindow.
    TEXT("ak.wwise.ui.bringToForeground"),
    // Asynchronously post an Event to the sound engine (by event ID). See <tt>AK::SoundEngine::PostEvent</tt>.
    TEXT("ak.soundengine.postEvent"),
    // Execute an action on all nodes that are referenced in the specified event in an action of type play. See <tt>AK::SoundEngine::ExecuteActionOnEvent</tt>.
    TEXT("ak.soundengine.executeActionOnEvent"),
    // Register a game object. Registering a game object twice does nothing. Unregistering it once unregisters it no matter how many times it has been registered. See <tt>AK::SoundEngine::RegisterGameObj</tt>.
    TEXT("ak.soundengine.registerGameObj"),
    // Stop the current content, associated to the specified playing ID, from playing. See <tt>AK::SoundEngine::StopPlayingID</tt>.
    TEXT("ak.soundengine.stopPlayingID"),
    // Stop playing the current content associated to the specified game object ID. If no game object is specified, all sounds will be stopped. See <tt>AK::SoundEngine::StopAll</tt>.
    TEXT("ak.soundengine.stopAll"),
    // Display a message in the profiler's Capture Log view.
    TEXT("ak.soundengine.postMsgMonitor"),
    // Set a game object's obstruction and occlusion levels. This function is used to affect how an object should be heard by a specific listener. See <tt>AK::SoundEngine::SetObjectObstructionAndOcclusion</tt>.
    TEXT("ak.soundengine.setObjectObstructionAndOcclusion"),
    // Set the output bus volume (direct) to be used for the specified game object. See <tt>AK::SoundEngine::SetGameObjectOutputBusVolume</tt>.
    TEXT("ak.soundengine.setGameObjectOutputBusVolume"),
    // Set the Auxiliary Busses to route the specified game object. See <tt>AK::SoundEngine::SetGameObjectAuxSendValues</tt>.
    TEXT("ak.soundengine.setGameObjectAuxSendValues"),
    // Post the specified Trigger. See <tt>AK::SoundEngine::PostTrigger</tt>.
    TEXT("ak.soundengine.postTrigger"),
    // Set the State of a Switch Group. See <tt>AK::SoundEngine::SetSwitch</tt>.
    TEXT("ak.soundengine.setSwitch"),
    // Reset the value of a real-time parameter control to its default value, as specified in the Wwise project. See <tt>AK::SoundEngine::ResetRTPCValue</tt>.
    TEXT("ak.soundengine.resetRTPCValue"),
    // Set the value of a real-time parameter control. See <tt>AK::SoundEngine::SetRTPCValue</tt>.
    TEXT("ak.soundengine.setRTPCValue"),
    // Set a listener's spatialization parameters. This lets you define listener-specific volume offsets for each audio channel. See <tt>AK::SoundEngine::SetListenerSpatialization</tt>.
    TEXT("ak.soundengine.setListenerSpatialization"),
    // Set multiple positions for a single game object. Setting multiple positions for a single game object is a way to simulate multiple emission sources while using the resources of only one voice. This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area. See <tt>AK::SoundEngine::SetMultiplePositions</tt>.
    TEXT("ak.soundengine.setMultiplePositions"),
    // Set the position of a game object. See <tt>AK::SoundEngine::SetPosition</tt>.
    TEXT("ak.soundengine.setPosition"),
    // Set the scaling factor of a game object. Modify the attenuation computations on this game object to simulate sounds with a larger or smaller area of effect. See <tt>AK::SoundEngine::SetScalingFactor</tt>.
    TEXT("ak.soundengine.setScalingFactor"),
    // Set a the default active listeners for all subsequent game objects that are registered. See <tt>AK::SoundEngine::SetDefaultListeners</tt>.
    TEXT("ak.soundengine.setDefaultListeners"),
    // Set a single game object's active listeners. By default, all new game objects have no listeners active, but this behavior can be overridden with <tt>SetDefaultListeners()</tt>. Inactive listeners are not computed. See <tt>AK::SoundEngine::SetListeners</tt>.
    TEXT("ak.soundengine.setListeners"),
    // Seek inside all playing objects that are referenced in Play Actions of the specified Event. See <tt>AK::SoundEngine::SeekOnEvent</tt>.
    TEXT("ak.soundengine.seekOnEvent"),
    // Unregister a game object. Registering a game object twice does nothing. Unregistering it once unregisters it no matter how many times it has been registered. Unregistering a game object while it is in use is allowed, but the control over the parameters of this game object is lost. For example, say a sound associated with this game object is a 3D moving sound. It will stop moving when the game object is unregistered, and there will be no way to regain control over the game object. See <tt>AK::SoundEngine::UnregisterGameObj</tt>.
    TEXT("ak.soundengine.unregisterGameObj"),
    // Retrieve the list of topics to which a client can subscribe.
    TEXT("ak.wwise.waapi.getTopics"),
    // Retrieve the list of functions.
    TEXT("ak.wwise.waapi.getFunctions"),
    // Retrieve the JSON schema of a Waapi URI.
    TEXT("ak.wwise.waapi.getSchema"),
    // Opens a project, specified by path. Please refer to \ref ak_wwise_core_project_loaded for further explanations on how to be notified when the operation has completed.
    TEXT("ak.wwise.ui.project.open"),
    // Closes the current project.
    TEXT("ak.wwise.ui.project.close"),
    // Saves the current project.
    TEXT("ak.wwise.core.project.save"),
    // Renames an object.
    TEXT("ak.wwise.core.object.setName"),
    // Sets an object's reference value. Refer to \ref wobjects_index for more information on the references available on each object type.
    TEXT("ak.wwise.core.object.setReference"),
    // Sets a property value of an object for a specific platform. Refer to \ref wobjects_index for more information on the properties available on each object type. Refer to \ref ak_wwise_core_object_setreference to set a reference to an object.
    TEXT("ak.wwise.core.object.setProperty"),
    // Sets the randomizer values of a property of an object for a specific platform. Refer to \ref wobjects_index for more information on the properties available on each object type.
    TEXT("ak.wwise.core.object.setRandomizer"),
    // Sets the object's notes.
    TEXT("ak.wwise.core.object.setNotes"),
    // Executes a command. Some commands can take a list of objects as parameter. Refer to \ref globalcommandsids for the available commands.
    TEXT("ak.wwise.ui.commands.execute"),
    // Get the list of commands.
    TEXT("ak.wwise.ui.commands.getCommands"),
    // Retrieves the list of objects currently selected by the user in the active view.
    TEXT("ak.wwise.ui.getSelectedObjects"),
    // Gets the specified attenuation curve for a given attenuation object.
    TEXT("ak.wwise.core.object.getAttenuationCurve"),
    // Sets the specified attenuation curve for a given attenuation object.
    TEXT("ak.wwise.core.object.setAttenuationCurve"),
    // Assign a Switch Container's child to a Switch. This is the equivalent of doing a drag&drop of the child to a state in the Assigned Objects view. The child is always added at the end for each state.
    TEXT("ak.wwise.core.switchContainer.addAssignment"),
    // Remove an assignment between a Switch Container's child and a State.
    TEXT("ak.wwise.core.switchContainer.removeAssignment"),
    // Returns the list of assignments between a Switch Container's children and states.
    TEXT("ak.wwise.core.switchContainer.getAssignments"),
    // Creates an object of type 'type', as a child of 'parent'. Refer to \ref waapi_import for more information about creating objects. Also refer to \ref ak_wwise_core_audio_import to import audio files to Wwise.
    TEXT("ak.wwise.core.object.create"),
    // Moves an object to the given parent. Returns the moved object.
    TEXT("ak.wwise.core.object.move"),
    // Copies an object to the given parent.
    TEXT("ak.wwise.core.object.copy"),
    // Deletes the specified object.
    TEXT("ak.wwise.core.object.delete"),
    // Performs a query, returns specified data for each object in query result. Refer to \ref waapi_query for more information.
    TEXT("ak.wwise.core.object.get"),
    // Create Wwise objects and import audio files. This function is using the same importation processor available through the Tab Delimited import in the Audio File Importer. The function returns an array of all objects created, replaced or re-used. Use the options to specify how the objects are returned. For more information, refer to \ref waapi_import.
    TEXT("ak.wwise.core.audio.import"),
    // Scripted object creation and audio file import from a tab-delimited file.
    TEXT("ak.wwise.core.audio.importTabDelimited"),
    // Connects the Wwise Authoring application to a Wwise Sound Engine running executable. The host must be running code with communication enabled. If only "host" is provided, Wwise will connect to the first Sound Engine instance found. To distinguish between different instances, you can also provide the name of the application to connect to.
    TEXT("ak.wwise.core.remote.connect"),
    // Disconnects the Wwise Authoring application from a connected Wwise Sound Engine running executable.
    TEXT("ak.wwise.core.remote.disconnect"),
    // Retrieves all consoles available for connecting Wwise Authoring to a Sound Engine instance.
    TEXT("ak.wwise.core.remote.getAvailableConsoles"),
    // Retrieves the connection status.
    TEXT("ak.wwise.core.remote.getConnectionStatus"),
    // Begins an undo group. Make sure to call \ref ak_wwise_core_undo_endgroup exactly once for every ak.wwise.core.beginUndoGroup call you make. Calls to ak.wwise.core.undo.beginGroup can be nested.
    TEXT("ak.wwise.core.undo.beginGroup"),
    // Cancels the last undo group. Please note that this does not revert the operations made since the last \ref ak_wwise_core_undo_begingroup call.
    TEXT("ak.wwise.core.undo.cancelGroup"),
    // Ends the last undo group.
    TEXT("ak.wwise.core.undo.endGroup"),
    // Retrieves the list of all object types registered in Wwise's object model. This function returns the equivalent of \ref wobjects_index .
    // \deprecated in favor of ak.wwise.core.object.getTypes
    TEXT("ak.wwise.core.plugin.getList"),
    // Retrieves the list of all object types registered in Wwise's object model. This function returns the equivalent of \ref wobjects_index .
    TEXT("ak.wwise.core.object.getTypes"),
    // Retrieves information about an object property.
    // \deprecated in favor of ak.wwise.core.object.getPropertyInfo
    TEXT("ak.wwise.core.plugin.getProperty"),
    // Retrieves information about an object property.
    TEXT("ak.wwise.core.object.getPropertyInfo"),
    // Retrieves the list of property and reference names for an object.
    // \deprecated in favor of ak.wwise.core.object.getPropertyAndReferenceNames
    TEXT("ak.wwise.core.plugin.getProperties"),
    // Retrieves the list of property and reference names for an object.
    // \deprecated in favor of ak.wwise.core.object.getPropertyAndReferenceNames
    TEXT("ak.wwise.core.object.getPropertyNames"),
    // Retrieves the list of property and reference names for an object.
    TEXT("ak.wwise.core.object.getPropertyAndReferenceNames"),
    // Return true if a property is enabled based on the values of the properties it depends on.
    TEXT("ak.wwise.core.object.isPropertyEnabled"),
    // Enables debug assertions. Every call to enableAsserts with false increments the ref count. Calling with true will decrement the ref count. This is only available with Debug builds.
    TEXT("ak.wwise.debug.enableAsserts"),
    // Private use only.
    TEXT("ak.wwise.debug.testAssert"),
    // Enable or disable the automation mode for Wwise. This reduces the potential interruptions caused by message boxes and dialogs. For instance, enabling the automation mode silently accepts: project migration, project load log, EULA acceptance, project licence display and generic message boxes.
    TEXT("ak.wwise.debug.enableAutomationMode"),
    // Retrieves a SoundBank's inclusion list.
    TEXT("ak.wwise.core.soundbank.getInclusions"),
    // Modifies a SoundBank's inclusion list.  The 'operation' argument determines how the 'inclusions' argument modifies the SoundBank's inclusion list; 'inclusions' may be added to / removed from / replace the SoundBank's inclusion list.
    TEXT("ak.wwise.core.soundbank.setInclusions"),
    // Retrieve the latest log for a specific channel. Refer to \ref ak_wwise_core_log_itemadded to be notified when a item is added to the log.
    TEXT("ak.wwise.core.log.get"),
    // Creates a transport object for the given Wwise object.  The return transport object can be used to play, stop, pause and resume the Wwise object via the other transport functions.
    TEXT("ak.wwise.core.transport.create"),
    // Destroys the given transport object.
    TEXT("ak.wwise.core.transport.destroy"),
    // Gets the state of the given transport object.
    TEXT("ak.wwise.core.transport.getState"),
    // Returns the list of transport objects.
    TEXT("ak.wwise.core.transport.getList"),
    // Executes an action on the given transport object, or all transports if no transport is specified.
    TEXT("ak.wwise.core.transport.executeAction"),
    // Get the min/max peak pairs, in a given region of an audio source, as a collection of binary strings (one per channel). The strings are base-64 encoded 16-bit signed int arrays, with min and max values being interleaved. If getCrossChannelPeaks is true, there will be only one binary string representing peaks across all channels globally.
    TEXT("ak.wwise.core.audioSourcePeaks.getMinMaxPeaksInRegion"),
    // Get the min/max peak pairs in the entire trimmed region of an audio source, for each channel, as an array of binary strings (one per channel). The strings are base-64 encoded 16-bit signed int arrays, with min and max values being interleaved. If getCrossChannelPeaks is true, there will be only one binary string representing peaks across all channels globally.
    TEXT("ak.wwise.core.audioSourcePeaks.getMinMaxPeaksInTrimmedRegion"),
    // Register an array of add-on commands. Registered commands remain until the Wwise process is terminated. Refer to \ref defining_custom_commands for more information about registering commands. Also refer to \ref ak_wwise_ui_commands_executed.
    TEXT("ak.wwise.ui.commands.register"),
    // Unregister an array of add-on UI commands.
    TEXT("ak.wwise.ui.commands.unregister"),
    // Retrieves the voices at a specific profiler capture time.
    TEXT("ak.wwise.core.profiler.getVoices"),
    // Retrieves the busses at a specific profiler capture time.
    TEXT("ak.wwise.core.profiler.getBusses"),
    // Retrieves all parameters affecting voice volume, highpass and lowpass for a voice path, resolved from pipeline IDs.
    TEXT("ak.wwise.core.profiler.getVoiceContributions"),
    // Returns the current time of the specified profiler cursor in milliseconds.
    TEXT("ak.wwise.core.profiler.getCursorTime"),
    // Start the profiler capture and return the time at the beginning of the capture in milliseconds.
    TEXT("ak.wwise.core.profiler.startCapture"),
    // Stop the profiler capture and return the time at the end of the capture in milliseconds.
    TEXT("ak.wwise.core.profiler.stopCapture"),
    // Sent at the end of an import operation.
    TEXT("ak.wwise.core.audio.imported"),
    // Sent when an object reference is changed.
    TEXT("ak.wwise.core.object.referenceChanged"),
    // Sent when an assignment is added to a Switch Container.
    TEXT("ak.wwise.core.switchContainer.assignmentAdded"),
    // Sent when an assignment is removed from a Switch Container.
    TEXT("ak.wwise.core.switchContainer.assignmentRemoved"),
    // Sent when an object is renamed. Publishes the object which the name was changed.
    TEXT("ak.wwise.core.object.nameChanged"),
    // Sent when the object's notes are changed.
    TEXT("ak.wwise.core.object.notesChanged"),
    // Sent when an object is created.
    TEXT("ak.wwise.core.object.created"),
    // Sent prior to an object's deletion.
    TEXT("ak.wwise.core.object.preDeleted"),
    // Sent following an object's deletion.
    TEXT("ak.wwise.core.object.postDeleted"),
    // Sent when an object is added as a child to another object.
    TEXT("ak.wwise.core.object.childAdded"),
    // Sent when an object is removed from the children of another object.
    TEXT("ak.wwise.core.object.childRemoved"),
    // Sent when one or many curves are changed.
    TEXT("ak.wwise.core.object.curveChanged"),
    // Sent when an attenuation curve is changed.
    TEXT("ak.wwise.core.object.attenuationCurveChanged"),
    // Sent when an attenuation curve's link/unlink is changed.
    TEXT("ak.wwise.core.object.attenuationCurveLinkChanged"),
    // Sent when the watched property of an object changes.
    TEXT("ak.wwise.core.object.propertyChanged"),
    // Sent when a single SoundBank is generated. This could be sent multiple times during SoundBank generation, for every SoundBank generated and for every platform. To generate SoundBanks, refer to \ref ak_wwise_ui_commands_execute with one of the SoundBank generation commands. Refer to \ref globalcommandsids for the list of commands.
    TEXT("ak.wwise.core.soundbank.generated"),
    // Sent when an item is added to the log. This could be used to retrieve items added to the SoundBank generation log. To retrieve the complete log, refer to \ref ak_wwise_core_log_get.
    TEXT("ak.wwise.core.log.itemAdded"),
    // Sent when the selection changes in the project.
    TEXT("ak.wwise.ui.selectionChanged"),
    // Sent when the project has been successfully loaded.
    TEXT("ak.wwise.core.project.loaded"),
    // Sent when the project begins closing.
    TEXT("ak.wwise.core.project.preClosed"),
    // Sent when the after the project is completely closed.
    TEXT("ak.wwise.core.project.postClosed"),
    // Sent when the project has been saved.
    TEXT("ak.wwise.core.project.saved"),
    // Sent when the transport's state has changed.
    TEXT("ak.wwise.core.transport.stateChanged"),
    // Sent when an assert has failed. This is only available with Debug builds.
    TEXT("ak.wwise.debug.assertFailed"),
    // Sent when a command is executed. The objects for which the command is executed are sent in the publication.
    TEXT("ak.wwise.ui.commands.executed"),
};
enum { FullUriListSize = sizeof(FullUriList) / sizeof(*FullUriList) };

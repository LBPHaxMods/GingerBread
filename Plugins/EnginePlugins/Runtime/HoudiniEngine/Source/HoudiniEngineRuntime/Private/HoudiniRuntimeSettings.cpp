#include "HoudiniRuntimeSettings.h"

UHoudiniRuntimeSettings::UHoudiniRuntimeSettings() {
    this->SessionType = HRSST_NamedPipe;
    this->ServerHost = TEXT("localhost");
    this->ServerPort = 9090;
    this->ServerPipeName = TEXT("hapi");
    this->bStartAutomaticServer = true;
    this->AutomaticServerTimeout = 3000.00f;
    this->bShowMultiAssetDialog = true;
    this->bPauseCookingOnStart = true;
    this->bEnableCooking = true;
    this->bUploadTransformsToHoudiniEngine = true;
    this->bTransformChangeTriggersCooks = false;
    this->bDisplaySlateCookingNotifications = true;
    this->bCookCurvesOnMouseRelease = true;
    this->TemporaryCookFolder = FText::FromString(TEXT("/Game/HoudiniEngine/Temp"));
    this->bTreatRampParametersAsMultiparms = false;
    this->CollisionGroupNamePrefix = TEXT("collision_geo");
    this->RenderedCollisionGroupNamePrefix = TEXT("rendered_collision_geo");
    this->UCXCollisionGroupNamePrefix = TEXT("collision_geo_ucx");
    this->UCXRenderedCollisionGroupNamePrefix = TEXT("rendered_collision_geo_ucx");
    this->SimpleCollisionGroupNamePrefix = TEXT("collision_geo_simple");
    this->SimpleRenderedCollisionGroupNamePrefix = TEXT("rendered_collision_geo_simple");
    this->MarshallingAttributeMaterial = TEXT("unreal_material");
    this->MarshallingAttributeMaterialHole = TEXT("unreal_material_hole");
    this->MarshallingAttributeInstanceOverride = TEXT("unreal_instance");
    this->MarshallingAttributeFaceSmoothingMask = TEXT("unreal_face_smoothing_mask");
    this->MarshallingAttributeLightmapResolution = TEXT("unreal_lightmap_resolution");
    this->MarshallingAttributeGeneratedMeshName = TEXT("unreal_generated_mesh_name");
    this->MarshallingAttributeInputMeshName = TEXT("unreal_input_mesh_name");
    this->MarshallingAttributeInputSourceFile = TEXT("unreal_input_source_file");
    this->MarshallingSplineResolution = 1.00f;
    this->MarshallingLandscapesUseDefaultUnrealScaling = false;
    this->MarshallingLandscapesUseFullResolution = true;
    this->MarshallingLandscapesForceMinMaxValues = false;
    this->MarshallingLandscapesForcedMinValue = -2000.00f;
    this->MarshallingLandscapesForcedMaxValue = 4553.00f;
    this->GeneratedGeometryScaleFactor = 100.00f;
    this->TransformScaleFactor = 100.00f;
    this->ImportAxis = HRSAI_Unreal;
    this->bDoubleSidedGeometry = false;
    this->PhysMaterial = NULL;
    this->CollisionTraceFlag = CTF_UseDefault;
    this->LightMapResolution = 32;
    this->LpvBiasMultiplier = 1.00f;
    this->GeneratedDistanceFieldResolutionScale = 0.00f;
    this->LightMapCoordinateIndex = 1;
    this->bUseMaximumStreamingTexelRatio = false;
    this->StreamingDistanceMultiplier = 1.00f;
    this->FoliageDefaultSettings = NULL;
    this->bUseFullPrecisionUVs = false;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 1;
    this->MinLightmapResolution = 128;
    this->bRemoveDegenerates = true;
    this->GenerateLightmapUVsFlag = HRSRF_OnlyIfMissing;
    this->RecomputeNormalsFlag = HRSRF_OnlyIfMissing;
    this->RecomputeTangentsFlag = HRSRF_Always;
    this->bUseMikkTSpace = true;
    this->bBuildAdjacencyBuffer = false;
    this->bUseCustomHoudiniLocation = false;
    this->bHidePlacementModeHoudiniTools = false;
    this->CookingThreadStackSize = -1;
}



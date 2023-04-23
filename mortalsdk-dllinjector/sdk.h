#pragma once
#include "engine.h"
#include "framepool.h"


class UEngine : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UFont* TinyFont;  // Offset: 48 Size: 8
	char TinyFontName[24];  // Offset: 56 Size: 24
	struct UFont* SmallFont;  // Offset: 80 Size: 8
	char SmallFontName[24];  // Offset: 88 Size: 24
	struct UFont* MediumFont;  // Offset: 112 Size: 8
	char MediumFontName[24];  // Offset: 120 Size: 24
	struct UFont* LargeFont;  // Offset: 144 Size: 8
	char LargeFontName[24];  // Offset: 152 Size: 24
	struct UFont* SubtitleFont;  // Offset: 176 Size: 8
	char SubtitleFontName[24];  // Offset: 184 Size: 24
	struct TArray<struct UFont*> AdditionalFonts;  // Offset: 208 Size: 16
	struct TArray<struct FString> AdditionalFontNames;  // Offset: 224 Size: 16
	struct UConsole* ConsoleClass;  // Offset: 240 Size: 8
	 char ConsoleClassName[24];  // Offset: 248 Size: 24
	struct UGameViewportClient* GameViewportClientClass;  // Offset: 272 Size: 8
	 char GameViewportClientClassName[24];  // Offset: 280 Size: 24
	struct ULocalPlayer* LocalPlayerClass;  // Offset: 304 Size: 8
	 char LocalPlayerClassName[24];  // Offset: 312 Size: 24
	char WorldSettingsClass;  // Offset: 336 Size: 8
	 char WorldSettingsClassName[24];  // Offset: 344 Size: 24
	 char NavigationSystemClassName[24];  // Offset: 368 Size: 24
	char NavigationSystemClass;  // Offset: 392 Size: 8
	 char NavigationSystemConfigClassName[24];  // Offset: 400 Size: 24
	char NavigationSystemConfigClass;  // Offset: 424 Size: 8
	char AvoidanceManagerClassName[24];  // Offset: 432 Size: 24
	char AvoidanceManagerClass;  // Offset: 456 Size: 8
	 char AIControllerClassName[24];  // Offset: 464 Size: 24
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass;  // Offset: 488 Size: 8
	 char PhysicsCollisionHandlerClassName[24];  // Offset: 496 Size: 24
	 char GameUserSettingsClassName[24];  // Offset: 520 Size: 24
	struct UGameUserSettings* GameUserSettingsClass;  // Offset: 544 Size: 8
	struct UGameUserSettings* GameUserSettings;  // Offset: 552 Size: 8
	char LevelScriptActorClass;  // Offset: 560 Size: 8
	 char LevelScriptActorClassName[24];  // Offset: 568 Size: 24
	 char DefaultBlueprintBaseClassName[24];  // Offset: 592 Size: 24
	 char GameSingletonClassName[24];  // Offset: 616 Size: 24
	struct UObject* GameSingleton;  // Offset: 640 Size: 8
	 char AssetManagerClassName[24];  // Offset: 648 Size: 24
	struct UAssetManager* AssetManager;  // Offset: 672 Size: 8
	struct UTexture2D* DefaultTexture;  // Offset: 680 Size: 8
	char DefaultTextureName[24];  // Offset: 688 Size: 24
	struct UTexture* DefaultDiffuseTexture;  // Offset: 712 Size: 8
	char DefaultDiffuseTextureName[24];  // Offset: 720 Size: 24
	struct UTexture2D* DefaultBSPVertexTexture;  // Offset: 744 Size: 8
	char DefaultBSPVertexTextureName[24];  // Offset: 752 Size: 24
	struct UTexture2D* HighFrequencyNoiseTexture;  // Offset: 776 Size: 8
	char HighFrequencyNoiseTextureName[24];  // Offset: 784 Size: 24
	struct UTexture2D* DefaultBokehTexture;  // Offset: 808 Size: 8
	char DefaultBokehTextureName[24];  // Offset: 816 Size: 24
	struct UTexture2D* DefaultBloomKernelTexture;  // Offset: 840 Size: 8
	char DefaultBloomKernelTextureName[24];  // Offset: 848 Size: 24
	struct UMaterial* WireframeMaterial;  // Offset: 872 Size: 8
	char WireframeMaterialName[16];  // Offset: 880 Size: 16
	struct UMaterial* DebugMeshMaterial;  // Offset: 896 Size: 8
	char DebugMeshMaterialName[24];  // Offset: 904 Size: 24
	struct UMaterial* EmissiveMeshMaterial;  // Offset: 928 Size: 8
	char EmissiveMeshMaterialName[24];  // Offset: 936 Size: 24
	struct UMaterial* LevelColorationLitMaterial;  // Offset: 960 Size: 8
	char LevelColorationLitMaterialName[16];  // Offset: 968 Size: 16
	struct UMaterial* LevelColorationUnlitMaterial;  // Offset: 984 Size: 8
	char LevelColorationUnlitMaterialName[16];  // Offset: 992 Size: 16
	struct UMaterial* LightingTexelDensityMaterial;  // Offset: 1008 Size: 8
	char LightingTexelDensityName[16];  // Offset: 1016 Size: 16
	struct UMaterial* ShadedLevelColorationLitMaterial;  // Offset: 1032 Size: 8
	char ShadedLevelColorationLitMaterialName[16];  // Offset: 1040 Size: 16
	struct UMaterial* ShadedLevelColorationUnlitMaterial;  // Offset: 1056 Size: 8
	char ShadedLevelColorationUnlitMaterialName[16];  // Offset: 1064 Size: 16
	struct UMaterial* RemoveSurfaceMaterial;  // Offset: 1080 Size: 8
	char RemoveSurfaceMaterialName[24];  // Offset: 1088 Size: 24
	struct UMaterial* VertexColorMaterial;  // Offset: 1112 Size: 8
	char VertexColorMaterialName[16];  // Offset: 1120 Size: 16
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly;  // Offset: 1136 Size: 8
	char VertexColorViewModeMaterialName_ColorOnly[16];  // Offset: 1144 Size: 16
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor;  // Offset: 1160 Size: 8
	char VertexColorViewModeMaterialName_AlphaAsColor[16];  // Offset: 1168 Size: 16
	struct UMaterial* VertexColorViewModeMaterial_RedOnly;  // Offset: 1184 Size: 8
	char VertexColorViewModeMaterialName_RedOnly[16];  // Offset: 1192 Size: 16
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly;  // Offset: 1208 Size: 8
	char VertexColorViewModeMaterialName_GreenOnly[16];  // Offset: 1216 Size: 16
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly;  // Offset: 1232 Size: 8
	char VertexColorViewModeMaterialName_BlueOnly[16];  // Offset: 1240 Size: 16
	char DebugEditorMaterialName[24];  // Offset: 1256 Size: 24
	struct UMaterial* ConstraintLimitMaterial;  // Offset: 1280 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialX;  // Offset: 1288 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;  // Offset: 1296 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialY;  // Offset: 1304 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;  // Offset: 1312 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZ;  // Offset: 1320 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;  // Offset: 1328 Size: 8
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;  // Offset: 1336 Size: 8
	struct UMaterial* InvalidLightmapSettingsMaterial;  // Offset: 1344 Size: 8
	char InvalidLightmapSettingsMaterialName[24];  // Offset: 1352 Size: 24
	struct UMaterial* PreviewShadowsIndicatorMaterial;  // Offset: 1376 Size: 8
	char PreviewShadowsIndicatorMaterialName[24];  // Offset: 1384 Size: 24
	struct UMaterial* ArrowMaterial;  // Offset: 1408 Size: 8
	struct UMaterialInstanceDynamic* ArrowMaterialYellow;  // Offset: 1416 Size: 8
	char ArrowMaterialName[24];  // Offset: 1424 Size: 24
	char LightingOnlyBrightness[16];  // Offset: 1448 Size: 16
	struct TArray<struct FLinearColor> ShaderComplexityColors;  // Offset: 1464 Size: 16
	struct TArray<struct FLinearColor> QuadComplexityColors;  // Offset: 1480 Size: 16
	struct TArray<struct FLinearColor> LightComplexityColors;  // Offset: 1496 Size: 16
	struct TArray<struct FLinearColor> StationaryLightOverlapColors;  // Offset: 1512 Size: 16
	struct TArray<struct FLinearColor> LODColorationColors;  // Offset: 1528 Size: 16
	struct TArray<struct FLinearColor> HLODColorationColors;  // Offset: 1544 Size: 16
	struct TArray<struct FLinearColor> StreamingAccuracyColors;  // Offset: 1560 Size: 16
	float MaxPixelShaderAdditiveComplexityCount;  // Offset: 1576 Size: 4
	float MaxES3PixelShaderAdditiveComplexityCount;  // Offset: 1580 Size: 4
	float MinLightMapDensity;  // Offset: 1584 Size: 4
	float IdealLightMapDensity;  // Offset: 1588 Size: 4
	float MaxLightMapDensity;  // Offset: 1592 Size: 4
	char bRenderLightMapDensityGrayscale : 1;  // Offset: 1596 Size: 1
	char pad_1596_1 : 7;  // Offset: 1596 Size: 1
	char pad_1597[4];  // Offset: 1597 Size: 4
	float RenderLightMapDensityGrayscaleScale;  // Offset: 1600 Size: 4
	float RenderLightMapDensityColorScale;  // Offset: 1604 Size: 4
	char LightMapDensityVertexMappedColor[16];  // Offset: 1608 Size: 16
	char LightMapDensitySelectedColor[16];  // Offset: 1624 Size: 16
	struct TArray<struct FStatColorMapping> StatColorMappings;  // Offset: 1640 Size: 16
	struct UPhysicalMaterial* DefaultPhysMaterial;  // Offset: 1656 Size: 8
	char DefaultPhysMaterialName[24];  // Offset: 1664 Size: 24
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects;  // Offset: 1688 Size: 16
	struct TArray<struct FClassRedirect> ActiveClassRedirects;  // Offset: 1704 Size: 16
	struct TArray<struct FPluginRedirect> ActivePluginRedirects;  // Offset: 1720 Size: 16
	struct TArray<struct FStructRedirect> ActiveStructRedirects;  // Offset: 1736 Size: 16
	struct UTexture2D* PreIntegratedSkinBRDFTexture;  // Offset: 1752 Size: 8
	char PreIntegratedSkinBRDFTextureName[24];  // Offset: 1760 Size: 24
	struct UTexture2D* BlueNoiseTexture;  // Offset: 1784 Size: 8
	char BlueNoiseTextureName[24];  // Offset: 1792 Size: 24
	struct UTexture2D* MiniFontTexture;  // Offset: 1816 Size: 8
	char MiniFontTextureName[24];  // Offset: 1824 Size: 24
	struct UTexture* WeightMapPlaceholderTexture;  // Offset: 1848 Size: 8
	char WeightMapPlaceholderTextureName[24];  // Offset: 1856 Size: 24
	struct UTexture2D* LightMapDensityTexture;  // Offset: 1880 Size: 8
	char LightMapDensityTextureName[24];  // Offset: 1888 Size: 24
	char pad_1912[8];  // Offset: 1912 Size: 8
	struct UGameViewportClient* GameViewport;  // Offset: 1920 Size: 8
	struct TArray<struct FString> DeferredCommands;  // Offset: 1928 Size: 16
	float NearClipPlane;  // Offset: 1944 Size: 4
	char bSubtitlesEnabled : 1;  // Offset: 1948 Size: 1
	char bSubtitlesForcedOff : 1;  // Offset: 1948 Size: 1
	char pad_1948_1 : 6;  // Offset: 1948 Size: 1
	char pad_1949[4];  // Offset: 1949 Size: 4
	int32_t MaximumLoopIterationCount;  // Offset: 1952 Size: 4
	char bCanBlueprintsTickByDefault : 1;  // Offset: 1956 Size: 1
	char bOptimizeAnimBlueprintMemberVariableAccess : 1;  // Offset: 1956 Size: 1
	char bAllowMultiThreadedAnimationUpdate : 1;  // Offset: 1956 Size: 1
	char bEnableEditorPSysRealtimeLOD : 1;  // Offset: 1956 Size: 1
	char pad_1956_1 : 1;  // Offset: 1956 Size: 1
	char bSmoothFrameRate : 1;  // Offset: 1956 Size: 1
	char bUseFixedFrameRate : 1;  // Offset: 1956 Size: 1
	char pad_1956_2 : 1;  // Offset: 1956 Size: 1
	char pad_1957[4];  // Offset: 1957 Size: 4
	float FixedFrameRate;  // Offset: 1960 Size: 4
	char SmoothedFrameRateRange[16];  // Offset: 1964 Size: 16
	char pad_1980[4];  // Offset: 1980 Size: 4
	struct UEngineCustomTimeStep* CustomTimeStep;  // Offset: 1984 Size: 8
	char pad_1992[32];  // Offset: 1992 Size: 32
	char CustomTimeStepClassName[24];  // Offset: 2024 Size: 24
	struct UTimecodeProvider* TimecodeProvider;  // Offset: 2048 Size: 8
	char pad_2056[32];  // Offset: 2056 Size: 32
	char TimecodeProviderClassName[24];  // Offset: 2088 Size: 24
	char pad_2112_1 : 7;  // Offset: 2112 Size: 1
	bool bGenerateDefaultTimecode : 1;  // Offset: 2112 Size: 1
	char pad_2113[3];  // Offset: 2113 Size: 3
	char GenerateDefaultTimecodeFrameRate[8];  // Offset: 2116 Size: 8
	float GenerateDefaultTimecodeFrameDelay;  // Offset: 2124 Size: 4
	char bCheckForMultiplePawnsSpawnedInAFrame : 1;  // Offset: 2128 Size: 1
	char pad_2128_1 : 7;  // Offset: 2128 Size: 1
	char pad_2129[4];  // Offset: 2129 Size: 4
	int32_t NumPawnsAllowedToBeSpawnedInAFrame;  // Offset: 2132 Size: 4
	char bShouldGenerateLowQualityLightmaps : 1;  // Offset: 2136 Size: 1
	char pad_2136_1 : 7;  // Offset: 2136 Size: 1
	char pad_2137[4];  // Offset: 2137 Size: 4
	char C_WorldBox[4];  // Offset: 2140 Size: 4
	char C_BrushWire[4];  // Offset: 2144 Size: 4
	char C_AddWire[4];  // Offset: 2148 Size: 4
	char C_SubtractWire[4];  // Offset: 2152 Size: 4
	char C_SemiSolidWire[4];  // Offset: 2156 Size: 4
	char C_NonSolidWire[4];  // Offset: 2160 Size: 4
	char C_WireBackground[4];  // Offset: 2164 Size: 4
	char C_ScaleBoxHi[4];  // Offset: 2168 Size: 4
	char C_VolumeCollision[4];  // Offset: 2172 Size: 4
	char C_BSPCollision[4];  // Offset: 2176 Size: 4
	char C_OrthoBackground[4];  // Offset: 2180 Size: 4
	char C_Volume[4];  // Offset: 2184 Size: 4
	char C_BrushShape[4];  // Offset: 2188 Size: 4
	float StreamingDistanceFactor;  // Offset: 2192 Size: 4
	char pad_2196[4];  // Offset: 2196 Size: 4
	char GameScreenshotSaveDirectory[16];  // Offset: 2200 Size: 16
	char TransitionType;  // Offset: 2216 Size: 1
	char pad_2217[7];  // Offset: 2217 Size: 7
	char TransitionDescription[16];  // Offset: 2224 Size: 16
	char TransitionGameMode[16];  // Offset: 2240 Size: 16
	char bAllowMatureLanguage : 1;  // Offset: 2256 Size: 1
	char pad_2256_1 : 7;  // Offset: 2256 Size: 1
	char pad_2257[4];  // Offset: 2257 Size: 4
	float CameraRotationThreshold;  // Offset: 2260 Size: 4
	float CameraTranslationThreshold;  // Offset: 2264 Size: 4
	float PrimitiveProbablyVisibleTime;  // Offset: 2268 Size: 4
	float MaxOcclusionPixelsFraction;  // Offset: 2272 Size: 4
	char bPauseOnLossOfFocus : 1;  // Offset: 2276 Size: 1
	char pad_2276_1 : 7;  // Offset: 2276 Size: 1
	char pad_2277[4];  // Offset: 2277 Size: 4
	int32_t MaxParticleResize;  // Offset: 2280 Size: 4
	int32_t MaxParticleResizeWarn;  // Offset: 2284 Size: 4
	struct TArray<struct FDropNoteInfo> PendingDroppedNotes;  // Offset: 2288 Size: 16
	float NetClientTicksPerSecond;  // Offset: 2304 Size: 4
	float DisplayGamma;  // Offset: 2308 Size: 4
	float MinDesiredFrameRate;  // Offset: 2312 Size: 4
	char DefaultSelectedMaterialColor[16];  // Offset: 2316 Size: 16
	char SelectedMaterialColor[16];  // Offset: 2332 Size: 16
	char SelectionOutlineColor[16];  // Offset: 2348 Size: 16
	char SubduedSelectionOutlineColor[16];  // Offset: 2364 Size: 16
	char SelectedMaterialColorOverride[16];  // Offset: 2380 Size: 16
	char pad_2396_1 : 7;  // Offset: 2396 Size: 1
	bool bIsOverridingSelectedColor : 1;  // Offset: 2396 Size: 1
	char pad_2397[3];  // Offset: 2397 Size: 3
	char bEnableOnScreenDebugMessages : 1;  // Offset: 2400 Size: 1
	char bEnableOnScreenDebugMessagesDisplay : 1;  // Offset: 2400 Size: 1
	char bSuppressMapWarnings : 1;  // Offset: 2400 Size: 1
	char bDisableAILogging : 1;  // Offset: 2400 Size: 1
	char pad_2400_1 : 4;  // Offset: 2400 Size: 1
	char pad_2401[4];  // Offset: 2401 Size: 4
	uint32_t bEnableVisualLogRecordingOnStart;  // Offset: 2404 Size: 4
	int32_t ScreenSaverInhibitorSemaphore;  // Offset: 2408 Size: 4
	char bLockReadOnlyLevels : 1;  // Offset: 2412 Size: 1
	char pad_2412_1 : 7;  // Offset: 2412 Size: 1
	char pad_2413[4];  // Offset: 2413 Size: 4
	char ParticleEventManagerClassPath[16];  // Offset: 2416 Size: 16
	float SelectionHighlightIntensity;  // Offset: 2432 Size: 4
	float BSPSelectionHighlightIntensity;  // Offset: 2436 Size: 4
	float SelectionHighlightIntensityBillboards;  // Offset: 2440 Size: 4
	char pad_2444[620];  // Offset: 2444 Size: 620
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions;  // Offset: 3064 Size: 16
	struct TArray<struct FString> ServerActors;  // Offset: 3080 Size: 16
	struct TArray<struct FString> RuntimeServerActors;  // Offset: 3096 Size: 16
	float NetErrorLogInterval;  // Offset: 3112 Size: 4
	char bStartedLoadMapMovie : 1;  // Offset: 3116 Size: 1
	char pad_3116_1 : 7;  // Offset: 3116 Size: 1
	char pad_3117[28];  // Offset: 3117 Size: 28
	int32_t NextWorldContextHandle;  // Offset: 3144 Size: 4
	char pad_3148[212];  // Offset: 3148 Size: 212



 // Functions 
 public:
}; 

class UPlayer : public UObject
{

public:
	char pad_40[8];  // Offset: 40 Size: 8
	struct APlayerController* PlayerController;  // Offset: 48 Size: 8
	int32_t CurrentNetSpeed;  // Offset: 56 Size: 4
	int32_t ConfiguredInternetSpeed;  // Offset: 60 Size: 4
	int32_t ConfiguredLanSpeed;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



	// Functions 
public:
};

class UWorldProxy
{
public:
	class UWorld* World;
};

class UScriptViewportClient : public UObject
{

public:
	char pad_40[16];  // Offset: 40 Size: 16



	// Functions 
public:
};

class UGameViewportClient : public UScriptViewportClient
{
public:
	char pad_56[8];  // Offset: 56 Size: 8
	struct UConsole* ViewportConsole;  // Offset: 64 Size: 8
	struct TArray<struct FDebugDisplayProperty> DebugProperties;  // Offset: 72 Size: 16
	char pad_88[16];  // Offset: 88 Size: 16
	int32_t MaxSplitscreenPlayers;  // Offset: 104 Size: 4
	char pad_108[12];  // Offset: 108 Size: 12
	struct UWorld* World;  // Offset: 120 Size: 8
	struct UGameInstance* GameInstance;  // Offset: 128 Size: 8
	char pad_136[728];  // Offset: 136 Size: 728

	// Functions 
public:
	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea
	void SetConsoleTarget(int32_t PlayerIndex); // Function Engine.GameViewportClient.SetConsoleTarget
};

class AActor : public UObject
{

public:
	char PrimaryActorTick[48];  // Offset: 40 Size: 48
	char bNetTemporary : 1;  // Offset: 88 Size: 1
	char bNetStartup : 1;  // Offset: 88 Size: 1
	char bOnlyRelevantToOwner : 1;  // Offset: 88 Size: 1
	char bAlwaysRelevant : 1;  // Offset: 88 Size: 1
	char bReplicateMovement : 1;  // Offset: 88 Size: 1
	char bHidden : 1;  // Offset: 88 Size: 1
	char bTearOff : 1;  // Offset: 88 Size: 1
	char bForceNetAddressable : 1;  // Offset: 88 Size: 1
	char bExchangedRoles : 1;  // Offset: 89 Size: 1
	char bNetLoadOnClient : 1;  // Offset: 89 Size: 1
	char bNetUseOwnerRelevancy : 1;  // Offset: 89 Size: 1
	char bRelevantForNetworkReplays : 1;  // Offset: 89 Size: 1
	char bRelevantForLevelBounds : 1;  // Offset: 89 Size: 1
	char bReplayRewindable : 1;  // Offset: 89 Size: 1
	char bAllowTickBeforeBeginPlay : 1;  // Offset: 89 Size: 1
	char bAutoDestroyWhenFinished : 1;  // Offset: 89 Size: 1
	char bCanBeDamaged : 1;  // Offset: 90 Size: 1
	char bBlockInput : 1;  // Offset: 90 Size: 1
	char bCollideWhenPlacing : 1;  // Offset: 90 Size: 1
	char bFindCameraComponentWhenViewTarget : 1;  // Offset: 90 Size: 1
	char bGenerateOverlapEventsDuringLevelStreaming : 1;  // Offset: 90 Size: 1
	char bIgnoresOriginShifting : 1;  // Offset: 90 Size: 1
	char bEnableAutoLODGeneration : 1;  // Offset: 90 Size: 1
	char bIsEditorOnlyActor : 1;  // Offset: 90 Size: 1
	char bActorSeamlessTraveled : 1;  // Offset: 91 Size: 1
	char bReplicates : 1;  // Offset: 91 Size: 1
	char bCanBeInCluster : 1;  // Offset: 91 Size: 1
	char bAllowReceiveTickEventOnDedicatedServer : 1;  // Offset: 91 Size: 1
	char pad_91_1 : 4;  // Offset: 91 Size: 1
	char pad_92_1 : 3;  // Offset: 92 Size: 1
	char bActorEnableCollision : 1;  // Offset: 92 Size: 1
	char bActorIsBeingDestroyed : 1;  // Offset: 92 Size: 1
	char pad_92_2 : 3;  // Offset: 92 Size: 1
	char UpdateOverlapsMethodDuringLevelStreaming;  // Offset: 93 Size: 1
	char DefaultUpdateOverlapsMethodDuringLevelStreaming;  // Offset: 94 Size: 1
	char RemoteRole;  // Offset: 95 Size: 1
	char ReplicatedMovement[52];  // Offset: 96 Size: 52
	float InitialLifeSpan;  // Offset: 148 Size: 4
	float CustomTimeDilation;  // Offset: 152 Size: 4
	char pad_156[4];  // Offset: 156 Size: 4
	char AttachmentReplication[64];  // Offset: 160 Size: 64
	struct AActor* Owner;  // Offset: 224 Size: 8
	struct FName NetDriverName;  // Offset: 232 Size: 8
	char Role;  // Offset: 240 Size: 1
	char NetDormancy;  // Offset: 241 Size: 1
	char SpawnCollisionHandlingMethod;  // Offset: 242 Size: 1
	char AutoReceiveInput;  // Offset: 243 Size: 1
	int32_t InputPriority;  // Offset: 244 Size: 4
	char InputComponent[8];  // Offset: 248 Size: 8
	float NetCullDistanceSquared;  // Offset: 256 Size: 4
	int32_t NetTag;  // Offset: 260 Size: 4
	float NetUpdateFrequency;  // Offset: 264 Size: 4
	float MinNetUpdateFrequency;  // Offset: 268 Size: 4
	float NetPriority;  // Offset: 272 Size: 4
	char pad_276[4];  // Offset: 276 Size: 4
	char Instigator[8];  // Offset: 280 Size: 8
	struct TArray< AActor*> Children;  // Offset: 288 Size: 16
	char RootComponent[8];  // Offset: 304 Size: 8
	struct TArray<struct AMatineeActor*> ControllingMatineeActors;  // Offset: 312 Size: 16
	char pad_328[8];  // Offset: 328 Size: 8
	struct TArray<struct FName> Layers;  // Offset: 336 Size: 16
	char ParentComponent[8];  // Offset: 352 Size: 8
	char pad_360[8];  // Offset: 360 Size: 8
	struct TArray<struct FName> Tags;  // Offset: 368 Size: 16
	char OnTakeAnyDamage;  // Offset: 384 Size: 1
	char OnTakePointDamage;  // Offset: 385 Size: 1
	char OnTakeRadialDamage;  // Offset: 386 Size: 1
	char OnActorBeginOverlap;  // Offset: 387 Size: 1
	char OnActorEndOverlap;  // Offset: 388 Size: 1
	char OnBeginCursorOver;  // Offset: 389 Size: 1
	char OnEndCursorOver;  // Offset: 390 Size: 1
	char OnClicked;  // Offset: 391 Size: 1
	char OnReleased;  // Offset: 392 Size: 1
	char OnInputTouchBegin;  // Offset: 393 Size: 1
	char OnInputTouchEnd;  // Offset: 394 Size: 1
	char OnInputTouchEnter;  // Offset: 395 Size: 1
	char OnInputTouchLeave;  // Offset: 396 Size: 1
	char OnActorHit;  // Offset: 397 Size: 1
	char OnDestroyed;  // Offset: 398 Size: 1
	char OnEndPlay;  // Offset: 399 Size: 1
	char pad_400[96];  // Offset: 400 Size: 96
	char InstanceComponents[16];  // Offset: 496 Size: 16
	char BlueprintCreatedComponents[16];  // Offset: 512 Size: 16
	char pad_528[16];  // Offset: 528 Size: 16

	// Functions 
public:
	bool WasRecentlyRendered(float Tolerance); // Function Engine.Actor.WasRecentlyRendered
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript
	void TearOff(); // Function Engine.Actor.TearOff
	void SnapRootComponentTo(struct AActor* InParentActor, struct FName InSocketName); // Function Engine.Actor.SnapRootComponentTo
	void SetTickGroup(enum class ETickingGroup NewTickGroup); // Function Engine.Actor.SetTickGroup
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.Actor.SetTickableWhenPaused
	void SetReplicates(bool bInReplicates); // Function Engine.Actor.SetReplicates
	void SetReplicateMovement(bool bInReplicateMovement); // Function Engine.Actor.SetReplicateMovement
	void SetOwner(struct AActor* NewOwner); // Function Engine.Actor.SetOwner
	void SetNetDormancy(enum class ENetDormancy NewDormancy); // Function Engine.Actor.SetNetDormancy
	void SetLifeSpan(float InLifespan); // Function Engine.Actor.SetLifeSpan
	void SetAutoDestroyWhenFinished(bool bVal); // Function Engine.Actor.SetAutoDestroyWhenFinished
	void SetActorTickInterval(float TickInterval); // Function Engine.Actor.SetActorTickInterval
	void SetActorTickEnabled(bool bEnabled); // Function Engine.Actor.SetActorTickEnabled
	void SetActorScale3D(struct FVector NewScale3D); // Function Engine.Actor.SetActorScale3D
	void SetActorRelativeScale3D(struct FVector NewRelativeScale); // Function Engine.Actor.SetActorRelativeScale3D
	void SetActorHiddenInGame(bool bNewHidden); // Function Engine.Actor.SetActorHiddenInGame
	void SetActorEnableCollision(bool bNewActorEnableCollision); // Function Engine.Actor.SetActorEnableCollision
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.RemoveTickPrerequisiteComponent
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.RemoveTickPrerequisiteActor
	void ReceiveTick(float DeltaSeconds); // Function Engine.Actor.ReceiveTick
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveRadialDamage
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult& HitInfo); // Function Engine.Actor.ReceivePointDamage
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Engine.Actor.ReceiveHit
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Engine.Actor.ReceiveEndPlay
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveAnyDamage
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // Function Engine.Actor.ReceiveActorOnReleased
	void ReceiveActorOnInputTouchLeave(enum class ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchLeave
	void ReceiveActorOnInputTouchEnter(enum class ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnter
	void ReceiveActorOnInputTouchEnd(enum class ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnd
	void ReceiveActorOnInputTouchBegin(enum class ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchBegin
	void ReceiveActorOnClicked(struct FKey ButtonPressed); // Function Engine.Actor.ReceiveActorOnClicked
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorEndOverlap
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorBeginOverlap
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.Actor.PrestreamTextures
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication
	void MakeNoise(float Loudness, struct APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag); // Function Engine.Actor.MakeNoise
	struct UMaterialInstanceDynamic* MakeMIDForMaterial(struct UMaterialInterface* Parent); // Function Engine.Actor.MakeMIDForMaterial
	bool K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation); // Function Engine.Actor.K2_TeleportTo
	bool K2_SetActorTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorTransform
	bool K2_SetActorRotation(struct FRotator NewRotation, bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation
	void K2_SetActorRelativeTransform(struct FTransform& NewRelativeTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeTransform
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeRotation
	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeLocation
	bool K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocationAndRotation
	bool K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocation
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnEndViewTarget
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnBecomeViewTarget
	struct USceneComponent* K2_GetRootComponent(); // Function Engine.Actor.K2_GetRootComponent
	struct TArray<struct UActorComponent*> K2_GetComponentsByClass(UActorComponent* ComponentClass); // Function Engine.Actor.K2_GetComponentsByClass
	struct FRotator K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation
	struct FVector K2_GetActorLocation(); // Function Engine.Actor.K2_GetActorLocation
	void K2_DetachFromActor(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule); // Function Engine.Actor.K2_DetachFromActor
	void K2_DestroyComponent(struct UActorComponent* Component); // Function Engine.Actor.K2_DestroyComponent
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor
	void K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToComponent
	void K2_AttachToActor(struct AActor* ParentActor, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToActor
	void K2_AttachRootComponentToActor(struct AActor* InParentActor, struct FName InSocketName, enum class EAttachLocation AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentToActor
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName, enum class EAttachLocation AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentTo
	void K2_AddActorWorldTransformKeepScale(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransformKeepScale
	void K2_AddActorWorldTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransform
	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldRotation
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldOffset
	void K2_AddActorLocalTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalTransform
	void K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalRotation
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalOffset
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.Actor.IsOverlappingActor
	bool IsChildActor(); // Function Engine.Actor.IsChildActor
	bool IsActorTickEnabled(); // Function Engine.Actor.IsActorTickEnabled
	bool IsActorBeingDestroyed(); // Function Engine.Actor.IsActorBeingDestroyed
	bool HasAuthority(); // Function Engine.Actor.HasAuthority
	float GetVerticalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetVerticalDistanceTo
	struct FVector GetVelocity(); // Function Engine.Actor.GetVelocity
	struct FTransform GetTransform(); // Function Engine.Actor.GetTransform
	bool GetTickableWhenPaused(); // Function Engine.Actor.GetTickableWhenPaused
	float GetSquaredHorizontalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetSquaredHorizontalDistanceTo
	float GetSquaredDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetSquaredDistanceTo
	enum class ENetRole GetRemoteRole(); // Function Engine.Actor.GetRemoteRole
	struct UChildActorComponent* GetParentComponent(); // Function Engine.Actor.GetParentComponent
	struct AActor* GetParentActor(); // Function Engine.Actor.GetParentActor
	struct AActor* GetOwner(); // Function Engine.Actor.GetOwner
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OverlappingComponents); // Function Engine.Actor.GetOverlappingComponents
	void GetOverlappingActors(struct TArray<struct AActor*>& OverlappingActors, AActor* ClassFilter); // Function Engine.Actor.GetOverlappingActors
	enum class ENetRole GetLocalRole(); // Function Engine.Actor.GetLocalRole
	float GetLifeSpan(); // Function Engine.Actor.GetLifeSpan
	struct AController* GetInstigatorController(); // Function Engine.Actor.GetInstigatorController
	struct APawn* GetInstigator(); // Function Engine.Actor.GetInstigator
	struct FVector GetInputVectorAxisValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputVectorAxisValue
	float GetInputAxisValue(struct FName InputAxisName); // Function Engine.Actor.GetInputAxisValue
	float GetInputAxisKeyValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputAxisKeyValue
	float GetHorizontalDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDotProductTo
	float GetHorizontalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDistanceTo
	float GetGameTimeSinceCreation(); // Function Engine.Actor.GetGameTimeSinceCreation
	float GetDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetDotProductTo
	float GetDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetDistanceTo
	struct TArray<struct UActorComponent*> GetComponentsByTag(UActorComponent* ComponentClass, struct FName Tag); // Function Engine.Actor.GetComponentsByTag
	struct TArray<struct UActorComponent*> GetComponentsByInterface(struct UInterface* Interface); // Function Engine.Actor.GetComponentsByInterface
	struct UActorComponent* GetComponentByClass(UActorComponent* ComponentClass); // Function Engine.Actor.GetComponentByClass
	struct FName GetAttachParentSocketName(); // Function Engine.Actor.GetAttachParentSocketName
	struct AActor* GetAttachParentActor(); // Function Engine.Actor.GetAttachParentActor
	void GetAttachedActors(struct TArray<struct AActor*>& OutActors, bool bResetArray); // Function Engine.Actor.GetAttachedActors
	void GetAllChildActors(struct TArray<struct AActor*>& ChildActors, bool bIncludeDescendants); // Function Engine.Actor.GetAllChildActors
	struct FVector GetActorUpVector(); // Function Engine.Actor.GetActorUpVector
	float GetActorTimeDilation(); // Function Engine.Actor.GetActorTimeDilation
	float GetActorTickInterval(); // Function Engine.Actor.GetActorTickInterval
	struct FVector GetActorScale3D(); // Function Engine.Actor.GetActorScale3D
	struct FVector GetActorRightVector(); // Function Engine.Actor.GetActorRightVector
	struct FVector GetActorRelativeScale3D(); // Function Engine.Actor.GetActorRelativeScale3D
	struct FVector GetActorForwardVector(); // Function Engine.Actor.GetActorForwardVector
	void GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // Function Engine.Actor.GetActorEyesViewPoint
	bool GetActorEnableCollision(); // Function Engine.Actor.GetActorEnableCollision
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate
	void FlushNetDormancy(); // Function Engine.Actor.FlushNetDormancy
	void FinishAddComponent(struct UActorComponent* Component, bool bManualAttachment, struct FTransform& RelativeTransform); // Function Engine.Actor.FinishAddComponent
	void EnableInput(struct APlayerController* PlayerController); // Function Engine.Actor.EnableInput
	void DisableInput(struct APlayerController* PlayerController); // Function Engine.Actor.DisableInput
	void DetachRootComponentFromParent(bool bMaintainWorldPosition); // Function Engine.Actor.DetachRootComponentFromParent
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.AddTickPrerequisiteComponent
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.AddTickPrerequisiteActor
	struct UActorComponent* AddComponentByClass(UActorComponent* Class, bool bManualAttachment, struct FTransform& RelativeTransform, bool bDeferredFinish); // Function Engine.Actor.AddComponentByClass
	struct UActorComponent* AddComponent(struct FName TemplateName, bool bManualAttachment, struct FTransform& RelativeTransform, struct UObject* ComponentTemplateContext, bool bDeferredFinish); // Function Engine.Actor.AddComponent
	bool ActorHasTag(struct FName Tag); // Function Engine.Actor.ActorHasTag
};

class AController : public AActor
{

public:
	char pad_544[8];  // Offset: 544 Size: 8
	struct APlayerState* PlayerState;  // Offset: 552 Size: 8
	char pad_560[8];  // Offset: 560 Size: 8
	char OnInstigatedAnyDamage[16];  // Offset: 568 Size: 16
	struct FName StateName;  // Offset: 584 Size: 8
	struct APawn* Pawn;  // Offset: 592 Size: 8
	char pad_600[8];  // Offset: 600 Size: 8
	struct ACharacter* Character;  // Offset: 608 Size: 8
	struct USceneComponent* TransformComponent;  // Offset: 616 Size: 8
	char pad_624[24];  // Offset: 624 Size: 24
	struct FRotator ControlRotation;  // Offset: 648 Size: 12
	char bAttachToPawn : 1;  // Offset: 660 Size: 1
	char pad_660_1 : 7;  // Offset: 660 Size: 1
	char pad_661[4];  // Offset: 661 Size: 4
};

class APlayerController : public AController
{

 public: 
	struct UPlayer* Player;  // Offset: 664 Size: 8
	struct APawn* AcknowledgedPawn;  // Offset: 672 Size: 8
	struct UInterpTrackInstDirector* ControllingDirTrackInst;  // Offset: 680 Size: 8
	struct AHUD* MyHUD;  // Offset: 688 Size: 8
	struct APlayerCameraManager* PlayerCameraManager;  // Offset: 696 Size: 8
	APlayerCameraManager* PlayerCameraManagerClass;  // Offset: 704 Size: 8
	char pad_712_1 : 7;  // Offset: 712 Size: 1
	bool bAutoManageActiveCameraTarget : 1;  // Offset: 712 Size: 1
	char pad_713[3];  // Offset: 713 Size: 3
	struct FRotator TargetViewRotation;  // Offset: 716 Size: 12
	char pad_728[12];  // Offset: 728 Size: 12
	float SmoothTargetViewRotationSpeed;  // Offset: 740 Size: 4
	char pad_744[8];  // Offset: 744 Size: 8
	struct TArray<struct AActor*> HiddenActors;  // Offset: 752 Size: 16
	char  HiddenPrimitiveComponents[16];  // Offset: 768 Size: 16
	char pad_784[4];  // Offset: 784 Size: 4
	float LastSpectatorStateSynchTime;  // Offset: 788 Size: 4
	struct FVector LastSpectatorSyncLocation;  // Offset: 792 Size: 12
	struct FRotator LastSpectatorSyncRotation;  // Offset: 804 Size: 12
	int32_t ClientCap;  // Offset: 816 Size: 4
	char pad_820[4];  // Offset: 820 Size: 4
	struct UCheatManager* CheatManager;  // Offset: 824 Size: 8
	UCheatManager* CheatClass;  // Offset: 832 Size: 8
	struct UPlayerInput* PlayerInput;  // Offset: 840 Size: 8
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;  // Offset: 848 Size: 16
	char pad_864[112];  // Offset: 864 Size: 112
	char pad_976_1 : 4;  // Offset: 976 Size: 1
	char bPlayerIsWaiting : 1;  // Offset: 976 Size: 1
	char pad_976_2 : 3;  // Offset: 976 Size: 1
	char pad_977[4];  // Offset: 977 Size: 4
	char NetPlayerIndex;  // Offset: 980 Size: 1
	char pad_981[59];  // Offset: 981 Size: 59
	struct UNetConnection* PendingSwapConnection;  // Offset: 1040 Size: 8
	struct UNetConnection* NetConnection;  // Offset: 1048 Size: 8
	char pad_1056[12];  // Offset: 1056 Size: 12
	float InputYawScale;  // Offset: 1068 Size: 4
	float InputPitchScale;  // Offset: 1072 Size: 4
	float InputRollScale;  // Offset: 1076 Size: 4
	char bShowMouseCursor : 1;  // Offset: 1080 Size: 1
	char bEnableClickEvents : 1;  // Offset: 1080 Size: 1
	char bEnableTouchEvents : 1;  // Offset: 1080 Size: 1
	char bEnableMouseOverEvents : 1;  // Offset: 1080 Size: 1
	char bEnableTouchOverEvents : 1;  // Offset: 1080 Size: 1
	char bForceFeedbackEnabled : 1;  // Offset: 1080 Size: 1
	char pad_1080_1 : 2;  // Offset: 1080 Size: 1
	char pad_1081[4];  // Offset: 1081 Size: 4
	float ForceFeedbackScale;  // Offset: 1084 Size: 4
	struct TArray<struct FKey> ClickEventKeys;  // Offset: 1088 Size: 16
	char DefaultMouseCursor;  // Offset: 1104 Size: 1
	char CurrentMouseCursor;  // Offset: 1105 Size: 1
	char DefaultClickTraceChannel;  // Offset: 1106 Size: 1
	char CurrentClickTraceChannel;  // Offset: 1107 Size: 1
	float HitResultTraceDistance;  // Offset: 1108 Size: 4
	uint16_t SeamlessTravelCount;  // Offset: 1112 Size: 2
	uint16_t LastCompletedSeamlessTravelCount;  // Offset: 1114 Size: 2
	char pad_1116[116];  // Offset: 1116 Size: 116
	struct UInputComponent* InactiveStateInputComponent;  // Offset: 1232 Size: 8
	char pad_1240_1 : 2;  // Offset: 1240 Size: 1
	char bShouldPerformFullTickWhenPaused : 1;  // Offset: 1240 Size: 1
	char pad_1240_2 : 5;  // Offset: 1240 Size: 1
	char pad_1241[24];  // Offset: 1241 Size: 24
	struct UTouchInterface* CurrentTouchInterface;  // Offset: 1264 Size: 8
	char pad_1272[80];  // Offset: 1272 Size: 80
	struct ASpectatorPawn* SpectatorPawn;  // Offset: 1352 Size: 8
	char pad_1360[4];  // Offset: 1360 Size: 4
	char pad_1364_1 : 7;  // Offset: 1364 Size: 1
	bool bIsLocalPlayerController : 1;  // Offset: 1364 Size: 1
	char pad_1365[3];  // Offset: 1365 Size: 3
	struct FVector SpawnLocation;  // Offset: 1368 Size: 12
	char pad_1380[12];  // Offset: 1380 Size: 12



 // Functions 
 public:
}; 

class ULevel : public UObject
{

public:
	char pad_40[144];  // Offset: 40 Size: 144
	struct UWorld* OwningWorld;  // Offset: 184 Size: 8
	struct UModel* Model;  // Offset: 192 Size: 8
	struct TArray<struct UModelComponent*> ModelComponents;  // Offset: 200 Size: 16
	struct ULevelActorContainer* ActorCluster;  // Offset: 216 Size: 8
	int32_t NumTextureStreamingUnbuiltComponents;  // Offset: 224 Size: 4
	int32_t NumTextureStreamingDirtyResources;  // Offset: 228 Size: 4
	struct ALevelScriptActor* LevelScriptActor;  // Offset: 232 Size: 8
	struct ANavigationObjectBase* NavListStart;  // Offset: 240 Size: 8
	struct ANavigationObjectBase* NavListEnd;  // Offset: 248 Size: 8
	struct TArray<struct UNavigationDataChunk*> NavDataChunks;  // Offset: 256 Size: 16
	float LightmapTotalSize;  // Offset: 272 Size: 4
	float ShadowmapTotalSize;  // Offset: 276 Size: 4
	struct TArray<struct FVector> StaticNavigableGeometry;  // Offset: 280 Size: 16
	struct TArray<struct FGuid> StreamingTextureGuids;  // Offset: 296 Size: 16
	char pad_312[152];  // Offset: 312 Size: 152
	char LevelBuildDataId[16];  // Offset: 464 Size: 16
	struct UMapBuildDataRegistry* MapBuildData;  // Offset: 480 Size: 8
	char LightBuildLevelOffset[12];  // Offset: 488 Size: 12
	char bIsLightingScenario : 1;  // Offset: 500 Size: 1
	char pad_500_1 : 2;  // Offset: 500 Size: 1
	char bTextureStreamingRotationChanged : 1;  // Offset: 500 Size: 1
	char bStaticComponentsRegisteredInStreamingManager : 1;  // Offset: 500 Size: 1
	char bIsVisible : 1;  // Offset: 500 Size: 1
	char pad_500_2 : 2;  // Offset: 500 Size: 1
	char pad_501[100];  // Offset: 501 Size: 100
	struct AWorldSettings* WorldSettings;  // Offset: 600 Size: 8
	char pad_608[8];  // Offset: 608 Size: 8
	struct TArray<struct UAssetUserData*> AssetUserData;  // Offset: 616 Size: 16
	char pad_632[16];  // Offset: 632 Size: 16
	struct TArray<struct FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;  // Offset: 648 Size: 16



	// Functions 
public:
};

class ULevelActorContainer : public UObject
{

public:
	struct TArray<struct AActor*> Actors;  // Offset: 40 Size: 16


	// Functions 
public:
};

class ULocalPlayer : public UPlayer
{

public:
	char pad_72[40];  // Offset: 72 Size: 40
	struct UGameViewportClient* ViewportClient;  // Offset: 112 Size: 8
	char pad_120[28];  // Offset: 120 Size: 28
	char AspectRatioAxisConstraint;  // Offset: 148 Size: 1
	char pad_149[3];  // Offset: 149 Size: 3
	APlayerController* PendingLevelPlayerControllerClass;  // Offset: 152 Size: 8
	char bSentSplitJoin : 1;  // Offset: 160 Size: 1
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	char pad_161[24];  // Offset: 161 Size: 24
	int32_t ControllerId;  // Offset: 184 Size: 4
	char pad_188[412];  // Offset: 188 Size: 412



	// Functions 
public:
};

class UGameInstance : public UObject
{

public:
	char pad_40[16];  // Offset: 40 Size: 16
	struct TArray<struct ULocalPlayer*> LocalPlayers;  // Offset: 56 Size: 16
	struct UOnlineSession* OnlineSession;  // Offset: 72 Size: 8
	struct TArray<struct UObject*> ReferencedObjects;  // Offset: 80 Size: 16
	char pad_96[24];  // Offset: 96 Size: 24
	char OnPawnControllerChangedDelegates[16];  // Offset: 120 Size: 16
	char pad_136[288];  // Offset: 136 Size: 288
};

class UWorld : public UObject
{

public:
	char pad_40[8];  // Offset: 40 Size: 8
	struct ULevel* PersistentLevel;  // Offset: 48 Size: 8
	struct UNetDriver* NetDriver;  // Offset: 56 Size: 8
	struct ULineBatchComponent* LineBatcher;  // Offset: 64 Size: 8
	struct ULineBatchComponent* PersistentLineBatcher;  // Offset: 72 Size: 8
	struct ULineBatchComponent* ForegroundLineBatcher;  // Offset: 80 Size: 8
	struct AGameNetworkManager* NetworkManager;  // Offset: 88 Size: 8
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler;  // Offset: 96 Size: 8
	struct TArray<struct UObject*> ExtraReferencedObjects;  // Offset: 104 Size: 16
	struct TArray<struct UObject*> PerModuleDataObjects;  // Offset: 120 Size: 16
	struct TArray<struct ULevelStreaming*> StreamingLevels;  // Offset: 136 Size: 16
	char StreamingLevelsToConsider[40];  // Offset: 152 Size: 40
	char StreamingLevelsPrefix[16];  // Offset: 192 Size: 16
	struct ULevel* CurrentLevelPendingVisibility;  // Offset: 208 Size: 8
	struct ULevel* CurrentLevelPendingInvisibility;  // Offset: 216 Size: 8
	struct UDemoNetDriver* DemoNetDriver;  // Offset: 224 Size: 8
	struct AParticleEventManager* MyParticleEventManager;  // Offset: 232 Size: 8
	struct APhysicsVolume* DefaultPhysicsVolume;  // Offset: 240 Size: 8
	char pad_248[22];  // Offset: 248 Size: 22
	char pad_270_1 : 2;  // Offset: 270 Size: 1
	char bAreConstraintsDirty : 1;  // Offset: 270 Size: 1
	char pad_270_2 : 5;  // Offset: 270 Size: 1
	char pad_271[2];  // Offset: 271 Size: 2
	struct UNavigationSystemBase* NavigationSystem;  // Offset: 272 Size: 8
	struct AGameModeBase* AuthorityGameMode;  // Offset: 280 Size: 8
	struct AGameStateBase* GameState;  // Offset: 288 Size: 8
	struct UAISystemBase* AISystem;  // Offset: 296 Size: 8
	struct UAvoidanceManager* AvoidanceManager;  // Offset: 304 Size: 8
	struct TArray<struct ULevel*> Levels;  // Offset: 312 Size: 16
	struct TArray<struct FLevelCollection> LevelCollections;  // Offset: 328 Size: 16
	char pad_344[40];  // Offset: 344 Size: 40
	struct UGameInstance* OwningGameInstance;  // Offset: 384 Size: 8
	struct TArray<struct UMaterialParameterCollectionInstance*> ParameterCollectionInstances;  // Offset: 392 Size: 16
	struct UCanvas* CanvasForRenderingToTarget;  // Offset: 408 Size: 8
	struct UCanvas* CanvasForDrawMaterialToRenderTarget;  // Offset: 416 Size: 8
	char pad_424[80];  // Offset: 424 Size: 80
	struct UPhysicsFieldComponent* PhysicsField;  // Offset: 504 Size: 8
	char ComponentsThatNeedPreEndOfFrameSync[80];  // Offset: 512 Size: 80
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;  // Offset: 592 Size: 16
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;  // Offset: 608 Size: 16
	char pad_624[880];  // Offset: 624 Size: 880
	struct UWorldComposition* WorldComposition;  // Offset: 1504 Size: 8
	char pad_1512[144];  // Offset: 1512 Size: 144
	char PSCPool[88];  // Offset: 1656 Size: 88
	char pad_1744[200];  // Offset: 1744 Size: 200



	// Functions 
public:
	struct AWorldSettings* K2_GetWorldSettings(); // Function Engine.World.K2_GetWorldSettings
	void HandleTimelineScrubbed(); // Function Engine.World.HandleTimelineScrubbed
	UGameViewportClient* GetGameViewport() const;
};


//verything below here is untested and should likely be removed

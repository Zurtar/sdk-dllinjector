#pragma once
#include "engine.h"



class UPlayer : public UObject
{

public:
	char pad_40[8];  // Offset: 40 Size: 8
	struct APlayerController* PlayerController;  // Offset: 48 Size: 8
	int CurrentNetSpeed;  // Offset: 56 Size: 4
	int ConfiguredInternetSpeed;  // Offset: 60 Size: 4
	int ConfiguredLanSpeed;  // Offset: 64 Size: 4
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
	void** VFTable;
	char ViewportConsole[8];  // Offset: 64 Size: 8
	struct TArray<struct FDebugDisplayProperty> DebugProperties;  // Offset: 72 Size: 16
	char pad_88[16];  // Offset: 88 Size: 16
	int32_t MaxSplitscreenPlayers;  // Offset: 104 Size: 4
	char pad_108[12];  // Offset: 108 Size: 12
	UWorld* World;  // Offset: 120 Size: 8
	struct UGameInstance* GameInstance;  // Offset: 128 Size: 8
	char pad_136[728];  // Offset: 136 Size: 728



	// Functions 
public:
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
	int InputPriority;  // Offset: 244 Size: 4
	struct UInputComponent* InputComponent;  // Offset: 248 Size: 8
	float NetCullDistanceSquared;  // Offset: 256 Size: 4
	int NetTag;  // Offset: 260 Size: 4
	float NetUpdateFrequency;  // Offset: 264 Size: 4
	float MinNetUpdateFrequency;  // Offset: 268 Size: 4
	float NetPriority;  // Offset: 272 Size: 4
	char pad_276[4];  // Offset: 276 Size: 4
	struct APawn* Instigator;  // Offset: 280 Size: 8
	struct TArray<struct AActor*> Children;  // Offset: 288 Size: 16
	struct USceneComponent* RootComponent;  // Offset: 304 Size: 8
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
	struct TArray<struct UActorComponent*> InstanceComponents;  // Offset: 496 Size: 16
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents;  // Offset: 512 Size: 16
	char pad_528[16];  // Offset: 528 Size: 16

};


class AController : public AActor
{

public:
	char pad_544[8];  // Offset: 544 Size: 8
	char PlayerState[8];  // Offset: 552 Size: 8
	char pad_560[8];  // Offset: 560 Size: 8
	char OnInstigatedAnyDamage[16];  // Offset: 568 Size: 16
	struct FName StateName;  // Offset: 584 Size: 8
	char Pawn[8];  // Offset: 592 Size: 8
	char pad_600[8];  // Offset: 600 Size: 8
	char Character[8];  // Offset: 608 Size: 8
	char TransformComponent[8];  // Offset: 616 Size: 8
	char pad_624[24];  // Offset: 624 Size: 24
	struct FRotator ControlRotation;  // Offset: 648 Size: 12
	char bAttachToPawn : 1;  // Offset: 660 Size: 1
	char pad_660_1 : 7;  // Offset: 660 Size: 1
	char pad_661[4];  // Offset: 661 Size: 4

};


class APlayerController : public AController {

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
	struct TArray<UObject> HiddenPrimitiveComponents;  // Offset: 768 Size: 16
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

};




class ULevel
{

public:
	char pad_00[0x98];
	TArray<class AActor*> NearActors;

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
	int ControllerId;  // Offset: 184 Size: 4
	char pad_188[412];  // Offset: 188 Size: 412

public:
};


class UGameInstance : public UObject
{

public:
	char pad_40[16];  // Offset: 40 Size: 16
	TArray<ULocalPlayer*> LocalPlayers;  // Offset: 56 Size: 16
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
	TArray<UObject*> ExtraReferencedObjects;  // Offset: 104 Size: 16
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
	 UGameInstance* OwningGameInstance;  // Offset: 384 Size: 8
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

};



#pragma once
#include "engine.h"
#include "framepool.h"



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
class AInfo : public AActor
{

public:



	// Functions 
public:
};

class UDataTable : public UObject
{

public:
	struct UScriptStruct* RowStruct;  // Offset: 40 Size: 8
	char pad_48[80];  // Offset: 48 Size: 80
	char bStripFromClientBuilds : 1;  // Offset: 128 Size: 1
	char bIgnoreExtraFields : 1;  // Offset: 128 Size: 1
	char bIgnoreMissingFields : 1;  // Offset: 128 Size: 1
	char pad_128_1 : 5;  // Offset: 128 Size: 1
	char pad_129[8];  // Offset: 129 Size: 8
	char ImportKeyField[16];  // Offset: 136 Size: 16
	char pad_152[24];  // Offset: 152 Size: 24



	// Functions 
public:
};

class USubsystem : public UObject
{

public:
	char pad_40[8];  // Offset: 40 Size: 8



	// Functions 
public:
};

class UWorldSubsystem : public USubsystem
{

public:



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

class AWorldSettings : public AInfo
{

public:
	char pad_544[8];  // Offset: 544 Size: 8
	int32_t VisibilityCellSize;  // Offset: 552 Size: 4
	char VisibilityAggressiveness;  // Offset: 556 Size: 1
	char bPrecomputeVisibility : 1;  // Offset: 557 Size: 1
	char bPlaceCellsOnlyAlongCameraTracks : 1;  // Offset: 557 Size: 1
	char bEnableWorldBoundsChecks : 1;  // Offset: 557 Size: 1
	char bEnableNavigationSystem : 1;  // Offset: 557 Size: 1
	char bEnableAISystem : 1;  // Offset: 557 Size: 1
	char bEnableWorldComposition : 1;  // Offset: 557 Size: 1
	char bUseClientSideLevelStreamingVolumes : 1;  // Offset: 557 Size: 1
	char bEnableWorldOriginRebasing : 1;  // Offset: 557 Size: 1
	char bWorldGravitySet : 1;  // Offset: 558 Size: 1
	char bGlobalGravitySet : 1;  // Offset: 558 Size: 1
	char bMinimizeBSPSections : 1;  // Offset: 558 Size: 1
	char bForceNoPrecomputedLighting : 1;  // Offset: 558 Size: 1
	char bHighPriorityLoading : 1;  // Offset: 558 Size: 1
	char bHighPriorityLoadingLocal : 1;  // Offset: 558 Size: 1
	char bOverrideDefaultBroadphaseSettings : 1;  // Offset: 558 Size: 1
	char pad_558_1 : 1;  // Offset: 558 Size: 1
	char pad_559[2];  // Offset: 559 Size: 2
	struct UNavigationSystemConfig* NavigationSystemConfig;  // Offset: 560 Size: 8
	struct UNavigationSystemConfig* NavigationSystemConfigOverride;  // Offset: 568 Size: 8
	float WorldToMeters;  // Offset: 576 Size: 4
	float KillZ;  // Offset: 580 Size: 4
	UDamageType* KillZDamageType;  // Offset: 584 Size: 8
	float WorldGravityZ;  // Offset: 592 Size: 4
	float GlobalGravityZ;  // Offset: 596 Size: 4
	struct ADefaultPhysicsVolume* DefaultPhysicsVolumeClass;  // Offset: 600 Size: 8
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass;  // Offset: 608 Size: 8
	struct AGameModeBase* DefaultGameMode;  // Offset: 616 Size: 8
	struct AGameNetworkManager* GameNetworkManagerClass;  // Offset: 624 Size: 8
	int32_t PackedLightAndShadowMapTextureSize;  // Offset: 632 Size: 4
	struct FVector DefaultColorScale;  // Offset: 636 Size: 12
	float DefaultMaxDistanceFieldOcclusionDistance;  // Offset: 648 Size: 4
	float GlobalDistanceFieldViewDistance;  // Offset: 652 Size: 4
	float DynamicIndirectShadowsSelfShadowingIntensity;  // Offset: 656 Size: 4
	char pad_660[4];  // Offset: 660 Size: 4
	char DefaultReverbSettings[32];  // Offset: 664 Size: 32
	char DefaultAmbientZoneSettings[36];  // Offset: 696 Size: 36
	char pad_732[4];  // Offset: 732 Size: 4
	struct USoundMix* DefaultBaseSoundMix;  // Offset: 736 Size: 8
	float TimeDilation;  // Offset: 744 Size: 4
	float MatineeTimeDilation;  // Offset: 748 Size: 4
	float DemoPlayTimeDilation;  // Offset: 752 Size: 4
	float MinGlobalTimeDilation;  // Offset: 756 Size: 4
	float MaxGlobalTimeDilation;  // Offset: 760 Size: 4
	float MinUndilatedFrameTime;  // Offset: 764 Size: 4
	float MaxUndilatedFrameTime;  // Offset: 768 Size: 4
	char BroadphaseSettings[64];  // Offset: 772 Size: 64
	char pad_836[4];  // Offset: 836 Size: 4
	struct APlayerState* Pauser;  // Offset: 840 Size: 8
	struct TArray<struct FNetViewer> ReplicationViewers;  // Offset: 848 Size: 16
	struct TArray<struct UAssetUserData*> AssetUserData;  // Offset: 864 Size: 16
	struct APlayerState* PauserPlayerState;  // Offset: 880 Size: 8
	int32_t MaxNumberOfBookmarks;  // Offset: 888 Size: 4
	char pad_892[4];  // Offset: 892 Size: 4
	struct UBookmarkBase* DefaultBookmarkClass;  // Offset: 896 Size: 8
	struct TArray<struct UBookmarkBase*> BookmarkArray;  // Offset: 904 Size: 16
	struct UBookmarkBase* LastBookmarkClass;  // Offset: 920 Size: 8



	// Functions 
public:
	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ
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

class APawn : public AActor
{

public:
	char pad_544[8];  // Offset: 544 Size: 8
	char bUseControllerRotationPitch : 1;  // Offset: 552 Size: 1
	char bUseControllerRotationYaw : 1;  // Offset: 552 Size: 1
	char bUseControllerRotationRoll : 1;  // Offset: 552 Size: 1
	char bCanAffectNavigationGeneration : 1;  // Offset: 552 Size: 1
	char pad_552_1 : 4;  // Offset: 552 Size: 1
	char pad_553[4];  // Offset: 553 Size: 4
	float BaseEyeHeight;  // Offset: 556 Size: 4
	char AutoPossessPlayer;  // Offset: 560 Size: 1
	char AutoPossessAI;  // Offset: 561 Size: 1
	char RemoteViewPitch;  // Offset: 562 Size: 1
	char pad_563[5];  // Offset: 563 Size: 5
	AController* AIControllerClass;  // Offset: 568 Size: 8
	struct APlayerState* PlayerState;  // Offset: 576 Size: 8
	char pad_584[8];  // Offset: 584 Size: 8
	struct AController* LastHitBy;  // Offset: 592 Size: 8
	struct AController* Controller;  // Offset: 600 Size: 8
	char pad_608[4];  // Offset: 608 Size: 4
	struct FVector ControlInputVector;  // Offset: 612 Size: 12
	struct FVector LastControlInputVector;  // Offset: 624 Size: 12
	char pad_636[4];  // Offset: 636 Size: 4



	// Functions 
public:
	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController
	void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate); // Function Engine.Pawn.SetCanAffectNavigationGeneration
	void ReceiveUnpossessed(struct AController* OldController); // Function Engine.Pawn.ReceiveUnpossessed
	void ReceivePossessed(struct AController* NewController); // Function Engine.Pawn.ReceivePossessed
	void PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, struct AActor* NoiseMaker); // Function Engine.Pawn.PawnMakeNoise
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller
	void LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Pawn.LaunchPawn
	struct FVector K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector
	bool IsPlayerControlled(); // Function Engine.Pawn.IsPlayerControlled
	bool IsPawnControlled(); // Function Engine.Pawn.IsPawnControlled
	bool IsMoveInputIgnored(); // Function Engine.Pawn.IsMoveInputIgnored
	bool IsLocallyControlled(); // Function Engine.Pawn.IsLocallyControlled
	bool IsControlled(); // Function Engine.Pawn.IsControlled
	bool IsBotControlled(); // Function Engine.Pawn.IsBotControlled
	struct FVector GetPendingMovementInputVector(); // Function Engine.Pawn.GetPendingMovementInputVector
	struct FVector GetNavAgentLocation(); // Function Engine.Pawn.GetNavAgentLocation
	struct UPawnMovementComponent* GetMovementComponent(); // Function Engine.Pawn.GetMovementComponent
	struct AActor* GetMovementBaseActor(struct APawn* Pawn); // Function Engine.Pawn.GetMovementBaseActor
	struct FVector GetLastMovementInputVector(); // Function Engine.Pawn.GetLastMovementInputVector
	struct FRotator GetControlRotation(); // Function Engine.Pawn.GetControlRotation
	struct AController* GetController(); // Function Engine.Pawn.GetController
	struct FRotator GetBaseAimRotation(); // Function Engine.Pawn.GetBaseAimRotation
	void DetachFromControllerPendingDestroy(); // Function Engine.Pawn.DetachFromControllerPendingDestroy
	struct FVector ConsumeMovementInputVector(); // Function Engine.Pawn.ConsumeMovementInputVector
	void AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce); // Function Engine.Pawn.AddMovementInput
	void AddControllerYawInput(float Val); // Function Engine.Pawn.AddControllerYawInput
	void AddControllerRollInput(float Val); // Function Engine.Pawn.AddControllerRollInput
	void AddControllerPitchInput(float Val); // Function Engine.Pawn.AddControllerPitchInput
};

class ACharacter : public APawn
{

public:
	struct USkeletalMeshComponent* Mesh;  // Offset: 640 Size: 8
	struct UCharacterMovementComponent* CharacterMovement;  // Offset: 648 Size: 8
	struct UCapsuleComponent* CapsuleComponent;  // Offset: 656 Size: 8
	char BasedMovement[48];  // Offset: 664 Size: 48
	char ReplicatedBasedMovement[48];  // Offset: 712 Size: 48
	float AnimRootMotionTranslationScale;  // Offset: 760 Size: 4
	struct FVector BaseTranslationOffset;  // Offset: 764 Size: 12
	char pad_776[8];  // Offset: 776 Size: 8
	char BaseRotationOffset[16];  // Offset: 784 Size: 16
	float ReplicatedServerLastTransformUpdateTimeStamp;  // Offset: 800 Size: 4
	float ReplayLastTransformUpdateTimeStamp;  // Offset: 804 Size: 4
	char ReplicatedMovementMode;  // Offset: 808 Size: 1
	char pad_809_1 : 7;  // Offset: 809 Size: 1
	bool bInBaseReplication : 1;  // Offset: 809 Size: 1
	char pad_810[2];  // Offset: 810 Size: 2
	float CrouchedEyeHeight;  // Offset: 812 Size: 4
	char bIsCrouched : 1;  // Offset: 816 Size: 1
	char bProxyIsJumpForceApplied : 1;  // Offset: 816 Size: 1
	char bPressedJump : 1;  // Offset: 816 Size: 1
	char bClientUpdating : 1;  // Offset: 816 Size: 1
	char bClientWasFalling : 1;  // Offset: 816 Size: 1
	char bClientResimulateRootMotion : 1;  // Offset: 816 Size: 1
	char bClientResimulateRootMotionSources : 1;  // Offset: 816 Size: 1
	char bSimGravityDisabled : 1;  // Offset: 816 Size: 1
	char bClientCheckEncroachmentOnNetUpdate : 1;  // Offset: 817 Size: 1
	char bServerMoveIgnoreRootMotion : 1;  // Offset: 817 Size: 1
	char bWasJumping : 1;  // Offset: 817 Size: 1
	char pad_817_1 : 5;  // Offset: 817 Size: 1
	char pad_818[3];  // Offset: 818 Size: 3
	float JumpKeyHoldTime;  // Offset: 820 Size: 4
	float JumpForceTimeRemaining;  // Offset: 824 Size: 4
	float ProxyJumpForceStartedTime;  // Offset: 828 Size: 4
	float JumpMaxHoldTime;  // Offset: 832 Size: 4
	int32_t JumpMaxCount;  // Offset: 836 Size: 4
	int32_t JumpCurrentCount;  // Offset: 840 Size: 4
	int32_t JumpCurrentCountPreJump;  // Offset: 844 Size: 4
	char pad_848[8];  // Offset: 848 Size: 8
	char OnReachedJumpApex[16];  // Offset: 856 Size: 16
	char pad_872[16];  // Offset: 872 Size: 16
	char MovementModeChangedDelegate[16];  // Offset: 888 Size: 16
	char OnCharacterMovementUpdated[16];  // Offset: 904 Size: 16
	char SavedRootMotion[56];  // Offset: 920 Size: 56
	char ClientRootMotionParams[64];  // Offset: 976 Size: 64
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;  // Offset: 1040 Size: 16
	char RepRootMotion[152];  // Offset: 1056 Size: 152
	char pad_1208[8];  // Offset: 1208 Size: 8



	// Functions 
public:
	void UnCrouch(bool bClientSimulation); // Function Engine.Character.UnCrouch
	void StopJumping(); // Function Engine.Character.StopJumping
	void StopAnimMontage(struct UAnimMontage* AnimMontage); // Function Engine.Character.StopAnimMontage
	void ServerMovePacked(struct FCharacterServerMovePackedBits PackedBits); // Function Engine.Character.ServerMovePacked
	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, char OldMoveFlags); // Function Engine.Character.ServerMoveOld
	void ServerMoveNoBase(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // Function Engine.Character.ServerMoveNoBase
	void ServerMoveDualNoBase(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // Function Engine.Character.ServerMoveDualNoBase
	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMoveDualHybridRootMotion
	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMoveDual
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMove
	void RootMotionDebugClientPrintOnScreen(struct FString inString); // Function Engine.Character.RootMotionDebugClientPrintOnScreen
	float PlayAnimMontage(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function Engine.Character.PlayAnimMontage
	void OnWalkingOffLedge(struct FVector& PreviousFloorImpactNormal, struct FVector& PreviousFloorContactNormal, struct FVector& PreviousLocation, float TimeDelta); // Function Engine.Character.OnWalkingOffLedge
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement
	void OnRep_ReplayLastTransformUpdateTimeStamp(); // Function Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched
	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.OnLaunched
	void OnLanded(struct FHitResult& Hit); // Function Engine.Character.OnLanded
	void OnJumped(); // Function Engine.Character.OnJumped
	void LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.LaunchCharacter
	void K2_UpdateCustomMovement(float DeltaTime); // Function Engine.Character.K2_UpdateCustomMovement
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnStartCrouch
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Engine.Character.K2_OnMovementModeChanged
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnEndCrouch
	void Jump(); // Function Engine.Character.Jump
	bool IsPlayingRootMotion(); // Function Engine.Character.IsPlayingRootMotion
	bool IsPlayingNetworkedRootMotionMontage(); // Function Engine.Character.IsPlayingNetworkedRootMotionMontage
	bool IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce
	bool HasAnyRootMotion(); // Function Engine.Character.HasAnyRootMotion
	struct UAnimMontage* GetCurrentMontage(); // Function Engine.Character.GetCurrentMontage
	struct FVector GetBaseTranslationOffset(); // Function Engine.Character.GetBaseTranslationOffset
	struct FRotator GetBaseRotationOffsetRotator(); // Function Engine.Character.GetBaseRotationOffsetRotator
	float GetAnimRootMotionTranslationScale(); // Function Engine.Character.GetAnimRootMotionTranslationScale
	void Crouch(bool bClientSimulation); // Function Engine.Character.Crouch
	void ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientVeryShortAdjustPosition
	void ClientMoveResponsePacked(struct FCharacterMoveResponsePackedBits PackedBits); // Function Engine.Character.ClientMoveResponsePacked
	void ClientCheatWalk(); // Function Engine.Character.ClientCheatWalk
	void ClientCheatGhost(); // Function Engine.Character.ClientCheatGhost
	void ClientCheatFly(); // Function Engine.Character.ClientCheatFly
	void ClientAdjustRootMotionSourcePosition(float Timestamp, struct FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionSourcePosition
	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionPosition
	void ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustPosition
	void ClientAckGoodMove(float Timestamp); // Function Engine.Character.ClientAckGoodMove
	bool CanJumpInternal(); // Function Engine.Character.CanJumpInternal
	bool CanJump(); // Function Engine.Character.CanJump
	bool CanCrouch(); // Function Engine.Character.CanCrouch
	void CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation); // Function Engine.Character.CacheInitialMeshOffset
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
	bool WasInputKeyJustReleased(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustReleased
	bool WasInputKeyJustPressed(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustPressed
	void ToggleSpeaking(bool bInSpeaking); // Function Engine.PlayerController.ToggleSpeaking
	void TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename); // Function Engine.PlayerController.TestServerLevelVisibilityChange
	void SwitchLevel(struct FString URL); // Function Engine.PlayerController.SwitchLevel
	void StopHapticEffect(enum class EControllerHand Hand); // Function Engine.PlayerController.StopHapticEffect
	void StartFire(char FireModeNum); // Function Engine.PlayerController.StartFire
	void SetVirtualJoystickVisibility(bool bVisible); // Function Engine.PlayerController.SetVirtualJoystickVisibility
	void SetViewTargetWithBlend(struct AActor* NewViewTarget, float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing); // Function Engine.PlayerController.SetViewTargetWithBlend
	void SetName(struct FString S); // Function Engine.PlayerController.SetName
	void SetMouseLocation(int32_t X, int32_t Y); // Function Engine.PlayerController.SetMouseLocation
	void SetMouseCursorWidget(enum class EMouseCursor Cursor, struct UUserWidget* CursorWidget); // Function Engine.PlayerController.SetMouseCursorWidget
	void SetHapticsByValue(float Frequency, float Amplitude, enum class EControllerHand Hand); // Function Engine.PlayerController.SetHapticsByValue
	void SetDisableHaptics(bool bNewDisabled); // Function Engine.PlayerController.SetDisableHaptics
	void SetControllerLightColor(struct FColor Color); // Function Engine.PlayerController.SetControllerLightColor
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.PlayerController.SetCinematicMode
	void SetAudioListenerOverride(struct USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation); // Function Engine.PlayerController.SetAudioListenerOverride
	void SetAudioListenerAttenuationOverride(struct USceneComponent* AttachToComponent, struct FVector AttenuationLocationOVerride); // Function Engine.PlayerController.SetAudioListenerAttenuationOverride
	void ServerViewSelf(struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ServerViewSelf
	void ServerViewPrevPlayer(); // Function Engine.PlayerController.ServerViewPrevPlayer
	void ServerViewNextPlayer(); // Function Engine.PlayerController.ServerViewNextPlayer
	void ServerVerifyViewTarget(); // Function Engine.PlayerController.ServerVerifyViewTarget
	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities); // Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility); // Function Engine.PlayerController.ServerUpdateLevelVisibility
	void ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw); // Function Engine.PlayerController.ServerUpdateCamera
	void ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerUnmutePlayer
	void ServerToggleAILogging(); // Function Engine.PlayerController.ServerToggleAILogging
	void ServerShortTimeout(); // Function Engine.PlayerController.ServerShortTimeout
	void ServerSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ServerSetSpectatorWaiting
	void ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot); // Function Engine.PlayerController.ServerSetSpectatorLocation
	void ServerRestartPlayer(); // Function Engine.PlayerController.ServerRestartPlayer
	void ServerPause(); // Function Engine.PlayerController.ServerPause
	void ServerNotifyLoadedWorld(struct FName WorldPackageName); // Function Engine.PlayerController.ServerNotifyLoadedWorld
	void ServerMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerMutePlayer
	void ServerExecRPC(struct FString Msg); // Function Engine.PlayerController.ServerExecRPC
	void ServerExec(struct FString Msg); // Function Engine.PlayerController.ServerExec
	void ServerCheckClientPossessionReliable(); // Function Engine.PlayerController.ServerCheckClientPossessionReliable
	void ServerCheckClientPossession(); // Function Engine.PlayerController.ServerCheckClientPossession
	void ServerChangeName(struct FString S); // Function Engine.PlayerController.ServerChangeName
	void ServerCamera(struct FName NewMode); // Function Engine.PlayerController.ServerCamera
	void ServerAcknowledgePossession(struct APawn* P); // Function Engine.PlayerController.ServerAcknowledgePossession
	void SendToConsole(struct FString Command); // Function Engine.PlayerController.SendToConsole
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel
	void ResetControllerLightColor(); // Function Engine.PlayerController.ResetControllerLightColor
	bool ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D& ScreenLocation, bool bPlayerViewportRelative); // Function Engine.PlayerController.ProjectWorldLocationToScreen
	void PlayHapticEffect(struct UHapticFeedbackEffect_Base* HapticEffect, enum class EControllerHand Hand, float Scale, bool bLoop); // Function Engine.PlayerController.PlayHapticEffect
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, enum class EDynamicForceFeedbackAction Action, struct FLatentActionInfo LatentInfo); // Function Engine.PlayerController.PlayDynamicForceFeedback
	void Pause(); // Function Engine.PlayerController.Pause
	void OnServerStartedVisualLogger(bool bIsLogging); // Function Engine.PlayerController.OnServerStartedVisualLogger
	void LocalTravel(struct FString URL); // Function Engine.PlayerController.LocalTravel
	void K2_ClientPlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused); // Function Engine.PlayerController.K2_ClientPlayForceFeedback
	bool IsInputKeyDown(struct FKey Key); // Function Engine.PlayerController.IsInputKeyDown
	void GetViewportSize(int32_t& SizeX, int32_t& SizeY); // Function Engine.PlayerController.GetViewportSize
	struct ASpectatorPawn* GetSpectatorPawn(); // Function Engine.PlayerController.GetSpectatorPawn
	bool GetMousePosition(float& LocationX, float& LocationY); // Function Engine.PlayerController.GetMousePosition
	struct FVector GetInputVectorKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputVectorKeyState
	void GetInputTouchState(enum class ETouchIndex FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // Function Engine.PlayerController.GetInputTouchState
	void GetInputMouseDelta(float& DeltaX, float& DeltaY); // Function Engine.PlayerController.GetInputMouseDelta
	void GetInputMotionState(struct FVector& Tilt, struct FVector& RotationRate, struct FVector& Gravity, struct FVector& Acceleration); // Function Engine.PlayerController.GetInputMotionState
	float GetInputKeyTimeDown(struct FKey Key); // Function Engine.PlayerController.GetInputKeyTimeDown
	void GetInputAnalogStickState(enum class EControllerAnalogStick WhichStick, float& StickX, float& StickY); // Function Engine.PlayerController.GetInputAnalogStickState
	float GetInputAnalogKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputAnalogKeyState
	struct AHUD* GetHUD(); // Function Engine.PlayerController.GetHUD
	bool GetHitResultUnderFingerForObjects(enum class ETouchIndex FingerIndex, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerForObjects
	bool GetHitResultUnderFingerByChannel(enum class ETouchIndex FingerIndex, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerByChannel
	bool GetHitResultUnderFinger(enum class ETouchIndex FingerIndex, enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderFinger
	bool GetHitResultUnderCursorForObjects(struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorForObjects
	bool GetHitResultUnderCursorByChannel(enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorByChannel
	bool GetHitResultUnderCursor(enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursor
	struct FVector GetFocalLocation(); // Function Engine.PlayerController.GetFocalLocation
	void FOV(float NewFOV); // Function Engine.PlayerController.FOV
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector& WorldLocation, struct FVector& WorldDirection); // Function Engine.PlayerController.DeprojectScreenPositionToWorld
	bool DeprojectMousePositionToWorld(struct FVector& WorldLocation, struct FVector& WorldDirection); // Function Engine.PlayerController.DeprojectMousePositionToWorld
	void ConsoleKey(struct FKey Key); // Function Engine.PlayerController.ConsoleKey
	void ClientWasKicked(struct FText KickReason); // Function Engine.PlayerController.ClientWasKicked
	void ClientVoiceHandshakeComplete(); // Function Engine.PlayerController.ClientVoiceHandshakeComplete
	void ClientUpdateMultipleLevelsStreamingStatus(struct TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses); // Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
	void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex); // Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
	void ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientUnmutePlayer
	void ClientTravelInternal(struct FString URL, enum class ETravelType TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravelInternal
	void ClientTravel(struct FString URL, enum class ETravelType TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravel
	void ClientTeamMessage(struct APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientTeamMessage
	void ClientStopForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag); // Function Engine.PlayerController.ClientStopForceFeedback
	void ClientStopCameraShakesFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // Function Engine.PlayerController.ClientStopCameraShakesFromSource
	void ClientStopCameraShake(struct UCameraShakeBase* Shake, bool bImmediately); // Function Engine.PlayerController.ClientStopCameraShake
	void ClientStopCameraAnim(struct UCameraAnim* AnimToStop); // Function Engine.PlayerController.ClientStopCameraAnim
	void ClientStartOnlineSession(); // Function Engine.PlayerController.ClientStartOnlineSession
	void ClientStartCameraShakeFromSource(struct UCameraShakeBase* Shake, struct UCameraShakeSourceComponent* SourceComponent); // Function Engine.PlayerController.ClientStartCameraShakeFromSource
	void ClientStartCameraShake(struct UCameraShakeBase* Shake, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerController.ClientStartCameraShake
	void ClientSpawnCameraLensEffect(struct AEmitterCameraLensEffectBase* LensEffectEmitterClass); // Function Engine.PlayerController.ClientSpawnCameraLensEffect
	void ClientSetViewTarget(struct AActor* A, struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ClientSetViewTarget
	void ClientSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ClientSetSpectatorWaiting
	void ClientSetHUD(AHUD* NewHUDClass); // Function Engine.PlayerController.ClientSetHUD
	void ClientSetForceMipLevelsToBeResident(struct UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); // Function Engine.PlayerController.ClientSetCinematicMode
	void ClientSetCameraMode(struct FName NewCamMode); // Function Engine.PlayerController.ClientSetCameraMode
	void ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished); // Function Engine.PlayerController.ClientSetCameraFade
	void ClientSetBlockOnAsyncLoading(); // Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
	void ClientReturnToMainMenuWithTextReason(struct FText ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
	void ClientReturnToMainMenu(struct FString ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenu
	void ClientRetryClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRetryClientRestart
	void ClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRestart
	void ClientReset(); // Function Engine.PlayerController.ClientReset
	void ClientRepObjRef(struct UObject* Object); // Function Engine.PlayerController.ClientRepObjRef
	void ClientReceiveLocalizedMessage(struct ULocalMessage* Message, int32_t SWITCH, struct APlayerState* RelatedPlayerState_2, struct APlayerState* RelatedPlayerState_3, struct UObject* OptionalObject); // Function Engine.PlayerController.ClientReceiveLocalizedMessage
	void ClientPrestreamTextures(struct AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientPrestreamTextures
	void ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast); // Function Engine.PlayerController.ClientPrepareMapChange
	void ClientPlaySoundAtLocation(struct USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySoundAtLocation
	void ClientPlaySound(struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySound
	void ClientPlayForceFeedback_Internal(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters Params); // Function Engine.PlayerController.ClientPlayForceFeedback_Internal
	void ClientPlayCameraAnim(struct UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, enum class ECameraShakePlaySpace Space, struct FRotator CustomPlaySpace); // Function Engine.PlayerController.ClientPlayCameraAnim
	void ClientMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientMutePlayer
	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientMessage
	void ClientIgnoreMoveInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreMoveInput
	void ClientIgnoreLookInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreLookInput
	void ClientGotoState(struct FName NewState); // Function Engine.PlayerController.ClientGotoState
	void ClientGameEnded(struct AActor* EndGameFocus, bool bIsWinner); // Function Engine.PlayerController.ClientGameEnded
	void ClientForceGarbageCollection(); // Function Engine.PlayerController.ClientForceGarbageCollection
	void ClientFlushLevelStreaming(); // Function Engine.PlayerController.ClientFlushLevelStreaming
	void ClientEndOnlineSession(); // Function Engine.PlayerController.ClientEndOnlineSession
	void ClientEnableNetworkVoice(bool bEnable); // Function Engine.PlayerController.ClientEnableNetworkVoice
	void ClientCommitMapChange(); // Function Engine.PlayerController.ClientCommitMapChange
	void ClientClearCameraLensEffects(); // Function Engine.PlayerController.ClientClearCameraLensEffects
	void ClientCapBandwidth(int32_t Cap); // Function Engine.PlayerController.ClientCapBandwidth
	void ClientCancelPendingMapChange(); // Function Engine.PlayerController.ClientCancelPendingMapChange
	void ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation); // Function Engine.PlayerController.ClientAddTextureStreamingLoc
	void ClearAudioListenerOverride(); // Function Engine.PlayerController.ClearAudioListenerOverride
	void ClearAudioListenerAttenuationOverride(); // Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
	bool CanRestartPlayer(); // Function Engine.PlayerController.CanRestartPlayer
	void Camera(struct FName NewMode); // Function Engine.PlayerController.Camera
	void AddYawInput(float Val); // Function Engine.PlayerController.AddYawInput
	void AddRollInput(float Val); // Function Engine.PlayerController.AddRollInput
	void AddPitchInput(float Val); // Function Engine.PlayerController.AddPitchInput
	void ActivateTouchInterface(struct UTouchInterface* NewTouchInterface); // Function Engine.PlayerController.ActivateTouchInterface
};

class ULevel
{

public:
	char pad_00[0x98];
	TArray<class AActor*> NearActors;



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

class UGeneralProjectSettings : public UObject
{

public:
	struct FString CompanyName;  // Offset: 40 Size: 16
	struct FString CompanyDistinguishedName;  // Offset: 56 Size: 16
	struct FString CopyrightNotice;  // Offset: 72 Size: 16
	struct FString Description;  // Offset: 88 Size: 16
	struct FString Homepage;  // Offset: 104 Size: 16
	struct FString LicensingTerms;  // Offset: 120 Size: 16
	struct FString PrivacyPolicy;  // Offset: 136 Size: 16
	struct FString ProjectID;  // Offset: 152 Size: 16
	struct FString ProjectName;  // Offset: 168 Size: 16
	struct FString ProjectVersion;  // Offset: 184 Size: 16
	struct FString SupportContact;  // Offset: 200 Size: 16
	struct FText ProjectDisplayedTitle;  // Offset: 216 Size: 24
	struct FText ProjectDebugTitleInfo;  // Offset: 240 Size: 24
	char pad_264_1 : 7;  // Offset: 264 Size: 1
	bool bShouldWindowPreserveAspectRatio : 1;  // Offset: 264 Size: 1
	char pad_265_1 : 7;  // Offset: 265 Size: 1
	bool bUseBorderlessWindow : 1;  // Offset: 265 Size: 1
	char pad_266_1 : 7;  // Offset: 266 Size: 1
	bool bStartInVR : 1;  // Offset: 266 Size: 1
	char pad_267_1 : 7;  // Offset: 267 Size: 1
	bool bAllowWindowResize : 1;  // Offset: 267 Size: 1
	char pad_268_1 : 7;  // Offset: 268 Size: 1
	bool bAllowClose : 1;  // Offset: 268 Size: 1
	char pad_269_1 : 7;  // Offset: 269 Size: 1
	bool bAllowMaximize : 1;  // Offset: 269 Size: 1
	char pad_270_1 : 7;  // Offset: 270 Size: 1
	bool bAllowMinimize : 1;  // Offset: 270 Size: 1
	char pad_271[1];  // Offset: 271 Size: 1



	// Functions 
public:
};

class UGameMapsSettings : public UObject
{

public:
	struct FString LocalMapOptions;  // Offset: 40 Size: 16
	char TransitionMap[24];  // Offset: 56 Size: 24
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bUseSplitscreen : 1;  // Offset: 80 Size: 1
	char TwoPlayerSplitscreenLayout;  // Offset: 81 Size: 1
	char ThreePlayerSplitscreenLayout;  // Offset: 82 Size: 1
	char FourPlayerSplitscreenLayout;  // Offset: 83 Size: 1
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bOffsetPlayerGamepadIds : 1;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3
	struct FText GameInstanceClass;  // Offset: 88 Size: 24
	struct FText GameDefaultMap;  // Offset: 112 Size: 24
	struct FText ServerDefaultMap;  // Offset: 136 Size: 24
	struct FText GlobalDefaultGameMode;  // Offset: 160 Size: 24
	struct FText GlobalDefaultServerGameMode;  // Offset: 184 Size: 24
	struct TArray<struct FGameModeName> GameModeMapPrefixes;  // Offset: 208 Size: 16
	struct TArray<struct FGameModeName> GameModeClassAliases;  // Offset: 224 Size: 16



	// Functions 
public:
	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	bool GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	struct UGameMapsSettings* GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings
};

class UConsoleSettings : public UObject
{

public:
	int32_t MaxScrollbackSize;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList;  // Offset: 48 Size: 16
	struct TArray<struct FString> AutoCompleteMapPaths;  // Offset: 64 Size: 16
	float BackgroundOpacityPercentage;  // Offset: 80 Size: 4
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bOrderTopToBottom : 1;  // Offset: 84 Size: 1
	char pad_85_1 : 7;  // Offset: 85 Size: 1
	bool bDisplayHelpInAutoComplete : 1;  // Offset: 85 Size: 1
	char pad_86[2];  // Offset: 86 Size: 2
	char InputColor[4];  // Offset: 88 Size: 4
	char HistoryColor[4];  // Offset: 92 Size: 4
	char AutoCompleteCommandColor[4];  // Offset: 96 Size: 4
	char AutoCompleteCVarColor[4];  // Offset: 100 Size: 4
	char AutoCompleteFadedColor[4];  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



	// Functions 
public:
};

class UGameSessionSettings : public UObject
{

public:
	int32_t MaxSpectators;  // Offset: 40 Size: 4
	int32_t MaxPlayers;  // Offset: 44 Size: 4
	char bRequiresPushToTalk : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[8];  // Offset: 49 Size: 8



	// Functions 
public:
};

class UGameNetworkManagerSettings : public UObject
{

public:
	int32_t MinDynamicBandwidth;  // Offset: 40 Size: 4
	int32_t MaxDynamicBandwidth;  // Offset: 44 Size: 4
	int32_t TotalNetBandwidth;  // Offset: 48 Size: 4
	int32_t BadPingThreshold;  // Offset: 52 Size: 4
	char bIsStandbyCheckingEnabled : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[4];  // Offset: 57 Size: 4
	float StandbyRxCheatTime;  // Offset: 60 Size: 4
	float StandbyTxCheatTime;  // Offset: 64 Size: 4
	float PercentMissingForRxStandby;  // Offset: 68 Size: 4
	float PercentMissingForTxStandby;  // Offset: 72 Size: 4
	float PercentForBadPing;  // Offset: 76 Size: 4
	float JoinInProgressStandbyWaitTime;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



	// Functions 
public:
};

class AGameStateBase : public AInfo
{

public:
	AGameModeBase* GameModeClass;  // Offset: 544 Size: 8
	struct AGameModeBase* AuthorityGameMode;  // Offset: 552 Size: 8
	ASpectatorPawn* SpectatorClass;  // Offset: 560 Size: 8
	struct TArray<struct APlayerState*> PlayerArray;  // Offset: 568 Size: 16
	char pad_584_1 : 7;  // Offset: 584 Size: 1
	bool bReplicatedHasBegunPlay : 1;  // Offset: 584 Size: 1
	char pad_585[3];  // Offset: 585 Size: 3
	float ReplicatedWorldTimeSeconds;  // Offset: 588 Size: 4
	float ServerWorldTimeSecondsDelta;  // Offset: 592 Size: 4
	float ServerWorldTimeSecondsUpdateFrequency;  // Offset: 596 Size: 4
	char pad_600[24];  // Offset: 600 Size: 24



	// Functions 
public:
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass
	bool HasMatchStarted(); // Function Engine.GameStateBase.HasMatchStarted
	bool HasMatchEnded(); // Function Engine.GameStateBase.HasMatchEnded
	bool HasBegunPlay(); // Function Engine.GameStateBase.HasBegunPlay
	float GetServerWorldTimeSeconds(); // Function Engine.GameStateBase.GetServerWorldTimeSeconds
	float GetPlayerStartTime(struct AController* Controller); // Function Engine.GameStateBase.GetPlayerStartTime
	float GetPlayerRespawnDelay(struct AController* Controller); // Function Engine.GameStateBase.GetPlayerRespawnDelay
};

class AGameSession : public AInfo
{

public:
	int32_t MaxSpectators;  // Offset: 544 Size: 4
	int32_t MaxPlayers;  // Offset: 548 Size: 4
	int32_t MaxPartySize;  // Offset: 552 Size: 4
	char MaxSplitscreensPerConnection;  // Offset: 556 Size: 1
	char pad_557_1 : 7;  // Offset: 557 Size: 1
	bool bRequiresPushToTalk : 1;  // Offset: 557 Size: 1
	char pad_558[2];  // Offset: 558 Size: 2
	struct FName SessionName;  // Offset: 560 Size: 8



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


class AGameModeBase : public AInfo
{

public:
	char OptionsString[16];  // Offset: 544 Size: 16
	struct AGameSession* GameSessionClass;  // Offset: 560 Size: 8
	struct AGameStateBase* GameStateClass;  // Offset: 568 Size: 8
	struct APlayerController* PlayerControllerClass;  // Offset: 576 Size: 8
	struct APlayerState* PlayerStateClass;  // Offset: 584 Size: 8
	struct AHUD* HUDClass;  // Offset: 592 Size: 8
	struct APawn* DefaultPawnClass;  // Offset: 600 Size: 8
	struct ASpectatorPawn* SpectatorClass;  // Offset: 608 Size: 8
	struct APlayerController* ReplaySpectatorPlayerControllerClass;  // Offset: 616 Size: 8
	struct AServerStatReplicator* ServerStatReplicatorClass;  // Offset: 624 Size: 8
	struct AGameSession* GameSession;  // Offset: 632 Size: 8
	struct AGameStateBase* GameState;  // Offset: 640 Size: 8
	struct AServerStatReplicator* ServerStatReplicator;  // Offset: 648 Size: 8
	char DefaultPlayerName[24];  // Offset: 656 Size: 24
	char bUseSeamlessTravel : 1;  // Offset: 680 Size: 1
	char bStartPlayersAsSpectators : 1;  // Offset: 680 Size: 1
	char bPauseable : 1;  // Offset: 680 Size: 1
	char pad_680_1 : 5;  // Offset: 680 Size: 1
	char pad_681[24];  // Offset: 681 Size: 24



	// Functions 
public:
	void StartPlay(); // Function Engine.GameModeBase.StartPlay
	struct APawn* SpawnDefaultPawnFor(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameModeBase.SpawnDefaultPawnFor
	struct APawn* SpawnDefaultPawnAtTransform(struct AController* NewPlayer, struct FTransform& SpawnTransform); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform
	bool ShouldReset(struct AActor* ActorToReset); // Function Engine.GameModeBase.ShouldReset
	void ReturnToMainMenuHost(); // Function Engine.GameModeBase.ReturnToMainMenuHost
	void RestartPlayerAtTransform(struct AController* NewPlayer, struct FTransform& SpawnTransform); // Function Engine.GameModeBase.RestartPlayerAtTransform
	void RestartPlayerAtPlayerStart(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart
	void RestartPlayer(struct AController* NewPlayer); // Function Engine.GameModeBase.RestartPlayer
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel
	bool PlayerCanRestart(struct APlayerController* Player); // Function Engine.GameModeBase.PlayerCanRestart
	bool MustSpectate(struct APlayerController* NewPlayerController); // Function Engine.GameModeBase.MustSpectate
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.K2_PostLogin
	void K2_OnSwapPlayerControllers(struct APlayerController* OldPC, struct APlayerController* NewPC); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers
	void K2_OnRestartPlayer(struct AController* NewPlayer); // Function Engine.GameModeBase.K2_OnRestartPlayer
	void K2_OnLogout(struct AController* ExitingController); // Function Engine.GameModeBase.K2_OnLogout
	void K2_OnChangeName(struct AController* Other, struct FString NewName, bool bNameChange); // Function Engine.GameModeBase.K2_OnChangeName
	struct AActor* K2_FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameModeBase.K2_FindPlayerStart
	void InitStartSpot(struct AActor* StartSpot, struct AController* NewPlayer); // Function Engine.GameModeBase.InitStartSpot
	void InitializeHUDForPlayer(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.InitializeHUDForPlayer
	bool HasMatchStarted(); // Function Engine.GameModeBase.HasMatchStarted
	bool HasMatchEnded(); // Function Engine.GameModeBase.HasMatchEnded
	void HandleStartingNewPlayer(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.HandleStartingNewPlayer
	int32_t GetNumSpectators(); // Function Engine.GameModeBase.GetNumSpectators
	int32_t GetNumPlayers(); // Function Engine.GameModeBase.GetNumPlayers
	UObject* GetDefaultPawnClassForController(struct AController* InController); // Function Engine.GameModeBase.GetDefaultPawnClassForController
	struct AActor* FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameModeBase.FindPlayerStart
	struct AActor* ChoosePlayerStart(struct AController* Player); // Function Engine.GameModeBase.ChoosePlayerStart
	void ChangeName(struct AController* Controller, struct FString NewName, bool bNameChange); // Function Engine.GameModeBase.ChangeName
	bool CanSpectate(struct APlayerController* Viewer, struct APlayerState* ViewTarget); // Function Engine.GameModeBase.CanSpectate
};

class UCheatManager : public UObject
{

public:
	struct ADebugCameraController* DebugCameraControllerRef;  // Offset: 40 Size: 8
	ADebugCameraController* DebugCameraControllerClass;  // Offset: 48 Size: 8
	char pad_56[64];  // Offset: 56 Size: 64
	struct TArray<struct UCheatManagerExtension*> CheatManagerExtensions;  // Offset: 120 Size: 16



	// Functions 
public:
	void Walk(); // Function Engine.CheatManager.Walk
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf
	void ViewPlayer(struct FString S); // Function Engine.CheatManager.ViewPlayer
	void ViewClass(AActor* DesiredClass); // Function Engine.CheatManager.ViewClass
	void ViewActor(struct FName ActorName); // Function Engine.CheatManager.ViewActor
	void UpdateSafeArea(); // Function Engine.CheatManager.UpdateSafeArea
	void ToggleServerStatReplicatorUpdateStatNet(); // Function Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet
	void ToggleServerStatReplicatorClientOverwrite(); // Function Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance
	void Teleport(); // Function Engine.CheatManager.Teleport
	void Summon(struct FString ClassName); // Function Engine.CheatManager.Summon
	void StreamLevelOut(struct FName PackageName); // Function Engine.CheatManager.StreamLevelOut
	void StreamLevelIn(struct FName PackageName); // Function Engine.CheatManager.StreamLevelIn
	void SpawnServerStatReplicator(); // Function Engine.CheatManager.SpawnServerStatReplicator
	void Slomo(float NewTimeDilation); // Function Engine.CheatManager.Slomo
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault
	void ServerToggleAILogging(); // Function Engine.CheatManager.ServerToggleAILogging
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly
	void OnlyLoadLevel(struct FName PackageName); // Function Engine.CheatManager.OnlyLoadLevel
	void LogLoc(); // Function Engine.CheatManager.LogLoc
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse
	void God(); // Function Engine.CheatManager.God
	void Ghost(); // Function Engine.CheatManager.Ghost
	void FreezeFrame(float Delay); // Function Engine.CheatManager.FreezeFrame
	void Fly(); // Function Engine.CheatManager.Fly
	void FlushLog(); // Function Engine.CheatManager.FlushLog
	void EnableDebugCamera(); // Function Engine.CheatManager.EnableDebugCamera
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState
	void DisableDebugCamera(); // Function Engine.CheatManager.DisableDebugCamera
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget
	void DestroyServerStatReplicator(); // Function Engine.CheatManager.DestroyServerStatReplicator
	void DestroyPawns(APawn* aClass); // Function Engine.CheatManager.DestroyPawns
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget
	void DestroyAll(AActor* aClass); // Function Engine.CheatManager.DestroyAll
	void DebugCapsuleSweepSize(float HalfHeight, float Radius); // Function Engine.CheatManager.DebugCapsuleSweepSize
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn
	void DebugCapsuleSweepComplex(bool bTraceComplex); // Function Engine.CheatManager.DebugCapsuleSweepComplex
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear
	void DebugCapsuleSweepChannel(enum class ECollisionChannel Channel); // Function Engine.CheatManager.DebugCapsuleSweepChannel
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep
	void DamageTarget(float DamageAmount); // Function Engine.CheatManager.DamageTarget
	void CheatScript(struct FString ScriptName); // Function Engine.CheatManager.CheatScript
	void ChangeSize(float F); // Function Engine.CheatManager.ChangeSize
	void BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString& GoString, struct FString& LocString); // Function Engine.CheatManager.BugItStringCreator
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Engine.CheatManager.BugItGo
	void BugIt(struct FString ScreenShotDescription); // Function Engine.CheatManager.BugIt
};

//verything below here is untested and should likely be removed
class UMOCheatManager : public UCheatManager
{

public:
	char pad_136[48];  // Offset: 136 Size: 48



	// Functions 
public:
	void UnmuteAllPlayers(); // Function MortalOnline2.MOCheatManager.UnmuteAllPlayers
	void UnbanPlayer(int64_t SteamID); // Function MortalOnline2.MOCheatManager.UnbanPlayer
	void TriggerCheat(); // Function MortalOnline2.MOCheatManager.TriggerCheat
	void ToggleStationaryCamera(); // Function MortalOnline2.MOCheatManager.ToggleStationaryCamera
	void TestVendor(); // Function MortalOnline2.MOCheatManager.TestVendor
	void TestTrinket(); // Function MortalOnline2.MOCheatManager.TestTrinket
	void TestTriggerGMUserPetition(bool bSameServer); // Function MortalOnline2.MOCheatManager.TestTriggerGMUserPetition
	void TestTrade(); // Function MortalOnline2.MOCheatManager.TestTrade
	void TestTask(); // Function MortalOnline2.MOCheatManager.TestTask
	void TestStunTimer(struct FString sReason, float fTimer); // Function MortalOnline2.MOCheatManager.TestStunTimer
	void TestStables(); // Function MortalOnline2.MOCheatManager.TestStables
	void TestSpellbook(); // Function MortalOnline2.MOCheatManager.TestSpellbook
	void TestSocial(); // Function MortalOnline2.MOCheatManager.TestSocial
	void TestReadableNote(); // Function MortalOnline2.MOCheatManager.TestReadableNote
	void TestReadableBook(); // Function MortalOnline2.MOCheatManager.TestReadableBook
	void TestPets(); // Function MortalOnline2.MOCheatManager.TestPets
	void TestPetBroker(); // Function MortalOnline2.MOCheatManager.TestPetBroker
	void TestOnFireReleased(); // Function MortalOnline2.MOCheatManager.TestOnFireReleased
	void TestMyrlandCitySelect(); // Function MortalOnline2.MOCheatManager.TestMyrlandCitySelect
	void TestMercyModeOnTarget(); // Function MortalOnline2.MOCheatManager.TestMercyModeOnTarget
	void TestMercyModeOnSelf(); // Function MortalOnline2.MOCheatManager.TestMercyModeOnSelf
	void TestMap(); // Function MortalOnline2.MOCheatManager.TestMap
	void TestMail(); // Function MortalOnline2.MOCheatManager.TestMail
	void TestMac(); // Function MortalOnline2.MOCheatManager.TestMac
	void TestJournal(); // Function MortalOnline2.MOCheatManager.TestJournal
	void TestHavenMap(); // Function MortalOnline2.MOCheatManager.TestHavenMap
	void TestHavenCitySelect(); // Function MortalOnline2.MOCheatManager.TestHavenCitySelect
	void TestGuildStone(); // Function MortalOnline2.MOCheatManager.TestGuildStone
	void TestFishingEquipment(); // Function MortalOnline2.MOCheatManager.TestFishingEquipment
	void TestFanfareTitle(); // Function MortalOnline2.MOCheatManager.TestFanfareTitle
	void TestFanfareNegativeStanding(); // Function MortalOnline2.MOCheatManager.TestFanfareNegativeStanding
	void TestFanfareJournal(); // Function MortalOnline2.MOCheatManager.TestFanfareJournal
	void TestFanfareCladeLevel(); // Function MortalOnline2.MOCheatManager.TestFanfareCladeLevel
	void TestFanfareBossName(); // Function MortalOnline2.MOCheatManager.TestFanfareBossName
	void TestDestroyTarget(); // Function MortalOnline2.MOCheatManager.TestDestroyTarget
	void TestDamageFeedback(struct FString sHitType); // Function MortalOnline2.MOCheatManager.TestDamageFeedback
	void TestCrash(); // Function MortalOnline2.MOCheatManager.TestCrash
	void TestClientEffectRemove(struct FString sClientEffect); // Function MortalOnline2.MOCheatManager.TestClientEffectRemove
	void TestClientEffect(struct FString sClientEffect); // Function MortalOnline2.MOCheatManager.TestClientEffect
	void TestBuildable(); // Function MortalOnline2.MOCheatManager.TestBuildable
	void TestBroker(); // Function MortalOnline2.MOCheatManager.TestBroker
	void TestBounty(); // Function MortalOnline2.MOCheatManager.TestBounty
	void TeleportTo(struct FString sCoordinates); // Function MortalOnline2.MOCheatManager.TeleportTo
	void StressTestServer(); // Function MortalOnline2.MOCheatManager.StressTestServer
	void SpawnNPC(); // Function MortalOnline2.MOCheatManager.SpawnNPC
	void SpawnMachine(); // Function MortalOnline2.MOCheatManager.SpawnMachine
	void SpawnItem(); // Function MortalOnline2.MOCheatManager.SpawnItem
	void SpawnAI(); // Function MortalOnline2.MOCheatManager.SpawnAI
	void ShowHorridUI(); // Function MortalOnline2.MOCheatManager.ShowHorridUI
	void ShowCustomHint(struct FString HintText); // Function MortalOnline2.MOCheatManager.ShowCustomHint
	void SetWind(int32_t iSet); // Function MortalOnline2.MOCheatManager.SetWind
	void SetWeather(int32_t iType); // Function MortalOnline2.MOCheatManager.SetWeather
	void SetVoipOwnVoiceFeedbackFromServerEnabled(bool bEnable); // Function MortalOnline2.MOCheatManager.SetVoipOwnVoiceFeedbackFromServerEnabled
	void SetUIScale(float CustomUIScale); // Function MortalOnline2.MOCheatManager.SetUIScale
	void SetTimeOfDaySpeed(float fSpeed); // Function MortalOnline2.MOCheatManager.SetTimeOfDaySpeed
	void SetTimeOfDayOffset(float fOffset); // Function MortalOnline2.MOCheatManager.SetTimeOfDayOffset
	void SetTimeOfDay(float fTimeOfDay); // Function MortalOnline2.MOCheatManager.SetTimeOfDay
	void SetTemprature(int32_t iSet); // Function MortalOnline2.MOCheatManager.SetTemprature
	void SetServer(int32_t iServer); // Function MortalOnline2.MOCheatManager.SetServer
	void SetNightvision(float fDistance); // Function MortalOnline2.MOCheatManager.SetNightvision
	void SetHumidity(int32_t iSet); // Function MortalOnline2.MOCheatManager.SetHumidity
	void SetContinent(int32_t iContinent); // Function MortalOnline2.MOCheatManager.SetContinent
	void SetCharacterScale(float fNewCharacterScale); // Function MortalOnline2.MOCheatManager.SetCharacterScale
	void ServerConsole(struct FString sTellB); // Function MortalOnline2.MOCheatManager.ServerConsole
	void ServerBoostMeEverything(); // Function MortalOnline2.MOCheatManager.ServerBoostMeEverything
	void ServerAvatarClientDamage(struct FString sDamage); // Function MortalOnline2.MOCheatManager.ServerAvatarClientDamage
	void RespawnLocalCharacter(bool bResurrect); // Function MortalOnline2.MOCheatManager.RespawnLocalCharacter
	void ResetHints(); // Function MortalOnline2.MOCheatManager.ResetHints
	void ResetAchievements(); // Function MortalOnline2.MOCheatManager.ResetAchievements
	void PlaySynchedEmote(); // Function MortalOnline2.MOCheatManager.PlaySynchedEmote
	void PlacementModeUpgrade(); // Function MortalOnline2.MOCheatManager.PlacementModeUpgrade
	void PlacementModeDecoration(); // Function MortalOnline2.MOCheatManager.PlacementModeDecoration
	void PlacementMode(); // Function MortalOnline2.MOCheatManager.PlacementMode
	void MountAvatarServer(); // Function MortalOnline2.MOCheatManager.MountAvatarServer
	void MortalVolume(float fX, float fY, float fZ, float fYaw); // Function MortalOnline2.MOCheatManager.MortalVolume
	void MortalOctree(float fX, float fY, float fZ, float fLeafSize); // Function MortalOnline2.MOCheatManager.MortalOctree
	void MOGoBotCommandStopFire(float fTime); // Function MortalOnline2.MOCheatManager.MOGoBotCommandStopFire
	void MOGoBotCommandFire(float fTime); // Function MortalOnline2.MOCheatManager.MOGoBotCommandFire
	void MOGoBotCommandAltStopFire(float fTime); // Function MortalOnline2.MOCheatManager.MOGoBotCommandAltStopFire
	void MOGoBotCommandAltModifierReleased(float fTime); // Function MortalOnline2.MOCheatManager.MOGoBotCommandAltModifierReleased
	void MOGoBotCommandAltModifierPressed(float fTime); // Function MortalOnline2.MOCheatManager.MOGoBotCommandAltModifierPressed
	void MOGoBotCommandAltFire(float fTime); // Function MortalOnline2.MOCheatManager.MOGoBotCommandAltFire
	void MODebugTargetManager(); // Function MortalOnline2.MOCheatManager.MODebugTargetManager
	void MakeMe(struct FString SexOrClade); // Function MortalOnline2.MOCheatManager.MakeMe
	void MagicDumpCachedSpells(); // Function MortalOnline2.MOCheatManager.MagicDumpCachedSpells
	void IncreasePing(float PingSeconds); // Function MortalOnline2.MOCheatManager.IncreasePing
	void ForceShowHint(int32_t hintEnumIndex); // Function MortalOnline2.MOCheatManager.ForceShowHint
	void ForceLogout(); // Function MortalOnline2.MOCheatManager.ForceLogout
	void ForceLogin(); // Function MortalOnline2.MOCheatManager.ForceLogin
	void FakeLogin(const char* sNewFakeID); // Function MortalOnline2.MOCheatManager.FakeLogin
	void DismountAvatarServer(); // Function MortalOnline2.MOCheatManager.DismountAvatarServer
	void DebugTraceLines(bool bDebug); // Function MortalOnline2.MOCheatManager.DebugTraceLines
	void CraftingShield(); // Function MortalOnline2.MOCheatManager.CraftingShield
	void CraftingPetEquipment(); // Function MortalOnline2.MOCheatManager.CraftingPetEquipment
	void CraftingMelee(); // Function MortalOnline2.MOCheatManager.CraftingMelee
	void CraftingBow(); // Function MortalOnline2.MOCheatManager.CraftingBow
	void CraftingArmor(); // Function MortalOnline2.MOCheatManager.CraftingArmor
	void Cooking(); // Function MortalOnline2.MOCheatManager.Cooking
	void CastSpellbyID(int32_t iSpellID); // Function MortalOnline2.MOCheatManager.CastSpellbyID
	void CastSpell(struct FString sSpellGuid); // Function MortalOnline2.MOCheatManager.CastSpell
	void BanPlayer(int64_t SteamID); // Function MortalOnline2.MOCheatManager.BanPlayer
	void Alchemy(); // Function MortalOnline2.MOCheatManager.Alchemy
	void AiMode(); // Function MortalOnline2.MOCheatManager.AiMode
	void AddWind(int32_t iAdd); // Function MortalOnline2.MOCheatManager.AddWind
	void AddTemprature(int32_t iAdd); // Function MortalOnline2.MOCheatManager.AddTemprature
	void AddHumidity(int32_t iAdd); // Function MortalOnline2.MOCheatManager.AddHumidity
};

class UDynamicSubsystem : public USubsystem
{

public:



	// Functions 
public:
};

class UEngineSubsystem : public UDynamicSubsystem
{

public:



	// Functions 
public:
};

class UMOEngineSubsystem : public UEngineSubsystem
{

public:
	char pad_48[32];  // Offset: 48 Size: 32
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bAtlasIsInitialized : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7
	struct AMOGameMode* pPIEGameMode;  // Offset: 88 Size: 8
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bPIERequestedLogout : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bIsPlayInEditor : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bStandaloneDevAutoLogin : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bPIEAutoLogin : 1;  // Offset: 99 Size: 1
	int32_t PIEAutoLoginUsernameId;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPIEStartAtEditorCameraLocation : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7
	char PIEDevEntryServer[16];  // Offset: 112 Size: 16
	char PIEMyrlandServer[16];  // Offset: 128 Size: 16
	char pad_144[160];  // Offset: 144 Size: 160
	int32_t LoginServerListEntryId;  // Offset: 304 Size: 4
	char pad_308[116];  // Offset: 308 Size: 116
	int32_t m_iAltServer;  // Offset: 424 Size: 4
	char pad_428[4];  // Offset: 428 Size: 4
	struct AMOPlayerController* pPlayerController;  // Offset: 432 Size: 8
	struct UMOGameInstance* pGameInstance;  // Offset: 440 Size: 8
	char pad_448[8];  // Offset: 448 Size: 8
	char TimerHandle_DelayedTrinketUpdate[8];  // Offset: 456 Size: 8
	char pad_464[32];  // Offset: 464 Size: 32
	struct TArray<struct AMOCrossNodeActor*> vCrossNodeActors;  // Offset: 496 Size: 16
	char pad_512[8];  // Offset: 512 Size: 8



	// Functions 
public:
	void SetMOPlayerController(struct AMOPlayerController* pNewPlayerController); // Function MortalOnline2.MOEngineSubsystem.SetMOPlayerController
	void Quit(); // Function MortalOnline2.MOEngineSubsystem.Quit
	void OnPIEStarted(struct AMOGameMode* pPIEMOGameMode, struct AMOPlayerController* pPIEController); // Function MortalOnline2.MOEngineSubsystem.OnPIEStarted
	void OnPIEShutdown(); // Function MortalOnline2.MOEngineSubsystem.OnPIEShutdown
	void LogoutAndQuit(); // Function MortalOnline2.MOEngineSubsystem.LogoutAndQuit
	void Logout(bool bForceRightAway); // Function MortalOnline2.MOEngineSubsystem.Logout
	bool LogIn(int32_t ServerListEntryOverrideID, struct FString UsernameOverride, struct FString ServerIPOverride, bool bReconnect); // Function MortalOnline2.MOEngineSubsystem.LogIn
	bool IsAtlasLoggedIn(); // Function MortalOnline2.MOEngineSubsystem.IsAtlasLoggedIn
	bool IsAtlasConnected(); // Function MortalOnline2.MOEngineSubsystem.IsAtlasConnected
	struct TArray<struct FLoginServerInfo> GetLoginServerList(); // Function MortalOnline2.MOEngineSubsystem.GetLoginServerList
	struct FString GetAtlasUsername(); // Function MortalOnline2.MOEngineSubsystem.GetAtlasUsername
	void DropConnection(); // Function MortalOnline2.MOEngineSubsystem.DropConnection
};


class UMOGameInstance : public UGameInstance
{

public:
	char  cUIMainWidgetClass[40];  // Offset: 424 Size: [40]
	char  cLoginScreenClass[40];  // Offset: 464 Size: 40
	char  cLoadingScreenClass[40];  // Offset: 504 Size: 40
	char  cOptionsClass[40];  // Offset: 544 Size: 40
	char  cFloatingMarkerCanvasClass[40];  // Offset: 584 Size: 40
	struct UUserWidget* cMoveWindowClass;  // Offset: 624 Size: 8
	struct UUserWidget* cSkillTooltipClass;  // Offset: 632 Size: 8
	struct UUserWidget* cPetSkillTooltipClass;  // Offset: 640 Size: 8
	struct UUserWidget* cItemTooltipClass;  // Offset: 648 Size: 8
	struct UUserWidget* cButtonTooltipClass;  // Offset: 656 Size: 8
	struct UUserWidget* cSpellTooltipClass;  // Offset: 664 Size: 8
	char  cPlayerCharacterClass[40];  // Offset: 672 Size: 40
	char  cSpiritCharacterClass[40];  // Offset: 712 Size: 40
	char  cGamemasterCharacterClass[40];  // Offset: 752 Size: 40
	char  cLevelStreamingTerrainGridClass[40];  // Offset: 792 Size: 40
	struct TArray<struct UMOUserWidget*> vResetableWidgets[40];  // Offset: 832 Size: 16
	char pad_848[8];  // Offset: 848 Size: 8
	char OnReturnToMainMenu[16];  // Offset: 856 Size: 16
	struct UUserWidget* pSpawnedMoveWindowWidget;  // Offset: 872 Size: 8
	struct USoundClass* pMasterSoundClass;  // Offset: 880 Size: 8
	struct USoundMix* pMasterSoundMix;  // Offset: 888 Size: 8
	struct USoundClass* pMusicSoundClass;  // Offset: 896 Size: 8
	struct USoundMix* pMusicSoundMix;  // Offset: 904 Size: 8
	struct USoundClass* pAmbientSoundClass;  // Offset: 912 Size: 8
	struct USoundMix* pAmbientSoundMix;  // Offset: 920 Size: 8
	struct USoundClass* pSFXSoundClass;  // Offset: 928 Size: 8
	struct USoundMix* pSFXSoundMix;  // Offset: 936 Size: 8
	struct USoundClass* pUserInterfaceSoundClass;  // Offset: 944 Size: 8
	struct USoundMix* pUserInterfaceSoundMix;  // Offset: 952 Size: 8
	struct USoundClass* pCharacterSoundClass;  // Offset: 960 Size: 8
	struct USoundMix* pCharacterSoundMix;  // Offset: 968 Size: 8
	struct USoundClass* pFootstepsSoundClass;  // Offset: 976 Size: 8
	struct USoundMix* pFootstepsSoundMix;  // Offset: 984 Size: 8
	char pDataTable_WeatherDataTable[40];  // Offset: 992 Size: 40
	char pDataTable_SkyCreatorWeatherDataTable[40];  // Offset: 1032 Size: 40
	char  cLightningStrikeClass[40];  // Offset: 1072 Size: 40
	char pWeatherFoliageParameterCollection[40];  // Offset: 1112 Size: 40
	char pNightParameterCollection[40];  // Offset: 1152 Size: 40
	char pWeatherParameterCollection[40];  // Offset: 1192 Size: 40
	struct TArray<AActor*> PlacementBlockingActors;  // Offset: 1232 Size: 16
	struct TArray<struct UStaticMesh*> PlacementBlockingStaticMeshes;  // Offset: 1248 Size: 16
	char  cPlacementQuestWidgetClass[40];  // Offset: 1264 Size: 40
	struct UTexture2D* pPlacementQuestTexture;  // Offset: 1304 Size: 8
	struct UMOSaveDataInstance* pUISaveDataInstance;  // Offset: 1312 Size: 8
	char pDataTableCladeGifts_Human_SoftPtr[40];  // Offset: 1320 Size: 40
	char pDataTableCladeGifts_Alvarin_SoftPtr[40];  // Offset: 1360 Size: 40
	char pDataTableCladeGifts_Oghmir_SoftPtr[40];  // Offset: 1400 Size: 40
	char pDataTableCladeGifts_Thursar_SoftPtr[40];  // Offset: 1440 Size: 40
	char pDataTableHintDefinitions_SoftPtr[40];  // Offset: 1480 Size: 40
	char pCharacterTitlesDefinitions_SoftPtr[40];  // Offset: 1520 Size: 40
	char pDataTableContentInfoSpells_SoftPtr[40];  // Offset: 1560 Size: 40
	char pDataTableJournal_SoftPtr[40];  // Offset: 1600 Size: 40
	char pDataTableDecorations_SoftPtr[40];  // Offset: 1640 Size: 40
	struct UDataTable* pDataTableCladeGifts_Human;  // Offset: 1680 Size: 8
	struct UDataTable* pDataTableCladeGifts_Alvarin;  // Offset: 1688 Size: 8
	struct UDataTable* pDataTableCladeGifts_Oghmir;  // Offset: 1696 Size: 8
	struct UDataTable* pDataTableCladeGifts_Thursar;  // Offset: 1704 Size: 8
	struct UDataTable* pDataTableHintDefinitions;  // Offset: 1712 Size: 8
	struct UDataTable* pCharacterTitlesDefinitions;  // Offset: 1720 Size: 8
	struct UDataTable* pDataTableContentInfoSpells;  // Offset: 1728 Size: 8
	struct UDataTable* pDataTableJournal;  // Offset: 1736 Size: 8
	struct UDataTable* pDataTableDecorations;  // Offset: 1744 Size: 8



	// Functions 
public:
	struct UDataTable* TryGetSpellsDataTable(); // Function MortalOnline2.MOGameInstance.TryGetSpellsDataTable
	struct UDataTable* TryGetJournalDataTable(); // Function MortalOnline2.MOGameInstance.TryGetJournalDataTable
	struct UDataTable* TryGetHintDefinitionsTable(); // Function MortalOnline2.MOGameInstance.TryGetHintDefinitionsTable
	struct UDataTable* TryGetCharacterTitlesDataTable(); // Function MortalOnline2.MOGameInstance.TryGetCharacterTitlesDataTable
	void StopUserDraggingWindow(); // Function MortalOnline2.MOGameInstance.StopUserDraggingWindow
	void SetAllowUserDragWindow(bool bAllow); // Function MortalOnline2.MOGameInstance.SetAllowUserDragWindow
	void SaveUISettings(); // Function MortalOnline2.MOGameInstance.SaveUISettings
	void ReturnToMainMenu(); // Function MortalOnline2.MOGameInstance.ReturnToMainMenu
	void ResetUI(); // Function MortalOnline2.MOGameInstance.ResetUI
	void ReloadWidgetPositions(); // Function MortalOnline2.MOGameInstance.ReloadWidgetPositions
	void ReInitUISaveGame(); // Function MortalOnline2.MOGameInstance.ReInitUISaveGame
	void OnWindowFocusChanged(bool bIsFocused); // Function MortalOnline2.MOGameInstance.OnWindowFocusChanged
	bool LoadUISettings(); // Function MortalOnline2.MOGameInstance.LoadUISettings
	void InitUISaveGame(); // Function MortalOnline2.MOGameInstance.InitUISaveGame
	struct UMOSaveDataInstance* GetUISaveDataInstance(); // Function MortalOnline2.MOGameInstance.GetUISaveDataInstance
	struct UDataTable* GetCladeGiftDataTable(enum class ESpecies Clade); // Function MortalOnline2.MOGameInstance.GetCladeGiftDataTable
	struct FString GetBoundKeyReadable(struct FName sActionName); // Function MortalOnline2.MOGameInstance.GetBoundKeyReadable
};


class AMOPlayerController : public APlayerController
{

public:
	char pad_1392[128];  // Offset: 1392 Size: 128
	struct USoundCue* pHeartBeat;  // Offset: 1520 Size: 8
	struct USoundCue* pTakeFallDamage;  // Offset: 1528 Size: 8
	struct UCurveFloat* pChargeDamageScaleCurve;  // Offset: 1536 Size: 8
	struct UMaterialParameterCollection* pDayNightParamCollection;  // Offset: 1544 Size: 8
	char pad_1552[4];  // Offset: 1552 Size: 4
	char LeftEquipmentStats[40];  // Offset: 1556 Size: 40
	char RightEquipmentStats[40];  // Offset: 1596 Size: 40
	char pad_1636_1 : 7;  // Offset: 1636 Size: 1
	bool bReplicateJumpInAtlas : 1;  // Offset: 1636 Size: 1
	char pad_1637[3];  // Offset: 1637 Size: 3
	float BaseTurnRate;  // Offset: 1640 Size: 4
	float BaseLookUpRate;  // Offset: 1644 Size: 4
	char pad_1648[112];  // Offset: 1648 Size: 112
	char pad_1760_1 : 7;  // Offset: 1760 Size: 1
	bool bIsLoadingOrTeleporting : 1;  // Offset: 1760 Size: 1
	char pad_1761[7];  // Offset: 1761 Size: 7
	struct ACameraActor* pStationaryCamera;  // Offset: 1768 Size: 8
	struct UMOGameUserSettings* pMOGameUserSettings;  // Offset: 1776 Size: 8
	struct UMaterialParameterCollection* pUIParameterCollection;  // Offset: 1784 Size: 8
	struct TArray<struct UMOClientEffect*> vClientEffects;  // Offset: 1792 Size: 16
	struct UDataTable* pDataTableClientEffects;  // Offset: 1808 Size: 8
	struct UMOStatManager* pStatManager;  // Offset: 1816 Size: 8
	struct UMOHintManager* pHintManager;  // Offset: 1824 Size: 8
	struct UMOTargetManager* pTargetManager;  // Offset: 1832 Size: 8
	struct UMOCombatSystem* pCombatSystem;  // Offset: 1840 Size: 8
	struct UMOCombatSystem* pLastActiveCombatSystem;  // Offset: 1848 Size: 8
	struct UMOCombatSystemRanged* pRangedCombatSystem;  // Offset: 1856 Size: 8
	struct UMOCombatSystemMelee* pMeleeCombatSystem;  // Offset: 1864 Size: 8
	struct UMOCombatSystemMagic* pMagicCombatSystem;  // Offset: 1872 Size: 8
	struct UMOCombatSystemFishing* pFishingCombatSystem;  // Offset: 1880 Size: 8
	struct AActor* pWaypointActor;  // Offset: 1888 Size: 8
	struct UMOPreviewMode* pPreviewMode;  // Offset: 1896 Size: 8
	struct UUserWidget* LoadingWidget;  // Offset: 1904 Size: 8
	char pad_1912[224];  // Offset: 1912 Size: 224
	struct AActor* pHoldUseActor;  // Offset: 2136 Size: 8
	char pad_2144[64];  // Offset: 2144 Size: 64
	struct UAudioComponent* pBreathingAudioComponent;  // Offset: 2208 Size: 8
	struct UAudioComponent* pHeartBeatAudioComponent;  // Offset: 2216 Size: 8
	char pad_2224[32];  // Offset: 2224 Size: 32



	// Functions 
public:
	void UseNearestLootDelayed(struct AMOAvatarStaticMeshLoot* pNearestLoot); // Function MortalOnline2.MOPlayerController.UseNearestLootDelayed
	void UseActionBar(int32_t iIndex); // Function MortalOnline2.MOPlayerController.UseActionBar
	void UpdateEquipmentProperties(enum class EHandSlot eEquipmentHand); // Function MortalOnline2.MOPlayerController.UpdateEquipmentProperties
	void ToggleMouseCursor(); // Function MortalOnline2.MOPlayerController.ToggleMouseCursor
	void StopHoldingUseActionBarSlot(int32_t iIndex); // Function MortalOnline2.MOPlayerController.StopHoldingUseActionBarSlot
	void StartHoldingUseActionBarSlot(int32_t iIndex); // Function MortalOnline2.MOPlayerController.StartHoldingUseActionBarSlot
	void ShowMouseCursor(bool bIsVisible); // Function MortalOnline2.MOPlayerController.ShowMouseCursor
	void ShowMessageBox(enum class EMessageBoxType eInType, struct FString rsMessage, struct FString rsCaption); // Function MortalOnline2.MOPlayerController.ShowMessageBox
	void ShowChatMessage(struct FString sChatMessage); // Function MortalOnline2.MOPlayerController.ShowChatMessage
	void SetMouseCursorToCenterOfViewport(); // Function MortalOnline2.MOPlayerController.SetMouseCursorToCenterOfViewport
	void SendMessageToChat(struct FString sChatMessage); // Function MortalOnline2.MOPlayerController.SendMessageToChat
	void OnLoadingScreenEnableInput(bool bEnableInput); // Function MortalOnline2.MOPlayerController.OnLoadingScreenEnableInput
	bool IsVREnabled(); // Function MortalOnline2.MOPlayerController.IsVREnabled
	struct AActor* GetWaypointActor(); // Function MortalOnline2.MOPlayerController.GetWaypointActor
	bool GetWalkModifier(); // Function MortalOnline2.MOPlayerController.GetWalkModifier
	struct UMOGameUserSettings* GetMOGameUserSettings(); // Function MortalOnline2.MOPlayerController.GetMOGameUserSettings
	struct FMOEquipmentStats GetEquipmentStats(enum class EHandSlot eEquipmentHand); // Function MortalOnline2.MOPlayerController.GetEquipmentStats
	bool GetCtrlPressed(); // Function MortalOnline2.MOPlayerController.GetCtrlPressed
	struct AMOCharacter* GetAttachedToAvatarCharacter(); // Function MortalOnline2.MOPlayerController.GetAttachedToAvatarCharacter
	bool GetAltPressed(); // Function MortalOnline2.MOPlayerController.GetAltPressed
	void ChatMessage(struct FString& sChatMessage); // Function MortalOnline2.MOPlayerController.ChatMessage
	void ActionBarLayerUp(int32_t iIndex); // Function MortalOnline2.MOPlayerController.ActionBarLayerUp
	void ActionBarLayerDown(int32_t iIndex); // Function MortalOnline2.MOPlayerController.ActionBarLayerDown
};

class AMOCharacter : public ACharacter
{

public:
	char pad_1216_1 : 7;  // Offset: 1216 Size: 1
	bool bIsHiddenPlaceholderProxy : 1;  // Offset: 1216 Size: 1
	char pad_1217_1 : 7;  // Offset: 1217 Size: 1
	bool bIsFallbackCharacter : 1;  // Offset: 1217 Size: 1
	char pad_1218[2];  // Offset: 1218 Size: 2
	int32_t LocalAvatarID;  // Offset: 1220 Size: 4
	char pad_1224_1 : 7;  // Offset: 1224 Size: 1
	bool bRandomizeAppearance : 1;  // Offset: 1224 Size: 1
	char pad_1225_1 : 7;  // Offset: 1225 Size: 1
	bool bRandomizeClade : 1;  // Offset: 1225 Size: 1
	char pad_1226_1 : 7;  // Offset: 1226 Size: 1
	bool bRandomizeRace : 1;  // Offset: 1226 Size: 1
	char pad_1227_1 : 7;  // Offset: 1227 Size: 1
	bool bRandomizeArmor : 1;  // Offset: 1227 Size: 1
	char pad_1228_1 : 7;  // Offset: 1228 Size: 1
	bool bRandomizeEquipment : 1;  // Offset: 1228 Size: 1
	char pad_1229[3];  // Offset: 1229 Size: 3
	int32_t RandomStream_BaseSeed;  // Offset: 1232 Size: 4
	float fDefaultHeightOverride;  // Offset: 1236 Size: 4
	char pad_1240_1 : 7;  // Offset: 1240 Size: 1
	bool bAvatarHiddenForSpawn : 1;  // Offset: 1240 Size: 1
	char pad_1241_1 : 7;  // Offset: 1241 Size: 1
	bool bPreviewProxyInEditor : 1;  // Offset: 1241 Size: 1
	char pad_1242_1 : 7;  // Offset: 1242 Size: 1
	bool bOnlyUseLookAtForActiveTarget : 1;  // Offset: 1242 Size: 1
	char pad_1243[5];  // Offset: 1243 Size: 5
	struct TArray<struct UGFurComponent*> FurComponents;  // Offset: 1248 Size: 16
	float fTickLODTimer;  // Offset: 1264 Size: 4
	float fLookAtTickTimer;  // Offset: 1268 Size: 4
	char ExtraColliderShapeInfo[24];  // Offset: 1272 Size: 24
	struct TArray<struct UShapeComponent*> CachedExtraColliderShapes;  // Offset: 1296 Size: 16
	char pad_1312[18];  // Offset: 1312 Size: 18
	char pad_1330_1 : 7;  // Offset: 1330 Size: 1
	bool bIsInRagdoll : 1;  // Offset: 1330 Size: 1
	char pad_1331[1];  // Offset: 1331 Size: 1
	float fMaxDistanceForFootStepTraces;  // Offset: 1332 Size: 4
	char pad_1336[8];  // Offset: 1336 Size: 8
	struct AMOCharacter* LookAtCharacter;  // Offset: 1344 Size: 8
	char pad_1352_1 : 7;  // Offset: 1352 Size: 1
	bool bCanSpawnOnRitualCircle : 1;  // Offset: 1352 Size: 1
	char pad_1353_1 : 7;  // Offset: 1353 Size: 1
	bool bEnableDistanceBasedOptimizations : 1;  // Offset: 1353 Size: 1
	char pad_1354[6];  // Offset: 1354 Size: 6
	struct AActor* LookAtActorOverrideCinematic;  // Offset: 1360 Size: 8
	struct FName LookAtTargetBoneName;  // Offset: 1368 Size: 8
	char DefaultAppearance[712];  // Offset: 1376 Size: 712
	char BodyShape[20];  // Offset: 2088 Size: 20
	char pad_2108[4];  // Offset: 2108 Size: 4
	struct UMOCharacterEffects* pEffects;  // Offset: 2112 Size: 8
	struct UMOCharacterProjectileCreation* pProjectileCreation;  // Offset: 2120 Size: 8
	struct UMOEtherWorldCharacterSystem* pEtherWorldSystem;  // Offset: 2128 Size: 8
	float fRagdollDurationBeforeDeathSequence;  // Offset: 2136 Size: 4
	float fLoginSequenceDuration;  // Offset: 2140 Size: 4
	float fLogoutSequenceDuration;  // Offset: 2144 Size: 4
	float fDeathSequenceDuration;  // Offset: 2148 Size: 4
	float fEnterOrLeaveWorldSequenceDuration;  // Offset: 2152 Size: 4
	char pad_2156_1 : 7;  // Offset: 2156 Size: 1
	bool bIsInEtherworld : 1;  // Offset: 2156 Size: 1
	char pad_2157[3];  // Offset: 2157 Size: 3
	int32_t CustomDepthRenderChannel;  // Offset: 2160 Size: 4
	char pad_2164[4];  // Offset: 2164 Size: 4
	struct TArray<struct FMOSynchronizedFullBodyAnimationEntry> FullBodyAnimationQueue;  // Offset: 2168 Size: 16
	char pad_2184[16];  // Offset: 2184 Size: 16
	char pad_2200_1 : 7;  // Offset: 2200 Size: 1
	bool bIsInConstruction : 1;  // Offset: 2200 Size: 1
	char pad_2201_1 : 7;  // Offset: 2201 Size: 1
	bool bIsSpawning : 1;  // Offset: 2201 Size: 1
	char pad_2202[6];  // Offset: 2202 Size: 6
	struct UAnimSequenceBase* SpawnAnimation;  // Offset: 2208 Size: 8
	struct UAnimSequenceBase* RitualSpawnAnimation;  // Offset: 2216 Size: 8
	char ReactionAnimations[64];  // Offset: 2224 Size: 64
	char  AttackAnimations[112];  // Offset: 2288 Size: 112
	char  DominantFullBodyAnimation[144];  // Offset: 2400 Size: 144
	struct TArray<struct FMOSynchronizedFullBodyAnimationEntry> ActiveFullBodyAnimations;  // Offset: 2544 Size: 16
	char pad_2560_1 : 7;  // Offset: 2560 Size: 1
	bool bIsInFirstPerson : 1;  // Offset: 2560 Size: 1
	char LastAttackAnimationDirection;  // Offset: 2561 Size: 1
	char pad_2562[6];  // Offset: 2562 Size: 6
	struct UMODataAssetWeaponAnimations* ActiveWeaponAnimationSet;  // Offset: 2568 Size: 8
	struct UMODataAssetMagicAnimations* ActiveMagicAnimationSet;  // Offset: 2576 Size: 8
	float OnServerVerify_CombatReleaseAnimDuration;  // Offset: 2584 Size: 4
	float OnServerVerify_CombatReleaseTimeStamp;  // Offset: 2588 Size: 4
	char eLastMagicReleaseType;  // Offset: 2592 Size: 1
	char pad_2593[7];  // Offset: 2593 Size: 7
	struct UMOCameraComponent* CameraComponent;  // Offset: 2600 Size: 8
	struct UMOBodyManagerComponent* pBodyManagerComponent;  // Offset: 2608 Size: 8
	struct UMOArmorManagerComponent* pArmorManagerComponent;  // Offset: 2616 Size: 8
	struct UMOEquipmentManagerComponent* EquipmentManagerComponent;  // Offset: 2624 Size: 8
	struct UMOCharacterCompositionComponent* pCompositionComponent;  // Offset: 2632 Size: 8
	char vFootStepSounds[80];  // Offset: 2640 Size: 80
	struct FName sCameraBoneName;  // Offset: 2720 Size: 8
	char pad_2728[8];  // Offset: 2728 Size: 8
	struct UMOWidgetComponentChatBubble* cChatBubbleWidgetComponentClass;  // Offset: 2736 Size: 8
	char sJournalRowNameToUnlock[16];  // Offset: 2744 Size: 16
	char pad_2760[128];  // Offset: 2760 Size: 128
	struct USoundCue* pSoundCueUse;  // Offset: 2888 Size: 8
	struct USoundCue* pSoundCueUseAlternative;  // Offset: 2896 Size: 8
	char sSteamStatOnKill[16];  // Offset: 2904 Size: 16
	char pad_2920[1];  // Offset: 2920 Size: 1
	char pad_2921_1 : 7;  // Offset: 2921 Size: 1
	bool bMercyMode : 1;  // Offset: 2921 Size: 1
	char pad_2922[42];  // Offset: 2922 Size: 42
	char pad_2964_1 : 7;  // Offset: 2964 Size: 1
	bool bOnlyDamageMaterial : 1;  // Offset: 2964 Size: 1
	char SpawnSequence;  // Offset: 2965 Size: 1
	char pad_2966_1 : 7;  // Offset: 2966 Size: 1
	bool bIsUndead : 1;  // Offset: 2966 Size: 1
	char pad_2967_1 : 7;  // Offset: 2967 Size: 1
	bool bIsInCombat : 1;  // Offset: 2967 Size: 1
	char pad_2968[72];  // Offset: 2968 Size: 72
	struct UMOCombatSystem* pActiveCombat;  // Offset: 3040 Size: 8
	struct UMOCombatSystemMelee* pMeleeCombat;  // Offset: 3048 Size: 8
	struct UMOCombatSystemRanged* pRangedCombat;  // Offset: 3056 Size: 8
	char pad_3064[16];  // Offset: 3064 Size: 16
	float fCharacterHeight;  // Offset: 3080 Size: 4
	float fCharacterBindHeight;  // Offset: 3084 Size: 4
	float fCharacterScale;  // Offset: 3088 Size: 4
	float fEquipmentScale;  // Offset: 3092 Size: 4
	float fWidenStanceForRider;  // Offset: 3096 Size: 4
	char pad_3100_1 : 7;  // Offset: 3100 Size: 1
	bool bIsMounted : 1;  // Offset: 3100 Size: 1
	char pad_3101_1 : 7;  // Offset: 3101 Size: 1
	bool bAnimMontageBound : 1;  // Offset: 3101 Size: 1
	char pad_3102[26];  // Offset: 3102 Size: 26
	char pad_3128_1 : 7;  // Offset: 3128 Size: 1
	bool bAlignWithFloor : 1;  // Offset: 3128 Size: 1
	char pad_3129[3];  // Offset: 3129 Size: 3
	char ObstacleAvoidanceParameters[136];  // Offset: 3132 Size: 136
	char pad_3268[2];  // Offset: 3268 Size: 2
	char pad_3270_1 : 7;  // Offset: 3270 Size: 1
	bool bCanStrafe : 1;  // Offset: 3270 Size: 1
	char pad_3271_1 : 7;  // Offset: 3271 Size: 1
	bool bTurnTowardsTarget : 1;  // Offset: 3271 Size: 1
	char pad_3272[8];  // Offset: 3272 Size: 8



	// Functions 
public:
	void UpdateWeaponAnimationSet(bool bForceUpdate); // Function MortalOnline2.MOCharacter.UpdateWeaponAnimationSet
	void UpdateCharacterHeight(float fHeightCentimeter); // Function MortalOnline2.MOCharacter.UpdateCharacterHeight
	void UnRemoveAllLimbs(); // Function MortalOnline2.MOCharacter.UnRemoveAllLimbs
	void TrySynchronizedFullBodyAnimation(struct FMOSynchronizedFullBodyAnimationEntry SynchronizedAnimation); // Function MortalOnline2.MOCharacter.TrySynchronizedFullBodyAnimation
	void TryLeaveMontageSmoothly(); // Function MortalOnline2.MOCharacter.TryLeaveMontageSmoothly
	void TickFullBodyAnimationQueue(); // Function MortalOnline2.MOCharacter.TickFullBodyAnimationQueue
	void StopFullBodyAnimMontage(float fBlendOutTime); // Function MortalOnline2.MOCharacter.StopFullBodyAnimMontage
	void StopCombatBlockAnimation(); // Function MortalOnline2.MOCharacter.StopCombatBlockAnimation
	void StopAudioComponentVoiceSound(float FadeOutDuration); // Function MortalOnline2.MOCharacter.StopAudioComponentVoiceSound
	void StopAudioComponentEffectSound(float FadeOutDuration); // Function MortalOnline2.MOCharacter.StopAudioComponentEffectSound
	void SnapToFloorAtLocation(struct FVector CharacterLocation, struct FRotator CharacterRotation); // Function MortalOnline2.MOCharacter.SnapToFloorAtLocation
	void SnapToFloor(); // Function MortalOnline2.MOCharacter.SnapToFloor
	void SnapControlRotationToCamera(); // Function MortalOnline2.MOCharacter.SnapControlRotationToCamera
	bool ShowInWorldWhenDead(); // Function MortalOnline2.MOCharacter.ShowInWorldWhenDead
	bool ShowInEtherworldWhenAlive(); // Function MortalOnline2.MOCharacter.ShowInEtherworldWhenAlive
	void SetSkeletalMeshOptimizationsEnabled(bool bEnabled); // Function MortalOnline2.MOCharacter.SetSkeletalMeshOptimizationsEnabled
	void SetRenderCustomDepthChannelOnAllMeshComponents(int32_t NewChannel); // Function MortalOnline2.MOCharacter.SetRenderCustomDepthChannelOnAllMeshComponents
	void SetRagdollEnabled(bool bRagdollEnabled); // Function MortalOnline2.MOCharacter.SetRagdollEnabled
	void SetMovementPace(enum class EMovementPace NewMovementPace); // Function MortalOnline2.MOCharacter.SetMovementPace
	void SetMovementComponentEnabled(bool bEnabled, bool bReset); // Function MortalOnline2.MOCharacter.SetMovementComponentEnabled
	void SetMOCharacterGenerateOverlapEvents(bool bGenerateOverlaps); // Function MortalOnline2.MOCharacter.SetMOCharacterGenerateOverlapEvents
	void SetIsMounted(bool bNewIsMounted); // Function MortalOnline2.MOCharacter.SetIsMounted
	void SetIsInEtherworld_ActorOnly(bool bNewEtherworldState); // Function MortalOnline2.MOCharacter.SetIsInEtherworld_ActorOnly
	void SetIsInCombat(bool bNewIsInCombat, float ActionTimeStamp, bool bTryPlayEquipAnimation); // Function MortalOnline2.MOCharacter.SetIsInCombat
	void SetFirstPersonState(bool bEnabled); // Function MortalOnline2.MOCharacter.SetFirstPersonState
	void SetFieldOfViewMOCharacter(float fFieldOfView); // Function MortalOnline2.MOCharacter.SetFieldOfViewMOCharacter
	void SetCharacterVisibility(bool bVisible); // Function MortalOnline2.MOCharacter.SetCharacterVisibility
	void SetCharacterScale(float fNewCharacterScale); // Function MortalOnline2.MOCharacter.SetCharacterScale
	void SetBodyShapeNormalized(float WeightNormalized, float BodyStrengthNormalized); // Function MortalOnline2.MOCharacter.SetBodyShapeNormalized
	void SetBodyShapeAbsolute(float Weight, float BodyStrength); // Function MortalOnline2.MOCharacter.SetBodyShapeAbsolute
	void SetBodyAnimationInstance(UObject* NewClass); // Function MortalOnline2.MOCharacter.SetBodyAnimationInstance
	void SetAvatarTargetActor(struct AActor* NewTarget); // Function MortalOnline2.MOCharacter.SetAvatarTargetActor
	void SetAvatarHiddenForSpawn(bool bNewHidden); // Function MortalOnline2.MOCharacter.SetAvatarHiddenForSpawn
	void SetAppearance(struct FMOCharacterPlayerAppearance NewAppearance); // Function MortalOnline2.MOCharacter.SetAppearance
	void ScaleActiveFullBodyMontagePlayRate(float fScale); // Function MortalOnline2.MOCharacter.ScaleActiveFullBodyMontagePlayRate
	void ReverseReleaseCombatAttackAnimation(); // Function MortalOnline2.MOCharacter.ReverseReleaseCombatAttackAnimation
	bool Respawn(enum class EMOSpawnSequence RespawnSequence); // Function MortalOnline2.MOCharacter.Respawn
	void ResetWeaponAttachment(enum class EHandSlot HandSlot); // Function MortalOnline2.MOCharacter.ResetWeaponAttachment
	void ResetAppearance(); // Function MortalOnline2.MOCharacter.ResetAppearance
	void ReplicateAppearanceInPaperdollForLocalPlayer(); // Function MortalOnline2.MOCharacter.ReplicateAppearanceInPaperdollForLocalPlayer
	void ReleaseCombatAttackAnimation(float fAnimDuration, bool bWaitForServerVerify, float ReleaseBeginTimeStamp, bool bOnServerVerify, bool bForceAnim, bool bPlayAsNewMontage); // Function MortalOnline2.MOCharacter.ReleaseCombatAttackAnimation
	void RefreshCustomDepthChannelOnMesh(struct UMeshComponent* MeshComponent); // Function MortalOnline2.MOCharacter.RefreshCustomDepthChannelOnMesh
	void RefreshAvatarVisibleState(); // Function MortalOnline2.MOCharacter.RefreshAvatarVisibleState
	void RebindAxisMappingsKeys(struct FInputAxisKeyMapping NewAxisMappingInput); // Function MortalOnline2.MOCharacter.RebindAxisMappingsKeys
	void RebindActionMappingsKeys(struct FInputActionKeyMapping NewActionMappingInput); // Function MortalOnline2.MOCharacter.RebindActionMappingsKeys
	void PlaySynchronizedFullBodyAnimation(struct FMOAnimationInfo AnimationInfo); // Function MortalOnline2.MOCharacter.PlaySynchronizedFullBodyAnimation
	void PlaySpawnAnimation(struct UAnimSequenceBase* pAnimation); // Function MortalOnline2.MOCharacter.PlaySpawnAnimation
	void PlayRunningAttackAnimation(); // Function MortalOnline2.MOCharacter.PlayRunningAttackAnimation
	void PlayResurrectSequence(); // Function MortalOnline2.MOCharacter.PlayResurrectSequence
	void PlayReactionAnimation(enum class EMOAIReaction Reaction); // Function MortalOnline2.MOCharacter.PlayReactionAnimation
	void PlayRangedAttackAnimation(); // Function MortalOnline2.MOCharacter.PlayRangedAttackAnimation
	bool PlayFullBodyAnimation(struct FMOSynchronizedFullBodyAnimationEntry& Animation, float SynchronizedPlaybackTime); // Function MortalOnline2.MOCharacter.PlayFullBodyAnimation
	void PlayDeathSequence(); // Function MortalOnline2.MOCharacter.PlayDeathSequence
	void PlayCombatPushAnimation(float PushBeginTimeStamp); // Function MortalOnline2.MOCharacter.PlayCombatPushAnimation
	void PlayCombatChargeAnimation(enum class ECombatInputDirection Direction, float fAnimDuration, float ChargeBeginTimeStamp); // Function MortalOnline2.MOCharacter.PlayCombatChargeAnimation
	void PlayCombatBlockAnimation(enum class ECombatInputDirection Direction, float BlockBeginTimeStamp); // Function MortalOnline2.MOCharacter.PlayCombatBlockAnimation
	void PlayBasicDirectionalAttackAnimation(enum class EAimDirection AimDirection); // Function MortalOnline2.MOCharacter.PlayBasicDirectionalAttackAnimation
	void PlayBasicAttackAnimation(); // Function MortalOnline2.MOCharacter.PlayBasicAttackAnimation
	void PlayAudioComponentVoiceSound(struct USoundBase* Sound, struct FName OptionalSocket); // Function MortalOnline2.MOCharacter.PlayAudioComponentVoiceSound
	void PlayAudioComponentEffectSound(struct USoundBase* Sound, struct FName OptionalSocket); // Function MortalOnline2.MOCharacter.PlayAudioComponentEffectSound
	void OnSpawnSequenceFinished(enum class EMOSpawnSequence Sequence); // Function MortalOnline2.MOCharacter.OnSpawnSequenceFinished
	void OnSetIsInCombatEquipAnimationNotify(); // Function MortalOnline2.MOCharacter.OnSetIsInCombatEquipAnimationNotify
	void OnServerCombatAttackReleaseVerify(); // Function MortalOnline2.MOCharacter.OnServerCombatAttackReleaseVerify
	void OnPlayMontageNotifyBegin(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload); // Function MortalOnline2.MOCharacter.OnPlayMontageNotifyBegin
	void OnPlayerDefinitionChangedInBodyManager(struct UMODataAssetPlayerBaseDefinition* pNewActiveDefinition); // Function MortalOnline2.MOCharacter.OnPlayerDefinitionChangedInBodyManager
	void OnMontageEnded(struct UAnimMontage* AnimMontage, bool bInterrupted); // Function MortalOnline2.MOCharacter.OnMontageEnded
	void OnMontageBlendingOut(struct UAnimMontage* AnimMontage, bool bInterrupted); // Function MortalOnline2.MOCharacter.OnMontageBlendingOut
	void OnLogout(); // Function MortalOnline2.MOCharacter.OnLogout
	void OnDespawnSequenceFinished(enum class EMODespawnSequence Sequence); // Function MortalOnline2.MOCharacter.OnDespawnSequenceFinished
	void OnDeathSequenceFinished(enum class EMODeathSequence Sequence); // Function MortalOnline2.MOCharacter.OnDeathSequenceFinished
	void OnBuffRemoved(struct FString sBuffName); // Function MortalOnline2.MOCharacter.OnBuffRemoved
	void OnBuffAdded(struct FString sBuffName, float fTimer, float fTimerMax); // Function MortalOnline2.MOCharacter.OnBuffAdded
	void OnAllMontageInstancesEnded(); // Function MortalOnline2.MOCharacter.OnAllMontageInstancesEnded
	bool IsSpawning(); // Function MortalOnline2.MOCharacter.IsSpawning
	bool IsRagdollEnabled(); // Function MortalOnline2.MOCharacter.IsRagdollEnabled
	bool IsPlayingMountingOrDismountingSequence(bool bConsiderOnlyFullyBlended); // Function MortalOnline2.MOCharacter.IsPlayingMountingOrDismountingSequence
	bool IsPlayingMontageSequence(enum class ECharacterAnimMontageType MontageType, struct FName SequenceName, bool bConsiderOnlyFullyBlended); // Function MortalOnline2.MOCharacter.IsPlayingMontageSequence
	bool IsPlayingKnockbackSequence(); // Function MortalOnline2.MOCharacter.IsPlayingKnockbackSequence
	bool IsPlayingFullBodyMontage(); // Function MortalOnline2.MOCharacter.IsPlayingFullBodyMontage
	bool IsPlayingEquipOrUnequipSequence(); // Function MortalOnline2.MOCharacter.IsPlayingEquipOrUnequipSequence
	bool IsPlayingAnimMontageType(enum class ECharacterAnimMontageType MontageType, bool bConsiderOnlyFullyBlended); // Function MortalOnline2.MOCharacter.IsPlayingAnimMontageType
	bool IsMovementComponentEnabled(); // Function MortalOnline2.MOCharacter.IsMovementComponentEnabled
	bool IsMovementBlocked(); // Function MortalOnline2.MOCharacter.IsMovementBlocked
	bool IsMounted(); // Function MortalOnline2.MOCharacter.IsMounted
	bool IsLocalPlayer(); // Function MortalOnline2.MOCharacter.IsLocalPlayer
	bool IsInWater(); // Function MortalOnline2.MOCharacter.IsInWater
	bool IsInFirstPersonState(); // Function MortalOnline2.MOCharacter.IsInFirstPersonState
	bool IsInConstruction(); // Function MortalOnline2.MOCharacter.IsInConstruction
	bool IsDeepEnoughToSwimInWaterVolume(struct APhysicsVolume* WaterVolume); // Function MortalOnline2.MOCharacter.IsDeepEnoughToSwimInWaterVolume
	bool IsControllingMount(); // Function MortalOnline2.MOCharacter.IsControllingMount
	void InitializeCharacterHeight(float fHeightCentimeter, float fSkeletalMeshBaseHeight); // Function MortalOnline2.MOCharacter.InitializeCharacterHeight
	void HoldWeaponInHand(enum class EHandSlot HandSlot, bool bHold); // Function MortalOnline2.MOCharacter.HoldWeaponInHand
	bool HasAvatarTarget(); // Function MortalOnline2.MOCharacter.HasAvatarTarget
	void HandleCombatMontageNotify(struct FName NotifyName); // Function MortalOnline2.MOCharacter.HandleCombatMontageNotify
	float GetWaterOverlapDepth(struct APhysicsVolume* WaterVolume); // Function MortalOnline2.MOCharacter.GetWaterOverlapDepth
	bool GetWaterBreathing(); // Function MortalOnline2.MOCharacter.GetWaterBreathing
	enum class EMONamedOctagonalDirection GetNamedRelativeDirectionToActor(struct AActor* Actor); // Function MortalOnline2.MOCharacter.GetNamedRelativeDirectionToActor
	enum class EMONamedOctagonalDirection GetNamedRelativeDirection(struct FVector RelativeDirection); // Function MortalOnline2.MOCharacter.GetNamedRelativeDirection
	enum class EMovementState GetMovementState(); // Function MortalOnline2.MOCharacter.GetMovementState
	enum class EMovementPace GetMovementPace(); // Function MortalOnline2.MOCharacter.GetMovementPace
	struct AMOCharacter* GetMountParent(); // Function MortalOnline2.MOCharacter.GetMountParent
	struct AMOCharacter* GetMountController(); // Function MortalOnline2.MOCharacter.GetMountController
	bool GetLookAtTargetBoneLocation(struct FVector& OutLocation); // Function MortalOnline2.MOCharacter.GetLookAtTargetBoneLocation
	struct USkeletalMeshComponent* GetHeadMeshComponent(); // Function MortalOnline2.MOCharacter.GetHeadMeshComponent
	struct USkeletalMeshComponent* GetHairMeshComponent(); // Function MortalOnline2.MOCharacter.GetHairMeshComponent
	float GetFloatFromAvatarID(); // Function MortalOnline2.MOCharacter.GetFloatFromAvatarID
	struct UMODataAssetFishingAnimations* GetFishingAnimationSet(); // Function MortalOnline2.MOCharacter.GetFishingAnimationSet
	struct TArray<struct UShapeComponent*> GetExtraShapeComponents(); // Function MortalOnline2.MOCharacter.GetExtraShapeComponents
	struct UMODataAssetEtherCombat* GetEtherCombatDataAssetSet(); // Function MortalOnline2.MOCharacter.GetEtherCombatDataAssetSet
	enum class ECombatInputDirection GetCombatLastAttackAnimationDirection(); // Function MortalOnline2.MOCharacter.GetCombatLastAttackAnimationDirection
	enum class EAttackAnimationState GetCombatAttackAnimationState(); // Function MortalOnline2.MOCharacter.GetCombatAttackAnimationState
	struct UMOCameraComponent* GetCamera(); // Function MortalOnline2.MOCharacter.GetCamera
	struct USkeletalMeshComponent* GetBeardMeshComponent(); // Function MortalOnline2.MOCharacter.GetBeardMeshComponent
	struct AActor* GetAvatarTargetActor(); // Function MortalOnline2.MOCharacter.GetAvatarTargetActor
	struct UMODataAssetWeaponAnimations* GetActiveWeaponAnimationSet(); // Function MortalOnline2.MOCharacter.GetActiveWeaponAnimationSet
	struct UMODataAssetPlayerBaseDefinition* GetActivePlayerDefinition(); // Function MortalOnline2.MOCharacter.GetActivePlayerDefinition
	struct UMODataAssetMagicAnimations* GetActiveMagicAnimationSet(); // Function MortalOnline2.MOCharacter.GetActiveMagicAnimationSet
	enum class ECharacterAnimMontageType GetActiveAnimMontageType(bool bConsiderOnlyFullyBlended); // Function MortalOnline2.MOCharacter.GetActiveAnimMontageType
	struct FName GetActiveAnimMontageName(); // Function MortalOnline2.MOCharacter.GetActiveAnimMontageName
	void ForceRegenerateAppearance(); // Function MortalOnline2.MOCharacter.ForceRegenerateAppearance
	void ForceDetachAvatar(struct AMOCharacter* pAttachParent); // Function MortalOnline2.MOCharacter.ForceDetachAvatar
	void DelayedAtlasUse(); // Function MortalOnline2.MOCharacter.DelayedAtlasUse
	void DecapBone(int32_t iBoneIndex); // Function MortalOnline2.MOCharacter.DecapBone
	void CopyAppearanceFrom(struct AMOCharacter* pOtherCharacter); // Function MortalOnline2.MOCharacter.CopyAppearanceFrom
	void ConvertAttachedShapesToExtraColliderInfos(); // Function MortalOnline2.MOCharacter.ConvertAttachedShapesToExtraColliderInfos
	bool CombatReleaseIsPlayingPostHitReverse(); // Function MortalOnline2.MOCharacter.CombatReleaseIsPlayingPostHitReverse
	bool CloseToPlayer(); // Function MortalOnline2.MOCharacter.CloseToPlayer
	bool CheckIfWaterIsAhead(struct ACharacter* TraceFromCharacter, struct FVector CurrentVelocity, float TraceDownDistance, float& OutDistanceToWater, float& OutWaterDepth, struct FVector& OutWaterSurfaceLocation, bool bDrawDebug); // Function MortalOnline2.MOCharacter.CheckIfWaterIsAhead
	bool CheckIfCharacterIsSubmergedInWater(struct AMOCharacter* Character, float& Out_CharacterSubmergedDepth, bool& bDeepEnoughToSwim); // Function MortalOnline2.MOCharacter.CheckIfCharacterIsSubmergedInWater
	bool CheckIfCharacterIsDeepEnoughToSwim(struct AMOCharacter* Character, float WaterDepth); // Function MortalOnline2.MOCharacter.CheckIfCharacterIsDeepEnoughToSwim
	void CheckIfAxisMappingIsUsed(struct FInputAxisKeyMapping NewAxisMappingInput); // Function MortalOnline2.MOCharacter.CheckIfAxisMappingIsUsed
	bool CheckIfAnythingIsInTheWay(struct ACharacter* TraceFromCharacter, struct FVector MovementDirection, float TraceAngle, float TraceDistance, struct FMOObstacleAvoidanceParameters& ObstacleParameters, float DeltaTime, struct FMOTraceObstacleHitResult& OutObstacleHitResult, bool bAvoidCharacters); // Function MortalOnline2.MOCharacter.CheckIfAnythingIsInTheWay
	void CheckIfActionMappingIsUsed(struct FInputActionKeyMapping NewActionMappingInput); // Function MortalOnline2.MOCharacter.CheckIfActionMappingIsUsed
	void CancelCombatAttackAnimation(bool bNoReverse); // Function MortalOnline2.MOCharacter.CancelCombatAttackAnimation
	void BPEvent_TeleportEffects(); // Function MortalOnline2.MOCharacter.BPEvent_TeleportEffects
	void BPEvent_Teleported(struct FVector vFromPosition, struct FVector vToPosition); // Function MortalOnline2.MOCharacter.BPEvent_Teleported
	void BPEvent_StopTeleportEffects(); // Function MortalOnline2.MOCharacter.BPEvent_StopTeleportEffects
	void BPEvent_StartTeleportEffects(); // Function MortalOnline2.MOCharacter.BPEvent_StartTeleportEffects
	void BPEvent_StartResurrectEffects(); // Function MortalOnline2.MOCharacter.BPEvent_StartResurrectEffects
	void BPEvent_StartMercyModeKill(struct AMOCharacter* pTarget); // Function MortalOnline2.MOCharacter.BPEvent_StartMercyModeKill
	void BPEvent_StartDeathEffects(); // Function MortalOnline2.MOCharacter.BPEvent_StartDeathEffects
	void BPEvent_PlaySpawnSequence(enum class EMOSpawnSequence Sequence, float DesiredDuration, bool bSpawningCloseToPlayer, struct AMOAvatarStaticMeshRitualCircle* NearestRitualTable); // Function MortalOnline2.MOCharacter.BPEvent_PlaySpawnSequence
	void BPEvent_PlayDespawnSequence(enum class EMODespawnSequence Sequence, float DesiredDuration); // Function MortalOnline2.MOCharacter.BPEvent_PlayDespawnSequence
	void BPEvent_PlayDeathSequence(enum class EMODeathSequence Sequence, float RagdollDurationBeforeSequenceStart, float DesiredDuration); // Function MortalOnline2.MOCharacter.BPEvent_PlayDeathSequence
	void BPEvent_EnsureLevelStreamHack(); // Function MortalOnline2.MOCharacter.BPEvent_EnsureLevelStreamHack
	void BindMontageDelegates(); // Function MortalOnline2.MOCharacter.BindMontageDelegates
};


class AMOCharacterPlayer : public AMOCharacter
{

public:
	char pad_3280[52];  // Offset: 3280 Size: 52
	char pad_3332_1 : 7;  // Offset: 3332 Size: 1
	bool bWaterBreathing : 1;  // Offset: 3332 Size: 1
	char pad_3333[11];  // Offset: 3333 Size: 11



	// Functions 
public:
	void DisplayBountyTargetInformation(struct FVector vVectorToTarget, struct FString sCardinalDir); // Function MortalOnline2.MOCharacterPlayer.DisplayBountyTargetInformation
};

class AMOCharacterGM : public AMOCharacterPlayer
{

public:
	int32_t iColor;  // Offset: 3336 Size: 4
	struct USoundCue* pGenericSoundCue;  // Offset: 3344 Size: 8
	struct UMOGMHUD* cGMOHUD;  // Offset: 3352 Size: 8
	struct UMOGMHUD* pGMHUD;  // Offset: 3360 Size: 8
	char pad_3372[4];  // Offset: 3372 Size: 4



	// Functions 
public:
	void ToggleGMCinematicView(); // Function MortalOnline2.MOCharacterGM.ToggleGMCinematicView
	void RemoveGMHUD(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function MortalOnline2.MOCharacterGM.RemoveGMHUD
	bool IsFlying(); // Function MortalOnline2.MOCharacterGM.IsFlying
	void BPEvent_SetGMCinematicView(bool bEnabled); // Function MortalOnline2.MOCharacterGM.BPEvent_SetGMCinematicView
	void BPEvent_InitGM(int32_t iNewColor); // Function MortalOnline2.MOCharacterGM.BPEvent_InitGM
};

//Class MortalOnline2.MOWorldSubsystemBase Size 112
// Inherited 48 bytes 
class UMOWorldSubsystemBase : public UWorldSubsystem
{

public:
	char pad_48[64];  // Offset: 48 Size: 64



	// Functions 
public:
};

class UBlueprintFunctionLibrary : public UObject
{

public:



	// Functions 
public:
};




class UMOGlobal : public UBlueprintFunctionLibrary
{

public:



	// Functions 
public:
	bool TestCMortalVolumeLineIntersectMultiple(struct UObject* WorldContextObject, struct TArray<struct FMOTestNavmeshAvoidVolumeEntry>& Volumes, struct FVector LineStart, struct FVector LineEnd, struct FVector& OutHitStart, struct FVector& OutHitEnd, float ExpandVolume); // Function MortalOnline2.MOGlobal.TestCMortalVolumeLineIntersectMultiple
	bool TestCMortalVolumeLineIntersect(struct FBox AABB, struct FVector BoxLocation, float BoxRotationYaw, struct FVector LineStart, struct FVector LineEnd, struct FVector& OutHitStart, struct FVector& OutHitEnd, float ExpandVolume); // Function MortalOnline2.MOGlobal.TestCMortalVolumeLineIntersect
	void TestCMortalVolumeClampAndPush(struct UObject* WorldContextObject, struct FBox AABB, struct FVector BoxLocation, float BoxRotationYaw, struct FVector TestPoint, float fExpandVolume); // Function MortalOnline2.MOGlobal.TestCMortalVolumeClampAndPush
	void TestCMortalVolumeBestPoints(struct UObject* WorldContextObject, struct FBox AABB, struct FVector BoxLocation, float BoxRotationYaw, struct FVector TestPoint1, struct FVector TestPoint2); // Function MortalOnline2.MOGlobal.TestCMortalVolumeBestPoints
	void TestCMortalNavmeshAvoidVolumes(struct UObject* WorldContextObject, struct TArray<struct FMOTestNavmeshAvoidVolumeEntry> Volumes, struct TArray<struct FVector> Path); // Function MortalOnline2.MOGlobal.TestCMortalNavmeshAvoidVolumes
	void SetWindowPosition(int32_t PosX, int32_t PosY); // Function MortalOnline2.MOGlobal.SetWindowPosition
	void SetTextIfDifferent(struct UTextBlock* pTextBlock, struct FText& newText); // Function MortalOnline2.MOGlobal.SetTextIfDifferent
	void SetFaceCustomizationCodeOnAllCharacters(struct UObject* WorldContextObject, struct FString FaceCode); // Function MortalOnline2.MOGlobal.SetFaceCustomizationCodeOnAllCharacters
	void SetColorIfDifferent(struct UTextBlock* pTextWidget, struct FSlateColor& NewColor); // Function MortalOnline2.MOGlobal.SetColorIfDifferent
	void SendTriggerTrapToServer(struct AActor* TrapActor); // Function MortalOnline2.MOGlobal.SendTriggerTrapToServer
	bool PlayerIsInLoadingScreenOrTeleporting(); // Function MortalOnline2.MOGlobal.PlayerIsInLoadingScreenOrTeleporting
	bool IsSocketOnArmorTorsoSlot(struct FName SocketName); // Function MortalOnline2.MOGlobal.IsSocketOnArmorTorsoSlot
	bool IsSocketOnArmorHipSlot(struct FName SocketName); // Function MortalOnline2.MOGlobal.IsSocketOnArmorHipSlot
	bool IsReleaseBuild(); // Function MortalOnline2.MOGlobal.IsReleaseBuild
	bool IsLocationClearForCharacter_EnvironmentBlockingCheck(struct ACharacter* pCharacter, struct FVector Location, float CapsuleScaleFactor); // Function MortalOnline2.MOGlobal.IsLocationClearForCharacter_EnvironmentBlockingCheck
	bool IsEditorPreview(struct UObject* WorldContextObject); // Function MortalOnline2.MOGlobal.IsEditorPreview
	bool IsDevelopmentBuild(); // Function MortalOnline2.MOGlobal.IsDevelopmentBuild
	bool IsARKitPluginLoaded(); // Function MortalOnline2.MOGlobal.IsARKitPluginLoaded
	struct FVector2D GetWindowPosition(); // Function MortalOnline2.MOGlobal.GetWindowPosition
	struct FName GetWeaponBodySocket(enum class EWeaponGroup EWeaponGroup); // Function MortalOnline2.MOGlobal.GetWeaponBodySocket
	struct UWorld* GetViewportWorld(); // Function MortalOnline2.MOGlobal.GetViewportWorld
	struct FName GetShieldBodySocket(enum class EShieldGroup EShieldGroup); // Function MortalOnline2.MOGlobal.GetShieldBodySocket
	struct FTransform GetRightHandWeaponOffset(); // Function MortalOnline2.MOGlobal.GetRightHandWeaponOffset
	struct FLightingChannels GetPaperdollLightingChannels(); // Function MortalOnline2.MOGlobal.GetPaperdollLightingChannels
	bool GetNavmeshPathSynchronously(struct AActor* WorldContextObject, struct FVector PointA, struct FVector PointB, struct TArray<struct FVector>& OutPoints); // Function MortalOnline2.MOGlobal.GetNavmeshPathSynchronously
	enum class ENation GetNationFromAncestry(enum class ESpecies ESpecies, int32_t iAncestry); // Function MortalOnline2.MOGlobal.GetNationFromAncestry
	struct AMOPlayerController* GetMOPlayerController(struct UObject* pWorldContextObject); // Function MortalOnline2.MOGlobal.GetMOPlayerController
	struct AMOPaperdollSceneActor* GetInGamePaperdoll(struct UObject* WorldContextObject); // Function MortalOnline2.MOGlobal.GetInGamePaperdoll
	struct FLightingChannels GetCharacterLightingChannels(); // Function MortalOnline2.MOGlobal.GetCharacterLightingChannels
	struct FName GetBowBodySocket(enum class EBowShapeGroup eBowGroup); // Function MortalOnline2.MOGlobal.GetBowBodySocket
	void ForceTextureStreamingAndLOD0(struct UMeshComponent* pComponent, bool bForced); // Function MortalOnline2.MOGlobal.ForceTextureStreamingAndLOD0
	void FlashGameWindow(); // Function MortalOnline2.MOGlobal.FlashGameWindow
	char EncodeAtlasAvatarRotator(struct FRotator Rotator); // Function MortalOnline2.MOGlobal.EncodeAtlasAvatarRotator
	void DrawDebugClientNavPath(struct AActor* WorldContextObject, struct FVector PointA, struct FVector PointB); // Function MortalOnline2.MOGlobal.DrawDebugClientNavPath
	void DrawDebugAvatarTransform(struct AActor* WorldContextObject, int32_t AvatarID, bool bDrawDebugText, float LineThickness); // Function MortalOnline2.MOGlobal.DrawDebugAvatarTransform
	void DrawDebugAvatarPlayerState(struct AActor* WorldContextObject, int32_t AvatarID); // Function MortalOnline2.MOGlobal.DrawDebugAvatarPlayerState
	void DrawDebugAvatarAIState(struct AActor* WorldContextObject, int32_t AvatarID); // Function MortalOnline2.MOGlobal.DrawDebugAvatarAIState
	struct FRotator DecodeAtlasAvatarRotator(char OrientationIndex); // Function MortalOnline2.MOGlobal.DecodeAtlasAvatarRotator
};




//Class MortalOnline2.MOAvatar Size 712
// Inherited 544 bytes 
class AMOAvatar : public AActor
{

public:
	char pad_544[8];  // Offset: 544 Size: 8
	int32_t LocalAvatarID;  // Offset: 552 Size: 4
	int32_t RandomStream_BaseSeed;  // Offset: 556 Size: 4
	float FindFloorSweepDistanceOverride;  // Offset: 560 Size: 4
	char pad_564[4];  // Offset: 564 Size: 4
	struct TArray<struct FVector> UnstuckPositions;  // Offset: 568 Size: 16
	struct UCapsuleComponent* pCollisionComponent;  // Offset: 584 Size: 8
	struct USoundCue* pSoundCueUse;  // Offset: 592 Size: 8
	struct USoundCue* pSoundCueHit;  // Offset: 600 Size: 8
	struct USoundCue* pSoundCueKilled;  // Offset: 608 Size: 8
	struct UParticleSystem* pParticleSystemHit;  // Offset: 616 Size: 8
	struct UParticleSystem* pParticleSystemKilled;  // Offset: 624 Size: 8
	char pad_632[32];  // Offset: 632 Size: 32
	char sJournalRowNameToUnlock[16];  // Offset: 664 Size: 16
	char pad_680[32];  // Offset: 680 Size: 32



	// Functions 
public:
	void BPEvent_Spawned(); // Function MortalOnline2.MOAvatar.BPEvent_Spawned
	enum class EMOPosRotTransformResponse BPEvent_HandlePosRotParamUpdate(struct FVector& NewPos, struct FRotator& NewRot); // Function MortalOnline2.MOAvatar.BPEvent_HandlePosRotParamUpdate
	void BPEvent_AtlasUse(); // Function MortalOnline2.MOAvatar.BPEvent_AtlasUse
};

class AMOGameMode : public AGameModeBase
{

public:
	char pad_704[40];  // Offset: 704 Size: 40
	char pSoundCue_AmbientSound[40];  // Offset: 744 Size: 40
	char  pSoundMix_Ether[40];  // Offset: 784 Size: 40
	char pParticleSystem_EtherBodyClient[40];  // Offset: 824 Size: 40
	char pParticleSystem_Ambient[40];  // Offset: 864 Size: 40
	char pEtherworldLUT[40];  // Offset: 904 Size: 40
	char cNavigationBeamPriestClass[40];  // Offset: 944 Size: 40
	char GlobalSublevels[16];  // Offset: 984 Size: 16
	struct UMOGlobalActorManager* pGlobalActorManager;  // Offset: 1000 Size: 8
	struct UMOWeatherManager* pWeatherManager;  // Offset: 1008 Size: 8
	struct UMOSocialManager* pSocialManager;  // Offset: 1016 Size: 8
	struct UMOPetManager* pPetManager;  // Offset: 1024 Size: 8
	struct UMOPassiveStatIncreaseManager* pPassiveStatIncreaseManager;  // Offset: 1032 Size: 8
	struct TArray<struct FText> vNationNames;  // Offset: 1040 Size: 16



	// Functions 
public:
	struct UMOWeatherManager* GetWeatherManager(); // Function MortalOnline2.MOGameMode.GetWeatherManager
	struct UMOSocialManager* GetSocialManager(); // Function MortalOnline2.MOGameMode.GetSocialManager
	struct UMOPetManager* GetPetManager(); // Function MortalOnline2.MOGameMode.GetPetManager
	struct UMOPassiveStatIncreaseManager* GetPassiveStatIncreaseManager(); // Function MortalOnline2.MOGameMode.GetPassiveStatIncreaseManager
	struct UMOGlobalActorManager* GetGlobalActorManager(); // Function MortalOnline2.MOGameMode.GetGlobalActorManager
	int32_t GetContinent(); // Function MortalOnline2.MOGameMode.GetContinent
};

class AMOGameModeMenu : public AGameModeBase
{

public:
	struct FString sAvatarData;  // Offset: 704 Size: 16
	struct FString sAvatarName;  // Offset: 720 Size: 16
	struct UMOLoginHUD* pLoginHUD;  // Offset: 736 Size: 8
	char pad_744[24];  // Offset: 744 Size: 24



	// Functions 
public:
	void ShowLoginHUDWarning(struct FString WarningMessage); // Function MortalOnline2.MOGameModeMenu.ShowLoginHUDWarning
	void ShowLoginHUDOnScreen(); // Function MortalOnline2.MOGameModeMenu.ShowLoginHUDOnScreen
	void ShowLogin(); // Function MortalOnline2.MOGameModeMenu.ShowLogin
	void ShowCharacterSelect(); // Function MortalOnline2.MOGameModeMenu.ShowCharacterSelect
	void ShowCharacterDelete(); // Function MortalOnline2.MOGameModeMenu.ShowCharacterDelete
	void ShowCharacterCreation(); // Function MortalOnline2.MOGameModeMenu.ShowCharacterCreation
	void SelectCharacter(); // Function MortalOnline2.MOGameModeMenu.SelectCharacter
	void MOLogout(); // Function MortalOnline2.MOGameModeMenu.MOLogout
	struct FString GetCharacterName(); // Function MortalOnline2.MOGameModeMenu.GetCharacterName
	void DeleteCharacter(struct FString sDeleteName); // Function MortalOnline2.MOGameModeMenu.DeleteCharacter
	void CreateCharacter(struct FString sName, struct FString sSurName, int32_t iStartingPoint, int32_t iStartingEquipment, struct FMOCharacterBodyData BodyData, struct FMOCharacterDecorationData DecorationData, struct FMOCharacterFaceCustomizationData FaceCustomizationData); // Function MortalOnline2.MOGameModeMenu.CreateCharacter
	void CheckName(struct FString sName); // Function MortalOnline2.MOGameModeMenu.CheckName
};

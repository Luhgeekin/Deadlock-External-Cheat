#pragma once
#include<iostream>


namespace client_dll {


    namespace mainOffsets {
        constexpr std::ptrdiff_t camera = 0x20622b0;
        constexpr std::ptrdiff_t localPlayer = 0x22023d0;
        constexpr std::ptrdiff_t viewMatrix = 0x2212740;
        constexpr std::ptrdiff_t entityList = 0x203f160;
    }

    namespace CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
        constexpr uintptr_t m_flLastTickTime = 0xc0; // GameTime_t
    }
    namespace CCitadel_Modifier_ReefdwellerHarpoon_LatchedVData {
        constexpr uintptr_t m_flMaxCameraAngleForSeeing = 0x8d0; // float32
        constexpr uintptr_t m_flMaxDistanceForSeeing = 0x8d4; // float32
    }
    namespace CCitadelModifierShadowStepVData {
        constexpr uintptr_t m_SilenceModifier = 0x8d0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ArmorDebuff = 0x8e0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_InvisChangedEffect = 0x8f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShadowRevealedEffect = 0x9d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flMinInvisDuration = 0xab0; // float32
    }
    namespace CCitadel_Modifier_PowerSurgeVData {
        constexpr uintptr_t m_TracerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WeaponFxParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strWeaponShootSound = 0x7c8; // CSoundEventName
        constexpr uintptr_t m_strBulletWhizSound = 0x7d8; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0x7e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_ZipLine {
        constexpr uintptr_t m_flActivatePressTime = 0x1090; // GameTime_t
        constexpr uintptr_t m_bThinking = 0x1094; // bool
        constexpr uintptr_t m_bMoveCollidedPushUp = 0x1095; // bool
        constexpr uintptr_t m_flTimeStartZipping = 0x10a4; // GameTime_t
        constexpr uintptr_t m_flTimeForKnockdownProtection = 0x10a8; // GameTime_t
        constexpr uintptr_t m_flTimeStopZipping = 0x10ac; // GameTime_t
        constexpr uintptr_t m_flCasterSpeed = 0x10b0; // float32
        constexpr uintptr_t m_vecInitialVel = 0x10b4; // CNetworkVelocityVector
        constexpr uintptr_t m_vecAttachPoint = 0x10e8; // Vector
        constexpr uintptr_t m_pPrevNode = 0x10f4; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_pNextNode = 0x10f8; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flTimeEnterState = 0x10fc; // GameTime_t
        constexpr uintptr_t m_flLatchTime = 0x1100; // GameTime_t
        constexpr uintptr_t m_flDamagedTime = 0x1104; // GameTime_t
        constexpr uintptr_t m_eAttachState = 0x1108; // EAttachState_t
        constexpr uintptr_t m_iAttachedZipLineLane = 0x110c; // int32
        constexpr uintptr_t m_bDroppedFromZipline = 0x1110; // bool
        constexpr uintptr_t m_hAttachZipLine = 0x1111; // AttachmentHandle_t
        constexpr uintptr_t m_vAttachZipLineOffset = 0x1114; // Vector
    }
    namespace CCitadel_Modifier_TeamRelativeParticleVData {
        constexpr uintptr_t m_ParentViewParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_OtherPlayerViewParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_FrenzyAuraVData {
        constexpr uintptr_t m_KillModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_TeamRelativeParticleSystem {
        constexpr uintptr_t m_iszFriendlyEffectName = 0xe08; // CUtlSymbolLarge
        constexpr uintptr_t m_iszEnemyEffectName = 0xe10; // CUtlSymbolLarge
        constexpr uintptr_t m_iFriendlyEffectIndex = 0xe18; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
        constexpr uintptr_t m_iEnemyEffectIndex = 0xe20; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    }
    namespace CGameModifier_PlayEffectOnDeath {
        constexpr uintptr_t m_sEffect = 0xc0; // CUtlString
    }
    namespace C_BaseModelEntity {
        constexpr uintptr_t m_CRenderComponent = 0x560; // CRenderComponent*
        constexpr uintptr_t m_CHitboxComponent = 0x568; // CHitboxComponent
        constexpr uintptr_t m_LastHitGroup = 0x590; // HitGroup_t
        constexpr uintptr_t m_bInitModelEffects = 0x5b8; // bool
        constexpr uintptr_t m_bIsStaticProp = 0x5b9; // bool
        constexpr uintptr_t m_nLastAddDecal = 0x5bc; // int32
        constexpr uintptr_t m_nDecalsAdded = 0x5c0; // int32
        constexpr uintptr_t m_iOldHealth = 0x5c4; // int32
        constexpr uintptr_t m_nRenderMode = 0x5c8; // RenderMode_t
        constexpr uintptr_t m_nRenderFX = 0x5c9; // RenderFx_t
        constexpr uintptr_t m_szAddModifier = 0x5d0; // CUtlString
        constexpr uintptr_t m_bAllowFadeInView = 0x5d8; // bool
        constexpr uintptr_t m_bHasCollision = 0x5f8; // bool
        constexpr uintptr_t m_vSupport = 0x5fc; // Vector
        constexpr uintptr_t m_clrRender = 0x608; // Color
        constexpr uintptr_t m_vecRenderAttributes = 0x610; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
        constexpr uintptr_t m_bRenderToCubemaps = 0x678; // bool
        constexpr uintptr_t m_bNoInterpolate = 0x679; // bool
        constexpr uintptr_t m_Collision = 0x680; // CCollisionProperty
        constexpr uintptr_t m_Glow = 0x730; // CGlowProperty
        constexpr uintptr_t m_flGlowBackfaceMult = 0x788; // float32
        constexpr uintptr_t m_fadeMinDist = 0x78c; // float32
        constexpr uintptr_t m_fadeMaxDist = 0x790; // float32
        constexpr uintptr_t m_flFadeScale = 0x794; // float32
        constexpr uintptr_t m_flShadowStrength = 0x798; // float32
        constexpr uintptr_t m_nObjectCulling = 0x79c; // uint8
        constexpr uintptr_t m_nAddDecal = 0x7a0; // int32
        constexpr uintptr_t m_vDecalPosition = 0x7a4; // Vector
        constexpr uintptr_t m_vDecalForwardAxis = 0x7b0; // Vector
        constexpr uintptr_t m_flDecalHealBloodRate = 0x7bc; // float32
        constexpr uintptr_t m_flDecalHealHeightRate = 0x7c0; // float32
        constexpr uintptr_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x7c8; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
        constexpr uintptr_t m_vecViewOffset = 0x7e0; // CNetworkViewOffsetVector
        constexpr uintptr_t m_pClientAlphaProperty = 0x810; // CClientAlphaProperty*
        constexpr uintptr_t m_ClientOverrideTint = 0x818; // Color
        constexpr uintptr_t m_bUseClientOverrideTint = 0x81c; // bool
    }
    namespace C_MiniMapMarker {
        constexpr uintptr_t m_eType = 0x560; // EMiniMapMarkerType_t
    }
    namespace CModifierRapidFireChannelVData {
        constexpr uintptr_t m_flAirDrag = 0x608; // float32
    }
    namespace CCitadel_Ability_BulletFlurryVData {
        constexpr uintptr_t m_ChannelParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BulletFlurryModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CGameModifier_SetModelScale {
        constexpr uintptr_t m_flOldModelScale = 0xc0; // float32
    }
    namespace C_PointClientUIHUD {
        constexpr uintptr_t m_bCheckCSSClasses = 0x878; // bool
        constexpr uintptr_t m_bIgnoreInput = 0x9f8; // bool
        constexpr uintptr_t m_flWidth = 0x9fc; // float32
        constexpr uintptr_t m_flHeight = 0xa00; // float32
        constexpr uintptr_t m_flDPI = 0xa04; // float32
        constexpr uintptr_t m_flInteractDistance = 0xa08; // float32
        constexpr uintptr_t m_flDepthOffset = 0xa0c; // float32
        constexpr uintptr_t m_unOwnerContext = 0xa10; // uint32
        constexpr uintptr_t m_unHorizontalAlign = 0xa14; // uint32
        constexpr uintptr_t m_unVerticalAlign = 0xa18; // uint32
        constexpr uintptr_t m_unOrientation = 0xa1c; // uint32
        constexpr uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0xa20; // bool
        constexpr uintptr_t m_vecCSSClasses = 0xa28; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    }
    namespace CCitadel_Item_TechDamagePulseVData {
        constexpr uintptr_t m_PulseParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strPulseTickSound = 0x1758; // CSoundEventName
        constexpr uintptr_t m_iMaxTargets = 0x1768; // int32
    }
    namespace C_SpotlightEnd {
        constexpr uintptr_t m_flLightScale = 0x840; // float32
        constexpr uintptr_t m_Radius = 0x844; // float32
    }
    namespace CCitadel_Ability_BulletFlurry {
        constexpr uintptr_t m_vecShootTargets = 0xdb0; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_nNumPlayersKilled = 0xdc8; // int32
        constexpr uintptr_t m_nShootIndex = 0xdcc; // int32
        constexpr uintptr_t m_nShootIndexNPC = 0xdd0; // int32
        constexpr uintptr_t m_nBurstShots = 0xdd4; // int32
        constexpr uintptr_t m_flNextAttackTime = 0xdd8; // GameTime_t
        constexpr uintptr_t m_nSatVolumeIndex = 0xddc; // SatVolumeIndex_t
    }
    namespace C_NPC_Boss_Tier2 {
        constexpr uintptr_t m_iLane = 0x1440; // int32
        constexpr uintptr_t m_flFadeOutStart = 0x1444; // GameTime_t
        constexpr uintptr_t m_flFadeOutEnd = 0x1448; // GameTime_t
        constexpr uintptr_t m_hTargetedEnemy = 0x144c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vecElectricBeamLookTarget = 0x1450; // Vector
        constexpr uintptr_t m_nElectricBeamCasts = 0x1468; // int32
    }
    namespace CCitadelModifierAirLiftExplodeAuraVData {
        constexpr uintptr_t m_empWaveParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_PointCamera {
        constexpr uintptr_t m_FOV = 0x560; // float32
        constexpr uintptr_t m_Resolution = 0x564; // float32
        constexpr uintptr_t m_bFogEnable = 0x568; // bool
        constexpr uintptr_t m_FogColor = 0x569; // Color
        constexpr uintptr_t m_flFogStart = 0x570; // float32
        constexpr uintptr_t m_flFogEnd = 0x574; // float32
        constexpr uintptr_t m_flFogMaxDensity = 0x578; // float32
        constexpr uintptr_t m_bActive = 0x57c; // bool
        constexpr uintptr_t m_bUseScreenAspectRatio = 0x57d; // bool
        constexpr uintptr_t m_flAspectRatio = 0x580; // float32
        constexpr uintptr_t m_bNoSky = 0x584; // bool
        constexpr uintptr_t m_fBrightness = 0x588; // float32
        constexpr uintptr_t m_flZFar = 0x58c; // float32
        constexpr uintptr_t m_flZNear = 0x590; // float32
        constexpr uintptr_t m_bCanHLTVUse = 0x594; // bool
        constexpr uintptr_t m_bAlignWithParent = 0x595; // bool
        constexpr uintptr_t m_bDofEnabled = 0x596; // bool
        constexpr uintptr_t m_flDofNearBlurry = 0x598; // float32
        constexpr uintptr_t m_flDofNearCrisp = 0x59c; // float32
        constexpr uintptr_t m_flDofFarCrisp = 0x5a0; // float32
        constexpr uintptr_t m_flDofFarBlurry = 0x5a4; // float32
        constexpr uintptr_t m_flDofTiltToGround = 0x5a8; // float32
        constexpr uintptr_t m_TargetFOV = 0x5ac; // float32
        constexpr uintptr_t m_DegreesPerSecond = 0x5b0; // float32
        constexpr uintptr_t m_bIsOn = 0x5b4; // bool
        constexpr uintptr_t m_pNext = 0x5b8; // C_PointCamera*
    }
    namespace CCitadelModifierAerialAssaultWatcherVData {
        constexpr uintptr_t m_AssaultModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_ColdFrontVData {
        constexpr uintptr_t m_AOEModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityCrowdControlVData {
        constexpr uintptr_t m_CastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SlowModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_ProximityRitual_VData {
        constexpr uintptr_t m_PredatoryStatueModel = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_CatReappearParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CatDisappearParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CatEyesParticle = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CatSummonParticle = 0x18d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CatRecallParticle = 0x19b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RecallLineParticle = 0x1a90; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strRecallSound = 0x1b70; // CSoundEventName
        constexpr uintptr_t m_strKilledSound = 0x1b80; // CSoundEventName
        constexpr uintptr_t m_PredatoryStatueModifier = 0x1b90; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_RecentDamageModifier = 0x1ba0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flHeavyMeleeDmg = 0x1bb0; // float32
        constexpr uintptr_t m_flLightMeleeDmg = 0x1bb4; // float32
        constexpr uintptr_t m_flAbilityDamageScale = 0x1bb8; // float32
        constexpr uintptr_t m_flNPCDamageScale = 0x1bbc; // float32
        constexpr uintptr_t m_flCastDelayMin = 0x1bc0; // float32
        constexpr uintptr_t m_flCastDelayMax = 0x1bc4; // float32
        constexpr uintptr_t m_flCastDelayMaxDist = 0x1bc8; // float32
        constexpr uintptr_t m_flPostCastCooldown = 0x1bcc; // float32
    }
    namespace CCitadel_Ability_PowerJump {
        constexpr uintptr_t m_nTargetingParticleIndex = 0xc9c; // ParticleIndex_t
        constexpr uintptr_t m_bAirRaiding = 0xca0; // bool
    }
    namespace CCitadel_Ability_Climb_Rope {
        constexpr uintptr_t m_vTop = 0xc98; // CNetworkOriginQuantizedVector
        constexpr uintptr_t m_vBottom = 0xcc8; // CNetworkOriginQuantizedVector
        constexpr uintptr_t m_flActivatePressTime = 0xcf8; // GameTime_t
        constexpr uintptr_t m_flDisconnectTime = 0xcfc; // GameTime_t
        constexpr uintptr_t m_flClimbStartTime = 0xd00; // GameTime_t
        constexpr uintptr_t m_vLastPos = 0xd04; // Vector
        constexpr uintptr_t m_bRequestStopClimbing = 0xd18; // bool
        constexpr uintptr_t m_bRequestJumpToRoof = 0xd19; // bool
        constexpr uintptr_t m_flLastMoveTime = 0xd1c; // GameTime_t
        constexpr uintptr_t m_flMoveDownStartTime = 0xd20; // GameTime_t
        constexpr uintptr_t m_eClimbState = 0xd24; // EClimbRopeState_t
        constexpr uintptr_t m_ClimbCount = 0xd2c; // int32
    }
    namespace C_CitadelTeam {
        constexpr uintptr_t m_hPayload = 0x618; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nBossesAlive = 0x61c; // int32
        constexpr uintptr_t m_nBossesMax = 0x620; // int32
        constexpr uintptr_t m_nFlexSlotsUnlocked = 0x624; // EFlexSlotTypes_t
        constexpr uintptr_t m_vecFOWEntities = 0x628; // C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity >
    }
    namespace C_EnvWind {
        constexpr uintptr_t m_EnvWindShared = 0x560; // C_EnvWindShared
    }
    namespace CCitadel_Ability_Mirage_Teleport {
        constexpr uintptr_t m_hDummyForCamera = 0xca0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vCastStartPosition = 0xca4; // Vector
        constexpr uintptr_t m_vTargetPosition = 0xcb0; // Vector
        constexpr uintptr_t m_vTargetAngles = 0xcbc; // QAngle
    }
    namespace CCitadel_Modifier_Warden_RiotProtocol {
        constexpr uintptr_t m_mapEntToTimeHit = 0xc0; // CUtlOrderedMap< CHandle< C_BaseEntity >, GameTime_t >
        constexpr uintptr_t m_nNumPlayersAffected = 0xe8; // int32
        constexpr uintptr_t m_nNumPlayersKilled = 0xec; // int32
        constexpr uintptr_t m_playerAngles = 0xf0; // QAngle
        constexpr uintptr_t m_ConeParticle = 0xfc; // ParticleIndex_t
    }
    namespace CAbilityHoldMelee_VData {
        constexpr uintptr_t m_mapAttacks = 0x1570; // CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t >
        constexpr uintptr_t m_flNextAttackOnParry = 0x1598; // float32
        constexpr uintptr_t m_flParryWindow = 0x159c; // float32
        constexpr uintptr_t m_flParryStunTime = 0x15a0; // float32
        constexpr uintptr_t m_flParryCooldown = 0x15a4; // float32
        constexpr uintptr_t m_AirMeleeUpScale = 0x15a8; // CRemapFloat
        constexpr uintptr_t m_HoldBeginEffect = 0x15b8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SuccessfulParryParticle = 0x1698; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ParryActivateParticle = 0x1778; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_cameraSequenceHoldStart = 0x1858; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceHitImpact = 0x18e0; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_strHoldBegin = 0x1968; // CSoundEventName
        constexpr uintptr_t m_strSuccessfulParrySound = 0x1978; // CSoundEventName
        constexpr uintptr_t m_ParryVictimModifier = 0x1988; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ReinforcingCasingsVData {
        constexpr uintptr_t m_BuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAI_NPC_TrooperVData {
        constexpr uintptr_t m_TrooperType = 0xf78; // TrooperType_t
        constexpr uintptr_t m_flTrooperDamageResistPct = 0xf7c; // float32
        constexpr uintptr_t m_flT1BossDamageResistPct = 0xf80; // float32
        constexpr uintptr_t m_flT2BossDamageResistPct = 0xf84; // float32
        constexpr uintptr_t m_flBarrackGuardianDamageResistPct = 0xf88; // float32
        constexpr uintptr_t m_flNearDeathDuration = 0xf8c; // float32
        constexpr uintptr_t m_flFlySpeed = 0xf90; // float32
        constexpr uintptr_t m_flFlyHeight = 0xf94; // float32
        constexpr uintptr_t m_flMeleeDamage = 0xf98; // float32
        constexpr uintptr_t m_flMeleeDuration = 0xf9c; // float32
        constexpr uintptr_t m_flMeleeChargeRange = 0xfa0; // float32
        constexpr uintptr_t m_flAttackT1BossMaxRange = 0xfa4; // float32
        constexpr uintptr_t m_flAttackTrooperMaxRange = 0xfa8; // float32
        constexpr uintptr_t m_flShieldDamageResistPct = 0xfac; // float32
        constexpr uintptr_t m_flHealthBarOffsetDucking = 0xfb0; // float32
        constexpr uintptr_t m_flTrooperDPS = 0xfb4; // float32
        constexpr uintptr_t m_flPlayerDPS = 0xfb8; // float32
        constexpr uintptr_t m_flT1BossDPS = 0xfbc; // float32
        constexpr uintptr_t m_flT1BossDPSBaseResist = 0xfc0; // float32
        constexpr uintptr_t m_flT1BossDPSMaxResist = 0xfc4; // float32
        constexpr uintptr_t m_flT1BossDPSMaxResistTimeInSeconds = 0xfc8; // float32
        constexpr uintptr_t m_flT2BossDPS = 0xfcc; // float32
        constexpr uintptr_t m_flT2BossDPSBaseResist = 0xfd0; // float32
        constexpr uintptr_t m_flT2BossDPSMaxResist = 0xfd4; // float32
        constexpr uintptr_t m_flT2BossDPSMaxResistTimeInSeconds = 0xfd8; // float32
        constexpr uintptr_t m_flT3BossDPS = 0xfdc; // float32
        constexpr uintptr_t m_flBarrackBossDPS = 0xfe0; // float32
        constexpr uintptr_t m_flGeneratorBossDPS = 0xfe4; // float32
        constexpr uintptr_t m_BossAttackParticle = 0xfe8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LastHitParticle = 0x10c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetingLaserParticle = 0x11a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetingEyeFlashParticle = 0x1288; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sZiplineContainerBreakFromDamageParticle = 0x1368; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sZiplineContainerBreakFromLandingParticle = 0x1448; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MedicHealActiveParticle = 0x1528; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sPlayerLastHitSound = 0x1608; // CSoundEventName
        constexpr uintptr_t m_sCelebrationSound = 0x1618; // CSoundEventName
        constexpr uintptr_t m_sZiplineContainerBreakSound = 0x1628; // CSoundEventName
        constexpr uintptr_t m_NearDeathModifier = 0x1638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TrooperBossInvulnModifier = 0x1648; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbility_Fathom_ReefdwellerHarpoon_VData {
        constexpr uintptr_t m_flWallLatchSettleTime = 0x1550; // float32
        constexpr uintptr_t m_flWallLatchSettleDist = 0x1554; // float32
        constexpr uintptr_t m_flWallLatchIdealDist = 0x1558; // float32
        constexpr uintptr_t m_flReelSpeed = 0x155c; // float32
        constexpr uintptr_t m_AttachedToWallModifier = 0x1560; // CEmbeddedSubclass< CCitadel_Modifier_ReefdwellerHarpoon_Latched >
        constexpr uintptr_t m_RegenModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strSwapStarted = 0x1580; // CSoundEventName
    }
    namespace CCitadel_Modifier_StaticChargeVData {
        constexpr uintptr_t m_ExplodeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZapParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CItemRefresherVData {
        constexpr uintptr_t m_RefreshParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CItemSmokeBombPreCastModifierVData {
        constexpr uintptr_t m_SmokeAreaParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CasterParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_BaseCombatCharacter {
        constexpr uintptr_t m_hMyWearables = 0xc80; // C_NetworkUtlVectorBase< CHandle< C_EconWearable > >
        constexpr uintptr_t m_leftFootAttachment = 0xc98; // AttachmentHandle_t
        constexpr uintptr_t m_rightFootAttachment = 0xc99; // AttachmentHandle_t
        constexpr uintptr_t m_nWaterWakeMode = 0xc9c; // C_BaseCombatCharacter::WaterWakeMode_t
        constexpr uintptr_t m_flWaterWorldZ = 0xca0; // float32
        constexpr uintptr_t m_flWaterNextTraceTime = 0xca4; // float32
    }
    namespace CCitadel_Modifier_BreakablePropFireRatePickupVData {
        constexpr uintptr_t m_flFireRate = 0x608; // float32
    }
    namespace C_SoundEventSphereEntity {
        constexpr uintptr_t m_flRadius = 0x620; // float32
    }
    namespace CCitadel_Upgrade_StabilizingTripodVData {
        constexpr uintptr_t m_SelfDebuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadelBulletTimeWarpVData {
        constexpr uintptr_t m_TimeWallHitParticle = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TimeWallHitTimerParticle = 0x108; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifierItemPickupAuraTargetVData {
        constexpr uintptr_t m_PickupTimer = 0x608; // float32
        constexpr uintptr_t m_PickupTimerModifier = 0x610; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_SceneEntity {
        constexpr uintptr_t m_bIsPlayingBack = 0x568; // bool
        constexpr uintptr_t m_bPaused = 0x569; // bool
        constexpr uintptr_t m_bMultiplayer = 0x56a; // bool
        constexpr uintptr_t m_bAutogenerated = 0x56b; // bool
        constexpr uintptr_t m_flForceClientTime = 0x56c; // float32
        constexpr uintptr_t m_nSceneStringIndex = 0x570; // uint16
        constexpr uintptr_t m_bClientOnly = 0x572; // bool
        constexpr uintptr_t m_hOwner = 0x574; // CHandle< C_BaseFlex >
        constexpr uintptr_t m_hActorList = 0x578; // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > >
        constexpr uintptr_t m_bWasPlaying = 0x590; // bool
        constexpr uintptr_t m_QueuedEvents = 0x5a0; // CUtlVector< C_SceneEntity::QueuedEvents_t >
        constexpr uintptr_t m_flCurrentTime = 0x5b8; // float32
    }
    namespace CCitadel_Ability_Tokamak_DyingStarVData {
        constexpr uintptr_t m_ExplosionParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlameAuraParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strInFlightAnimGraphParam = 0x1710; // CGlobalSymbol
        constexpr uintptr_t m_strExplodeSound = 0x1718; // CSoundEventName
        constexpr uintptr_t m_InFlightModifier = 0x1728; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_PrimaryWeapon_BebopVData {
        constexpr uintptr_t m_strWindupSound = 0x1598; // CSoundEventName
        constexpr uintptr_t m_strBeamStartSound = 0x15a8; // CSoundEventName
        constexpr uintptr_t m_strBeamLoopSound1 = 0x15b8; // CSoundEventName
        constexpr uintptr_t m_strBeamLoopSound2 = 0x15c8; // CSoundEventName
        constexpr uintptr_t m_strBeamStopSound = 0x15d8; // CSoundEventName
        constexpr uintptr_t m_szWeaponBeamParticle = 0x15e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flWindupRepeatCycle = 0x16c8; // float32
    }
    namespace CCitadel_Modifier_ProjectMindVData {
        constexpr uintptr_t m_TeleportStartParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportEndParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportTrailParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportModelParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShieldModifier = 0x988; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_Stasis_BombVData {
        constexpr uintptr_t m_AuraModifier = 0x1698; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CPlayer_CameraServices {
        constexpr uintptr_t m_vecPunchAngle = 0x40; // QAngle
        constexpr uintptr_t m_vecPunchAngleVel = 0x58; // QAngle
        constexpr uintptr_t m_nPunchAngleJoltTickClientSide = 0x70; // GameTick_t
        constexpr uintptr_t m_nPunchAngleJoltTick = 0x74; // GameTick_t
        constexpr uintptr_t m_PlayerFog = 0x78; // C_fogplayerparams_t
        constexpr uintptr_t m_hColorCorrectionCtrl = 0xb8; // CHandle< C_ColorCorrection >
        constexpr uintptr_t m_hViewEntity = 0xbc; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hTonemapController = 0xc0; // CHandle< C_TonemapController2 >
        constexpr uintptr_t m_audio = 0xc8; // audioparams_t
        constexpr uintptr_t m_PostProcessingVolumes = 0x140; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
        constexpr uintptr_t m_flOldPlayerZ = 0x158; // float32
        constexpr uintptr_t m_flOldPlayerViewOffsetZ = 0x15c; // float32
        constexpr uintptr_t m_CurrentFog = 0x160; // fogparams_t
        constexpr uintptr_t m_hOldFogController = 0x1c8; // CHandle< C_FogController >
        constexpr uintptr_t m_bOverrideFogColor = 0x1cc; // bool[5]
        constexpr uintptr_t m_OverrideFogColor = 0x1d1; // Color[5]
        constexpr uintptr_t m_bOverrideFogStartEnd = 0x1e5; // bool[5]
        constexpr uintptr_t m_fOverrideFogStart = 0x1ec; // float32[5]
        constexpr uintptr_t m_fOverrideFogEnd = 0x200; // float32[5]
        constexpr uintptr_t m_hActivePostProcessingVolume = 0x214; // CHandle< C_PostProcessingVolume >
        constexpr uintptr_t m_angDemoViewAngles = 0x218; // QAngle
    }
    namespace C_FuncMonitor {
        constexpr uintptr_t m_targetCamera = 0x840; // CUtlString
        constexpr uintptr_t m_nResolutionEnum = 0x848; // int32
        constexpr uintptr_t m_bRenderShadows = 0x84c; // bool
        constexpr uintptr_t m_bUseUniqueColorTarget = 0x84d; // bool
        constexpr uintptr_t m_brushModelName = 0x850; // CUtlString
        constexpr uintptr_t m_hTargetCamera = 0x858; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bEnabled = 0x85c; // bool
        constexpr uintptr_t m_bDraw3DSkybox = 0x85d; // bool
    }
    namespace CCitadel_Ability_Chrono_PulseGrenade_VData {
        constexpr uintptr_t m_PulseAreaModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strHitSound = 0x1560; // CSoundEventName
        constexpr uintptr_t m_strDebuffStatName = 0x1570; // CUtlString
    }
    namespace C_RopeKeyframe::CPhysicsDelegate {
        constexpr uintptr_t m_pKeyframe = 0x8; // C_RopeKeyframe*
    }
    namespace CModifierVData_BaseAura {
        constexpr uintptr_t m_eAuraShapeType = 0x608; // eAuraShapeType
        constexpr uintptr_t m_flAuraRadius = 0x60c; // CModifierLevelFloat
        constexpr uintptr_t m_flAuraEntityBoundsScale = 0x61c; // CModifierLevelFloat
        constexpr uintptr_t m_nAmbientParticleRadiusControlPoint = 0x62c; // int32
        constexpr uintptr_t m_modifierProvidedByAura = 0x630; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CModifier_Synth_Pulse_Escape_VData {
        constexpr uintptr_t m_SatchelParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelAbilityTangoTetherVData {
        constexpr uintptr_t m_flJumpFallSpeedMax = 0x1550; // float32
        constexpr uintptr_t m_flJumpAirDrag = 0x1554; // float32
        constexpr uintptr_t m_flJumpAirSpeedMax = 0x1558; // float32
        constexpr uintptr_t m_flJumpSpeed = 0x155c; // float32
        constexpr uintptr_t m_flJumpPitch = 0x1560; // float32
        constexpr uintptr_t m_flDashSpeed = 0x1564; // float32
        constexpr uintptr_t m_flDashCloseEnoughToTarget = 0x1568; // float32
        constexpr uintptr_t m_flDashLockOntoTargetDist = 0x156c; // float32
        constexpr uintptr_t m_flVelocityTurnSpringStrength = 0x1570; // float32
        constexpr uintptr_t m_flAngleToSpeedScale = 0x1574; // CRemapFloat
        constexpr uintptr_t m_flBackswingDuration = 0x1584; // float32
        constexpr uintptr_t m_flAnimToStrikePointTime = 0x1588; // float32
        constexpr uintptr_t m_flGrappleShotFloatTime = 0x158c; // float32
        constexpr uintptr_t m_flGrappleShotDelayToFlyOnHit = 0x1590; // float32
        constexpr uintptr_t m_flGrappleSpeed = 0x1594; // float32
        constexpr uintptr_t m_TetherModifier = 0x1598; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_GrappleTargetModifier = 0x15a8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_LeapParticle = 0x15b8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1698; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SlashParticle = 0x1778; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BulletGrappleTracerParticle = 0x1858; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyGrappleParticle = 0x1938; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDamageTarget = 0x1a18; // CSoundEventName
        constexpr uintptr_t m_strStartDash = 0x1a28; // CSoundEventName
        constexpr uintptr_t m_strStartAttack = 0x1a38; // CSoundEventName
        constexpr uintptr_t m_strGrappleHitTarget = 0x1a48; // CSoundEventName
        constexpr uintptr_t m_strGrappleHitWorld = 0x1a58; // CSoundEventName
        constexpr uintptr_t m_strGrappleHitNothing = 0x1a68; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceFlying = 0x1a78; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceAttacking = 0x1b00; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_WeaponUpgrade_BansheeSlugs_VData {
        constexpr uintptr_t m_DebuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TechDefenderShreddersProcVData {
        constexpr uintptr_t m_TechDebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_DivinersKevlarBuff_VData {
        constexpr uintptr_t m_KevlarChannelParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CItem_Infuser_VData {
        constexpr uintptr_t m_BuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CastParticle = 0x15a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CBodyComponent {
        constexpr uintptr_t m_pSceneNode = 0x8; // CGameSceneNode*
        constexpr uintptr_t __m_pChainEntity = 0x48; // CNetworkVarChainer
    }
    namespace C_SoundAreaEntitySphere {
        constexpr uintptr_t m_flRadius = 0x588; // float32
    }
    namespace CCitadel_Modifier_StunnedVData {
        constexpr uintptr_t m_StunnedParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BreakablePropClipSizePickup {
        constexpr uintptr_t nClipRemaining = 0xc0; // int32
    }
    namespace C_LightGlow {
        constexpr uintptr_t m_nHorizontalSize = 0x840; // uint32
        constexpr uintptr_t m_nVerticalSize = 0x844; // uint32
        constexpr uintptr_t m_nMinDist = 0x848; // uint32
        constexpr uintptr_t m_nMaxDist = 0x84c; // uint32
        constexpr uintptr_t m_nOuterMaxDist = 0x850; // uint32
        constexpr uintptr_t m_flGlowProxySize = 0x854; // float32
        constexpr uintptr_t m_flHDRColorScale = 0x858; // float32
        constexpr uintptr_t m_GlowOverlay = 0x860; // C_LightGlowOverlay
    }
    namespace CAbilityCrackshotVData {
        constexpr uintptr_t m_SpectatingProjectileParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplosionParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HatTrickChannelParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffModifier = 0x17f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CrackshotImmuneModifier = 0x1800; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HeadShotVictimSound = 0x1810; // CSoundEventName
        constexpr uintptr_t m_HeadShotConfirmationSound = 0x1820; // CSoundEventName
    }
    namespace CCitadel_Modifier_SlowingTech_ProcVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_CharmedWraps {
        constexpr uintptr_t m_fLastPrimingLightAttackTime = 0x168; // GameTime_t
    }
    namespace CItemPhantomStrike_VData {
        constexpr uintptr_t m_DebuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CasterModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strExplodeSound = 0x15b8; // CSoundEventName
        constexpr uintptr_t m_CastParticle = 0x15c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x16a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffParticle = 0x1788; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flTeleportDistance = 0x1868; // float32
        constexpr uintptr_t m_flVelocityScale = 0x186c; // float32
    }
    namespace CAbilityMantleVData {
        constexpr uintptr_t m_vecMantleTypes = 0x1550; // CUtlVector< MantleType_t >
    }
    namespace CCitadel_Modifier_Basic_RangedArmorBonus {
        constexpr uintptr_t m_flBulletResistancePctMin = 0xc0; // float32
        constexpr uintptr_t m_flBulletResistancePctMax = 0xc4; // float32
        constexpr uintptr_t m_flRangeMin = 0xc8; // float32
        constexpr uintptr_t m_flRangeMax = 0xcc; // float32
        constexpr uintptr_t m_flInvulnRange = 0xd0; // float32
    }
    namespace CountdownTimer {
        constexpr uintptr_t m_duration = 0x8; // float32
        constexpr uintptr_t m_timestamp = 0xc; // GameTime_t
        constexpr uintptr_t m_timescale = 0x10; // float32
        constexpr uintptr_t m_nWorldGroupId = 0x14; // WorldGroupId_t
    }
    namespace CGameSceneNodeHandle {
        constexpr uintptr_t m_hOwner = 0x8; // CEntityHandle
        constexpr uintptr_t m_name = 0xc; // CUtlStringToken
    }
    namespace CCitadel_Ability_Thumper_1 {
        constexpr uintptr_t m_vecAimPos = 0xc98; // Vector
        constexpr uintptr_t m_vecAimNormal = 0xca4; // Vector
        constexpr uintptr_t m_flPushForce = 0xcb0; // float32
    }
    namespace CCitadel_Ability_PuddleVData {
        constexpr uintptr_t m_PuddleModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_NapalmProjectile {
        constexpr uintptr_t m_vInitialCastPosition = 0x1d8; // Vector
        constexpr uintptr_t m_flProjectileSpeed = 0x1e4; // float32
        constexpr uintptr_t m_iParticleEffect = 0x1e8; // ParticleIndex_t
    }
    namespace CCitadel_Item_DPS_Aura_VData {
        constexpr uintptr_t m_AOECastParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ActiveModifier = 0x1678; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Upgrade_OverdriveClip {
        constexpr uintptr_t m_nBonusMaxClipSize = 0xc0; // int32
    }
    namespace CCitadel_Modifier_BerserkerDamageStackVData {
        constexpr uintptr_t m_BuffStatusParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffStatusParticleEnemy = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_ClientRagdoll {
        constexpr uintptr_t m_bFadeOut = 0xae8; // bool
        constexpr uintptr_t m_bImportant = 0xae9; // bool
        constexpr uintptr_t m_flEffectTime = 0xaec; // GameTime_t
        constexpr uintptr_t m_gibDespawnTime = 0xaf0; // GameTime_t
        constexpr uintptr_t m_iCurrentFriction = 0xaf4; // int32
        constexpr uintptr_t m_iMinFriction = 0xaf8; // int32
        constexpr uintptr_t m_iMaxFriction = 0xafc; // int32
        constexpr uintptr_t m_iFrictionAnimState = 0xb00; // int32
        constexpr uintptr_t m_bReleaseRagdoll = 0xb04; // bool
        constexpr uintptr_t m_iEyeAttachment = 0xb05; // AttachmentHandle_t
        constexpr uintptr_t m_bFadingOut = 0xb06; // bool
        constexpr uintptr_t m_flScaleEnd = 0xb08; // float32[10]
        constexpr uintptr_t m_flScaleTimeStart = 0xb30; // GameTime_t[10]
        constexpr uintptr_t m_flScaleTimeEnd = 0xb58; // GameTime_t[10]
    }
    namespace CCitadel_Ability_IceDome {
        constexpr uintptr_t m_flDomeStartTime = 0xcd0; // GameTime_t
        constexpr uintptr_t m_flDomeEndTime = 0xcd4; // GameTime_t
    }
    namespace CSkeletonInstance {
        constexpr uintptr_t m_modelState = 0x170; // CModelState
        constexpr uintptr_t m_bIsAnimationEnabled = 0x3f0; // bool
        constexpr uintptr_t m_bUseParentRenderBounds = 0x3f1; // bool
        constexpr uintptr_t m_bDisableSolidCollisionsForHierarchy = 0x3f2; // bool
        constexpr uintptr_t m_bDirtyMotionType = 0x0; // bitfield:1
        constexpr uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
        constexpr uintptr_t m_materialGroup = 0x3f4; // CUtlStringToken
        constexpr uintptr_t m_nHitboxSet = 0x3f8; // uint8
    }
    namespace CAbilityKobunVData {
        constexpr uintptr_t m_vSummonFollowOffset = 0x1550; // Vector
        constexpr uintptr_t m_CloneModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Tengu_UrnVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AuraModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodeSound = 0x1640; // CSoundEventName
    }
    namespace CCitadel_Ability_ThrowSandVData {
        constexpr uintptr_t m_SandDebuff = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SilenceDebuff = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_RescueBeamVData {
        constexpr uintptr_t m_DispelAndHealModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PullModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_CitadelPayload {
        constexpr uintptr_t m_flProgress = 0xaf0; // float32
        constexpr uintptr_t m_nNumPushers = 0xaf4; // int32
    }
    namespace CCitadel_Ability_Fathom_Breach {
        constexpr uintptr_t m_nRollFXIndex = 0xc98; // ParticleIndex_t
        constexpr uintptr_t m_bInFlight = 0xc9c; // bool
    }
    namespace CCitadel_Modifier_Pillar {
        constexpr uintptr_t flAccumulatedDamage = 0xc8; // float32
    }
    namespace CItem_FleetfootBoots_VData {
        constexpr uintptr_t m_FleetfootBootsModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_FleetfootBootsBonusClipModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_BreakablePropExtraStamina {
        constexpr uintptr_t m_bFilled = 0xc0; // bool
    }
    namespace CCitadel_Modifier_Haze_StackingDamage {
        constexpr uintptr_t m_nTotalProcs = 0x168; // int32
    }
    namespace CCitadel_Item_ModDisruptorVData {
        constexpr uintptr_t m_DetonateParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DisruptModifier = 0x1678; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flWaveSpeed = 0x1688; // float32
    }
    namespace CCitadel_Modifier_UnstoppableVData {
        constexpr uintptr_t m_ShieldParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PlayerShieldParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_PreMatchWait {
        constexpr uintptr_t m_vSpawnPoint = 0xc0; // Vector
    }
    namespace CBodyComponentBaseAnimGraph {
        constexpr uintptr_t m_animationController = 0x510; // CBaseAnimGraphController
    }
    namespace CBodyComponentPoint {
        constexpr uintptr_t m_sceneNode = 0x80; // CGameSceneNode
    }
    namespace CCitadel_Ability_ProximityRitual {
        constexpr uintptr_t m_eState = 0xc98; // ECatStatueState_t
        constexpr uintptr_t m_hStatue = 0xc9c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vLaunchPosition = 0xca8; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xcb4; // QAngle
    }
    namespace CCitadel_Modifier_GalvanicStormTechShieldVData {
        constexpr uintptr_t m_BuffModifier = 0x608; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ExplodeParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flExplodeSpeed = 0x6f8; // float32
    }
    namespace CModifierVData {
        constexpr uintptr_t m_flDuration = 0x28; // CModifierLevelFloat
        constexpr uintptr_t m_bKeepMaximumDurationOnRefresh = 0x38; // bool
        constexpr uintptr_t m_strParticleEffect = 0x40; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strParticleEffectConfig = 0x120; // CUtlString
        constexpr uintptr_t m_strParticleStatusEffect = 0x128; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strParticleStatusEffectConfig = 0x208; // CUtlString
        constexpr uintptr_t m_strScreenParticleEffect = 0x210; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strScreenParticleEffectConfig = 0x2f0; // CUtlString
        constexpr uintptr_t m_nStatusEffectPriority = 0x2f8; // int32
        constexpr uintptr_t m_vecRenderAttributes = 0x300; // CUtlVector< ModifierRenderAttribute_t >
        constexpr uintptr_t m_sStartSound = 0x318; // CSoundEventName
        constexpr uintptr_t m_sAmbientLoopingSound = 0x328; // CSoundEventName
        constexpr uintptr_t m_nAmbientLoopingSoundRecipients = 0x338; // ModifierSoundRecipients_t
        constexpr uintptr_t m_sEndSound = 0x340; // CSoundEventName
        constexpr uintptr_t m_nEnabledStateMask = 0x350; // CBitVecEnum< EModifierState >
        constexpr uintptr_t m_nDisabledStateMask = 0x368; // CBitVecEnum< EModifierState >
        constexpr uintptr_t m_nAttributes = 0x380; // ModifierAttribute_t
        constexpr uintptr_t m_vecScriptValues = 0x388; // CUtlVector< ModifierScriptValue_t >
        constexpr uintptr_t m_vecScriptEventHandlers = 0x3a0; // CUtlVector< ModifierScriptedEventHandler_t >
        constexpr uintptr_t m_nDisableGroupsMask = 0x3b8; // ModifierDisableGroup_t
        constexpr uintptr_t m_bPrivateAccess = 0x3bc; // bool
        constexpr uintptr_t m_bIsHidden = 0x3bd; // bool
        constexpr uintptr_t m_eHiddenType = 0x3c0; // ModifierHiddenType_t
        constexpr uintptr_t m_sLocalizationName = 0x3c8; // CUtlString
        constexpr uintptr_t m_eDebuffType = 0x3d0; // ModifierDebuffType_t
        constexpr uintptr_t m_bAutomaticallyDecayStacks = 0x3d4; // bool
    }
    namespace CCitadel_Ability_Bounce_Pad {
        constexpr uintptr_t m_vForward = 0xc98; // Vector
        constexpr uintptr_t m_bShouldDeploy = 0xca4; // bool
        constexpr uintptr_t m_bAnglesSet = 0xca5; // bool
        constexpr uintptr_t m_bCanCancel = 0xca6; // bool
        constexpr uintptr_t m_angFacing = 0xdc0; // QAngle
    }
    namespace CItemPowerShardVData {
        constexpr uintptr_t m_RefreshParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Tier2Boss_RocketBarrageVData {
        constexpr uintptr_t m_ExplosionParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplosionSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_RocketFireSound = 0x1640; // CSoundEventName
        constexpr uintptr_t m_AuraModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbility_Mirage_SandPhantom {
        constexpr uintptr_t m_vecVictimModifiers = 0xc98; // CUtlVector< CModifierHandleTyped< CCitadelModifier > >
    }
    namespace CCitadel_Modifier_ThrowSandDebuffVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Knockdown {
        constexpr uintptr_t m_angStunAngles = 0xc8; // QAngle
        constexpr uintptr_t m_ePreferredKnockdownType = 0xd4; // EKnockDownTypes
        constexpr uintptr_t m_bForceTakePreferred = 0xd8; // bool
        constexpr uintptr_t m_flGetUpAnimTime = 0xdc; // GameTime_t
        constexpr uintptr_t m_bGetUpCamSeqStarted = 0xe0; // bool
        constexpr uintptr_t m_bOnGroundDuration = 0xe1; // bool
        constexpr uintptr_t m_satIndex = 0xe4; // SatVolumeIndex_t
    }
    namespace CAbilityLashVData {
        constexpr uintptr_t m_LashParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strVictimCastSound = 0x1640; // CSoundEventName
    }
    namespace CCitadel_Modifier_ChargedBombVData {
        constexpr uintptr_t m_ChargeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strBeepSound = 0x6e8; // CSoundEventName
    }
    namespace C_Citadel_Projectile_Viscous_GooGrenade {
        constexpr uintptr_t m_nBounces = 0x8c8; // int32
        constexpr uintptr_t m_tNextDetonateTime = 0x8cc; // GameTime_t
        constexpr uintptr_t m_vecProjectileHitTargets = 0x8d0; // CUtlVector< CHandle< C_BaseEntity > >
    }
    namespace CCitadel_CatAnimatingVData {
        constexpr uintptr_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_cGlowColor = 0x108; // Color
    }
    namespace CCitadel_Ability_RestorativeGoo {
        constexpr uintptr_t m_flSelfCastEndTime = 0xc98; // GameTime_t
    }
    namespace C_RagdollPropAttached {
        constexpr uintptr_t m_boneIndexAttached = 0xb60; // uint32
        constexpr uintptr_t m_ragdollAttachedObjectIndex = 0xb64; // uint32
        constexpr uintptr_t m_attachmentPointBoneSpace = 0xb68; // Vector
        constexpr uintptr_t m_attachmentPointRagdollSpace = 0xb74; // Vector
        constexpr uintptr_t m_vecOffset = 0xb80; // Vector
        constexpr uintptr_t m_parentTime = 0xb8c; // float32
        constexpr uintptr_t m_bHasParent = 0xb90; // bool
    }
    namespace C_BaseTrigger {
        constexpr uintptr_t m_bDisabled = 0x840; // bool
        constexpr uintptr_t m_bClientSidePredicted = 0x841; // bool
    }
    namespace CAbilityHighAlertVData {
        constexpr uintptr_t m_BuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ZiplineBoost {
        constexpr uintptr_t m_bIsBoosting = 0xc0; // bool
    }
    namespace CCitadel_Modifier_BreakablePropSpeedPickupVData {
        constexpr uintptr_t m_flSpeedBoost = 0x608; // float32
        constexpr uintptr_t m_flSprintBoost = 0x60c; // float32
    }
    namespace C_EconEntity::AttachedParticleInfo_t {
        constexpr uintptr_t m_nAttachedParticleIndex = 0x0; // ParticleIndex_t
        constexpr uintptr_t m_customType = 0x4; // CUtlStringToken
        constexpr uintptr_t m_bShouldDestroyImmediately = 0x8; // bool
    }
    namespace CCitadel_Modifier_BoloVData {
        constexpr uintptr_t m_TrapModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ReverseLeechModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Chrono_KineticCarbine {
        constexpr uintptr_t m_bWantsSlow = 0xc98; // bool
        constexpr uintptr_t m_flLatchedTimeScaleFracChangeTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_flLatchedTimeScaleFrac = 0xca0; // float32
        constexpr uintptr_t m_flSpeedBoostEndTime = 0xca4; // GameTime_t
        constexpr uintptr_t m_flShotTimeScaleEndTime = 0xca8; // GameTime_t
        constexpr uintptr_t m_flStoredPowerPct = 0xcb0; // float32
    }
    namespace CCitadel_Item_BaseProjectileAOEModifierVData {
        constexpr uintptr_t m_AOEModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ColossusActive {
        constexpr uintptr_t m_flOriginalModelScale = 0xc0; // float32
    }
    namespace CCitadel_ArmorUpgrade_AblativeCoat {
        constexpr uintptr_t m_iCurrentResistValue = 0xcb0; // int32
    }
    namespace CAbility_Mirage_SandPhantom_VData {
        constexpr uintptr_t m_WhirlwindEvasionModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SandPhantomModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_LockDown_Debuff {
        constexpr uintptr_t m_vEscapeTarget = 0x1d8; // Vector
    }
    namespace CCitadel_Ability_Bebop_LaserBeam {
        constexpr uintptr_t m_bZoomed = 0xde8; // bool
        constexpr uintptr_t m_bAirCast = 0xde9; // bool
        constexpr uintptr_t m_vBeamAimPos = 0xdec; // Vector
        constexpr uintptr_t m_angBeamAngles = 0xdf8; // QAngle
        constexpr uintptr_t m_bNeedsBeamReset = 0xe10; // bool
    }
    namespace CCitadel_Modifier_IceBeam_Stacking_Slow {
        constexpr uintptr_t m_flCurrBuildup = 0x220; // float32
    }
    namespace CCitadel_Modifier_Shield {
        constexpr uintptr_t m_hShieldEntity = 0xc0; // CHandle< C_Citadel_Shield >
    }
    namespace CCitadel_WeaponUpgrade_BurstFireVData {
        constexpr uintptr_t m_ActivationSound = 0x1598; // CSoundEventName
        constexpr uintptr_t m_BuffModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Basic_HealthRegen {
        constexpr uintptr_t m_flHealthRegen = 0xc0; // float32
    }
    namespace CEffectData {
        constexpr uintptr_t m_vOrigin = 0x8; // Vector
        constexpr uintptr_t m_vStart = 0x14; // Vector
        constexpr uintptr_t m_vNormal = 0x20; // Vector
        constexpr uintptr_t m_vAngles = 0x2c; // QAngle
        constexpr uintptr_t m_hEntity = 0x38; // CEntityHandle
        constexpr uintptr_t m_hOtherEntity = 0x3c; // CEntityHandle
        constexpr uintptr_t m_flScale = 0x40; // float32
        constexpr uintptr_t m_flMagnitude = 0x44; // float32
        constexpr uintptr_t m_flRadius = 0x48; // float32
        constexpr uintptr_t m_nSurfaceProp = 0x4c; // CUtlStringToken
        constexpr uintptr_t m_nEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
        constexpr uintptr_t m_nDamageType = 0x58; // uint32
        constexpr uintptr_t m_nPenetrate = 0x5c; // uint8
        constexpr uintptr_t m_nMaterial = 0x5e; // uint16
        constexpr uintptr_t m_nHitBox = 0x60; // uint16
        constexpr uintptr_t m_nColor = 0x62; // uint8
        constexpr uintptr_t m_fFlags = 0x63; // uint8
        constexpr uintptr_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
        constexpr uintptr_t m_nAttachmentName = 0x68; // CUtlStringToken
        constexpr uintptr_t m_iEffectName = 0x6c; // uint16
        constexpr uintptr_t m_nExplosionType = 0x6e; // uint8
    }
    namespace CCitadel_Modifier_MagicCarpet_SummonVData {
        constexpr uintptr_t m_SummonParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_ZipLine_VData {
        constexpr uintptr_t m_flMinButtonHoldTimeToActivate = 0x1550; // float32
        constexpr uintptr_t m_flCrouchDropSpeedFraction = 0x1554; // float32
        constexpr uintptr_t m_flCrouchDropAirDragSuppressDuration = 0x1558; // float32
        constexpr uintptr_t m_flDetachDisallowedTime = 0x155c; // float32
        constexpr uintptr_t m_flCameraWobbleIntensity = 0x1560; // float32
        constexpr uintptr_t m_DOFWhileZiplining = 0x1564; // DOFDesc_t
        constexpr uintptr_t m_ZipLinePreviewParticle = 0x1578; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineSpeedParticle = 0x1658; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineTetherParticle = 0x1738; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineTetherAttachParticle = 0x1818; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineEnemyKnockdownProtectionParticle = 0x18f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineSelfKnockdownProtectionParticle = 0x19d8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineKnockdownProtectionStatusParticle = 0x1ab8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strZipLineSummonSound = 0x1b98; // CSoundEventName
        constexpr uintptr_t m_strZipLineLatchedSound = 0x1ba8; // CSoundEventName
        constexpr uintptr_t m_strZipLineStartSound = 0x1bb8; // CSoundEventName
        constexpr uintptr_t m_RidingZipLineModifier = 0x1bc8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_KnockedOffSlowModifier = 0x1bd8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ZipLineIntroModifier = 0x1be8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ZipLineKnockdownImmuneModifier = 0x1bf8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ZipLineSlowModifier = 0x1c08; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_cameraSequenceAwaitingTether = 0x1c18; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceLatched = 0x1ca0; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceAttached = 0x1d28; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceClear = 0x1db0; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_ArmorUpgrade_Colossus_VData {
        constexpr uintptr_t m_BuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Out_Of_Combat_Health_Regen {
        constexpr uintptr_t m_LastDamageTaken = 0xc0; // GameTime_t
    }
    namespace CModifierGlitchVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_ViperVenomVData {
        constexpr uintptr_t m_VenomModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_FissureWallVData {
        constexpr uintptr_t m_DebrisParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SpikeParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WallSpawnSound = 0x7c8; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0x7d8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EnemyVisionModifier = 0x7e8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x7f8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Stunned {
        constexpr uintptr_t m_bEnabled = 0xc0; // bool
        constexpr uintptr_t m_bWasEnabled = 0xc1; // bool
    }
    namespace CCitadel_Modifier_EscalatingExposureProcWatcherVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Item_PowerShard {
        constexpr uintptr_t m_hLastSignatureToActivate = 0xcb0; // CHandle< C_CitadelBaseAbility >
    }
    namespace C_BaseButton {
        constexpr uintptr_t m_glowEntity = 0x840; // CHandle< C_BaseModelEntity >
        constexpr uintptr_t m_usable = 0x844; // bool
        constexpr uintptr_t m_szDisplayText = 0x848; // CUtlSymbolLarge
    }
    namespace CModifier_Synth_Pulse_BulletShield {
        constexpr uintptr_t m_fBulletShield = 0xc0; // float32
    }
    namespace CCitadel_Ability_Tokamak_CrimsonCannon {
        constexpr uintptr_t m_bAirCast = 0xc98; // bool
        constexpr uintptr_t m_bIsZoomed = 0xe60; // bool
    }
    namespace CCitadel_Ability_Mirage_FireBeetles {
        constexpr uintptr_t m_vLaunchPosition = 0xc98; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xca4; // QAngle
        constexpr uintptr_t m_flCastStartTime = 0xcb0; // GameTime_t
    }
    namespace CCitadel_Modifier_LightningBall {
        constexpr uintptr_t m_hProjectile = 0x168; // CHandle< C_BaseEntity >
    }
    namespace CPlayer_MovementServices_Humanoid {
        constexpr uintptr_t m_flStepSoundTime = 0x1d8; // float32
        constexpr uintptr_t m_flFallVelocity = 0x1dc; // float32
        constexpr uintptr_t m_bInCrouch = 0x1e0; // bool
        constexpr uintptr_t m_nCrouchState = 0x1e4; // uint32
        constexpr uintptr_t m_flCrouchTransitionStartTime = 0x1e8; // GameTime_t
        constexpr uintptr_t m_bDucked = 0x1ec; // bool
        constexpr uintptr_t m_bDucking = 0x1ed; // bool
        constexpr uintptr_t m_bInDuckJump = 0x1ee; // bool
        constexpr uintptr_t m_groundNormal = 0x1f0; // Vector
        constexpr uintptr_t m_flSurfaceFriction = 0x1fc; // float32
        constexpr uintptr_t m_surfaceProps = 0x200; // CUtlStringToken
        constexpr uintptr_t m_nStepside = 0x210; // int32
    }
    namespace C_NPC_ShieldedSentry {
        constexpr uintptr_t m_CCitadelAbilityComponent = 0xaf0; // CCitadelAbilityComponent
        constexpr uintptr_t m_flAttackRange = 0xc94; // float32
        constexpr uintptr_t m_flAimPitch = 0xc98; // float32
    }
    namespace C_PointClientUIWorldPanel {
        constexpr uintptr_t m_bForceRecreateNextUpdate = 0x878; // bool
        constexpr uintptr_t m_bMoveViewToPlayerNextThink = 0x879; // bool
        constexpr uintptr_t m_bCheckCSSClasses = 0x87a; // bool
        constexpr uintptr_t m_anchorDeltaTransform = 0x880; // CTransform
        constexpr uintptr_t m_pOffScreenIndicator = 0xa18; // CPointOffScreenIndicatorUi*
        constexpr uintptr_t m_bIgnoreInput = 0xa40; // bool
        constexpr uintptr_t m_bLit = 0xa41; // bool
        constexpr uintptr_t m_bFollowPlayerAcrossTeleport = 0xa42; // bool
        constexpr uintptr_t m_flWidth = 0xa44; // float32
        constexpr uintptr_t m_flHeight = 0xa48; // float32
        constexpr uintptr_t m_flDPI = 0xa4c; // float32
        constexpr uintptr_t m_flInteractDistance = 0xa50; // float32
        constexpr uintptr_t m_flDepthOffset = 0xa54; // float32
        constexpr uintptr_t m_unOwnerContext = 0xa58; // uint32
        constexpr uintptr_t m_unHorizontalAlign = 0xa5c; // uint32
        constexpr uintptr_t m_unVerticalAlign = 0xa60; // uint32
        constexpr uintptr_t m_unOrientation = 0xa64; // uint32
        constexpr uintptr_t m_bAllowInteractionFromAllSceneWorlds = 0xa68; // bool
        constexpr uintptr_t m_vecCSSClasses = 0xa70; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
        constexpr uintptr_t m_bOpaque = 0xa88; // bool
        constexpr uintptr_t m_bNoDepth = 0xa89; // bool
        constexpr uintptr_t m_bRenderBackface = 0xa8a; // bool
        constexpr uintptr_t m_bUseOffScreenIndicator = 0xa8b; // bool
        constexpr uintptr_t m_bExcludeFromSaveGames = 0xa8c; // bool
        constexpr uintptr_t m_bGrabbable = 0xa8d; // bool
        constexpr uintptr_t m_bOnlyRenderToTexture = 0xa8e; // bool
        constexpr uintptr_t m_bDisableMipGen = 0xa8f; // bool
        constexpr uintptr_t m_nExplicitImageLayout = 0xa90; // int32
    }
    namespace CAbility_Synth_PlasmaFlux_VData {
        constexpr uintptr_t m_WeaponDamageBonusModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_TeleportTrailParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strCasterLoopingSound = 0x1720; // CSoundEventName
        constexpr uintptr_t m_strProjectileExpireSound = 0x1730; // CSoundEventName
        constexpr uintptr_t m_strImpactSound = 0x1740; // CSoundEventName
        constexpr uintptr_t m_strTimerSound = 0x1750; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceTeleport = 0x1760; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Ability_GooBowlingBall {
        constexpr uintptr_t m_nAirJumpsLeft = 0xfe0; // int32
        constexpr uintptr_t m_bIsRolling = 0xfe4; // bool
        constexpr uintptr_t m_hBall = 0xfe8; // CHandle< C_CitadelViscousBall >
        constexpr uintptr_t m_eRollingState = 0xfec; // EViscousBowlingBallState_t
        constexpr uintptr_t m_flNextStateTime = 0xff0; // GameTime_t
        constexpr uintptr_t m_flNextWallCheck = 0xff4; // GameTime_t
        constexpr uintptr_t m_flRollStartTime = 0xff8; // GameTime_t
        constexpr uintptr_t m_flWallExitTime = 0xffc; // GameTime_t
        constexpr uintptr_t m_vecWallExitVelocity = 0x1000; // Vector
        constexpr uintptr_t m_nDirectionParticleIndex = 0x1014; // ParticleIndex_t
    }
    namespace CCitadelModifierAerialAssaultVData {
        constexpr uintptr_t m_FireRateModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodeParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TracerParticle = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSound = 0x7d8; // CSoundEventName
        constexpr uintptr_t m_flAirDrag = 0x7e8; // float32
        constexpr uintptr_t m_flAirSpeed = 0x7ec; // float32
        constexpr uintptr_t m_flFallSpeed = 0x7f0; // float32
    }
    namespace CCitadel_Modifier_SlowingBullets_ProcVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData {
        constexpr uintptr_t m_SpiritStealParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
        constexpr uintptr_t m_speedToPitchRemap = 0x608; // CRemapFloat
    }
    namespace C_NPC_FieldSentry {
        constexpr uintptr_t m_flAttackRange = 0xaf4; // float32
        constexpr uintptr_t m_flAimPitch = 0xaf8; // float32
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData {
        constexpr uintptr_t m_SlowModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffStatusPlayerParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffStatusVictimParticle = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffStatusNPCParticle = 0x7d8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StackDamageParticle = 0x8b8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StackReadyParticle = 0x998; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StackAppliedParticle = 0xa78; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ConsumeMaxStacksSound = 0xb58; // CSoundEventName
        constexpr uintptr_t m_ConsumeMaxStacksNonHeroSound = 0xb68; // CSoundEventName
        constexpr uintptr_t m_ApplyStackSound = 0xb78; // CSoundEventName
    }
    namespace C_GameRules {
        constexpr uintptr_t __m_pChainEntity = 0x8; // CNetworkVarChainer
        constexpr uintptr_t m_nTotalPausedTicks = 0x30; // int32
        constexpr uintptr_t m_nPauseStartTick = 0x34; // int32
        constexpr uintptr_t m_bGamePaused = 0x38; // bool
    }
    namespace C_Team {
        constexpr uintptr_t m_aPlayerControllers = 0x560; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
        constexpr uintptr_t m_aPlayers = 0x578; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
        constexpr uintptr_t m_iScore = 0x590; // int32
        constexpr uintptr_t m_szTeamname = 0x594; // char[129]
    }
    namespace CCitadel_Ability_ChargedTackle {
        constexpr uintptr_t m_bPreparing = 0xe90; // bool
        constexpr uintptr_t m_bTackling = 0xe91; // bool
        constexpr uintptr_t m_flTackleStartTime = 0xe94; // GameTime_t
        constexpr uintptr_t m_flPrepareStartTime = 0xe98; // GameTime_t
        constexpr uintptr_t m_vecTackleDir = 0xe9c; // Vector
        constexpr uintptr_t m_vecLastPosition = 0xea8; // Vector
        constexpr uintptr_t m_nStuckFramesCount = 0xeb4; // int32
        constexpr uintptr_t m_vecHitEnemies = 0xeb8; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_nDistancePreview = 0xed0; // ParticleIndex_t
    }
    namespace CCitadelAbilityChargedBombVData {
        constexpr uintptr_t m_ChargeBombModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodeParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x1640; // CSoundEventName
        constexpr uintptr_t m_flChargeForMaxDamage = 0x1650; // float32
        constexpr uintptr_t m_flMinDamagePercent = 0x1654; // float32
    }
    namespace CCitadel_Modifier_AirLift_ExplodeAura {
        constexpr uintptr_t m_flStartRadius = 0xe0; // float32
        constexpr uintptr_t m_flEndRadius = 0xe4; // float32
        constexpr uintptr_t m_flSpreadDuration = 0xe8; // float32
    }
    namespace CNPC_Boss_Tier2VData {
        constexpr uintptr_t m_flPlayerInitialSightRange = 0xf78; // float32
        constexpr uintptr_t m_strWIPModelName = 0xf80; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_vecWeakPoints = 0x1060; // CUtlVector< WeakPointParams_t >
        constexpr uintptr_t m_BeamChargingEffect = 0x1078; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BeamPreviewEffect = 0x1158; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BeamActiveEffect = 0x1238; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StompImpactEffect = 0x1318; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StompWarningEffect = 0x13f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flTossSpeed = 0x14d8; // float32
        constexpr uintptr_t m_flStompDamage = 0x14dc; // float32
        constexpr uintptr_t m_flStompTossUpMagnitude = 0x14e0; // float32
        constexpr uintptr_t m_flStunDuration = 0x14e4; // float32
        constexpr uintptr_t m_flStompImpactRadius = 0x14e8; // float32
        constexpr uintptr_t m_flStompImpactHeight = 0x14ec; // float32
        constexpr uintptr_t m_flSweepRadius = 0x14f0; // float32
        constexpr uintptr_t m_flSweepSpeed = 0x14f4; // float32
        constexpr uintptr_t m_flSweepZScale = 0x14f8; // float32
        constexpr uintptr_t m_flSweepMaxAngle = 0x14fc; // float32
        constexpr uintptr_t m_flSweepMaxRange = 0x1500; // float32
        constexpr uintptr_t m_flSweepAdjustSpeed = 0x1504; // float32
        constexpr uintptr_t m_flBurstDuration = 0x1508; // float32
        constexpr uintptr_t m_flBurstCooldown = 0x150c; // float32
        constexpr uintptr_t m_BackdoorProtectionModifier = 0x1510; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flBackDoorProtectionRange = 0x1520; // float32
        constexpr uintptr_t m_InvulModifier = 0x1528; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flInvulModifierRange = 0x1538; // float32
    }
    namespace C_SoundAreaEntityOrientedBox {
        constexpr uintptr_t m_vMin = 0x588; // Vector
        constexpr uintptr_t m_vMax = 0x594; // Vector
    }
    namespace CCitadel_Ability_PrimaryWeapon_Bebop {
        constexpr uintptr_t m_flStartWindUpTime = 0x1028; // GameTime_t
        constexpr uintptr_t m_flStartFiringTime = 0x102c; // GameTime_t
        constexpr uintptr_t m_bFiring = 0x1030; // bool
    }
    namespace CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierDelayedStunVData {
        constexpr uintptr_t m_HitParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_TextureBasedAnimatable {
        constexpr uintptr_t m_bLoop = 0x840; // bool
        constexpr uintptr_t m_flFPS = 0x844; // float32
        constexpr uintptr_t m_hPositionKeys = 0x848; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_hRotationKeys = 0x850; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_vAnimationBoundsMin = 0x858; // Vector
        constexpr uintptr_t m_vAnimationBoundsMax = 0x864; // Vector
        constexpr uintptr_t m_flStartTime = 0x870; // float32
        constexpr uintptr_t m_flStartFrame = 0x874; // float32
    }
    namespace CModifierRiotProtocolBuffVData {
        constexpr uintptr_t m_LaserParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PulseHitEnemyParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyDebuffModifier = 0x7c8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierCrowdControlDebuffVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelModifierIdolReturnTimerVData {
        constexpr uintptr_t m_ChannelParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_IcePath_TechPowerLinger {
        constexpr uintptr_t m_nBonusSpirit = 0xc0; // int32
    }
    namespace CCitadel_Modifier_VeilWalkerWatcherVData {
        constexpr uintptr_t m_InvisModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_VeilWalkerTriggeredModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_VeilWalkerMovespeed = 0x628; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flTraceLengthMin = 0x638; // float32
    }
    namespace CNPC_TrooperNeutralNodeMoverVData {
        constexpr uintptr_t m_bEnableMovementToNodes = 0x12e0; // bool
        constexpr uintptr_t m_flExposedDuration = 0x12e4; // CRangeFloat
        constexpr uintptr_t m_flHideDuration = 0x12ec; // CRangeFloat
        constexpr uintptr_t m_HidingModifier = 0x12f8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Slork_Raging_Current_CountdownVData {
        constexpr uintptr_t m_TorrentModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_WaterAuraParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifier_Mirage_Tornado_Aura_Apply_VData {
        constexpr uintptr_t m_TossModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_LiftModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strHitConfirmSound = 0x628; // CSoundEventName
    }
    namespace CAbilityThumper3VData {
        constexpr uintptr_t m_DroneModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ShakedownPulseVData {
        constexpr uintptr_t m_strFireSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_ShakeParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChainParticle = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_WreckerScrapBlastDebuff {
        constexpr uintptr_t m_flEnemyMoveSlow = 0xc0; // float32
    }
    namespace CCitadel_Item_TechCleaveVData {
        constexpr uintptr_t m_TechCleaveModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_sCleaveProcSound = 0x15a8; // CSoundEventName
    }
    namespace CCitadel_Modifier_RescueBeam {
        constexpr uintptr_t m_flHealthPerTick = 0x1a0; // float32
        constexpr uintptr_t m_nBeamIndex = 0x1a4; // ParticleIndex_t
    }
    namespace CSkyboxReference {
        constexpr uintptr_t m_worldGroupId = 0x560; // WorldGroupId_t
        constexpr uintptr_t m_hSkyCamera = 0x564; // CHandle< C_SkyCamera >
    }
    namespace CCitadelModifierAura_ConeVData {
        constexpr uintptr_t m_flAuraTargetingConeHalfWidth = 0x648; // float32
        constexpr uintptr_t m_flAuraTargetingConeAngle = 0x64c; // float32
    }
    namespace CCitadel_ArmorUpgrade_PersonalRejuvenatorVData {
        constexpr uintptr_t m_DeployParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RespawnParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sDeploySound = 0x1758; // CSoundEventName
        constexpr uintptr_t m_sRespawnSound = 0x1768; // CSoundEventName
    }
    namespace CCitadel_Modifier_Tier2Boss_LaserBeam {
        constexpr uintptr_t m_bPreview = 0x130; // bool
        constexpr uintptr_t m_flSoundStartTime = 0x13c; // GameTime_t
        constexpr uintptr_t m_vStart = 0x144; // Vector
        constexpr uintptr_t m_vEnd = 0x150; // Vector
        constexpr uintptr_t m_vPrevEnd = 0x15c; // Vector
        constexpr uintptr_t m_flAngleBetweenTrace = 0x168; // float32
        constexpr uintptr_t m_flDamagePerTick = 0x16c; // float32
        constexpr uintptr_t m_flCreepDamagePerTick = 0x170; // float32
        constexpr uintptr_t m_flNextDamageTick = 0x174; // GameTime_t
        constexpr uintptr_t m_vecEntitiesHit = 0x178; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_flDamageTickRate = 0x190; // float32
        constexpr uintptr_t m_flLastShakeTime = 0x194; // GameTime_t
        constexpr uintptr_t m_bSweepRightFirst = 0x198; // bool
        constexpr uintptr_t m_angBeamAim = 0x19c; // QAngle
        constexpr uintptr_t m_vecBeamTarget = 0x1a8; // Vector
        constexpr uintptr_t m_flLastBeamUpdateTime = 0x1b4; // GameTime_t
        constexpr uintptr_t m_flTargetingTaskStartTime = 0x1d0; // GameTime_t
        constexpr uintptr_t m_flTrackVel = 0x1d4; // float32
    }
    namespace CProjectedTextureBase {
        constexpr uintptr_t m_hTargetEntity = 0xc; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bState = 0x10; // bool
        constexpr uintptr_t m_bAlwaysUpdate = 0x11; // bool
        constexpr uintptr_t m_flLightFOV = 0x14; // float32
        constexpr uintptr_t m_bEnableShadows = 0x18; // bool
        constexpr uintptr_t m_bSimpleProjection = 0x19; // bool
        constexpr uintptr_t m_bLightOnlyTarget = 0x1a; // bool
        constexpr uintptr_t m_bLightWorld = 0x1b; // bool
        constexpr uintptr_t m_bCameraSpace = 0x1c; // bool
        constexpr uintptr_t m_flBrightnessScale = 0x20; // float32
        constexpr uintptr_t m_LightColor = 0x24; // Color
        constexpr uintptr_t m_flIntensity = 0x28; // float32
        constexpr uintptr_t m_flLinearAttenuation = 0x2c; // float32
        constexpr uintptr_t m_flQuadraticAttenuation = 0x30; // float32
        constexpr uintptr_t m_bVolumetric = 0x34; // bool
        constexpr uintptr_t m_flVolumetricIntensity = 0x38; // float32
        constexpr uintptr_t m_flNoiseStrength = 0x3c; // float32
        constexpr uintptr_t m_flFlashlightTime = 0x40; // float32
        constexpr uintptr_t m_nNumPlanes = 0x44; // uint32
        constexpr uintptr_t m_flPlaneOffset = 0x48; // float32
        constexpr uintptr_t m_flColorTransitionTime = 0x4c; // float32
        constexpr uintptr_t m_flAmbient = 0x50; // float32
        constexpr uintptr_t m_SpotlightTextureName = 0x54; // char[512]
        constexpr uintptr_t m_nSpotlightTextureFrame = 0x254; // int32
        constexpr uintptr_t m_nShadowQuality = 0x258; // uint32
        constexpr uintptr_t m_flNearZ = 0x25c; // float32
        constexpr uintptr_t m_flFarZ = 0x260; // float32
        constexpr uintptr_t m_flProjectionSize = 0x264; // float32
        constexpr uintptr_t m_flRotation = 0x268; // float32
        constexpr uintptr_t m_bFlipHorizontal = 0x26c; // bool
    }
    namespace CCitadel_Modifier_AirLiftExplodingAllyVData {
        constexpr uintptr_t m_strExplodeEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AOEModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Bebop_LaserBeamVData {
        constexpr uintptr_t m_LaserModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ChargeParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Camouflage_Invis {
        constexpr uintptr_t m_vCastPosition = 0x268; // Vector
    }
    namespace CAttributeContainer {
        constexpr uintptr_t m_Item = 0x68; // C_EconItemView
    }
    namespace CCitadel_Modifier_AnimalCurseVData {
        constexpr uintptr_t m_CursedModel = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_TargetParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flModelScale = 0x7c8; // float32
    }
    namespace CCitadel_Modifier_FlameDashVData {
        constexpr uintptr_t m_GroundAuraModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ProgressModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_FlameDashParticle = 0x628; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlameAuraParticle = 0x708; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_ArmorUpgrade_VexBarrierVData {
        constexpr uintptr_t m_ShieldModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_DiscordVData {
        constexpr uintptr_t m_ImpactParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifier_Synth_Grasp_Caster_VData {
        constexpr uintptr_t m_CastParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Petrify {
        constexpr uintptr_t flAccumulatedDamage = 0xc8; // float32
    }
    namespace CAbilityRestorativeGooVData {
        constexpr uintptr_t m_RestorativeGooParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RestorativeGooModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Teleport {
        constexpr uintptr_t m_bTeleportingToTarget = 0xc98; // bool
        constexpr uintptr_t m_vTargetPosition = 0xc9c; // Vector
        constexpr uintptr_t m_vTargetAngles = 0xca8; // QAngle
    }
    namespace CScriptComponent {
        constexpr uintptr_t m_scriptClassName = 0x30; // CUtlSymbolLarge
    }
    namespace C_EnvLightProbeVolume {
        constexpr uintptr_t m_Entity_hLightProbeTexture = 0x1540; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1548; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1550; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1558; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_vBoxMins = 0x1560; // Vector
        constexpr uintptr_t m_Entity_vBoxMaxs = 0x156c; // Vector
        constexpr uintptr_t m_Entity_bMoveable = 0x1578; // bool
        constexpr uintptr_t m_Entity_nHandshake = 0x157c; // int32
        constexpr uintptr_t m_Entity_nPriority = 0x1580; // int32
        constexpr uintptr_t m_Entity_bStartDisabled = 0x1584; // bool
        constexpr uintptr_t m_Entity_nLightProbeSizeX = 0x1588; // int32
        constexpr uintptr_t m_Entity_nLightProbeSizeY = 0x158c; // int32
        constexpr uintptr_t m_Entity_nLightProbeSizeZ = 0x1590; // int32
        constexpr uintptr_t m_Entity_nLightProbeAtlasX = 0x1594; // int32
        constexpr uintptr_t m_Entity_nLightProbeAtlasY = 0x1598; // int32
        constexpr uintptr_t m_Entity_nLightProbeAtlasZ = 0x159c; // int32
        constexpr uintptr_t m_Entity_bEnabled = 0x15a9; // bool
    }
    namespace CCitadel_Modifier_Chrono_KineticCarbine {
        constexpr uintptr_t m_nBulletCount = 0xc0; // int32
        constexpr uintptr_t m_flElapsedPct = 0xc4; // float32
        constexpr uintptr_t m_hTimeWarp = 0xc8; // CHandle< CCitadelBulletTimeWarp >
        constexpr uintptr_t m_nFullyChargedParticle = 0xcc; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_HealthSwapPrecastVData {
        constexpr uintptr_t m_strTargetParticleEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strTargetEnemyParticleEffect = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strTargetScreenParticleEffect = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_LifeDrainVData {
        constexpr uintptr_t m_SilenceModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DrainParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BeltFed_MagazineVData {
        constexpr uintptr_t m_SpinUpSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_SpinDownSound = 0x618; // CSoundEventName
        constexpr uintptr_t m_SpinLoopSound = 0x628; // CSoundEventName
    }
    namespace CItemStimPakVData {
        constexpr uintptr_t m_StimPakModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CastParticle = 0x15a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_TriggerPush {
        constexpr uintptr_t m_vPush = 0xc0; // Vector
    }
    namespace STeamFOWEntity {
        constexpr uintptr_t m_nEntIndex = 0x30; // CEntityIndex
        constexpr uintptr_t m_nTeam = 0x34; // int32
        constexpr uintptr_t m_eClass = 0x38; // Class_T
        constexpr uintptr_t m_iLane = 0x3c; // int32
        constexpr uintptr_t m_eHeight = 0x40; // EMinimapHeight
        constexpr uintptr_t m_bVisibleOnMap = 0x41; // bool
        constexpr uintptr_t m_bBackdoorProtectionActive = 0x42; // bool
        constexpr uintptr_t m_nTickHidden = 0x44; // GameTick_t
        constexpr uintptr_t m_strEntityName = 0x48; // CUtlString
        constexpr uintptr_t m_nHealthPercent = 0x50; // uint8
        constexpr uintptr_t m_nPositionX = 0x51; // uint8
        constexpr uintptr_t m_nPositionY = 0x52; // uint8
    }
    namespace CCitadel_Modifier_ThermalDetonator_ThinkerVData {
        constexpr uintptr_t m_GroundParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_ViperHookBladeVData {
        constexpr uintptr_t m_SlowDebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DaggerStuckParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerImpactParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerExplodeParticle = 0x1720; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDaggerHitSound = 0x1800; // CSoundEventName
        constexpr uintptr_t m_strDaggerExplodeSound = 0x1810; // CSoundEventName
    }
    namespace CCitadel_Modifier_FireBomb {
        constexpr uintptr_t m_flSideMoveSpeed = 0x130; // float32
        constexpr uintptr_t m_vReturnPosition = 0x134; // Vector
        constexpr uintptr_t m_vReturnAngles = 0x140; // QAngle
    }
    namespace CCitadel_Modifier_TechBurst_ProcVData {
        constexpr uintptr_t m_ProcParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_InAOE_VData {
        constexpr uintptr_t m_PostAOEModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ReinforcingCasings {
        constexpr uintptr_t m_LastHitShotID = 0xc0; // ShotID_t
    }
    namespace CCitadel_Modifier_Upgrade_OverdriveClip_VData {
        constexpr uintptr_t m_BuffEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TracerParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_DisarmProcWatcherVData {
        constexpr uintptr_t m_BuildUpModifier = 0x638; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_DisarmProcModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImmunityModifier = 0x658; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TracerParticle = 0x668; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_DiminishingSlow {
        constexpr uintptr_t m_flSlowPercent = 0xc0; // float32
    }
    namespace CRagdollManager {
        constexpr uintptr_t m_iCurrentMaxRagdollCount = 0x560; // int8
    }
    namespace CAbility_Rutger_CheatDeath_VData {
        constexpr uintptr_t m_ModifierCheatDeathActivated = 0x1550; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CModifierFealtyTargetVData {
        constexpr uintptr_t m_CastParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CItemMetalSkinVData {
        constexpr uintptr_t m_MetalSkinModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Upgrade_AmmoScavenger_VData {
        constexpr uintptr_t m_BuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_StackSound = 0x15a8; // CSoundEventName
        constexpr uintptr_t m_AmmoSound = 0x15b8; // CSoundEventName
    }
    namespace CCitadel_Modifier_ShieldTracker_BaseVData {
        constexpr uintptr_t m_flShieldImpactEffectDuration = 0x608; // float32
        constexpr uintptr_t m_ShieldImpactParticle = 0x610; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShieldImpactModifier = 0x6f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t eShieldType = 0x700; // EShieldType_t
        constexpr uintptr_t flCooldownOnDamage = 0x704; // float32
        constexpr uintptr_t flCooldownOnBreak = 0x708; // float32
        constexpr uintptr_t flRegenDuration = 0x70c; // float32
    }
    namespace C_TeamRoundTimer {
        constexpr uintptr_t m_bTimerPaused = 0x560; // bool
        constexpr uintptr_t m_flTimeRemaining = 0x564; // float32
        constexpr uintptr_t m_flTimerEndTime = 0x568; // GameTime_t
        constexpr uintptr_t m_bIsDisabled = 0x56c; // bool
        constexpr uintptr_t m_bShowInHUD = 0x56d; // bool
        constexpr uintptr_t m_nTimerLength = 0x570; // int32
        constexpr uintptr_t m_nTimerInitialLength = 0x574; // int32
        constexpr uintptr_t m_nTimerMaxLength = 0x578; // int32
        constexpr uintptr_t m_bAutoCountdown = 0x57c; // bool
        constexpr uintptr_t m_nSetupTimeLength = 0x580; // int32
        constexpr uintptr_t m_nState = 0x584; // int32
        constexpr uintptr_t m_bStartPaused = 0x588; // bool
        constexpr uintptr_t m_bInCaptureWatchState = 0x589; // bool
        constexpr uintptr_t m_flTotalTime = 0x58c; // float32
        constexpr uintptr_t m_bStopWatchTimer = 0x590; // bool
        constexpr uintptr_t m_bFireFinished = 0x591; // bool
        constexpr uintptr_t m_bFire5MinRemain = 0x592; // bool
        constexpr uintptr_t m_bFire4MinRemain = 0x593; // bool
        constexpr uintptr_t m_bFire3MinRemain = 0x594; // bool
        constexpr uintptr_t m_bFire2MinRemain = 0x595; // bool
        constexpr uintptr_t m_bFire1MinRemain = 0x596; // bool
        constexpr uintptr_t m_bFire30SecRemain = 0x597; // bool
        constexpr uintptr_t m_bFire10SecRemain = 0x598; // bool
        constexpr uintptr_t m_bFire5SecRemain = 0x599; // bool
        constexpr uintptr_t m_bFire4SecRemain = 0x59a; // bool
        constexpr uintptr_t m_bFire3SecRemain = 0x59b; // bool
        constexpr uintptr_t m_bFire2SecRemain = 0x59c; // bool
        constexpr uintptr_t m_bFire1SecRemain = 0x59d; // bool
        constexpr uintptr_t m_nOldTimerLength = 0x5a0; // int32
        constexpr uintptr_t m_nOldTimerState = 0x5a4; // int32
    }
    namespace C_LaneNode {
        constexpr uintptr_t m_nPlayerTeamEventIndex = 0x878; // int32
    }
    namespace C_CitadelViscousBall {
        constexpr uintptr_t m_hAbility = 0x848; // CHandle< C_CitadelBaseAbility >
    }
    namespace CCitadel_Modifier_RagingCurrentVData {
        constexpr uintptr_t m_TorrentParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TorrentModifier = 0x7c8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityThumper2VData {
        constexpr uintptr_t m_StompParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStompExplosionSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_BuffModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BarbedWireAuraModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_HauntWatcherVData {
        constexpr uintptr_t m_HauntDamageModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuildUpModifier = 0x648; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_ExplodeSound = 0x658; // CSoundEventName
    }
    namespace CAbilityVacuumVData {
        constexpr uintptr_t m_VacuumAuraModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flAirSpeedMax = 0x1560; // float32
        constexpr uintptr_t m_flFallSpeedMax = 0x1564; // float32
        constexpr uintptr_t m_flAirDrag = 0x1568; // float32
        constexpr uintptr_t m_flMaxMovespeed = 0x156c; // float32
    }
    namespace CModifierBullChargingVData {
        constexpr uintptr_t m_ChargeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilitySprintVData {
        constexpr uintptr_t m_SprintParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strSprintSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_flInCombatDuration = 0x1640; // float32
        constexpr uintptr_t m_flSprintAccMS = 0x1644; // float32
    }
    namespace CCitadel_Modifier_ZiplineSpeed {
        constexpr uintptr_t m_iLane = 0xc0; // int32
    }
    namespace CAbility_Synth_Affliction {
        constexpr uintptr_t m_hAOEParticle = 0xd08; // ParticleIndex_t
    }
    namespace CCitadel_Ability_InfinitySlashVData {
        constexpr uintptr_t m_flRiseSpeed = 0x1558; // float32
        constexpr uintptr_t m_flRiseDuration = 0x155c; // float32
        constexpr uintptr_t m_flSpeedDecayScale = 0x1560; // float32
        constexpr uintptr_t m_flExplodeHoldTime = 0x1564; // float32
        constexpr uintptr_t m_flExplosionShakeAmplitude = 0x1568; // float32
        constexpr uintptr_t m_flExplosionShakeFrequency = 0x156c; // float32
        constexpr uintptr_t m_flExplosionShakeDuration = 0x1570; // float32
        constexpr uintptr_t m_AOERangeEffect = 0x1578; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AnimCastEffect = 0x1658; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_cameraSequenceExplosion = 0x1738; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_BuffModifier = 0x17c0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffTimerModifier = 0x17d0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierRiotCastDelayVData {
        constexpr uintptr_t m_UnstoppableModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_TangoTether {
        constexpr uintptr_t m_desatVolIdx = 0xc98; // SatVolumeIndex_t
        constexpr uintptr_t m_vecCastStartPos = 0xc9c; // Vector
        constexpr uintptr_t m_vecDashStartPos = 0xca8; // Vector
        constexpr uintptr_t m_vecDashEndPos = 0xcb4; // Vector
        constexpr uintptr_t m_angDashStartAng = 0xcc0; // QAngle
        constexpr uintptr_t m_flDashStartTime = 0xccc; // GameTime_t
        constexpr uintptr_t m_flGrappleStartTime = 0xcd0; // GameTime_t
        constexpr uintptr_t m_flGrappleArriveTime = 0xcd4; // GameTime_t
        constexpr uintptr_t m_hTarget = 0xcd8; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flVelSpring = 0xcdc; // float32
        constexpr uintptr_t m_flGrappleShotAttackTime = 0xce0; // GameTime_t
        constexpr uintptr_t m_nTicksNotMoving = 0xce4; // int32
        constexpr uintptr_t m_vecPrevPos = 0xce8; // Vector
        constexpr uintptr_t m_rgTargetPos = 0xcf4; // Vector[20]
        constexpr uintptr_t m_rgTargetPosTime = 0xde4; // GameTime_t[20]
        constexpr uintptr_t m_nGrappleTravelEffect = 0xe34; // ParticleIndex_t
    }
    namespace CCitadel_Ability_ShivDagger {
        constexpr uintptr_t m_bIsInRicochet = 0xc98; // bool
    }
    namespace CCitadel_Ability_Bull_LeapVData {
        constexpr uintptr_t m_CrashSpeedScaleCurve = 0x1550; // CPiecewiseCurve
        constexpr uintptr_t m_BoostModifier = 0x1590; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CrashModifier = 0x15a0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImmunityModifier = 0x15b0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_LandingBonusesModifier = 0x15c0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TakeOffParticle = 0x15d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x16b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AoEPreviewParticle = 0x1790; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_nHoverParticle = 0x1870; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strCrashingSound = 0x1950; // CSoundEventName
        constexpr uintptr_t m_strImpactSound = 0x1960; // CSoundEventName
        constexpr uintptr_t m_flStartupTime = 0x1970; // float32
        constexpr uintptr_t m_flForwardBoostSpeed = 0x1974; // float32
        constexpr uintptr_t m_flUpBoostSpeed = 0x1978; // float32
        constexpr uintptr_t m_flBoostTurnRate = 0x197c; // float32
        constexpr uintptr_t m_flHoverTime = 0x1980; // float32
        constexpr uintptr_t m_flMinAimAngle = 0x1984; // float32
        constexpr uintptr_t m_flBoostGain = 0x1988; // float32
        constexpr uintptr_t m_flBoostTime = 0x198c; // float32
        constexpr uintptr_t m_flLandingTime = 0x1990; // float32
        constexpr uintptr_t m_flCrashSpeed = 0x1994; // float32
        constexpr uintptr_t m_flHoverInputSpeedMax = 0x1998; // float32
        constexpr uintptr_t m_flHoverInputAcceleration = 0x199c; // float32
        constexpr uintptr_t m_flHoverSpeedDecay = 0x19a0; // float32
    }
    namespace C_CitadelBaseAbility {
        constexpr uintptr_t m_vecIntrinsicModifiers = 0x630; // CUtlVector< CModifierHandleTyped< CCitadelModifier > >
        constexpr uintptr_t m_pCastDelayAutoModifier = 0x648; // CModifierHandleTyped< CCitadelModifier >
        constexpr uintptr_t m_pChannelAutoModifier = 0x660; // CModifierHandleTyped< CCitadelModifier >
        constexpr uintptr_t m_strUsedCastGraphParam = 0x678; // CGlobalSymbol
        constexpr uintptr_t m_nCastParamNeedsResetTick = 0x680; // int32
        constexpr uintptr_t m_bIsCoolingDownInternal = 0x684; // bool
        constexpr uintptr_t m_flCancelLockoutTime = 0x688; // GameTime_t
        constexpr uintptr_t m_bChanneling = 0x6a8; // bool
        constexpr uintptr_t m_bInCastDelay = 0x6a9; // bool
        constexpr uintptr_t m_vecImbuedByAbilitiyIDs = 0x6b0; // C_NetworkUtlVectorBase< CUtlStringToken >
        constexpr uintptr_t m_nUpgradeBits = 0x6c8; // int32
        constexpr uintptr_t m_iBucketID = 0x6cc; // int32
        constexpr uintptr_t m_bToggleState = 0x6d0; // bool
        constexpr uintptr_t m_flCooldownStart = 0x6d4; // GameTime_t
        constexpr uintptr_t m_flCooldownEnd = 0x6d8; // GameTime_t
        constexpr uintptr_t m_flCastCompletedTime = 0x6dc; // GameTime_t
        constexpr uintptr_t m_flChannelStartTime = 0x6e0; // GameTime_t
        constexpr uintptr_t m_flCastDelayStartTime = 0x6e4; // GameTime_t
        constexpr uintptr_t m_eAbilitySlot = 0x6e8; // EAbilitySlots_t
        constexpr uintptr_t m_flPostCastDelayEndTime = 0x6ec; // GameTime_t
        constexpr uintptr_t m_iRemainingCharges = 0x6f0; // int32
        constexpr uintptr_t m_flChargeRechargeStart = 0x6f4; // GameTime_t
        constexpr uintptr_t m_flChargeRechargeEnd = 0x6f8; // GameTime_t
        constexpr uintptr_t m_flMovementControlActiveTime = 0x6fc; // GameTime_t
        constexpr uintptr_t m_flSelectedChangedTime = 0x700; // GameTime_t
        constexpr uintptr_t m_flAltCastHoldStartTime = 0x704; // GameTime_t
        constexpr uintptr_t m_flAltCastDoubleTapStartTime = 0x708; // GameTime_t
        constexpr uintptr_t m_nImbuedAbilityID = 0x70c; // CUtlStringToken
        constexpr uintptr_t m_bSelectionModeIsAltMode = 0x710; // bool
    }
    namespace C_NPC_TeslaCoil {
        constexpr uintptr_t m_CCitadelAbilityComponent = 0xaf0; // CCitadelAbilityComponent
    }
    namespace CPathSimple {
        constexpr uintptr_t m_pathString = 0x5b8; // CUtlString
        constexpr uintptr_t m_vecPathSamplePositions = 0x5c0; // CUtlVector< Vector >
        constexpr uintptr_t m_vecPathSampleParameters = 0x5d8; // CUtlVector< float32 >
        constexpr uintptr_t m_vecPathSampleDistances = 0x5f0; // CUtlVector< float32 >
    }
    namespace CCitadel_Ability_MageWalkVData {
        constexpr uintptr_t m_BubbleModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_TurretModifier = 0x1560; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_strCastEffect = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_UltCombo_Target {
        constexpr uintptr_t m_angles = 0xc8; // QAngle
    }
    namespace CCitadel_Modifier_Bebop_LaserBeam {
        constexpr uintptr_t m_flSoundStartTime = 0x330; // GameTime_t
        constexpr uintptr_t m_vStart = 0x338; // Vector
        constexpr uintptr_t m_vEnd = 0x344; // Vector
        constexpr uintptr_t m_vPrevEnd = 0x350; // Vector
        constexpr uintptr_t m_flAngleBetweenTrace = 0x35c; // float32
        constexpr uintptr_t m_flDamagePerTick = 0x360; // float32
        constexpr uintptr_t m_flNextDamageTick = 0x364; // GameTime_t
    }
    namespace CCitadel_Modifier_Astro_Rifle_SelfVData {
        constexpr uintptr_t m_WeaponFxParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Chrono_KineticCarbineVData {
        constexpr uintptr_t m_flShotTimeScaleLingerDuration = 0x1550; // float32
        constexpr uintptr_t m_ChargingModifier = 0x1558; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1568; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_cameraKineticCarbineShotFired = 0x1578; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Item_DivinersKevlar_VData {
        constexpr uintptr_t m_BuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PrecastSpiritBuffModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Upgrade_MagicCarpet {
        constexpr uintptr_t m_flFlyingStartTime = 0xcb0; // GameTime_t
        constexpr uintptr_t m_bFlying = 0xd60; // bool
        constexpr uintptr_t m_bSummoning = 0xd61; // bool
    }
    namespace CPointOffScreenIndicatorUi {
        constexpr uintptr_t m_bBeenEnabled = 0xaa0; // bool
        constexpr uintptr_t m_bHide = 0xaa1; // bool
        constexpr uintptr_t m_flSeenTargetTime = 0xaa4; // float32
        constexpr uintptr_t m_pTargetPanel = 0xaa8; // C_PointClientUIWorldPanel*
    }
    namespace CCitadel_Ability_Shakedown_Target {
        constexpr uintptr_t m_hShadowdownAbility = 0xc98; // CHandle< CCitadel_Ability_Yakuza_Shakedown >
        constexpr uintptr_t m_AimPos = 0xc9c; // Vector
    }
    namespace CCitadel_Bounce_PadVData {
        constexpr uintptr_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_IdleParticle = 0x108; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BounceParticle = 0x1e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DestroyParticle = 0x2c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strCasterBounceSound = 0x3a8; // CSoundEventName
        constexpr uintptr_t m_strOtherHeroBounceSound = 0x3b8; // CSoundEventName
        constexpr uintptr_t m_strBarrelBounceSound = 0x3c8; // CSoundEventName
        constexpr uintptr_t m_strExpiredSound = 0x3d8; // CSoundEventName
    }
    namespace CCitadel_Ability_SmokeBombVData {
        constexpr uintptr_t m_InvisModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PurgeParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BurstFire_Actuator {
        constexpr uintptr_t m_bLastShotInFlight = 0xc0; // bool
        constexpr uintptr_t m_bBonusTracked = 0xc1; // bool
        constexpr uintptr_t m_nHitCounter = 0xc4; // int32
        constexpr uintptr_t m_nTotalBurstFireShots = 0xc8; // int32
        constexpr uintptr_t m_nInitialzedClipSize = 0xcc; // int32
        constexpr uintptr_t m_nBonusPitch = 0xd0; // int32
        constexpr uintptr_t m_bInitialized = 0xd4; // bool
        constexpr uintptr_t m_nIncreasedBurstShotCount = 0xd8; // int32
        constexpr uintptr_t m_flIntraBurstCycleTime = 0xdc; // float32
        constexpr uintptr_t m_flCycleTimePct = 0xe0; // float32
        constexpr uintptr_t m_flMaxCycleTimeOverride = 0xe4; // float32
        constexpr uintptr_t m_flMaxBurstFireCooldownOverride = 0xe8; // float32
    }
    namespace CCitadel_Modifier_Siphon_Bullets_WatcherVData {
        constexpr uintptr_t m_HealModifier = 0x628; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadelObserver_MovementServices {
        constexpr uintptr_t m_flRoamingSpeed = 0x1d8; // float32
        constexpr uintptr_t m_bHasFreeCursor = 0x1dc; // bool
    }
    namespace CitadelHeroData_t {
        constexpr uintptr_t m_vecAnimGraphDefaultValueOverrides = 0x8; // CUtlVector< HeroAnimGraphDefaultValueOverride_t >
        constexpr uintptr_t m_HeroID = 0x28; // HeroID_t
        constexpr uintptr_t m_hDamageTakenParticle = 0x30; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_hGroundDamageTakenParticle = 0x110; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_hDeathParticle = 0x1f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_hLowHealthParticle = 0x2d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strSelectionImage = 0x3b0; // CPanoramaImageName
        constexpr uintptr_t m_strIconImageSmall = 0x3c0; // CPanoramaImageName
        constexpr uintptr_t m_strIconHeroCard = 0x3d0; // CPanoramaImageName
        constexpr uintptr_t m_strMinimapImage = 0x3e0; // CPanoramaImageName
        constexpr uintptr_t m_strTopBarImage = 0x3f0; // CPanoramaImageName
        constexpr uintptr_t m_strTopBarVertical = 0x400; // CPanoramaImageName
        constexpr uintptr_t m_hRespawnParticle = 0x410; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_colorUI = 0x4f0; // Color
        constexpr uintptr_t m_colorGlowFriendly = 0x4f4; // Color
        constexpr uintptr_t m_colorGlowEnemy = 0x4f8; // Color
        constexpr uintptr_t m_colorGlowTeam1 = 0x4fc; // Color
        constexpr uintptr_t m_colorGlowTeam2 = 0x500; // Color
        constexpr uintptr_t m_strModelName = 0x508; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_nModelSkin = 0x5e8; // int32
        constexpr uintptr_t m_strWIPModelName = 0x5f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_strMainOnlyModelName = 0x6d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_sAG2VariationName = 0x7b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphVariation > >
        constexpr uintptr_t m_strUIPortraitMap = 0x890; // CUtlString
        constexpr uintptr_t m_strUIShoppingMap = 0x898; // CUtlString
        constexpr uintptr_t m_heroStatsUI = 0x8a0; // HeroStatsUI_t
        constexpr uintptr_t m_heroStatsDisplay = 0x8d0; // HeroStatsDisplay_t
        constexpr uintptr_t m_ShopStatDisplay = 0x960; // CitadelStatsDisplay_t
        constexpr uintptr_t m_strDeathSound = 0xa08; // CSoundEventName
        constexpr uintptr_t m_strLastHitSound = 0xa18; // CSoundEventName
        constexpr uintptr_t m_strRosterSelectedSound = 0xa28; // CSoundEventName
        constexpr uintptr_t m_strRosterRemovedSound = 0xa38; // CSoundEventName
        constexpr uintptr_t m_strFootstepSoundEventDefault = 0xa48; // CSoundEventName
        constexpr uintptr_t m_strLowHealthSound = 0xa58; // CSoundEventName
        constexpr uintptr_t m_strHeroSpecificLowHealthSound = 0xa68; // CSoundEventName
        constexpr uintptr_t m_strMovementLoop = 0xa78; // CSoundEventName
        constexpr uintptr_t m_hFootstepSounds = 0xa88; // CFootstepTableHandle
        constexpr uintptr_t m_hGameSoundEventScript = 0xa90; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > >
        constexpr uintptr_t m_hGeneratedVOEventScript = 0xb70; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > >
        constexpr uintptr_t m_flFootstepSoundTravelDistanceMeters = 0xc50; // float32
        constexpr uintptr_t m_flStealthSpeedMetersPerSecond = 0xc54; // float32
        constexpr uintptr_t m_flStepSoundTime = 0xc58; // float32
        constexpr uintptr_t m_flStepSoundTimeSprinting = 0xc5c; // float32
        constexpr uintptr_t m_flCollisionRadius = 0xc60; // float32
        constexpr uintptr_t m_flCollisionHeight = 0xc64; // float32
        constexpr uintptr_t m_flStepHeight = 0xc68; // float32
        constexpr uintptr_t m_bInDevelopment = 0xc6c; // bool
        constexpr uintptr_t m_bAssignedPlayersOnly = 0xc6d; // bool
        constexpr uintptr_t m_bBotSelectable = 0xc6e; // bool
        constexpr uintptr_t m_bNewPlayerRecommended = 0xc6f; // bool
        constexpr uintptr_t m_bLaneTestingRecommended = 0xc70; // bool
        constexpr uintptr_t m_bNeedsTesting = 0xc71; // bool
        constexpr uintptr_t m_bLimitedTesting = 0xc72; // bool
        constexpr uintptr_t m_bDisabled = 0xc73; // bool
        constexpr uintptr_t m_bPlayerSelectable = 0xc74; // bool
        constexpr uintptr_t m_bAvailableInHeroLabs = 0xc75; // bool
        constexpr uintptr_t m_nComplexity = 0xc78; // int32
        constexpr uintptr_t m_nReadability = 0xc7c; // int32
        constexpr uintptr_t m_flMinLowHealthPercentage = 0xc80; // float32
        constexpr uintptr_t m_flMaxLowHealthPercentage = 0xc84; // float32
        constexpr uintptr_t m_flMinMidHealthPercentage = 0xc88; // float32
        constexpr uintptr_t m_flMaxMidHealthPercentage = 0xc8c; // float32
        constexpr uintptr_t m_flMinHealthForThreshold = 0xc90; // float32
        constexpr uintptr_t m_flMaxHealthForThreshold = 0xc94; // float32
        constexpr uintptr_t m_mapStartingStats = 0xc98; // CUtlOrderedMap< EStatsType, float32 >
        constexpr uintptr_t m_mapScalingStats = 0xcc0; // CUtlOrderedMap< EStatsType, HeroScalingStat_t >
        constexpr uintptr_t m_mapBoundAbilities = 0xd00; // CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > >
        constexpr uintptr_t m_mapWIPAbilities = 0xd28; // CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > >
        constexpr uintptr_t m_mapItemSlotInfo = 0xd50; // CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t >
        constexpr uintptr_t m_RecommendedUpgrades = 0xd78; // CUtlVector< CSubclassName< 4 > >
        constexpr uintptr_t m_RecommendedAbilityOrder = 0xe00; // CUtlVector< CSubclassName< 4 > >
        constexpr uintptr_t m_eAbilityResourceType = 0xe30; // EAbilityResourceType
        constexpr uintptr_t m_mapStandardLevelUpUpgrades = 0xe50; // CUtlOrderedMap< EModifierValue, float32 >
        constexpr uintptr_t m_mapLevelInfo = 0xe78; // CUtlOrderedMap< int32, HeroLevel_t >
        constexpr uintptr_t m_mapPurchaseBonuses = 0xea0; // CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > >
    }
    namespace C_SkyCamera {
        constexpr uintptr_t m_skyboxData = 0x560; // sky3dparams_t
        constexpr uintptr_t m_skyboxSlotToken = 0x5f0; // CUtlStringToken
        constexpr uintptr_t m_bUseAngles = 0x5f4; // bool
        constexpr uintptr_t m_pNext = 0x5f8; // C_SkyCamera*
    }
    namespace CModifierVacuumAuraVData {
        constexpr uintptr_t m_FinishParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AlliedParticle = 0x728; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyParticle = 0x808; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAmbientLoopingLocalPlayerSound = 0x8e8; // CSoundEventName
    }
    namespace C_CitadelProjectile_ImmobilizeTrap {
        constexpr uintptr_t m_bShouldDraw = 0x8c8; // bool
    }
    namespace C_EntityDissolve {
        constexpr uintptr_t m_flStartTime = 0x848; // GameTime_t
        constexpr uintptr_t m_flFadeInStart = 0x84c; // float32
        constexpr uintptr_t m_flFadeInLength = 0x850; // float32
        constexpr uintptr_t m_flFadeOutModelStart = 0x854; // float32
        constexpr uintptr_t m_flFadeOutModelLength = 0x858; // float32
        constexpr uintptr_t m_flFadeOutStart = 0x85c; // float32
        constexpr uintptr_t m_flFadeOutLength = 0x860; // float32
        constexpr uintptr_t m_flNextSparkTime = 0x864; // GameTime_t
        constexpr uintptr_t m_nDissolveType = 0x868; // EntityDisolveType_t
        constexpr uintptr_t m_vDissolverOrigin = 0x86c; // Vector
        constexpr uintptr_t m_nMagnitude = 0x878; // uint32
        constexpr uintptr_t m_bCoreExplode = 0x87c; // bool
        constexpr uintptr_t m_bLinkedToServerEnt = 0x87d; // bool
    }
    namespace CAbility_Mirage_Tornado {
        constexpr uintptr_t m_vLastValidMovementPosition = 0xc98; // Vector
        constexpr uintptr_t m_hActiveProjectile = 0xca4; // CHandle< C_CitadelProjectile >
    }
    namespace CModifierRiotProtocolEnemyDebuffVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityVandalOverflowVData {
        constexpr uintptr_t m_LiftModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetCastSound = 0x1640; // CSoundEventName
    }
    namespace CModifier_Wrecker_UltimateThrowEnemyVData {
        constexpr uintptr_t m_EnemyHeroStasisEffect = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyHeroGrabEffect = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_ExplosiveBulletsVData {
        constexpr uintptr_t m_ExplodeParticle = 0x738; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSound = 0x818; // CSoundEventName
    }
    namespace C_fogplayerparams_t {
        constexpr uintptr_t m_hCtrl = 0x8; // CHandle< C_FogController >
        constexpr uintptr_t m_flTransitionTime = 0xc; // float32
        constexpr uintptr_t m_OldColor = 0x10; // Color
        constexpr uintptr_t m_flOldStart = 0x14; // float32
        constexpr uintptr_t m_flOldEnd = 0x18; // float32
        constexpr uintptr_t m_flOldMaxDensity = 0x1c; // float32
        constexpr uintptr_t m_flOldHDRColorScale = 0x20; // float32
        constexpr uintptr_t m_flOldFarZ = 0x24; // float32
        constexpr uintptr_t m_NewColor = 0x28; // Color
        constexpr uintptr_t m_flNewStart = 0x2c; // float32
        constexpr uintptr_t m_flNewEnd = 0x30; // float32
        constexpr uintptr_t m_flNewMaxDensity = 0x34; // float32
        constexpr uintptr_t m_flNewHDRColorScale = 0x38; // float32
        constexpr uintptr_t m_flNewFarZ = 0x3c; // float32
    }
    namespace CCitadelItemPickupRejuvVData {
        constexpr uintptr_t m_AbilityProjectile = 0x28; // CSubclassName< 4 >
        constexpr uintptr_t m_RejuvModifier = 0x38; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PunchPickupModifier = 0x48; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_IsFrozenParticle = 0x58; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_EnvWindShared {
        constexpr uintptr_t m_flStartTime = 0x8; // GameTime_t
        constexpr uintptr_t m_iWindSeed = 0xc; // uint32
        constexpr uintptr_t m_iMinWind = 0x10; // uint16
        constexpr uintptr_t m_iMaxWind = 0x12; // uint16
        constexpr uintptr_t m_windRadius = 0x14; // int32
        constexpr uintptr_t m_iMinGust = 0x18; // uint16
        constexpr uintptr_t m_iMaxGust = 0x1a; // uint16
        constexpr uintptr_t m_flMinGustDelay = 0x1c; // float32
        constexpr uintptr_t m_flMaxGustDelay = 0x20; // float32
        constexpr uintptr_t m_flGustDuration = 0x24; // float32
        constexpr uintptr_t m_iGustDirChange = 0x28; // uint16
        constexpr uintptr_t m_location = 0x2c; // Vector
        constexpr uintptr_t m_iszGustSound = 0x38; // int32
        constexpr uintptr_t m_iWindDir = 0x3c; // int32
        constexpr uintptr_t m_flWindSpeed = 0x40; // float32
        constexpr uintptr_t m_currentWindVector = 0x44; // Vector
        constexpr uintptr_t m_CurrentSwayVector = 0x50; // Vector
        constexpr uintptr_t m_PrevSwayVector = 0x5c; // Vector
        constexpr uintptr_t m_iInitialWindDir = 0x68; // uint16
        constexpr uintptr_t m_flInitialWindSpeed = 0x6c; // float32
        constexpr uintptr_t m_flVariationTime = 0x70; // GameTime_t
        constexpr uintptr_t m_flSwayTime = 0x74; // GameTime_t
        constexpr uintptr_t m_flSimTime = 0x78; // GameTime_t
        constexpr uintptr_t m_flSwitchTime = 0x7c; // GameTime_t
        constexpr uintptr_t m_flAveWindSpeed = 0x80; // float32
        constexpr uintptr_t m_bGusting = 0x84; // bool
        constexpr uintptr_t m_flWindAngleVariation = 0x88; // float32
        constexpr uintptr_t m_flWindSpeedVariation = 0x8c; // float32
        constexpr uintptr_t m_hEntOwner = 0x90; // CHandle< C_BaseEntity >
    }
    namespace C_PostProcessingVolume {
        constexpr uintptr_t m_hPostSettings = 0x858; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
        constexpr uintptr_t m_flFadeDuration = 0x860; // float32
        constexpr uintptr_t m_flMinLogExposure = 0x864; // float32
        constexpr uintptr_t m_flMaxLogExposure = 0x868; // float32
        constexpr uintptr_t m_flMinExposure = 0x86c; // float32
        constexpr uintptr_t m_flMaxExposure = 0x870; // float32
        constexpr uintptr_t m_flExposureCompensation = 0x874; // float32
        constexpr uintptr_t m_flExposureFadeSpeedUp = 0x878; // float32
        constexpr uintptr_t m_flExposureFadeSpeedDown = 0x87c; // float32
        constexpr uintptr_t m_flTonemapEVSmoothingRange = 0x880; // float32
        constexpr uintptr_t m_bMaster = 0x884; // bool
        constexpr uintptr_t m_bExposureControl = 0x885; // bool
    }
    namespace CCitadel_Modifier_Passive_CloakVData {
        constexpr uintptr_t m_InvisModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_UIHudMessage {
        constexpr uintptr_t m_strHudMessage = 0xc0; // CUtlString
        constexpr uintptr_t m_bIncludeDecimal = 0xc8; // bool
        constexpr uintptr_t m_eModifierValue = 0xcc; // int32
        constexpr uintptr_t m_flValue = 0xd0; // float32
    }
    namespace CUnitStatusOverlayNew {
        constexpr uintptr_t m_flUIScale = 0xb08; // float32
    }
    namespace CCitadel_Modifier_IcePath {
        constexpr uintptr_t m_iShardCount = 0x2f0; // int32
        constexpr uintptr_t m_vLastShardPosition = 0x2f4; // Vector
        constexpr uintptr_t m_hSurfShard = 0x300; // CHandle< C_BaseModelEntity >
    }
    namespace CCitadel_Ability_ChronoSwap {
        constexpr uintptr_t m_bHitTarget = 0xc98; // bool
    }
    namespace CAbilityCardTossVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SummonedCard = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strCardTossSound = 0x1710; // CSoundEventName
        constexpr uintptr_t m_strCardSummonSound = 0x1720; // CSoundEventName
        constexpr uintptr_t m_flSummonedCardStartSideOffset = 0x1730; // float32
        constexpr uintptr_t m_flSummonedCardSideOffsetStep = 0x1734; // float32
        constexpr uintptr_t m_flSummonedCardForwardOffset = 0x1738; // float32
        constexpr uintptr_t m_flSummonedCardVerticalOffset = 0x173c; // float32
    }
    namespace CModifierFlyingStrikeTargetVData {
        constexpr uintptr_t m_GrappleRopeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatueVData {
        constexpr uintptr_t m_AOEParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnabledParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DrainParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strEnabledSound = 0x8a8; // CSoundEventName
        constexpr uintptr_t m_strEnabledLoopSound = 0x8b8; // CSoundEventName
        constexpr uintptr_t m_strDisabledSound = 0x8c8; // CSoundEventName
        constexpr uintptr_t m_strLaserHitSound = 0x8d8; // CSoundEventName
        constexpr uintptr_t m_strLaserStartSound = 0x8e8; // CSoundEventName
        constexpr uintptr_t m_strLaserLoopSound = 0x8f8; // CSoundEventName
        constexpr uintptr_t m_TargetModifier = 0x908; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_RevealModifier = 0x918; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_StatueInvis = 0x928; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flNewTargetAttackTime = 0x938; // float32
        constexpr uintptr_t m_flMinRevealTime = 0x93c; // float32
        constexpr uintptr_t m_flMinDebuffTime = 0x940; // float32
    }
    namespace CCitadel_Modifier_SleepBomb {
        constexpr uintptr_t m_vecOrigin = 0x210; // Vector
    }
    namespace CModifierStackingDamageVData {
        constexpr uintptr_t m_SlowModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierStimPakVData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Sprint {
        constexpr uintptr_t m_nSprintParticle = 0xc98; // ParticleIndex_t
        constexpr uintptr_t m_bSprinting = 0xc9c; // bool
        constexpr uintptr_t m_flInCombatStartTime = 0xca0; // GameTime_t
        constexpr uintptr_t m_flInCombatEndTime = 0xca4; // GameTime_t
        constexpr uintptr_t m_flSprintStartTime = 0xca8; // GameTime_t
        constexpr uintptr_t m_bInCombat = 0xcac; // bool
    }
    namespace CCitadel_Modifier_DamageResistance {
        constexpr uintptr_t m_flShieldHealth = 0xc0; // float32
    }
    namespace C_BaseFire {
        constexpr uintptr_t m_flScale = 0x560; // float32
        constexpr uintptr_t m_flStartScale = 0x564; // float32
        constexpr uintptr_t m_flScaleTime = 0x568; // float32
        constexpr uintptr_t m_nFlags = 0x56c; // uint32
    }
    namespace C_CitadelPositionHomingProjectile {
        constexpr uintptr_t m_vecHomingPosition = 0x8c8; // Vector
    }
    namespace CBasePlayerController {
        constexpr uintptr_t m_nFinalPredictedTick = 0x568; // int32
        constexpr uintptr_t m_CommandContext = 0x570; // C_CommandContext
        constexpr uintptr_t m_nInButtonsWhichAreToggles = 0x608; // uint64
        constexpr uintptr_t m_nTickBase = 0x610; // uint32
        constexpr uintptr_t m_hPawn = 0x614; // CHandle< C_BasePlayerPawn >
        constexpr uintptr_t m_bKnownTeamMismatch = 0x618; // bool
        constexpr uintptr_t m_hPredictedPawn = 0x61c; // CHandle< C_BasePlayerPawn >
        constexpr uintptr_t m_nSplitScreenSlot = 0x620; // CSplitScreenSlot
        constexpr uintptr_t m_hSplitOwner = 0x624; // CHandle< CBasePlayerController >
        constexpr uintptr_t m_hSplitScreenPlayers = 0x628; // CUtlVector< CHandle< CBasePlayerController > >
        constexpr uintptr_t m_bIsHLTV = 0x640; // bool
        constexpr uintptr_t m_iConnected = 0x644; // PlayerConnectedState
        constexpr uintptr_t m_iszPlayerName = 0x648; // char[128]
        constexpr uintptr_t m_steamID = 0x6d0; // uint64
        constexpr uintptr_t m_bIsLocalPlayerController = 0x6d8; // bool
        constexpr uintptr_t m_iDesiredFOV = 0x6dc; // uint32
    }
    namespace CCitadel_Modifier_HealthSwapVData {
        constexpr uintptr_t m_BloodExchangeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_ApplyDebuff_ProcVData {
        constexpr uintptr_t m_bUseNonEmbedded = 0x638; // bool
        constexpr uintptr_t m_DebuffModifier = 0x640; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_NonEmbeddedModifier = 0x650; // CSubclassName< 2 >
    }
    namespace CModifierGangActivityAbilitySwapVData {
        constexpr uintptr_t m_SummonGangster = 0x608; // CSubclassName< 4 >
        constexpr uintptr_t m_TeleportToGangster = 0x618; // CSubclassName< 4 >
        constexpr uintptr_t m_Cancel = 0x628; // CSubclassName< 4 >
        constexpr uintptr_t m_ReplaceWithSummonGangster = 0x638; // CSubclassName< 4 >
        constexpr uintptr_t m_ReplaceWithTeleportToGangster = 0x648; // CSubclassName< 4 >
        constexpr uintptr_t m_ReplaceWithCancel = 0x658; // CSubclassName< 4 >
    }
    namespace CModifierRestorativeGooVData {
        constexpr uintptr_t m_RestorativeGooEndParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flDistanceCameraOffsetLerpTime = 0x6e8; // float32
        constexpr uintptr_t m_flDistanceCameraOffsetBias = 0x6ec; // float32
        constexpr uintptr_t m_flDistanceCameraOffset = 0x6f0; // float32
        constexpr uintptr_t m_BreakoutProgressBarModifier = 0x6f8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PostCubeBuffModifier = 0x708; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_NonTargetLoopingSound = 0x718; // CSoundEventName
        constexpr uintptr_t m_TargetLoopingSound = 0x728; // CSoundEventName
        constexpr uintptr_t m_LightMeleeImpact = 0x738; // CSoundEventName
        constexpr uintptr_t m_HeavyMeleeImpact = 0x748; // CSoundEventName
    }
    namespace CCitadel_Modifier_BeltFed_Magazine {
        constexpr uintptr_t m_bInitialized = 0xc0; // bool
        constexpr uintptr_t m_flSpinUpRateOverride = 0xc4; // float32
        constexpr uintptr_t m_flSpinUpDecayOverride = 0xc8; // float32
        constexpr uintptr_t m_flMaxCycleTimeOverride = 0xcc; // float32
        constexpr uintptr_t m_flMaxBurstFireCooldownOverride = 0xd0; // float32
    }
    namespace CBaseAnimGraphController {
        constexpr uintptr_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
        constexpr uintptr_t m_bSequenceFinished = 0x14a8; // bool
        constexpr uintptr_t m_flSoundSyncTime = 0x14ac; // float32
        constexpr uintptr_t m_nActiveIKChainMask = 0x14b0; // uint32
        constexpr uintptr_t m_hSequence = 0x14b4; // HSequence
        constexpr uintptr_t m_flSeqStartTime = 0x14b8; // GameTime_t
        constexpr uintptr_t m_flSeqFixedCycle = 0x14bc; // float32
        constexpr uintptr_t m_nAnimLoopMode = 0x14c0; // AnimLoopMode_t
        constexpr uintptr_t m_flPlaybackRate = 0x14c4; // CNetworkedQuantizedFloat
        constexpr uintptr_t m_nNotifyState = 0x14d0; // SequenceFinishNotifyState_t
        constexpr uintptr_t m_bNetworkedAnimationInputsChanged = 0x14d2; // bool
        constexpr uintptr_t m_bNetworkedSequenceChanged = 0x14d3; // bool
        constexpr uintptr_t m_bLastUpdateSkipped = 0x14d4; // bool
        constexpr uintptr_t m_flPrevAnimUpdateTime = 0x14d8; // GameTime_t
    }
    namespace CCitadel_Ability_HealthSwap {
        constexpr uintptr_t m_nFXIndex = 0xc98; // ParticleIndex_t
        constexpr uintptr_t m_flHealthToCaster = 0xc9c; // float32
        constexpr uintptr_t m_flTargetHealthLost = 0xca0; // float32
        constexpr uintptr_t m_flPostCastHoldEndTime = 0xdc0; // GameTime_t
    }
    namespace CCitadel_Modifier_Galvanic_Storm_VData {
        constexpr uintptr_t m_TechShieldModifier = 0x828; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Push {
        constexpr uintptr_t m_vPushForce = 0xc0; // Vector
        constexpr uintptr_t m_flDecayRate = 0xcc; // float32
        constexpr uintptr_t m_TimeDestroy = 0xd0; // GameTime_t
    }
    namespace CCitadelModifierAuraVData {
        constexpr uintptr_t m_iAuraSearchType = 0x640; // CITADEL_UNIT_TARGET_TYPE
        constexpr uintptr_t m_iAuraSearchFlags = 0x644; // CITADEL_UNIT_TARGET_FLAGS
    }
    namespace CAbility_Synth_Barrage_VData {
        constexpr uintptr_t m_BarrageCasterModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AmpModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ShootParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChannelParticle = 0x1740; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strProjectileLaunchSound = 0x1820; // CSoundEventName
        constexpr uintptr_t m_flAttackInterval = 0x1830; // float32
    }
    namespace CModifierUppercuttedVData {
        constexpr uintptr_t m_StunParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStunSound = 0x6e8; // CSoundEventName
        constexpr uintptr_t m_NoExplodeModifier = 0x6f8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodeDebuffModifier = 0x708; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flEnemyNoAirDashDuration = 0x718; // float32
    }
    namespace CBaseAnimGraph {
        constexpr uintptr_t m_bInitiallyPopulateInterpHistory = 0x8c0; // bool
        constexpr uintptr_t m_bSuppressAnimEventSounds = 0x8c2; // bool
        constexpr uintptr_t m_bAnimGraphUpdateEnabled = 0x8d0; // bool
        constexpr uintptr_t m_flMaxSlopeDistance = 0x8d4; // float32
        constexpr uintptr_t m_vLastSlopeCheckPos = 0x8d8; // Vector
        constexpr uintptr_t m_bAnimationUpdateScheduled = 0x8e4; // bool
        constexpr uintptr_t m_vecForce = 0x8e8; // Vector
        constexpr uintptr_t m_nForceBone = 0x8f4; // int32
        constexpr uintptr_t m_pClientsideRagdoll = 0x8f8; // CBaseAnimGraph*
        constexpr uintptr_t m_bBuiltRagdoll = 0x900; // bool
        constexpr uintptr_t m_RagdollPose = 0x918; // PhysicsRagdollPose_t
        constexpr uintptr_t m_bRagdollClientSide = 0x960; // bool
        constexpr uintptr_t m_bHasAnimatedMaterialAttributes = 0x970; // bool
        constexpr uintptr_t m_animGraph2SerializeData = 0xac0; // C_NetworkUtlVectorBase< uint8 >
        constexpr uintptr_t m_nAnimGraph2SerializeDataSizeBytes = 0xad8; // int32
    }
    namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
        constexpr uintptr_t m_sAfterburnParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sAfterburnExplodeParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityUppercutVData {
        constexpr uintptr_t m_UppercutAttackData = 0x1570; // AttackData_t
        constexpr uintptr_t m_UppercutModifier = 0x1a98; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffModifier = 0x1aa8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ClipModifier = 0x1ab8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flMaxPitchUp = 0x1ac8; // float32
    }
    namespace CCitadel_Modifier_IceDomeVData {
        constexpr uintptr_t m_BlockerModel = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_DomeParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FriendlyAuraModifier = 0x7c8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EnemyAuraModifier = 0x7d8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strDomeEndSound = 0x7e8; // CSoundEventName
        constexpr uintptr_t m_strTargetLoopingSound = 0x7f8; // CSoundEventName
    }
    namespace CCitadel_Modifier_HealthSwapPrecast {
        constexpr uintptr_t m_hTarget = 0xc0; // CHandle< C_BaseEntity >
    }
    namespace CCitadel_Ability_StaticChargeVData {
        constexpr uintptr_t m_CastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StaticChargeModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_PetrifyVData {
        constexpr uintptr_t m_DebuffParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffStartParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffEndParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PostSleepModifier = 0x988; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_IceDomeVData {
        constexpr uintptr_t m_IceDomeModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierLashFlogDebuffVData {
        constexpr uintptr_t m_FlogDebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Item_WarpStone {
        constexpr uintptr_t m_nCastDelayParticleIndex = 0xcb0; // ParticleIndex_t
    }
    namespace CCitadel_WeaponUpgrade_SiphonBullets {
        constexpr uintptr_t m_iStacks = 0xcb0; // int32
    }
    namespace C_PathParticleRope {
        constexpr uintptr_t m_bStartActive = 0x568; // bool
        constexpr uintptr_t m_flMaxSimulationTime = 0x56c; // float32
        constexpr uintptr_t m_iszEffectName = 0x570; // CUtlSymbolLarge
        constexpr uintptr_t m_PathNodes_Name = 0x578; // CUtlVector< CUtlSymbolLarge >
        constexpr uintptr_t m_flParticleSpacing = 0x590; // float32
        constexpr uintptr_t m_flSlack = 0x594; // float32
        constexpr uintptr_t m_flRadius = 0x598; // float32
        constexpr uintptr_t m_ColorTint = 0x59c; // Color
        constexpr uintptr_t m_nEffectState = 0x5a0; // int32
        constexpr uintptr_t m_iEffectIndex = 0x5a8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
        constexpr uintptr_t m_PathNodes_Position = 0x5b0; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_PathNodes_TangentIn = 0x5c8; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_PathNodes_TangentOut = 0x5e0; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_PathNodes_Color = 0x5f8; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_PathNodes_PinEnabled = 0x610; // C_NetworkUtlVectorBase< bool >
        constexpr uintptr_t m_PathNodes_RadiusScale = 0x628; // C_NetworkUtlVectorBase< float32 >
    }
    namespace CCitadel_Modifier_RapidFire {
        constexpr uintptr_t m_flNextAttackTime = 0x210; // GameTime_t
    }
    namespace CCitadel_Modifier_SilencedVData {
        constexpr uintptr_t m_EmpParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EmpPlayerParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EmpStatusParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BulletShieldImpact {
        constexpr uintptr_t m_AmbientEffect = 0xc0; // ParticleIndex_t
    }
    namespace CNPC_TrooperNeutralVData {
        constexpr uintptr_t m_eTrooperType = 0xf78; // ENeutralTrooperType
        constexpr uintptr_t m_flGoldReward = 0xf7c; // float32
        constexpr uintptr_t m_flGoldRewardBonusPercentPerMinute = 0xf80; // float32
        constexpr uintptr_t m_bGiveGoldOnHit = 0xf84; // bool
        constexpr uintptr_t m_bOrbDropper = 0xf85; // bool
        constexpr uintptr_t m_bCapSimultanousAttackers = 0xf86; // bool
        constexpr uintptr_t m_flShieldReactivateDelay = 0xf88; // float32
        constexpr uintptr_t m_flDyingDuration = 0xf8c; // float32
        constexpr uintptr_t m_bDamagedByBullets = 0xf90; // bool
        constexpr uintptr_t m_bDamagedByMelee = 0xf91; // bool
        constexpr uintptr_t m_bDamagedByAbilities = 0xf92; // bool
        constexpr uintptr_t m_bFixedMeleeDamage = 0xf93; // bool
        constexpr uintptr_t m_ShieldParticle = 0xf98; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flRetaliateDamage = 0x1078; // float32
        constexpr uintptr_t m_flRetaliateCooldown = 0x107c; // float32
        constexpr uintptr_t m_retaliateParticle = 0x1080; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_bHasAOEAttack = 0x1160; // bool
        constexpr uintptr_t m_flAOERadius = 0x1164; // float32
        constexpr uintptr_t m_flAOEDamage = 0x1168; // float32
        constexpr uintptr_t m_flAOEAttackCooldown = 0x116c; // float32
        constexpr uintptr_t m_AOEParticle = 0x1170; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AOEDebuffToApply = 0x1250; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AOEInitiateSound = 0x1260; // CSoundEventName
        constexpr uintptr_t m_AOESound = 0x1270; // CSoundEventName
        constexpr uintptr_t m_AOEDebuffDuration = 0x1280; // float32
        constexpr uintptr_t m_vecRandomBodyGroup = 0x1288; // CUtlVector< CUtlString >
        constexpr uintptr_t m_vecRandomSkin = 0x12a0; // CUtlVector< CUtlString >
        constexpr uintptr_t m_flHullCapsuleRadius = 0x12b8; // float32
        constexpr uintptr_t m_flHullCapsuleHeight = 0x12bc; // float32
        constexpr uintptr_t m_bFaceEnemyWhileIdle = 0x12c0; // bool
        constexpr uintptr_t m_IdleLoopSound = 0x12c8; // CSoundEventName
        constexpr uintptr_t m_MoveType = 0x12d8; // MoveType_t
    }
    namespace C_CitadelProjectile {
        constexpr uintptr_t m_flMaxDistance = 0x84c; // float32
        constexpr uintptr_t m_flArmingTime = 0x850; // float32
        constexpr uintptr_t m_flChargeAmount = 0x854; // float32
        constexpr uintptr_t m_bCollideWithThrower = 0x858; // bool
        constexpr uintptr_t m_bNewCollideWithThrower = 0x859; // bool
        constexpr uintptr_t m_flTickSoundInterval = 0x868; // float32
        constexpr uintptr_t m_vInitialVelocity = 0x870; // Vector
        constexpr uintptr_t m_vInitialPosition = 0x87c; // Vector
        constexpr uintptr_t m_abilityID = 0x888; // CUtlStringToken
        constexpr uintptr_t m_hThrower = 0x88c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_sParticleName = 0x890; // CUtlSymbolLarge
        constexpr uintptr_t m_vecSpawnPosition = 0x898; // Vector
        constexpr uintptr_t m_flProjectileSpeed = 0x8a4; // float32
        constexpr uintptr_t m_flMaxLifetime = 0x8a8; // float32
        constexpr uintptr_t m_flParticleRadius = 0x8b0; // float32
        constexpr uintptr_t m_flPreviousTimeScale = 0x8c0; // float32
    }
    namespace CAbilityVandalSurgeVData {
        constexpr uintptr_t m_LiftModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetCastSound = 0x1640; // CSoundEventName
    }
    namespace CCitadel_Modifier_StaticCharge {
        constexpr uintptr_t m_hRingEffect = 0xc0; // ParticleIndex_t
        constexpr uintptr_t m_flRadius = 0x138; // float32
    }
    namespace C_SoundEventAABBEntity {
        constexpr uintptr_t m_vMins = 0x620; // Vector
        constexpr uintptr_t m_vMaxs = 0x62c; // Vector
    }
    namespace CCitadel_Ability_Fathom_Breach_VData {
        constexpr uintptr_t m_ExplosionParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlameAuraParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strInFlightAnimGraphParam = 0x1710; // CGlobalSymbol
        constexpr uintptr_t m_strExplodeSound = 0x1718; // CSoundEventName
        constexpr uintptr_t m_InFlightModifier = 0x1728; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifier_Citadel_Bull_Leap_LandingBonuses_VData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityDashVData {
        constexpr uintptr_t m_DashParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DownDashParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strArriveSound = 0x1710; // CSoundEventName
        constexpr uintptr_t m_strStaminaDrainedSound = 0x1720; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceGroundDashActivate = 0x1730; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceAirDashActivate = 0x17b8; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_flMaxAngDiff = 0x1840; // float32
        constexpr uintptr_t m_flDurationScaleForSpeed = 0x1844; // float32
        constexpr uintptr_t m_flSlideEarlyOutWindow = 0x1848; // float32
        constexpr uintptr_t m_flSlideLockoutTime = 0x184c; // float32
        constexpr uintptr_t m_flGroundDashAirbornDrag = 0x1850; // float32
        constexpr uintptr_t m_flGroundDashAirbornSpeedClamp = 0x1854; // float32
        constexpr uintptr_t m_strGroundDashActivate = 0x1858; // CSoundEventName
        constexpr uintptr_t m_curvePosition = 0x1868; // CPiecewiseCurve
        constexpr uintptr_t m_flGroundDashDuration = 0x18a8; // float32
        constexpr uintptr_t m_flGroundDashDistanceInMeters = 0x18ac; // float32
        constexpr uintptr_t m_flAirDashEndVelocityScale = 0x18b0; // float32
        constexpr uintptr_t m_flAirDashAccPct = 0x18b4; // float32
        constexpr uintptr_t m_flDuringDrag = 0x18b8; // float32
        constexpr uintptr_t m_flPostDrag = 0x18bc; // float32
        constexpr uintptr_t m_flPostDragDuration = 0x18c0; // float32
        constexpr uintptr_t m_flDownwardAirDashSpeed = 0x18c4; // float32
        constexpr uintptr_t m_strDashActivate = 0x18c8; // CSoundEventName
    }
    namespace CCitadel_Modifier_ConsumedProtectionRacketVData {
        constexpr uintptr_t m_strShieldBreakSound = 0x608; // CSoundEventName
    }
    namespace CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy {
        constexpr uintptr_t m_vThrowVelocity = 0xc8; // Vector
    }
    namespace CCitadel_Modifier_WreckerSalvage_Buff {
        constexpr uintptr_t m_nBuffParticle = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_StickyBombAttached {
        constexpr uintptr_t m_bDetonateSoundStarted = 0xc0; // bool
        constexpr uintptr_t m_flDamage = 0xcc; // float32
        constexpr uintptr_t m_nParticleIndex = 0xd0; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_ViscousBallVData {
        constexpr uintptr_t m_TrailParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DirectionParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityNikumanVData {
        constexpr uintptr_t m_NikumanModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SelfBuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CItem_ActiveReload_VData {
        constexpr uintptr_t m_SuccessModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strSuccessSound = 0x15a8; // CSoundEventName
        constexpr uintptr_t m_strFailureSound = 0x15b8; // CSoundEventName
        constexpr uintptr_t m_SuccessParticle = 0x15c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FailureParticle = 0x16a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flGraceTime = 0x1788; // float32
    }
    namespace CitadelItemVData {
        constexpr uintptr_t m_iItemTier = 0x1554; // EModTier_t
        constexpr uintptr_t m_nUpgradeSlotCost = 0x1555; // int8
        constexpr uintptr_t m_bWarnIfNoAffectedAbilities = 0x1556; // bool
        constexpr uintptr_t m_bRequiresChargedAbility = 0x1557; // bool
        constexpr uintptr_t m_bRequiresChanelledAbility = 0x1558; // bool
        constexpr uintptr_t m_vecComponentItems = 0x1560; // CUtlVector< CSubclassName< 4 > >
        constexpr uintptr_t m_bShowTextDescription = 0x1578; // bool
        constexpr uintptr_t m_bIsDefensiveItem = 0x1579; // bool
        constexpr uintptr_t m_eShopFilters = 0x157a; // EShopFilters_t
        constexpr uintptr_t m_vecTooltipSectionInfo = 0x1580; // CUtlVector< ItemSectionInfo_t >
    }
    namespace CCitadel_Modifier_Near_Climbable_RopeVData {
        constexpr uintptr_t m_flEnableStateTime = 0x608; // float32
    }
    namespace CCitadel_Modifier_FlameDashGroundAuraVData {
        constexpr uintptr_t m_GroundParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flHeight = 0x728; // float32
    }
    namespace CGameModifier_SetMoveType {
        constexpr uintptr_t m_nMoveType = 0xc0; // MoveType_t
    }
    namespace CAbilityGangActivityCancelVData {
        constexpr uintptr_t m_AbilitySwap = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_HookTarget {
        constexpr uintptr_t m_flCurrentVerticalSpeed = 0xc4; // float32
        constexpr uintptr_t m_bSuccess = 0xc8; // bool
        constexpr uintptr_t m_bSameTeam = 0xc9; // bool
        constexpr uintptr_t m_bPlayedApproachingWhoosh = 0xca; // bool
        constexpr uintptr_t m_flInitialTravelDistance = 0xcc; // float32
    }
    namespace CAbilitySleepDaggerVData {
        constexpr uintptr_t m_ImpactParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SleepModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DrowsyModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SleepBombModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityLashFlogVData {
        constexpr uintptr_t m_FlogParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlogLifeLeachParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlogDebuffModifier = 0x1710; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Inhibitor_ProcVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ChainLightning {
        constexpr uintptr_t m_flNextProcTime = 0x188; // GameTime_t
    }
    namespace C_BasePlayerWeapon {
        constexpr uintptr_t m_nNextPrimaryAttackTick = 0xae8; // GameTick_t
        constexpr uintptr_t m_flNextPrimaryAttackTickRatio = 0xaec; // float32
        constexpr uintptr_t m_nNextSecondaryAttackTick = 0xaf0; // GameTick_t
        constexpr uintptr_t m_flNextSecondaryAttackTickRatio = 0xaf4; // float32
        constexpr uintptr_t m_iClip1 = 0xaf8; // int32
        constexpr uintptr_t m_iClip2 = 0xafc; // int32
        constexpr uintptr_t m_pReserveAmmo = 0xb00; // int32[2]
    }
    namespace CCitadelAbilityHealingSlashVData {
        constexpr uintptr_t m_flEffectSize = 0x1558; // float32
        constexpr uintptr_t m_flMaxAttackAngle = 0x155c; // float32
        constexpr uintptr_t m_remapAngleToTime = 0x1560; // CRemapFloat
        constexpr uintptr_t m_DebuffModifier = 0x1570; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ImpactParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealingSlashParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealingSlashSwordGlow = 0x1740; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1820; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDamageTarget = 0x1900; // CSoundEventName
    }
    namespace CBasePlayerWeaponVData {
        constexpr uintptr_t m_szClassName = 0x10; // CUtlString
        constexpr uintptr_t m_szWorldModel = 0x18; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_sToolsOnlyOwnerModelName = 0xf8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_bBuiltRightHanded = 0x1d8; // bool
        constexpr uintptr_t m_bAllowFlipping = 0x1d9; // bool
        constexpr uintptr_t m_sMuzzleAttachment = 0x1e0; // CAttachmentNameSymbolWithStorage
        constexpr uintptr_t m_szMuzzleFlashParticle = 0x200; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_bLinkedCooldowns = 0x2e0; // bool
        constexpr uintptr_t m_vecIntrinsicModifiers = 0x2e8; // CUtlVector< CEmbeddedSubclass< CCitadelModifier > >
        constexpr uintptr_t m_iFlags = 0x300; // ItemFlagTypes_t
        constexpr uintptr_t m_nPrimaryAmmoType = 0x301; // AmmoIndex_t
        constexpr uintptr_t m_nSecondaryAmmoType = 0x302; // AmmoIndex_t
        constexpr uintptr_t m_iMaxClip1 = 0x304; // int32
        constexpr uintptr_t m_iMaxClip2 = 0x308; // int32
        constexpr uintptr_t m_iDefaultClip1 = 0x30c; // int32
        constexpr uintptr_t m_iDefaultClip2 = 0x310; // int32
        constexpr uintptr_t m_bReserveAmmoAsClips = 0x314; // bool
        constexpr uintptr_t m_iWeight = 0x318; // int32
        constexpr uintptr_t m_bAutoSwitchTo = 0x31c; // bool
        constexpr uintptr_t m_bAutoSwitchFrom = 0x31d; // bool
        constexpr uintptr_t m_iRumbleEffect = 0x320; // RumbleEffect_t
        constexpr uintptr_t m_iSlot = 0x324; // int32
        constexpr uintptr_t m_iPosition = 0x328; // int32
        constexpr uintptr_t m_aShootSounds = 0x330; // CUtlOrderedMap< WeaponSound_t, CSoundEventName >
    }


    namespace C_Fish {
        constexpr uintptr_t m_pos = 0xae8; // Vector
        constexpr uintptr_t m_vel = 0xaf4; // Vector
        constexpr uintptr_t m_angles = 0xb00; // QAngle
        constexpr uintptr_t m_localLifeState = 0xb0c; // int32
        constexpr uintptr_t m_deathDepth = 0xb10; // float32
        constexpr uintptr_t m_deathAngle = 0xb14; // float32
        constexpr uintptr_t m_buoyancy = 0xb18; // float32
        constexpr uintptr_t m_wiggleTimer = 0xb20; // CountdownTimer
        constexpr uintptr_t m_wigglePhase = 0xb38; // float32
        constexpr uintptr_t m_wiggleRate = 0xb3c; // float32
        constexpr uintptr_t m_actualPos = 0xb40; // Vector
        constexpr uintptr_t m_actualAngles = 0xb4c; // QAngle
        constexpr uintptr_t m_poolOrigin = 0xb58; // Vector
        constexpr uintptr_t m_waterLevel = 0xb64; // float32
        constexpr uintptr_t m_gotUpdate = 0xb68; // bool
        constexpr uintptr_t m_x = 0xb6c; // float32
        constexpr uintptr_t m_y = 0xb70; // float32
        constexpr uintptr_t m_z = 0xb74; // float32
        constexpr uintptr_t m_angle = 0xb78; // float32
        constexpr uintptr_t m_errorHistory = 0xb7c; // float32[20]
        constexpr uintptr_t m_errorHistoryIndex = 0xbcc; // int32
        constexpr uintptr_t m_errorHistoryCount = 0xbd0; // int32
        constexpr uintptr_t m_averageError = 0xbd4; // float32
    }
    namespace CCitadel_Modifier_Item_AOESilence {
        constexpr uintptr_t m_flStartRadius = 0xe0; // float32
        constexpr uintptr_t m_flEndRadius = 0xe4; // float32
        constexpr uintptr_t m_flSpreadDuration = 0xe8; // float32
    }
    namespace CAbilityLightningBallVData {
        constexpr uintptr_t m_ZapModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strHitSound = 0x1560; // CSoundEventName
        constexpr uintptr_t m_strProjectileLoopingSound = 0x1570; // CSoundEventName
        constexpr uintptr_t m_ZapParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CTimeline {
        constexpr uintptr_t m_flValues = 0x10; // float32[64]
        constexpr uintptr_t m_nValueCounts = 0x110; // int32[64]
        constexpr uintptr_t m_nBucketCount = 0x210; // int32
        constexpr uintptr_t m_flInterval = 0x214; // float32
        constexpr uintptr_t m_flFinalValue = 0x218; // float32
        constexpr uintptr_t m_nCompressionType = 0x21c; // TimelineCompression_t
        constexpr uintptr_t m_bStopped = 0x220; // bool
    }
    namespace CCitadel_Item_StasisBomb_Aura {
        constexpr uintptr_t m_AuraRadius = 0xe0; // float32
    }
    namespace CModifierHighAlertBuffVData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityTrappersBoloVData {
        constexpr uintptr_t m_ImpactParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TrapModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CPathAccompany {
        constexpr uintptr_t m_flPathLength = 0x560; // float32
        constexpr uintptr_t m_vecNodes = 0x568; // CUtlVector< PathAccompanyNode_t >
    }
    namespace C_BasePlayerPawn {
        constexpr uintptr_t m_pWeaponServices = 0xd08; // CPlayer_WeaponServices*
        constexpr uintptr_t m_pItemServices = 0xd10; // CPlayer_ItemServices*
        constexpr uintptr_t m_pAutoaimServices = 0xd18; // CPlayer_AutoaimServices*
        constexpr uintptr_t m_pObserverServices = 0xd20; // CPlayer_ObserverServices*
        constexpr uintptr_t m_pWaterServices = 0xd28; // CPlayer_WaterServices*
        constexpr uintptr_t m_pUseServices = 0xd30; // CPlayer_UseServices*
        constexpr uintptr_t m_pFlashlightServices = 0xd38; // CPlayer_FlashlightServices*
        constexpr uintptr_t m_pCameraServices = 0xd40; // CPlayer_CameraServices*
        constexpr uintptr_t m_pMovementServices = 0xd48; // CPlayer_MovementServices*
        constexpr uintptr_t m_ServerViewAngleChanges = 0xd58; // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
        constexpr uintptr_t m_nHighestConsumedServerViewAngleChangeIndex = 0xda8; // uint32
        constexpr uintptr_t v_angle = 0xdac; // QAngle
        constexpr uintptr_t v_anglePrevious = 0xdb8; // QAngle
        constexpr uintptr_t m_iHideHUD = 0xdc4; // uint32
        constexpr uintptr_t m_skybox3d = 0xdc8; // sky3dparams_t
        constexpr uintptr_t m_flDeathTime = 0xe58; // GameTime_t
        constexpr uintptr_t m_vecPredictionError = 0xe5c; // Vector
        constexpr uintptr_t m_flPredictionErrorTime = 0xe68; // GameTime_t
        constexpr uintptr_t m_vecLastCameraSetupLocalOrigin = 0xe6c; // Vector
        constexpr uintptr_t m_flLastCameraSetupTime = 0xe78; // GameTime_t
        constexpr uintptr_t m_flFOVSensitivityAdjust = 0xe7c; // float32
        constexpr uintptr_t m_flMouseSensitivity = 0xe80; // float32
        constexpr uintptr_t m_vOldOrigin = 0xe84; // Vector
        constexpr uintptr_t m_flOldSimulationTime = 0xe90; // float32
        constexpr uintptr_t m_nLastExecutedCommandNumber = 0xe94; // int32
        constexpr uintptr_t m_nLastExecutedCommandTick = 0xe98; // int32
        constexpr uintptr_t m_hController = 0xe9c; // CHandle< CBasePlayerController >
        constexpr uintptr_t m_hDefaultController = 0xea0; // CHandle< CBasePlayerController >
        constexpr uintptr_t m_bIsSwappingToPredictableController = 0xea4; // bool
    }
    namespace CCitadel_Modifier_TimeWall_AuraVData {
        constexpr uintptr_t m_DebuffModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAttributeManager {
        constexpr uintptr_t m_Providers = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_Receivers = 0x20; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_iReapplyProvisionParity = 0x38; // int32
        constexpr uintptr_t m_hOuter = 0x3c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bPreventLoopback = 0x40; // bool
        constexpr uintptr_t m_ProviderType = 0x44; // attributeprovidertypes_t
        constexpr uintptr_t m_CachedResults = 0x48; // CUtlVector< CAttributeManager::cached_attribute_float_t >
    }
    namespace CCitadel_Ability_Magician_AnimalCurse {
        constexpr uintptr_t m_CachedTarget = 0xc98; // CHandle< C_BaseEntity >
    }
    namespace CAbilityDistruptiveChargeVData {
        constexpr uintptr_t m_Particle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_MutedVData {
        constexpr uintptr_t m_MutedParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MutedPlayerParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MutedStatusParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_TurnCameraToTarget {
        constexpr uintptr_t m_hTarget = 0xc0; // CHandle< C_BaseEntity >
    }
    namespace CAnimGraphNetworkedVariables {
        constexpr uintptr_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase< uint32 >
        constexpr uintptr_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase< uint8 >
        constexpr uintptr_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase< uint16 >
        constexpr uintptr_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase< int32 >
        constexpr uintptr_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase< uint32 >
        constexpr uintptr_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase< uint64 >
        constexpr uintptr_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase< float32 >
        constexpr uintptr_t m_PredNetVectorVariables = 0xb0; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_PredNetQuaternionVariables = 0xc8; // C_NetworkUtlVectorBase< Quaternion >
        constexpr uintptr_t m_PredNetGlobalSymbolVariables = 0xe0; // C_NetworkUtlVectorBase< CGlobalSymbol >
        constexpr uintptr_t m_OwnerOnlyPredNetBoolVariables = 0xf8; // C_NetworkUtlVectorBase< uint32 >
        constexpr uintptr_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase< uint8 >
        constexpr uintptr_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase< uint16 >
        constexpr uintptr_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase< int32 >
        constexpr uintptr_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase< uint32 >
        constexpr uintptr_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase< uint64 >
        constexpr uintptr_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase< float32 >
        constexpr uintptr_t m_OwnerOnlyPredNetVectorVariables = 0x1a0; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_OwnerOnlyPredNetQuaternionVariables = 0x1b8; // C_NetworkUtlVectorBase< Quaternion >
        constexpr uintptr_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1d0; // C_NetworkUtlVectorBase< CGlobalSymbol >
        constexpr uintptr_t m_nBoolVariablesCount = 0x1e8; // int32
        constexpr uintptr_t m_nOwnerOnlyBoolVariablesCount = 0x1ec; // int32
        constexpr uintptr_t m_nRandomSeedOffset = 0x1f0; // int32
        constexpr uintptr_t m_flLastTeleportTime = 0x1f4; // float32
    }
    namespace C_RopeKeyframe {
        constexpr uintptr_t m_LinksTouchingSomething = 0x848; // CBitVec< 10 >
        constexpr uintptr_t m_nLinksTouchingSomething = 0x84c; // int32
        constexpr uintptr_t m_bApplyWind = 0x850; // bool
        constexpr uintptr_t m_fPrevLockedPoints = 0x854; // int32
        constexpr uintptr_t m_iForcePointMoveCounter = 0x858; // int32
        constexpr uintptr_t m_bPrevEndPointPos = 0x85c; // bool[2]
        constexpr uintptr_t m_vPrevEndPointPos = 0x860; // Vector[2]
        constexpr uintptr_t m_flCurScroll = 0x878; // float32
        constexpr uintptr_t m_flScrollSpeed = 0x87c; // float32
        constexpr uintptr_t m_RopeFlags = 0x880; // uint16
        constexpr uintptr_t m_iRopeMaterialModelIndex = 0x888; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_LightValues = 0xb00; // Vector[10]
        constexpr uintptr_t m_nSegments = 0xb78; // uint8
        constexpr uintptr_t m_hStartPoint = 0xb7c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hEndPoint = 0xb80; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_iStartAttachment = 0xb84; // AttachmentHandle_t
        constexpr uintptr_t m_iEndAttachment = 0xb85; // AttachmentHandle_t
        constexpr uintptr_t m_Subdiv = 0xb86; // uint8
        constexpr uintptr_t m_RopeLength = 0xb88; // int16
        constexpr uintptr_t m_Slack = 0xb8a; // int16
        constexpr uintptr_t m_TextureScale = 0xb8c; // float32
        constexpr uintptr_t m_fLockedPoints = 0xb90; // uint8
        constexpr uintptr_t m_nChangeCount = 0xb91; // uint8
        constexpr uintptr_t m_Width = 0xb94; // float32
        constexpr uintptr_t m_PhysicsDelegate = 0xb98; // C_RopeKeyframe::CPhysicsDelegate
        constexpr uintptr_t m_hMaterial = 0xba8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_TextureHeight = 0xbb0; // int32
        constexpr uintptr_t m_vecImpulse = 0xbb4; // Vector
        constexpr uintptr_t m_vecPreviousImpulse = 0xbc0; // Vector
        constexpr uintptr_t m_flCurrentGustTimer = 0xbcc; // float32
        constexpr uintptr_t m_flCurrentGustLifetime = 0xbd0; // float32
        constexpr uintptr_t m_flTimeToNextGust = 0xbd4; // float32
        constexpr uintptr_t m_vWindDir = 0xbd8; // Vector
        constexpr uintptr_t m_vColorMod = 0xbe4; // Vector
        constexpr uintptr_t m_vCachedEndPointAttachmentPos = 0xbf0; // Vector[2]
        constexpr uintptr_t m_vCachedEndPointAttachmentAngle = 0xc08; // QAngle[2]
        constexpr uintptr_t m_bConstrainBetweenEndpoints = 0xc20; // bool
        constexpr uintptr_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
        constexpr uintptr_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
        constexpr uintptr_t m_bNewDataThisFrame = 0x0; // bitfield:1
        constexpr uintptr_t m_bPhysicsInitted = 0x0; // bitfield:1
    }
    namespace C_GradientFog {
        constexpr uintptr_t m_hGradientFogTexture = 0x560; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_flFogStartDistance = 0x568; // float32
        constexpr uintptr_t m_flFogEndDistance = 0x56c; // float32
        constexpr uintptr_t m_bHeightFogEnabled = 0x570; // bool
        constexpr uintptr_t m_flFogStartHeight = 0x574; // float32
        constexpr uintptr_t m_flFogEndHeight = 0x578; // float32
        constexpr uintptr_t m_flFarZ = 0x57c; // float32
        constexpr uintptr_t m_flFogMaxOpacity = 0x580; // float32
        constexpr uintptr_t m_flFogFalloffExponent = 0x584; // float32
        constexpr uintptr_t m_flFogVerticalExponent = 0x588; // float32
        constexpr uintptr_t m_fogColor = 0x58c; // Color
        constexpr uintptr_t m_flFogStrength = 0x590; // float32
        constexpr uintptr_t m_flFadeTime = 0x594; // float32
        constexpr uintptr_t m_bStartDisabled = 0x598; // bool
        constexpr uintptr_t m_bIsEnabled = 0x599; // bool
        constexpr uintptr_t m_bGradientFogNeedsTextures = 0x59a; // bool
    }
    namespace CModifier_Mirage_FireBeetles_Buff_VData {
        constexpr uintptr_t m_CasterBuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityWreckerScrapBlastVData {
        constexpr uintptr_t m_SprayParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChannelStartParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffModifier = 0x1710; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData {
        constexpr uintptr_t m_BleedModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuildUpModifier = 0x648; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_BulletImpactParticle = 0x658; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BlastPush {
        constexpr uintptr_t m_vPush = 0xc0; // Vector
        constexpr uintptr_t m_flPushVelocity = 0xcc; // float32
        constexpr uintptr_t m_flMaxPushVelocity = 0xd0; // float32
        constexpr uintptr_t m_flMaxPushVelocitySqr = 0xd4; // float32
    }
    namespace CItemAOESilenceAuraVData {
        constexpr uintptr_t m_empWaveParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_TargetPracticeDebuffVData {
        constexpr uintptr_t m_SlowModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BulletResistModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EMPModifier = 0x628; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_FissureWall {
        constexpr uintptr_t m_vecWallPreviewParticles = 0xca8; // CUtlVector< ParticleIndex_t >
        constexpr uintptr_t m_vecStartPos = 0xd68; // Vector
        constexpr uintptr_t m_vecPosition = 0xd74; // Vector
        constexpr uintptr_t m_vecInitialPosition = 0xd80; // Vector
        constexpr uintptr_t m_CastTime = 0xd8c; // GameTime_t
        constexpr uintptr_t m_vecDirection = 0xd90; // Vector
        constexpr uintptr_t m_vecLeft = 0xd9c; // Vector
        constexpr uintptr_t m_Length = 0xda8; // float32
        constexpr uintptr_t m_bTraveling = 0xdac; // bool
        constexpr uintptr_t m_bPreview = 0xdad; // bool
    }
    namespace CModifier_CheatDeathImmunityVData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffPlayerParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StatusEffect = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > >
    }
    namespace CCitadel_Modifier_StatStealBaseVData {
        constexpr uintptr_t m_StatStolenDebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_StatStolenBuffModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Shiv_Defer_Damage {
        constexpr uintptr_t m_flTotalPendingDamage = 0xd78; // float32
    }
    namespace CCitadel_Ability_IceBeamVData {
        constexpr uintptr_t m_BeamParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SlowModifier = 0x1710; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuildupModifier = 0x1720; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_BuildupProcModifier = 0x1730; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BeamStartSound = 0x1740; // CSoundEventName
        constexpr uintptr_t m_BeamStopSound = 0x1750; // CSoundEventName
        constexpr uintptr_t m_BeamPointStartLoopSound = 0x1760; // CSoundEventName
        constexpr uintptr_t m_BeamPointEndLoopSound = 0x1770; // CSoundEventName
        constexpr uintptr_t m_BeamPointClosestLoopSound = 0x1780; // CSoundEventName
    }
    namespace CCitadel_Ability_ViscousWeapon_Alt {
        constexpr uintptr_t m_ChargeState = 0xc98; // EViscousChargedGunState
        constexpr uintptr_t m_nClipConsumed = 0xc9c; // float32
        constexpr uintptr_t m_bIsCharging = 0xca0; // bool
        constexpr uintptr_t m_bIsToggled = 0xca1; // bool
        constexpr uintptr_t m_fxChargingParticle = 0xca4; // ParticleIndex_t
        constexpr uintptr_t m_flLastBulletConsumedTime = 0xcb0; // GameTime_t
    }
    namespace CCitadel_Modifier_ColdFrontAOE {
        constexpr uintptr_t m_hAOEEffect = 0x1d8; // ParticleIndex_t
    }
    namespace C_PortraitWorldUnit {
        constexpr uintptr_t m_bSuppressIntroEffects = 0xd08; // bool
        constexpr uintptr_t m_bIsAlternateLoadout = 0xd09; // bool
        constexpr uintptr_t m_bSpawnBackgroundModels = 0xd0a; // bool
        constexpr uintptr_t m_bDeferredPortrait = 0xd0b; // bool
        constexpr uintptr_t m_bShowParticleAssetModifiers = 0xd0c; // bool
        constexpr uintptr_t m_bIgnorePortraitInfo = 0xd0d; // bool
        constexpr uintptr_t m_bFlyingCourier = 0xd0e; // bool
        constexpr uintptr_t m_nEffigyStatusEffect = 0xd10; // int32
        constexpr uintptr_t m_effigySequenceName = 0xd18; // CUtlSymbolLarge
        constexpr uintptr_t m_flStartingAnimationCycle = 0xd20; // float32
        constexpr uintptr_t m_flRareLoadoutAnimChance = 0xd24; // float32
        constexpr uintptr_t m_environment = 0xd38; // CitadelPortraitEnvironmentType_t
        constexpr uintptr_t m_nStartupBehavior = 0xd3c; // StartupBehavior_t
        constexpr uintptr_t m_cameraName = 0xeb0; // CUtlSymbolLarge
        constexpr uintptr_t m_nPortraitParticle = 0xee8; // ParticleIndex_t
        constexpr uintptr_t m_nAmbientParticle = 0xeec; // ParticleIndex_t
        constexpr uintptr_t m_nCourierType = 0xef0; // int32
        constexpr uintptr_t m_heroID = 0xef4; // HeroID_t
        constexpr uintptr_t m_heroAnimGraphEnumName = 0xef8; // CUtlSymbolLarge
        constexpr uintptr_t m_heroShopAnimGraphEnumName = 0xf00; // CUtlSymbolLarge
    }
    namespace CCitadelBulletTimeWarp {
        constexpr uintptr_t m_flBulletTimeScale = 0x840; // float32
        constexpr uintptr_t m_flProjectileTimeScale = 0x844; // float32
        constexpr uintptr_t m_flExpireTime = 0x848; // GameTime_t
        constexpr uintptr_t m_flStopDuration = 0x84c; // float32
    }
    namespace CAbilityRiptideVData {
        constexpr uintptr_t m_TossModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierChargedTackleActiveVData {
        constexpr uintptr_t m_TackleParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PullEnemiesParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Item_HealthNova {
        constexpr uintptr_t m_flAmountPerSecond = 0xc0; // float32
    }
    namespace CCitadel_Modifier_MagicClarityWatcherVData {
        constexpr uintptr_t m_BuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TossUp {
        constexpr uintptr_t m_bForceApplied = 0xc0; // bool
        constexpr uintptr_t m_bLandedOnGround = 0xc1; // bool
        constexpr uintptr_t m_vTossUpForce = 0xc4; // Vector
        constexpr uintptr_t m_flCurrentVelocityScale = 0xd0; // float32
    }
    namespace CCitadel_Modifier_ItemPickupPunchableVData {
        constexpr uintptr_t m_flPhysicsRadius = 0x608; // float32
        constexpr uintptr_t m_IsDroppingParticle = 0x610; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_IsPunchableParticle = 0x6f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_IsFrozenParticle = 0x7d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_NearRejuvAuraModifier = 0x8b0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_LashGrappleEnemy_Debuff {
        constexpr uintptr_t m_vCrashDir = 0xc8; // Vector
        constexpr uintptr_t m_vLiftTarget = 0xd4; // Vector
        constexpr uintptr_t m_flStartTime = 0xe0; // GameTime_t
        constexpr uintptr_t m_bCrashingDown = 0xe4; // bool
    }
    namespace CCitadel_Modifier_RespawnCreditVData {
        constexpr uintptr_t m_eRespawnMechanic = 0x608; // ERejuvenatorRespawnMechanic
        constexpr uintptr_t m_flRespawnDelay = 0x60c; // float32
        constexpr uintptr_t m_flBonusClipSize = 0x610; // float32
        constexpr uintptr_t m_flBonusFirerate = 0x614; // float32
        constexpr uintptr_t m_flBonusHealth = 0x618; // float32
        constexpr uintptr_t m_flBonusMoveSpeedMeterPerSecond = 0x61c; // float32
        constexpr uintptr_t m_sExpireSound = 0x620; // CSoundEventName
    }
    namespace CCitadel_Modifier_Bubble {
        constexpr uintptr_t m_flDampingFactor = 0xc0; // float32
        constexpr uintptr_t m_ParticleIndex = 0x1e0; // ParticleIndex_t
    }
    namespace C_EnvVolumetricFogVolume {
        constexpr uintptr_t m_bActive = 0x560; // bool
        constexpr uintptr_t m_vBoxMins = 0x564; // Vector
        constexpr uintptr_t m_vBoxMaxs = 0x570; // Vector
        constexpr uintptr_t m_bStartDisabled = 0x57c; // bool
        constexpr uintptr_t m_flStrength = 0x580; // float32
        constexpr uintptr_t m_nFalloffShape = 0x584; // int32
        constexpr uintptr_t m_flFalloffExponent = 0x588; // float32
        constexpr uintptr_t m_flHeightFogDepth = 0x58c; // float32
        constexpr uintptr_t m_fHeightFogEdgeWidth = 0x590; // float32
        constexpr uintptr_t m_fIndirectLightStrength = 0x594; // float32
        constexpr uintptr_t m_fSunLightStrength = 0x598; // float32
        constexpr uintptr_t m_fNoiseStrength = 0x59c; // float32
        constexpr uintptr_t m_bOverrideIndirectLightStrength = 0x5a0; // bool
        constexpr uintptr_t m_bOverrideSunLightStrength = 0x5a1; // bool
        constexpr uintptr_t m_bOverrideNoiseStrength = 0x5a2; // bool
        constexpr uintptr_t m_bAllowLPVIndirect = 0x5a3; // bool
    }
    namespace CModifierVandalSurgeVData {
        constexpr uintptr_t m_LiftParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStartSound = 0x7c8; // CSoundEventName
    }
    namespace CCitadel_Modifier_TargetPracticeEnemyVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuildupCompleteModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuildupModifier = 0x628; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_TargetParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HeadParticle = 0x7f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strTargetHitSound = 0x8d8; // CSoundEventName
        constexpr uintptr_t m_strTargetHeadShotHitSound = 0x8e8; // CSoundEventName
        constexpr uintptr_t m_strTargetCompleteSound = 0x8f8; // CSoundEventName
    }
    namespace CCitadel_Ability_Lash_Flog {
        constexpr uintptr_t m_SandEffect = 0xdb0; // ParticleIndex_t
    }
    namespace CCitadel_WeaponUpgrade_SiphonBulletsVData {
        constexpr uintptr_t m_PermanentHealthLoss = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Galvanic_Storm_EffectVData {
        constexpr uintptr_t m_BuffChainParticle = 0x708; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CPointOrient {
        constexpr uintptr_t m_iszSpawnTargetName = 0x560; // CUtlSymbolLarge
        constexpr uintptr_t m_hTarget = 0x568; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bActive = 0x56c; // bool
        constexpr uintptr_t m_nGoalDirection = 0x570; // PointOrientGoalDirectionType_t
        constexpr uintptr_t m_nConstraint = 0x574; // PointOrientConstraint_t
        constexpr uintptr_t m_flMaxTurnRate = 0x578; // float32
        constexpr uintptr_t m_flLastGameTime = 0x57c; // GameTime_t
    }
    namespace CCitadel_Modifier_Succor_MoveVData {
        constexpr uintptr_t m_PullSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_flPullSpeedMin = 0x618; // float32
        constexpr uintptr_t m_flPullSpeedMax = 0x61c; // float32
        constexpr uintptr_t m_flPullDistanceMin = 0x620; // float32
        constexpr uintptr_t m_flPullDistanceMax = 0x624; // float32
    }
    namespace C_CitadelPlayerPawn {
        constexpr uintptr_t m_angEyeAngles = 0xf20; // QAngle
        constexpr uintptr_t m_angClientCamera = 0xf38; // QAngle
        constexpr uintptr_t m_eZipLineLaneColor = 0xf44; // CMsgLaneColor
        constexpr uintptr_t m_nLevel = 0xf48; // int32
        constexpr uintptr_t m_nCurrencies = 0xf4c; // int32[4]
        constexpr uintptr_t m_nSpentCurrencies = 0xf5c; // int32[4]
        constexpr uintptr_t m_flLastSpawnTime = 0xf6c; // GameTime_t
        constexpr uintptr_t m_flRespawnTime = 0xf70; // GameTime_t
        constexpr uintptr_t m_bInRegenerationZone = 0xf74; // bool
        constexpr uintptr_t m_bInItemShopZone = 0xf75; // bool
        constexpr uintptr_t m_timeRevealedOnMinimapByNPC = 0xf78; // GameTime_t
        constexpr uintptr_t m_vecFullSellPriceItems = 0xf80; // C_NetworkUtlVectorBase< CUtlStringToken >
        constexpr uintptr_t m_vecFullSellPriceAbilityUpgrades = 0xf98; // C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t >
        constexpr uintptr_t m_bNetworkDisconnected = 0xfb0; // bool
        constexpr uintptr_t m_bHasIncomingThreats = 0xfb1; // bool
        constexpr uintptr_t m_bLearningAbility = 0xfb2; // bool
        constexpr uintptr_t m_nFlashStartTick = 0xfb4; // int32
        constexpr uintptr_t m_nFlashMaxStartTick = 0xfb8; // int32
        constexpr uintptr_t m_nFlashFadeStartTick = 0xfbc; // int32
        constexpr uintptr_t m_nFlashEndTick = 0xfc0; // int32
        constexpr uintptr_t m_nFlashMaxAlpha = 0xfc4; // int8
        constexpr uintptr_t m_nDeducedLane = 0xfc8; // int32
        constexpr uintptr_t m_nSuccessiveDucks = 0xfcc; // int8
        constexpr uintptr_t m_flLastDuckTime = 0xfd0; // GameTime_t
        constexpr uintptr_t m_bDismissedReportCard = 0xfd4; // bool
        constexpr uintptr_t m_flCurrentHealingAmount = 0xfd8; // float32
        constexpr uintptr_t m_angLockedEyeAngles = 0xfdc; // QAngle
        constexpr uintptr_t m_CCitadelAbilityComponent = 0xfe8; // CCitadelAbilityComponent
        constexpr uintptr_t m_CCitadelHeroComponent = 0x1188; // CCitadelHeroComponent
        constexpr uintptr_t m_flRichPresenceUpdateInterval = 0x1250; // float32
        constexpr uintptr_t m_bAnimGraphMovementClipped = 0x1348; // bool
        constexpr uintptr_t m_bAnimGraphMovementDisableGravity = 0x1349; // bool
        constexpr uintptr_t m_bAnimGraphMovementDirectAirControl = 0x134a; // bool
        constexpr uintptr_t m_bLastMoveWasAnimGraph = 0x134b; // bool
        constexpr uintptr_t m_flPredTimeSlowedStart = 0x134c; // GameTime_t
        constexpr uintptr_t m_flPredTimeSlowedEnd = 0x1350; // GameTime_t
        constexpr uintptr_t m_flPredSlowSpeed = 0x1354; // float32
        constexpr uintptr_t m_flTimeSlowedStart = 0x1358; // GameTime_t[4]
        constexpr uintptr_t m_flTimeSlowedEnd = 0x1368; // GameTime_t[4]
        constexpr uintptr_t m_flSlowSpeed = 0x1378; // float32[4]
        constexpr uintptr_t m_flSprintAnimSuppressEndTime = 0x1388; // GameTime_t
        constexpr uintptr_t m_iCurSlowSlot = 0x138c; // int32
        constexpr uintptr_t m_vShootTestOffsetStanding = 0x1390; // Vector
        constexpr uintptr_t m_vShootTestOffsetCrouching = 0x139c; // Vector
        constexpr uintptr_t m_leanStartTime = 0x13a8; // GameTime_t
    }
    namespace CCitadel_Modifier_DetentionAmmoVData {
        constexpr uintptr_t m_BuildUpModifier = 0x638; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_DebuffModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImmunityModifier = 0x658; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TracerParticle = 0x668; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_FireSmoke {
        constexpr uintptr_t m_nFlameModelIndex = 0x570; // int32
        constexpr uintptr_t m_nFlameFromAboveModelIndex = 0x574; // int32
        constexpr uintptr_t m_flScaleRegister = 0x578; // float32
        constexpr uintptr_t m_flScaleStart = 0x57c; // float32
        constexpr uintptr_t m_flScaleEnd = 0x580; // float32
        constexpr uintptr_t m_flScaleTimeStart = 0x584; // GameTime_t
        constexpr uintptr_t m_flScaleTimeEnd = 0x588; // GameTime_t
        constexpr uintptr_t m_flChildFlameSpread = 0x58c; // float32
        constexpr uintptr_t m_flClipPerc = 0x5a0; // float32
        constexpr uintptr_t m_bClipTested = 0x5a4; // bool
        constexpr uintptr_t m_bFadingOut = 0x5a5; // bool
        constexpr uintptr_t m_tParticleSpawn = 0x5a8; // TimedEvent
        constexpr uintptr_t m_pFireOverlay = 0x5b0; // CFireOverlay*
    }
    namespace C_EnvCombinedLightProbeVolume {
        constexpr uintptr_t m_Entity_Color = 0x15c0; // Color
        constexpr uintptr_t m_Entity_flBrightness = 0x15c4; // float32
        constexpr uintptr_t m_Entity_hCubemapTexture = 0x15c8; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_bCustomCubemapTexture = 0x15d0; // bool
        constexpr uintptr_t m_Entity_hLightProbeTexture = 0x15d8; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15e0; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15e8; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15f0; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_vBoxMins = 0x15f8; // Vector
        constexpr uintptr_t m_Entity_vBoxMaxs = 0x1604; // Vector
        constexpr uintptr_t m_Entity_bMoveable = 0x1610; // bool
        constexpr uintptr_t m_Entity_nHandshake = 0x1614; // int32
        constexpr uintptr_t m_Entity_nEnvCubeMapArrayIndex = 0x1618; // int32
        constexpr uintptr_t m_Entity_nPriority = 0x161c; // int32
        constexpr uintptr_t m_Entity_bStartDisabled = 0x1620; // bool
        constexpr uintptr_t m_Entity_flEdgeFadeDist = 0x1624; // float32
        constexpr uintptr_t m_Entity_vEdgeFadeDists = 0x1628; // Vector
        constexpr uintptr_t m_Entity_nLightProbeSizeX = 0x1634; // int32
        constexpr uintptr_t m_Entity_nLightProbeSizeY = 0x1638; // int32
        constexpr uintptr_t m_Entity_nLightProbeSizeZ = 0x163c; // int32
        constexpr uintptr_t m_Entity_nLightProbeAtlasX = 0x1640; // int32
        constexpr uintptr_t m_Entity_nLightProbeAtlasY = 0x1644; // int32
        constexpr uintptr_t m_Entity_nLightProbeAtlasZ = 0x1648; // int32
        constexpr uintptr_t m_Entity_bEnabled = 0x1661; // bool
    }
    namespace CCitadel_Modifier_Viper_VenomVData {
        constexpr uintptr_t m_ExplodeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace ActiveModelConfig_t {
        constexpr uintptr_t m_Handle = 0x28; // ModelConfigHandle_t
        constexpr uintptr_t m_Name = 0x30; // CUtlSymbolLarge
        constexpr uintptr_t m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
        constexpr uintptr_t m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    }
    namespace CModifier_Mirage_Tornado_Lift_VData {
        constexpr uintptr_t m_HoldInPlaceModifier = 0x608; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_LiftParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Fealty {
        constexpr uintptr_t m_hTarget = 0xc98; // CHandle< C_BaseEntity >
    }
    namespace CModifierIntimidatedVData {
        constexpr uintptr_t m_EffectParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Upgrade_AerialAssualtVData {
        constexpr uintptr_t m_WatcherModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_LaunchParticle = 0x15a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Unstoppable {
        constexpr uintptr_t m_vecCheckedModifiers = 0xc0; // CUtlVector< CCitadelModifier* >
    }
    namespace CModifierVData_SetMoveType {
        constexpr uintptr_t m_nMoveType = 0x608; // MoveType_t
    }
    namespace CCitadel_Ability_StickyBomb {
        constexpr uintptr_t m_nPlayersHit = 0xca0; // int32
    }
    namespace CCitadel_UtilityUpgrade_RocketBoosterVData {
        constexpr uintptr_t m_LandingParticle = 0x1688; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AoEPreviewParticle = 0x1768; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DropDownStartParticle = 0x1848; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DropDownStartSound = 0x1928; // CSoundEventName
        constexpr uintptr_t m_LandingSound = 0x1938; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0x1948; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flSlamEnabledTime = 0x1958; // float32
    }
    namespace CCitadel_Modifier_Magic_Clarity_BuffVData {
        constexpr uintptr_t m_VisualModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_AcolytesGlove_VData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_SwingParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x728; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace PlayerDataGlobal_t {
        constexpr uintptr_t m_iLevel = 0x8; // int32
        constexpr uintptr_t m_iMaxAmmo = 0xc; // int32
        constexpr uintptr_t m_iHealthMax = 0x10; // int32
        constexpr uintptr_t m_flHealthRegen = 0x14; // float32
        constexpr uintptr_t m_flRespawnTime = 0x18; // GameTime_t
        constexpr uintptr_t m_nHeroID = 0x1c; // HeroID_t
        constexpr uintptr_t m_iGoldNetWorth = 0x20; // int32
        constexpr uintptr_t m_iAPNetWorth = 0x24; // int32
        constexpr uintptr_t m_iCreepGold = 0x28; // int32
        constexpr uintptr_t m_iCreepGoldSoloBonus = 0x2c; // int32
        constexpr uintptr_t m_iCreepGoldKill = 0x30; // int32
        constexpr uintptr_t m_iCreepGoldAirOrb = 0x34; // int32
        constexpr uintptr_t m_iCreepGoldGroundOrb = 0x38; // int32
        constexpr uintptr_t m_iCreepGoldDeny = 0x3c; // int32
        constexpr uintptr_t m_iCreepGoldNeutral = 0x40; // int32
        constexpr uintptr_t m_iFarmBaseline = 0x44; // int32
        constexpr uintptr_t m_iHealth = 0x48; // int32
        constexpr uintptr_t m_iPlayerKills = 0x4c; // int32
        constexpr uintptr_t m_iPlayerAssists = 0x50; // int32
        constexpr uintptr_t m_iDeaths = 0x54; // int32
        constexpr uintptr_t m_iDenies = 0x58; // int32
        constexpr uintptr_t m_iLastHits = 0x5c; // int32
        constexpr uintptr_t m_bAlive = 0x60; // bool
        constexpr uintptr_t m_nHeroDraftPosition = 0x64; // int32
        constexpr uintptr_t m_bUltimateTrained = 0x68; // bool
        constexpr uintptr_t m_flUltimateCooldownStart = 0x6c; // GameTime_t
        constexpr uintptr_t m_flUltimateCooldownEnd = 0x70; // GameTime_t
        constexpr uintptr_t m_bHasRejuvenator = 0x74; // bool
        constexpr uintptr_t m_bHasRebirth = 0x75; // bool
        constexpr uintptr_t m_bFlaggedAsCheater = 0x76; // bool
        constexpr uintptr_t m_iHeroDamage = 0x78; // int32
        constexpr uintptr_t m_iHeroHealing = 0x7c; // int32
        constexpr uintptr_t m_iSelfHealing = 0x80; // int32
        constexpr uintptr_t m_iObjectiveDamage = 0x84; // int32
        constexpr uintptr_t m_nHeroAbilityUpgradeBits = 0x88; // int32[4]
        constexpr uintptr_t m_vecUpgrades = 0x98; // C_NetworkUtlVectorBase< CUtlStringToken >
        constexpr uintptr_t m_vecBonusCounterAbilities = 0xb0; // C_NetworkUtlVectorBase< CUtlStringToken >
        constexpr uintptr_t m_vecBonusCounterValues = 0xc8; // C_NetworkUtlVectorBase< int32 >
        constexpr uintptr_t m_tHeldItem = 0xe0; // CUtlStringToken
        constexpr uintptr_t m_vecImbuements = 0xe8; // C_UtlVectorEmbeddedNetworkVar< ItemImbuementPair_t >
        constexpr uintptr_t m_vecDynamicAbilityValues = 0x138; // C_UtlVectorEmbeddedNetworkVar< DynamicAbilityValues_t >
        constexpr uintptr_t m_vecStatViewerModifierValues = 0x188; // C_UtlVectorEmbeddedNetworkVar< StatViewerModifierValues_t >
    }
    namespace CLogicRelay {
        constexpr uintptr_t m_OnTrigger = 0x560; // CEntityIOOutput
        constexpr uintptr_t m_OnSpawn = 0x588; // CEntityIOOutput
        constexpr uintptr_t m_bDisabled = 0x5b0; // bool
        constexpr uintptr_t m_bWaitForRefire = 0x5b1; // bool
        constexpr uintptr_t m_bTriggerOnce = 0x5b2; // bool
        constexpr uintptr_t m_bFastRetrigger = 0x5b3; // bool
        constexpr uintptr_t m_bPassthoughCaller = 0x5b4; // bool
    }
    namespace CAbility_Mirage_Tornado_VData {
        constexpr uintptr_t m_TornadoCastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CasterModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_WhirlwindEvasionModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TornadoAura = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_GrenadeTrailModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_cameraSequenceTravelingInTornado = 0x1670; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Ability_PowerSlash {
        constexpr uintptr_t m_nPowerLevel = 0xcac; // int32
        constexpr uintptr_t m_nCastParticle = 0xcb0; // ParticleIndex_t
    }
    namespace CCitadel_WeaponUpgrade_BurstFire {
        constexpr uintptr_t m_nFastFireEndTime = 0xcb0; // GameTime_t
    }
    namespace C_PointCameraVFOV {
        constexpr uintptr_t m_flVerticalFOV = 0x5c0; // float32
    }
    namespace CCitadel_Modifier_AnimalCurse {
        constexpr uintptr_t m_pOriginalModel = 0x130; // CWeakHandle< InfoForResourceTypeCModel >
        constexpr uintptr_t m_flOriginalModelScale = 0x138; // float32
    }
    namespace CCitadel_Modifier_VacuumAuraTargetModifierVData {
        constexpr uintptr_t m_flOuterSpeedScale = 0x6e8; // float32
        constexpr uintptr_t m_flSpeedScaleBias = 0x6ec; // float32
        constexpr uintptr_t m_TargetLoopingSound = 0x6f0; // CSoundEventName
    }
    namespace C_CitadelTeleportTrigger {
        constexpr uintptr_t m_vExitOrigin = 0x848; // Vector
    }
    namespace C_BarnLight {
        constexpr uintptr_t m_bEnabled = 0x840; // bool
        constexpr uintptr_t m_nColorMode = 0x844; // int32
        constexpr uintptr_t m_Color = 0x848; // Color
        constexpr uintptr_t m_flColorTemperature = 0x84c; // float32
        constexpr uintptr_t m_flBrightness = 0x850; // float32
        constexpr uintptr_t m_flBrightnessScale = 0x854; // float32
        constexpr uintptr_t m_nDirectLight = 0x858; // int32
        constexpr uintptr_t m_nBakedShadowIndex = 0x85c; // int32
        constexpr uintptr_t m_nLuminaireShape = 0x860; // int32
        constexpr uintptr_t m_flLuminaireSize = 0x864; // float32
        constexpr uintptr_t m_flLuminaireAnisotropy = 0x868; // float32
        constexpr uintptr_t m_LightStyleString = 0x870; // CUtlString
        constexpr uintptr_t m_flLightStyleStartTime = 0x878; // GameTime_t
        constexpr uintptr_t m_QueuedLightStyleStrings = 0x880; // C_NetworkUtlVectorBase< CUtlString >
        constexpr uintptr_t m_LightStyleEvents = 0x898; // C_NetworkUtlVectorBase< CUtlString >
        constexpr uintptr_t m_LightStyleTargets = 0x8b0; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
        constexpr uintptr_t m_StyleEvent = 0x8c8; // CEntityIOOutput[4]
        constexpr uintptr_t m_hLightCookie = 0x968; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_flShape = 0x970; // float32
        constexpr uintptr_t m_flSoftX = 0x974; // float32
        constexpr uintptr_t m_flSoftY = 0x978; // float32
        constexpr uintptr_t m_flSkirt = 0x97c; // float32
        constexpr uintptr_t m_flSkirtNear = 0x980; // float32
        constexpr uintptr_t m_vSizeParams = 0x984; // Vector
        constexpr uintptr_t m_flRange = 0x990; // float32
        constexpr uintptr_t m_vShear = 0x994; // Vector
        constexpr uintptr_t m_nBakeSpecularToCubemaps = 0x9a0; // int32
        constexpr uintptr_t m_vBakeSpecularToCubemapsSize = 0x9a4; // Vector
        constexpr uintptr_t m_nCastShadows = 0x9b0; // int32
        constexpr uintptr_t m_nShadowMapSize = 0x9b4; // int32
        constexpr uintptr_t m_nShadowPriority = 0x9b8; // int32
        constexpr uintptr_t m_bContactShadow = 0x9bc; // bool
        constexpr uintptr_t m_nBounceLight = 0x9c0; // int32
        constexpr uintptr_t m_flBounceScale = 0x9c4; // float32
        constexpr uintptr_t m_flMinRoughness = 0x9c8; // float32
        constexpr uintptr_t m_vAlternateColor = 0x9cc; // Vector
        constexpr uintptr_t m_fAlternateColorBrightness = 0x9d8; // float32
        constexpr uintptr_t m_nFog = 0x9dc; // int32
        constexpr uintptr_t m_flFogStrength = 0x9e0; // float32
        constexpr uintptr_t m_nFogShadows = 0x9e4; // int32
        constexpr uintptr_t m_flFogScale = 0x9e8; // float32
        constexpr uintptr_t m_bFogMixedShadows = 0x9ec; // bool
        constexpr uintptr_t m_flFadeSizeStart = 0x9f0; // float32
        constexpr uintptr_t m_flFadeSizeEnd = 0x9f4; // float32
        constexpr uintptr_t m_flShadowFadeSizeStart = 0x9f8; // float32
        constexpr uintptr_t m_flShadowFadeSizeEnd = 0x9fc; // float32
        constexpr uintptr_t m_bPrecomputedFieldsValid = 0xa00; // bool
        constexpr uintptr_t m_vPrecomputedBoundsMins = 0xa04; // Vector
        constexpr uintptr_t m_vPrecomputedBoundsMaxs = 0xa10; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin = 0xa1c; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles = 0xa28; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent = 0xa34; // Vector
        constexpr uintptr_t m_nPrecomputedSubFrusta = 0xa40; // int32
        constexpr uintptr_t m_vPrecomputedOBBOrigin0 = 0xa44; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles0 = 0xa50; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent0 = 0xa5c; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin1 = 0xa68; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles1 = 0xa74; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent1 = 0xa80; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin2 = 0xa8c; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles2 = 0xa98; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent2 = 0xaa4; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin3 = 0xab0; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles3 = 0xabc; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent3 = 0xac8; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin4 = 0xad4; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles4 = 0xae0; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent4 = 0xaec; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin5 = 0xaf8; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles5 = 0xb04; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent5 = 0xb10; // Vector
        constexpr uintptr_t m_bInitialBoneSetup = 0xb60; // bool
        constexpr uintptr_t m_VisClusters = 0xb68; // C_NetworkUtlVectorBase< uint16 >
    }
    namespace C_TonemapController2 {
        constexpr uintptr_t m_flAutoExposureMin = 0x560; // float32
        constexpr uintptr_t m_flAutoExposureMax = 0x564; // float32
        constexpr uintptr_t m_flTonemapPercentTarget = 0x568; // float32
        constexpr uintptr_t m_flTonemapPercentBrightPixels = 0x56c; // float32
        constexpr uintptr_t m_flTonemapMinAvgLum = 0x570; // float32
        constexpr uintptr_t m_flExposureAdaptationSpeedUp = 0x574; // float32
        constexpr uintptr_t m_flExposureAdaptationSpeedDown = 0x578; // float32
        constexpr uintptr_t m_flTonemapEVSmoothingRange = 0x57c; // float32
    }
    namespace CCitadel_Modifier_SpinVData {
        constexpr uintptr_t m_AoEParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SlowModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityIntimidateVData {
        constexpr uintptr_t m_EnemyModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AoEPlayerParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AoEParticle = 0x1650; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_MobileResupply {
        constexpr uintptr_t m_hAbility = 0xaf0; // CHandle< C_CitadelBaseAbility >
        constexpr uintptr_t m_bFloating = 0xaf4; // bool
    }
    namespace CCitadel_Modifier_Wraith_RapidFireVData {
        constexpr uintptr_t m_RapidFireParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_SilenceProcWatcherVData {
        constexpr uintptr_t m_BuildUpModifier = 0x638; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_SilenceProcModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SilenceActiveModifier = 0x658; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImmunityModifier = 0x668; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_sInstantProcIfCasterHasModifier = 0x678; // CUtlString
        constexpr uintptr_t m_TracerParticle = 0x680; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CitadelAbilityVData {
        constexpr uintptr_t m_eAbilityType = 0x28; // EAbilityType_t
        constexpr uintptr_t m_eItemSlotType = 0x29; // EItemSlotTypes_t
        constexpr uintptr_t m_bDisabled = 0x2a; // bool
        constexpr uintptr_t m_bInDevelopment = 0x2b; // bool
        constexpr uintptr_t m_bStartTrained = 0x2c; // bool
        constexpr uintptr_t m_iMaxLevel = 0x30; // int32
        constexpr uintptr_t m_nAbilityPointsCost = 0x34; // int32
        constexpr uintptr_t m_nAbillityUnlocksCost = 0x38; // int32
        constexpr uintptr_t m_iUpdateTime = 0x40; // uint64
        constexpr uintptr_t m_AbilityBehaviorsBits = 0x4c; // CBitVecEnum< EAbilityBehavior_t >
        constexpr uintptr_t m_eAbilityTargetingLocation = 0x54; // EAbilityTargetingLocation_t
        constexpr uintptr_t m_eAbilityTargetingShape = 0x58; // EAbilityTargetingShape_t
        constexpr uintptr_t m_flTargetingConeAngle = 0x5c; // float32
        constexpr uintptr_t m_flTargetingConeHalfWidth = 0x60; // float32
        constexpr uintptr_t m_bIncludeExtra2DCone = 0x64; // bool
        constexpr uintptr_t m_eAbilityActivation = 0x68; // EAbilityActivation_t
        constexpr uintptr_t m_TriggerButtonPreReqButton = 0x70; // InputBitMask_t
        constexpr uintptr_t m_TriggerButtonOverride = 0x78; // InputBitMask_t
        constexpr uintptr_t m_eAbilitySpectatePriority = 0x80; // EAbilitySpectatePriority
        constexpr uintptr_t m_bitsInterruptingStates = 0x84; // CBitVecEnum< EModifierState >
        constexpr uintptr_t m_IncompatibleFilter = 0x9c; // IncompatibleFilter_t
        constexpr uintptr_t m_nAbilityTargetTypes = 0xac; // CITADEL_UNIT_TARGET_TYPE
        constexpr uintptr_t m_nAbilityTargetFlags = 0xb0; // CITADEL_UNIT_TARGET_FLAGS
        constexpr uintptr_t m_bitsPostCastEnabledStateMask = 0xb4; // CBitVecEnum< EModifierState >
        constexpr uintptr_t m_TargetAbilityEffectsToApply = 0xcc; // ECitadelTargetAbilityEffects
        constexpr uintptr_t m_bShowTargetingPreviewWhileChanneling = 0xd0; // bool
        constexpr uintptr_t m_bShowTargetingPreviewWhileCasting = 0xd1; // bool
        constexpr uintptr_t m_WeaponInfo = 0xd8; // CCitadelWeaponInfo
        constexpr uintptr_t m_projectileInfo = 0x758; // ProjectileInfo_t
        constexpr uintptr_t m_deploymentInfo = 0xad8; // DeploymentInfo_t
        constexpr uintptr_t m_mapAbilityProperties = 0xcb8; // CUtlOrderedMap< CUtlString, CitadelAbilityProperty_t >
        constexpr uintptr_t m_vecDependentAbilities = 0xce0; // CUtlVector< CSubclassName< 4 > >
        constexpr uintptr_t m_vecAbilityUpgrades = 0xcf8; // CUtlVector< AbilityUpgrade_t >
        constexpr uintptr_t m_strCastAnimGraphParam = 0xd30; // CGlobalSymbol
        constexpr uintptr_t m_strSelectionNameOverride = 0xd38; // CUtlString
        constexpr uintptr_t m_strCastAnimSequenceName = 0xd40; // CUtlString
        constexpr uintptr_t m_AbilityTooltipDetails = 0xd48; // AbilityTooltipDetails_t
        constexpr uintptr_t m_strCSSClass = 0xd78; // CUtlString
        constexpr uintptr_t m_strAbilityImage = 0xd80; // CPanoramaImageName
        constexpr uintptr_t m_strMoviePreviewPath = 0xd90; // CUtlString
        constexpr uintptr_t m_HUDPanel = 0xd98; // CitadelAbilityHUDPanel_t
        constexpr uintptr_t m_bShowInPassiveItemsArea = 0xdd0; // bool
        constexpr uintptr_t m_bForceShowHUDPanel = 0xdd1; // bool
        constexpr uintptr_t m_bUsesFlightControls = 0xdd2; // bool
        constexpr uintptr_t m_additionalAbilities = 0xdd8; // AdditionalAbilities_t
        constexpr uintptr_t m_strCancelAbilityKey = 0xdf8; // CUtlString
        constexpr uintptr_t m_strSecondaryStatName = 0xe00; // CUtlString
        constexpr uintptr_t m_strCastButtonLocToken = 0xe08; // CUtlString
        constexpr uintptr_t m_strAltCastButtonLocToken = 0xe10; // CUtlString
        constexpr uintptr_t m_cameraSequenceCastStart = 0xe18; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_bEndCastStartSequenceOnCastComplete = 0xea0; // bool
        constexpr uintptr_t m_cameraSequenceCastComplete = 0xea8; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceChannelStart = 0xf30; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_bEndChannelStartSequenceOnChannelComplete = 0xfb8; // bool
        constexpr uintptr_t m_flCameraPreviewOffset = 0xfbc; // float32
        constexpr uintptr_t m_flCameraPreviewDistance = 0xfc0; // float32
        constexpr uintptr_t m_flCameraPreviewSpeed = 0xfc4; // float32
        constexpr uintptr_t m_previewParticle = 0xfc8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PreviewPathParticle = 0x10a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_mapCastEventParticles = 0x1188; // CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > >
        constexpr uintptr_t m_skillshotHitParticle = 0x11b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_skillshotMissParticle = 0x1290; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetingPreviewParticle = 0x1370; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strSelectedSound = 0x1450; // CSoundEventName
        constexpr uintptr_t m_strUnselectedSound = 0x1460; // CSoundEventName
        constexpr uintptr_t m_strSelectedLoopSound = 0x1470; // CSoundEventName
        constexpr uintptr_t m_strCastSound = 0x1480; // CSoundEventName
        constexpr uintptr_t m_strChannelSound = 0x1490; // CSoundEventName
        constexpr uintptr_t m_strChannelLoopSound = 0x14a0; // CSoundEventName
        constexpr uintptr_t m_strCastDelaySound = 0x14b0; // CSoundEventName
        constexpr uintptr_t m_strCastDelayLoopSound = 0x14c0; // CSoundEventName
        constexpr uintptr_t m_strHitConfirmationSound = 0x14d0; // CSoundEventName
        constexpr uintptr_t m_strDamageTakenSound = 0x14e0; // CSoundEventName
        constexpr uintptr_t m_strAbilityOffCooldownSound = 0x14f0; // CSoundEventName
        constexpr uintptr_t m_strAbilityChargeReadySound = 0x1500; // CSoundEventName
        constexpr uintptr_t m_bPlayMeepMop = 0x1510; // bool
        constexpr uintptr_t m_AutoChannelModifier = 0x1518; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_AutoCastDelayModifier = 0x1528; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_AutoIntrinsicModifiers = 0x1538; // CUtlVector< CEmbeddedSubclass< CBaseModifier > >
    }
    namespace CCitadel_UtilityUpgrade_RocketBooster {
        constexpr uintptr_t m_nTargetingParticleIndex = 0xd24; // ParticleIndex_t
        constexpr uintptr_t m_flCastTime = 0xd28; // GameTime_t
        constexpr uintptr_t m_bCrashingDown = 0xd2c; // bool
        constexpr uintptr_t m_bImpulseApplied = 0xd2d; // bool
        constexpr uintptr_t m_bCanCrash = 0xd2e; // bool
        constexpr uintptr_t m_vecCrashPosition = 0xd30; // Vector
        constexpr uintptr_t m_vecCrashDirection = 0xd3c; // Vector
    }
    namespace CAbilityPowerSlashVData {
        constexpr uintptr_t m_flAirDrag = 0x1558; // float32
        constexpr uintptr_t m_flMaxPowerPadding = 0x155c; // float32
        constexpr uintptr_t m_flEffectGroundTrace = 0x1560; // float32
        constexpr uintptr_t m_flWhizbyMaxRange = 0x1564; // float32
        constexpr uintptr_t m_flStartPosTestCapsuleLength = 0x1568; // float32
        constexpr uintptr_t m_vecLongEffectOffset = 0x156c; // Vector
        constexpr uintptr_t m_PowerSlashParticle = 0x1578; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PowerSlashFullParticle = 0x1658; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1738; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1818; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PowerUpParticle = 0x18f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStartSound = 0x19d8; // CSoundEventName
        constexpr uintptr_t m_strDamageImpactSound = 0x19e8; // CSoundEventName
        constexpr uintptr_t m_strDamageImpactVictimSound = 0x19f8; // CSoundEventName
        constexpr uintptr_t m_strPowerUp1Sounds = 0x1a08; // CSoundEventName
        constexpr uintptr_t m_strPowerUp2Sounds = 0x1a18; // CSoundEventName
        constexpr uintptr_t m_strPowerUp3Sounds = 0x1a28; // CSoundEventName
        constexpr uintptr_t m_strWhizbySound = 0x1a38; // CSoundEventName
        constexpr uintptr_t m_strSlashSound = 0x1a48; // CSoundEventName
        constexpr uintptr_t m_strSlashFullSound = 0x1a58; // CSoundEventName
        constexpr uintptr_t m_SlowModifier = 0x1a68; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Ability_IceGrenadeVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_IceGrenadeSlowModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplosionSound = 0x1640; // CSoundEventName
    }
    namespace CCitadel_ArmorUpgrade_ReturnFireVData {
        constexpr uintptr_t m_ReactiveArmorModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TechShieldImpact {
        constexpr uintptr_t m_AmbientEffect = 0xc0; // ParticleIndex_t
    }
    namespace C_EconEntity {
        constexpr uintptr_t m_AttributeManager = 0xc90; // CAttributeContainer
        constexpr uintptr_t m_bClientside = 0xdd0; // bool
        constexpr uintptr_t m_nDisableMode = 0xdd4; // EconEntityParticleDisableMode_t
        constexpr uintptr_t m_bParticleSystemsCreated = 0xdd8; // bool
        constexpr uintptr_t m_bForceDestroyAttachedParticlesImmediately = 0xdd9; // bool
        constexpr uintptr_t m_vecAttachedParticles = 0xde0; // CUtlVector< C_EconEntity::AttachedParticleInfo_t >
        constexpr uintptr_t m_hViewmodelAttachment = 0xdf8; // CHandle< CBaseAnimGraph >
        constexpr uintptr_t m_iOldTeam = 0xdfc; // int32
        constexpr uintptr_t m_bAttachmentDirty = 0xe00; // bool
        constexpr uintptr_t m_iOldStyle = 0xe01; // style_index_t
        constexpr uintptr_t m_hOldProvidee = 0xe04; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vecAttachedModels = 0xe08; // CUtlVector< C_EconEntity::AttachedModelData_t >
    }
    namespace CCitadel_Ability_ChargedShot {
        constexpr uintptr_t m_ChannelParticle = 0xc98; // ParticleIndex_t
    }
    namespace C_RectLight {
        constexpr uintptr_t m_bShowLight = 0xb88; // bool
    }
    namespace CAbilityCadenceAnthemVData {
        constexpr uintptr_t m_AnthemAOEModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierVandalOverflowVData {
        constexpr uintptr_t m_LiftParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStartSound = 0x7c8; // CSoundEventName
    }
    namespace CModifier_FleetfootBoots_BonusClip {
        constexpr uintptr_t m_nBonusClip = 0xc0; // int32
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura_VData {
        constexpr uintptr_t m_BuffModifier = 0x650; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_ParticleSystem {
        constexpr uintptr_t m_szSnapshotFileName = 0x840; // char[512]
        constexpr uintptr_t m_bActive = 0xa40; // bool
        constexpr uintptr_t m_bFrozen = 0xa41; // bool
        constexpr uintptr_t m_flFreezeTransitionDuration = 0xa44; // float32
        constexpr uintptr_t m_nStopType = 0xa48; // int32
        constexpr uintptr_t m_bAnimateDuringGameplayPause = 0xa4c; // bool
        constexpr uintptr_t m_iEffectIndex = 0xa50; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
        constexpr uintptr_t m_flStartTime = 0xa58; // GameTime_t
        constexpr uintptr_t m_flPreSimTime = 0xa5c; // float32
        constexpr uintptr_t m_vServerControlPoints = 0xa60; // Vector[4]
        constexpr uintptr_t m_iServerControlPointAssignments = 0xa90; // uint8[4]
        constexpr uintptr_t m_hControlPointEnts = 0xa94; // CHandle< C_BaseEntity >[64]
        constexpr uintptr_t m_bNoSave = 0xb94; // bool
        constexpr uintptr_t m_bNoFreeze = 0xb95; // bool
        constexpr uintptr_t m_bNoRamp = 0xb96; // bool
        constexpr uintptr_t m_bStartActive = 0xb97; // bool
        constexpr uintptr_t m_iszEffectName = 0xb98; // CUtlSymbolLarge
        constexpr uintptr_t m_iszControlPointNames = 0xba0; // CUtlSymbolLarge[64]
        constexpr uintptr_t m_nDataCP = 0xda0; // int32
        constexpr uintptr_t m_vecDataCPValue = 0xda4; // Vector
        constexpr uintptr_t m_nTintCP = 0xdb0; // int32
        constexpr uintptr_t m_clrTint = 0xdb4; // Color
        constexpr uintptr_t m_bOldActive = 0xdd8; // bool
        constexpr uintptr_t m_bOldFrozen = 0xdd9; // bool
    }
    namespace CModifier_Wrecker_UltimateVData {
        constexpr uintptr_t m_EnemyGrabModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EnemyThrowModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EnemyDamageModifier = 0x628; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_InvincibleModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_StartSound = 0x648; // CSoundEventName
        constexpr uintptr_t m_AmbientLoopingSound = 0x658; // CSoundEventName
        constexpr uintptr_t m_GrabSound = 0x668; // CSoundEventName
        constexpr uintptr_t m_ThrowSound = 0x678; // CSoundEventName
    }
    namespace CCitadel_Modifier_Low_Health_Glow {
        constexpr uintptr_t m_nFXIndex = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_Magic_Clarity_Buff {
        constexpr uintptr_t m_bAbilityLocked = 0xf8; // bool
    }
    namespace CCitadel_Modifier_BreakablePropExtraStaminaVData {
        constexpr uintptr_t m_nExtraStamina = 0x608; // float32
    }
    namespace CCitadel_Modifier_StickyBombAttachedVData {
        constexpr uintptr_t m_BombAttachedParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StunAttachedParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BombAttachedVictimTeamParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x988; // CSoundEventName
        constexpr uintptr_t m_strTickTockSound = 0x998; // CSoundEventName
        constexpr uintptr_t m_strTickTockFastSound = 0x9a8; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0x9b8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DetonateWarningTime = 0x9c8; // float32
    }
    namespace CModifierLashGrappleEnemyDebuffVData {
        constexpr uintptr_t m_GrappleParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaunchParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RopeParticle = 0x988; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactSound = 0xa68; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0xa78; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityLashUltimateVData {
        constexpr uintptr_t m_TargetPreviewParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaunchParticle = 0x1650; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_UltimateCastParticle = 0x1730; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_UltimateCastEnemyParticle = 0x1810; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strThrowEnemyAnimGraphParam = 0x18f0; // CGlobalSymbol
        constexpr uintptr_t m_GrappleEnemyModifier = 0x18f8; // CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff >
        constexpr uintptr_t m_GrabSound = 0x1908; // CSoundEventName
        constexpr uintptr_t m_MissSound = 0x1918; // CSoundEventName
        constexpr uintptr_t m_ThrowSound = 0x1928; // CSoundEventName
        constexpr uintptr_t m_flAirSpeedMax = 0x1938; // float32
        constexpr uintptr_t m_flFallSpeedMax = 0x193c; // float32
        constexpr uintptr_t m_flAirDrag = 0x1940; // float32
        constexpr uintptr_t m_flMaxPitchRangeScale = 0x1944; // float32
        constexpr uintptr_t m_flThrowAnimTossPoint = 0x1948; // float32
    }
    namespace CCitadel_Modifier_LastBreath {
        constexpr uintptr_t m_flDamageToAbsorb = 0x168; // float32
    }
    namespace CCitadel_Modifier_Knockback {
        constexpr uintptr_t m_flForce = 0xc8; // float32
        constexpr uintptr_t m_bKnockedBack = 0xcc; // bool
    }
    namespace CAbility_Fathom_ReefdwellerHarpoon {
        constexpr uintptr_t m_bHitTarget = 0xc98; // bool
        constexpr uintptr_t m_hRegenModifier = 0xca0; // CModifierHandleTyped< CCitadelModifier >
        constexpr uintptr_t m_vPrevPos = 0xcb8; // Vector
        constexpr uintptr_t m_bIsVisibleOnMinimap = 0xcc4; // bool
        constexpr uintptr_t m_bLatched = 0xcc5; // bool
        constexpr uintptr_t m_vHarpoonTarget = 0xcc8; // Vector
        constexpr uintptr_t m_flLatchedYaw = 0xcd4; // float32
        constexpr uintptr_t m_flCloseEnoughStartTime = 0xcd8; // GameTime_t
        constexpr uintptr_t m_flStuckStartTime = 0xcdc; // GameTime_t
    }
    namespace CAbility_Synth_Grasp {
        constexpr uintptr_t m_vecTetheredEnemies = 0xc98; // CUtlVector< CHandle< C_BaseEntity > >
    }
    namespace CPlayer_ObserverServices {
        constexpr uintptr_t m_iObserverMode = 0x40; // uint8
        constexpr uintptr_t m_hObserverTarget = 0x44; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_iObserverLastMode = 0x48; // ObserverMode_t
        constexpr uintptr_t m_bForcedObserverMode = 0x4c; // bool
        constexpr uintptr_t m_flObserverChaseDistance = 0x50; // float32
        constexpr uintptr_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
    }
    namespace CCitadel_Ability_TangoTether_Trigger {
        constexpr uintptr_t m_hBaseAbility = 0xcac; // CHandle< C_CitadelBaseAbility >
    }
    namespace C_AssignedLaneParticle {
        constexpr uintptr_t m_iLane = 0x860; // int32
    }
    namespace CCitadel_Modifier_ReefdwellerHarpoon_Latched {
        constexpr uintptr_t m_flStartSpotted = 0x268; // GameTime_t
    }
    namespace CAbilityThumper4VData {
        constexpr uintptr_t m_PullAOEModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Bounce_Pad_Stomp {
        constexpr uintptr_t m_bStomped = 0x2f0; // bool
    }
    namespace C_Citadel_Nano_Predatory_Statue {
        constexpr uintptr_t m_hAbility = 0xaf8; // CHandle< C_CitadelBaseAbility >
        constexpr uintptr_t m_flLifetime = 0xafc; // float32
    }
    namespace CCitadel_Modifier_VandalOverflow {
        constexpr uintptr_t m_vecFloatDest = 0x138; // Vector
        constexpr uintptr_t m_vecStartingPos = 0x144; // Vector
    }
    namespace CAbilityLashDownStrikeVData {
        constexpr uintptr_t m_TargetPreviewParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strGroundCastAnimGraphParam = 0x1630; // CGlobalSymbol
        constexpr uintptr_t m_strAirCastAnimGraphParam = 0x1638; // CGlobalSymbol
        constexpr uintptr_t m_StompParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StompLineParticle = 0x1720; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StompLineObstructedParticle = 0x1800; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StompImpactParticle = 0x18e0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StompExplosionSound = 0x19c0; // CSoundEventName
        constexpr uintptr_t m_StompEnemyImpactSound = 0x19d0; // CSoundEventName
        constexpr uintptr_t m_DownStrikeModifier = 0x19e0; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ImpactModifier = 0x19f0; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_flHeightUILingerTime = 0x1a00; // float32
        constexpr uintptr_t m_flDamageFrustumHalfWidth = 0x1a04; // float32
        constexpr uintptr_t m_flDamageFrustumAngle = 0x1a08; // float32
        constexpr uintptr_t m_flDamageWaveSpeed = 0x1a0c; // float32
        constexpr uintptr_t m_flDamageTraceProbeDamageRadius = 0x1a10; // float32
        constexpr uintptr_t m_flDamageTraceProbeWorldRadius = 0x1a14; // float32
        constexpr uintptr_t m_flDamageTraceProbeStepUpHeight = 0x1a18; // float32
        constexpr uintptr_t m_flDamageTraceProbeStepDownHeight = 0x1a1c; // float32
        constexpr uintptr_t m_flDamageTraceProbeDropDownRate = 0x1a20; // float32
        constexpr uintptr_t m_flInitialDamageRadiusInMeters = 0x1a24; // float32
        constexpr uintptr_t m_nGroundCrackGap = 0x1a28; // int32
        constexpr uintptr_t m_flGroupLengthTolerance = 0x1a2c; // float32
        constexpr uintptr_t m_flDamageEffectScaleMin = 0x1a30; // float32
        constexpr uintptr_t m_flDamageEffectScaleMax = 0x1a34; // float32
        constexpr uintptr_t m_flTrackAmount = 0x1a38; // float32
    }
    namespace CCitadel_Ability_ProjectMindVData {
        constexpr uintptr_t m_ProjectMindModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_BubbleVData {
        constexpr uintptr_t m_CastParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastTargetSound = 0x1678; // CSoundEventName
        constexpr uintptr_t m_BubbleModifier = 0x1688; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CModifierHoldingGoldenIdolVData {
        constexpr uintptr_t m_IdolParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace SequenceHistory_t {
        constexpr uintptr_t m_hSequence = 0x0; // HSequence
        constexpr uintptr_t m_flSeqStartTime = 0x4; // GameTime_t
        constexpr uintptr_t m_flSeqFixedCycle = 0x8; // float32
        constexpr uintptr_t m_nSeqLoopMode = 0xc; // AnimLoopMode_t
        constexpr uintptr_t m_flPlaybackRate = 0x10; // float32
        constexpr uintptr_t m_flCyclesPerSecond = 0x14; // float32
    }
    namespace C_CitadelZiplinePath {
        constexpr uintptr_t m_iLaneNumber = 0x670; // int32
    }
    namespace CCitadel_Ability_BaseHeldItemVData {
        constexpr uintptr_t m_ItemModel = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    }
    namespace CAbilityCadenceGrandFinaleVData {
        constexpr uintptr_t m_StageModel = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_flStageModelHeight = 0x1630; // float32
        constexpr uintptr_t m_flStageModelWidth = 0x1634; // float32
        constexpr uintptr_t m_flStageModelLength = 0x1638; // float32
        constexpr uintptr_t m_flStageModelScale = 0x163c; // float32
        constexpr uintptr_t m_GrandFinaleAOEModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Gravity_Lasso_Enemy {
        constexpr uintptr_t m_eHoldPosition = 0xc8; // ELassoHoldPosition
    }
    namespace CCitadel_Ability_Bull_Leap {
        constexpr uintptr_t m_flBoostYaw = 0xc98; // float32
        constexpr uintptr_t m_vecCrashPosition = 0xc9c; // Vector
        constexpr uintptr_t m_vecCrashDirection = 0xca8; // Vector
        constexpr uintptr_t m_eLeapState = 0xcb4; // ELeapState_t
        constexpr uintptr_t m_flStateEnterTime = 0xcb8; // GameTime_t
        constexpr uintptr_t m_flNextStateTime = 0xcc0; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flBoostEndTime = 0xcd8; // CCitadelAutoScaledTime
        constexpr uintptr_t m_vecLastVel = 0xe48; // Vector
    }
    namespace CCitadel_Ability_Tier2Boss_RocketBarrage {
        constexpr uintptr_t m_nGrenadesLeft = 0xc98; // int32
    }
    namespace CPointModifierThinker {
        constexpr uintptr_t m_hModifier = 0x560; // CModifierHandleTyped< CCitadelModifier >
        constexpr uintptr_t m_bSendToClients = 0x578; // bool
    }
    namespace C_EnvDecal {
        constexpr uintptr_t m_hDecalMaterial = 0x840; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_flWidth = 0x848; // float32
        constexpr uintptr_t m_flHeight = 0x84c; // float32
        constexpr uintptr_t m_flDepth = 0x850; // float32
        constexpr uintptr_t m_nRenderOrder = 0x854; // uint32
        constexpr uintptr_t m_bProjectOnWorld = 0x858; // bool
        constexpr uintptr_t m_bProjectOnCharacters = 0x859; // bool
        constexpr uintptr_t m_bProjectOnWater = 0x85a; // bool
        constexpr uintptr_t m_flDepthSortBias = 0x85c; // float32
    }
    namespace CAbilityLockDownVData {
        constexpr uintptr_t m_CastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_NearbyEnemyBoostVData {
        constexpr uintptr_t m_BerserkerSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_BuffModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_ColorCorrection {
        constexpr uintptr_t m_vecOrigin = 0x560; // Vector
        constexpr uintptr_t m_MinFalloff = 0x56c; // float32
        constexpr uintptr_t m_MaxFalloff = 0x570; // float32
        constexpr uintptr_t m_flFadeInDuration = 0x574; // float32
        constexpr uintptr_t m_flFadeOutDuration = 0x578; // float32
        constexpr uintptr_t m_flMaxWeight = 0x57c; // float32
        constexpr uintptr_t m_flCurWeight = 0x580; // float32
        constexpr uintptr_t m_netlookupFilename = 0x584; // char[512]
        constexpr uintptr_t m_bEnabled = 0x784; // bool
        constexpr uintptr_t m_bMaster = 0x785; // bool
        constexpr uintptr_t m_bClientSide = 0x786; // bool
        constexpr uintptr_t m_bExclusive = 0x787; // bool
        constexpr uintptr_t m_bEnabledOnClient = 0x788; // bool[1]
        constexpr uintptr_t m_flCurWeightOnClient = 0x78c; // float32[1]
        constexpr uintptr_t m_bFadingIn = 0x790; // bool[1]
        constexpr uintptr_t m_flFadeStartWeight = 0x794; // float32[1]
        constexpr uintptr_t m_flFadeStartTime = 0x798; // float32[1]
        constexpr uintptr_t m_flFadeDuration = 0x79c; // float32[1]
    }
    namespace C_AI_BaseNPC {
        constexpr uintptr_t m_NPCState = 0xd08; // NPC_STATE
        constexpr uintptr_t m_bFadeCorpse = 0xd0c; // bool
        constexpr uintptr_t m_bImportantRagdoll = 0xd0d; // bool
    }
    namespace CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
        constexpr uintptr_t m_flEnemyMoveSlow = 0xc0; // float32
    }
    namespace CCitadel_Upgrade_OverdriveClip_VData {
        constexpr uintptr_t m_OverdriveClipModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ReloadModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ChainLightningEffectVData {
        constexpr uintptr_t m_ChainParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChainSound = 0x6e8; // CSoundEventName
        constexpr uintptr_t m_VictimSound = 0x6f8; // CSoundEventName
    }
    namespace CCitadel_Modifier_Passive_Camouflage {
        constexpr uintptr_t m_flRate = 0xc0; // float32
        constexpr uintptr_t m_vLastPosition = 0xc4; // Vector
    }
    namespace CAbility_Synth_Barrage {
        constexpr uintptr_t m_nProjectilesScheduled = 0xf00; // int32
        constexpr uintptr_t m_ChannelParticle = 0xf04; // ParticleIndex_t
        constexpr uintptr_t m_flNextShootTime = 0xf08; // GameTime_t
    }
    namespace CAbilityWreckerUltimateVData {
        constexpr uintptr_t m_BeamParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChargeParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ActiveModifier = 0x1710; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_BaseEventProcVData {
        constexpr uintptr_t m_bProcChanceAffectedByEffectiveness = 0x608; // bool
        constexpr uintptr_t m_bShouldApplyAbilityCooldown = 0x609; // bool
        constexpr uintptr_t m_bCanProcMultipleTimesOnOneTarget = 0x60a; // bool
        constexpr uintptr_t m_bCanProcByOtherObjects = 0x60b; // bool
        constexpr uintptr_t m_nAbilityTargetTypes = 0x60c; // CITADEL_UNIT_TARGET_TYPE
        constexpr uintptr_t m_nAbilityTargetFlags = 0x610; // CITADEL_UNIT_TARGET_FLAGS
        constexpr uintptr_t m_vecProcDamageTypes = 0x618; // CUtlVector< ECitadelDamageType >
        constexpr uintptr_t m_nRequiredDamageFlags = 0x630; // TakeDamageFlags_t
    }
    namespace CScaleFunctionAbilityPropertyMultiStatsVData {
        constexpr uintptr_t m_vecScalingStats = 0x40; // CUtlVector< EStatsType >
    }
    namespace CModelState {
        constexpr uintptr_t m_hModel = 0xd0; // CStrongHandle< InfoForResourceTypeCModel >
        constexpr uintptr_t m_ModelName = 0xd8; // CUtlSymbolLarge
        constexpr uintptr_t m_bClientClothCreationSuppressed = 0x118; // bool
        constexpr uintptr_t m_MeshGroupMask = 0x1d0; // uint64
        constexpr uintptr_t m_nBodyGroupChoices = 0x220; // C_NetworkUtlVectorBase< int32 >
        constexpr uintptr_t m_nIdealMotionType = 0x26a; // int8
        constexpr uintptr_t m_nForceLOD = 0x26b; // int8
        constexpr uintptr_t m_nClothUpdateFlags = 0x26c; // int8
    }
    namespace C_EconEntity::AttachedModelData_t {
        constexpr uintptr_t m_iModelDisplayFlags = 0x0; // int32
    }
    namespace CCitadel_Ability_TurretClone {
        constexpr uintptr_t m_flTurretExpireTime = 0xd78; // GameTime_t
        constexpr uintptr_t m_bTeleported = 0xd7e; // bool
        constexpr uintptr_t m_bHasTurretReady = 0xd7f; // bool
        constexpr uintptr_t m_vecTurretPosition = 0xd80; // Vector
        constexpr uintptr_t m_nFXIndex = 0xd8c; // ParticleIndex_t
    }
    namespace CModifierThumper_3VData {
        constexpr uintptr_t m_DroneParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LoopSound = 0x6e8; // CSoundEventName
    }
    namespace CAbilityCadenceCrescendoVData {
        constexpr uintptr_t m_CrescendoAOEModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifierAura >
    }
    namespace CCitadel_Ability_UltCombo {
        constexpr uintptr_t m_flLastAttackTime = 0xc98; // GameTime_t
        constexpr uintptr_t m_nAttackNum = 0xc9c; // int32
        constexpr uintptr_t m_iBonusHealth = 0xd48; // int32
        constexpr uintptr_t m_hTarget = 0xd4c; // CHandle< C_BaseEntity >
    }
    namespace CCitadel_Modifier_InvisVData {
        constexpr uintptr_t m_InvisLoopParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_InvisDetectRadiusParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_InvisRevealedParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flDesatFactor = 0x8a8; // float32
        constexpr uintptr_t m_strInvisRevealedSound = 0x8b0; // CSoundEventName
        constexpr uintptr_t m_bFadeInsteadOfRemoveOnBulletFire = 0x8c0; // bool
        constexpr uintptr_t m_bFadeInsteadOfRemoveOnAbilityUse = 0x8c1; // bool
        constexpr uintptr_t m_bFadeToVisibleAtEndOfDuration = 0x8c2; // bool
        constexpr uintptr_t m_flMinCloak = 0x8c4; // float32
        constexpr uintptr_t m_flMaxCloak = 0x8c8; // float32
    }
    namespace CCitadel_BreakablePropVData {
        constexpr uintptr_t m_bBreakOnDodgeTouch = 0x28; // bool
        constexpr uintptr_t m_bRenderAfterDeath = 0x29; // bool
        constexpr uintptr_t m_bSolidAfterDeath = 0x2a; // bool
        constexpr uintptr_t m_bIsPermanent = 0x2b; // bool
        constexpr uintptr_t m_bDamagedByBullets = 0x2c; // bool
        constexpr uintptr_t m_bDamagedByMelee = 0x2d; // bool
        constexpr uintptr_t m_bDamagedByAbilities = 0x2e; // bool
        constexpr uintptr_t m_hModel = 0x30; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_sAnimgraphParamDamageReceived = 0x110; // CGlobalSymbol
        constexpr uintptr_t m_sAnimgraphParamOnHit = 0x118; // CGlobalSymbol
        constexpr uintptr_t m_sAnimgraphParamOnRespawn = 0x120; // CGlobalSymbol
        constexpr uintptr_t m_sBreakSound = 0x128; // CSoundEventName
        constexpr uintptr_t m_sDamageSound = 0x138; // CSoundEventName
        constexpr uintptr_t m_sHeavyDamageSound = 0x148; // CSoundEventName
        constexpr uintptr_t m_sHitIndicatorSound = 0x158; // CSoundEventName
        constexpr uintptr_t m_iHealth = 0x168; // int32
        constexpr uintptr_t m_flInitialSpawnTime = 0x16c; // float32
        constexpr uintptr_t m_flRespawnTime = 0x170; // float32
        constexpr uintptr_t m_flInitialSpawnTimeTest = 0x174; // float32
        constexpr uintptr_t m_flRespawnTimeTest = 0x178; // float32
        constexpr uintptr_t m_bIsMantleable = 0x17c; // bool
        constexpr uintptr_t m_flPrimaryDropChance = 0x180; // float32
        constexpr uintptr_t m_eRollType = 0x184; // ECitadelRandomRollTypes
        constexpr uintptr_t m_vecPrimaryPickups = 0x188; // CUtlVector< BreakablePowerupDropDefinition_t >
        constexpr uintptr_t m_iMatchTimeMinsForLevel2Pickups = 0x1a0; // int32
        constexpr uintptr_t m_vecPickups_lv2 = 0x1a8; // CUtlVector< BreakablePowerupDropDefinition_t >
        constexpr uintptr_t m_iMatchTimeMinsForLevel3Pickups = 0x1c0; // int32
        constexpr uintptr_t m_vecPickups_lv3 = 0x1c8; // CUtlVector< BreakablePowerupDropDefinition_t >
        constexpr uintptr_t m_iLootListDeckSize = 0x1e0; // int32
    }
    namespace CAttributeList {
        constexpr uintptr_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar< C_EconItemAttribute >
        constexpr uintptr_t m_pManager = 0x58; // CAttributeManager*
    }
    namespace CAbilityCadencePrimaryWeaponVData {
        constexpr uintptr_t m_DebuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_VandalSurge {
        constexpr uintptr_t m_vecFloatDest = 0x138; // Vector
        constexpr uintptr_t m_vecStartingPos = 0x144; // Vector
    }
    namespace CCitadel_Modifier_RestorativeGoo {
        constexpr uintptr_t m_flEarliestBreakoutTime = 0xc0; // GameTime_t
        constexpr uintptr_t m_hGooCube = 0x3a0; // CHandle< C_Citadel_RestorativeGooCube >
        constexpr uintptr_t m_flBreakoutPercentage = 0x3a4; // float32
    }
    namespace CModifier_Upgrade_KineticSashTriggered_VData {
        constexpr uintptr_t m_TriggeredSound = 0x608; // CSoundEventName
    }
    namespace CCitadel_Modifier_Tech_BleedVData {
        constexpr uintptr_t m_DamageParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Item_SelfBuffModifierVData {
        constexpr uintptr_t m_BuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_CitadelBoomerangProjectile {
        constexpr uintptr_t m_bReturning = 0x8c8; // bool
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim {
        constexpr uintptr_t m_flLastProcTime = 0xd0; // GameTime_t
    }
    namespace CModifier_Upgrade_KineticSashTriggered {
        constexpr uintptr_t m_nBonusClip = 0xc0; // int32
    }
    namespace CCitadel_Modifier_DamageResistanceVData {
        constexpr uintptr_t m_flDamageResistancePerSecond = 0x608; // float32
        constexpr uintptr_t m_flTickInterval = 0x60c; // float32
        constexpr uintptr_t m_flDamageResistanceBonusPerGameMinute = 0x610; // float32
    }
    namespace C_BaseDoor {
        constexpr uintptr_t m_bIsUsable = 0x840; // bool
    }
    namespace C_Citadel_Projectile_Bebop_Hook {
        constexpr uintptr_t m_iChainEffect = 0x8c8; // ParticleIndex_t
    }
    namespace CCitadel_WeaponUpgrade_GlassCannon {
        constexpr uintptr_t m_nKillsEarned = 0xcb0; // int32
    }
    namespace C_PointClientUIDialog {
        constexpr uintptr_t m_hActivator = 0x870; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bStartEnabled = 0x874; // bool
    }
    namespace CCitadel_Modifier_Mirage_FireScarabs_WatcherVData {
        constexpr uintptr_t m_HealModifier = 0x628; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityRollingFireBallVData {
        constexpr uintptr_t m_flBallLifetime = 0x1550; // float32
        constexpr uintptr_t m_flBallStepUpHeight = 0x1554; // float32
        constexpr uintptr_t m_flBallDistAboveGround = 0x1558; // float32
        constexpr uintptr_t m_flBallFloatDownRate = 0x155c; // float32
        constexpr uintptr_t m_flBallSpeed = 0x1560; // float32
        constexpr uintptr_t m_flBallTraceRadius = 0x1564; // float32
    }
    namespace CCitadel_Ability_Hook {
        constexpr uintptr_t m_hHookVictim = 0xc98; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hProjectile = 0xc9c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vecHookTargetStartPos = 0xca0; // Vector
    }
    namespace CCitadel_Modifier_WeaponPowerForHealthVData {
        constexpr uintptr_t m_ActiveBuff = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Rutger_Pulse_Aura_VData {
        constexpr uintptr_t m_empWaveParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CPointChildModifier {
        constexpr uintptr_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x560; // bool
    }
    namespace CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_AblativeCoatResistBuffVData {
        constexpr uintptr_t m_ResistBuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_ReloadSpeed {
        constexpr uintptr_t m_flReloadSpeed = 0xc0; // float32
    }
    namespace CCitadelZipLineNode {
        constexpr uintptr_t m_vecConnections = 0x880; // C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > >
        constexpr uintptr_t m_eCaptureState = 0x898; // int16
        constexpr uintptr_t m_iPrimaryLane = 0x89a; // int16
        constexpr uintptr_t m_nRopesParity = 0x89c; // int16
        constexpr uintptr_t m_bCornerNode = 0x89e; // bool
        constexpr uintptr_t m_bCapturable = 0x89f; // bool
        constexpr uintptr_t m_bAlwaysUsable = 0x8a0; // bool
        constexpr uintptr_t m_bOneWay = 0x8a1; // bool
        constexpr uintptr_t m_bDisableZippingToByPlayers = 0x8a2; // bool
        constexpr uintptr_t m_bUseForMinimapDrawing = 0x8a3; // bool
        constexpr uintptr_t m_hGuardingBoss = 0x8a4; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flRopeRadius = 0x8a8; // float32
        constexpr uintptr_t m_bEnabled = 0x8ac; // bool
    }
    namespace CBaseModifierAura {
        constexpr uintptr_t m_hAuraUnits = 0xc0; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_hAmbientEffect = 0xd8; // ParticleIndex_t
        constexpr uintptr_t m_flOverrideRadius = 0xdc; // float32
    }
    namespace CModifierChompHobbledVData {
        constexpr uintptr_t m_LassoEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ConsumeSound = 0x6e8; // CSoundEventName
    }
    namespace CAbility_Synth_Affliction_VData {
        constexpr uintptr_t m_DebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AoEParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Tokamak_HeatSinks_Inherent {
        constexpr uintptr_t m_nIntervalsElapsed = 0xc98; // int32
        constexpr uintptr_t m_NextShotTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_flDissipationRate = 0xca0; // float32
        constexpr uintptr_t m_flDissipationTime = 0xca4; // GameTime_t
        constexpr uintptr_t m_flHeatTime = 0xca8; // GameTime_t
        constexpr uintptr_t m_flOverheatSoundTime = 0xcac; // GameTime_t
        constexpr uintptr_t m_bOverheating = 0xcb0; // bool
    }
    namespace CCitadel_Ability_Viper_Ability04VData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PetrifyModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_VoidSphereBuffVData {
        constexpr uintptr_t m_RapidFireParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_CQC_ProcVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Tier3_DamagePulseVData {
        constexpr uintptr_t m_TargetParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strPulseTickSound = 0x6e8; // CSoundEventName
        constexpr uintptr_t m_iMaxTargets = 0x6f8; // int32
        constexpr uintptr_t m_flRadius = 0x6fc; // float32
        constexpr uintptr_t m_flDamagePerPulse = 0x700; // float32
        constexpr uintptr_t m_flTickRate = 0x704; // float32
    }
    namespace CRenderComponent {
        constexpr uintptr_t __m_pChainEntity = 0x10; // CNetworkVarChainer
        constexpr uintptr_t m_bIsRenderingWithViewModels = 0x50; // bool
        constexpr uintptr_t m_nSplitscreenFlags = 0x54; // uint32
        constexpr uintptr_t m_bEnableRendering = 0x60; // bool
        constexpr uintptr_t m_bInterpolationReadyToDraw = 0xb0; // bool
    }
    namespace CEnvSoundscapeProxy {
        constexpr uintptr_t m_MainSoundscapeName = 0x600; // CUtlSymbolLarge
    }
    namespace C_SoundEventOBBEntity {
        constexpr uintptr_t m_vMins = 0x620; // Vector
        constexpr uintptr_t m_vMaxs = 0x62c; // Vector
    }
    namespace CCitadel_Ability_Tokamak_HotShot {
        constexpr uintptr_t m_flDPS = 0xe10; // float32
        constexpr uintptr_t m_flNextDamageTick = 0xe14; // GameTime_t
        constexpr uintptr_t m_vStart = 0xe18; // Vector
        constexpr uintptr_t m_vEnd = 0xe24; // Vector
        constexpr uintptr_t m_vecEntitiesHit = 0xe30; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_angBeamAngles = 0xe48; // QAngle
        constexpr uintptr_t m_bNeedsBeamReset = 0xe60; // bool
    }
    namespace CModifier_WreckerScrapBlastDebuffVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_IceDome {
        constexpr uintptr_t m_hBlocker = 0xc0; // CHandle< C_Citadel_Ice_Dome_Blocker >
        constexpr uintptr_t m_hFriendlyAura = 0xc4; // CHandle< CPointModifierThinker >
        constexpr uintptr_t m_hEnemyAura = 0xc8; // CHandle< CPointModifierThinker >
        constexpr uintptr_t m_nParticleIndex = 0xcc; // ParticleIndex_t
        constexpr uintptr_t m_flStartTime = 0xd0; // GameTime_t
        constexpr uintptr_t m_vOrigin = 0x1b8; // Vector
    }
    namespace CItemAOESilenceModifierVData {
        constexpr uintptr_t m_strSilenceTargetSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_SilenceModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_UtilityUpgrade_AOESmokeBombVData {
        constexpr uintptr_t m_CastCompleteParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strBuffGainedSound = 0x1678; // CSoundEventName
        constexpr uintptr_t m_InvisModifier = 0x1688; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CItem_WarpStone_VData {
        constexpr uintptr_t m_CasterModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CasterDebuffModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strExplodeSound = 0x15b8; // CSoundEventName
        constexpr uintptr_t m_CastDelayParticle = 0x15c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportTrailParticle = 0x16a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flGroundProbeSpeed = 0x1788; // float32
        constexpr uintptr_t m_flGroundStepDown = 0x178c; // float32
        constexpr uintptr_t m_flGroundStepUp = 0x1790; // float32
        constexpr uintptr_t m_iMaxGroundIterations = 0x1794; // int32
        constexpr uintptr_t m_flVelocityScale = 0x1798; // float32
    }
    namespace LockonTarget_t {
        constexpr uintptr_t m_flGainRate = 0x30; // float32
        constexpr uintptr_t m_flDrainRate = 0x34; // float32
        constexpr uintptr_t m_flMaxValue = 0x38; // float32
        constexpr uintptr_t m_nPrevFullStacks = 0x3c; // int32
        constexpr uintptr_t m_flLatchedValue = 0x40; // float32
        constexpr uintptr_t m_flLatchedTime = 0x44; // GameTime_t
        constexpr uintptr_t m_eLockonState = 0x48; // ELockonState
        constexpr uintptr_t m_hTarget = 0x4c; // CHandle< C_BaseEntity >
    }
    namespace CLightComponent {
        constexpr uintptr_t __m_pChainEntity = 0x38; // CNetworkVarChainer
        constexpr uintptr_t m_Color = 0x75; // Color
        constexpr uintptr_t m_SecondaryColor = 0x79; // Color
        constexpr uintptr_t m_flBrightness = 0x80; // float32
        constexpr uintptr_t m_flBrightnessScale = 0x84; // float32
        constexpr uintptr_t m_flBrightnessMult = 0x88; // float32
        constexpr uintptr_t m_flRange = 0x8c; // float32
        constexpr uintptr_t m_flFalloff = 0x90; // float32
        constexpr uintptr_t m_flAttenuation0 = 0x94; // float32
        constexpr uintptr_t m_flAttenuation1 = 0x98; // float32
        constexpr uintptr_t m_flAttenuation2 = 0x9c; // float32
        constexpr uintptr_t m_flTheta = 0xa0; // float32
        constexpr uintptr_t m_flPhi = 0xa4; // float32
        constexpr uintptr_t m_hLightCookie = 0xa8; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_nCascades = 0xb0; // int32
        constexpr uintptr_t m_nCastShadows = 0xb4; // int32
        constexpr uintptr_t m_nShadowWidth = 0xb8; // int32
        constexpr uintptr_t m_nShadowHeight = 0xbc; // int32
        constexpr uintptr_t m_bRenderDiffuse = 0xc0; // bool
        constexpr uintptr_t m_nRenderSpecular = 0xc4; // int32
        constexpr uintptr_t m_bRenderTransmissive = 0xc8; // bool
        constexpr uintptr_t m_flOrthoLightWidth = 0xcc; // float32
        constexpr uintptr_t m_flOrthoLightHeight = 0xd0; // float32
        constexpr uintptr_t m_nStyle = 0xd4; // int32
        constexpr uintptr_t m_Pattern = 0xd8; // CUtlString
        constexpr uintptr_t m_nCascadeRenderStaticObjects = 0xe0; // int32
        constexpr uintptr_t m_flShadowCascadeCrossFade = 0xe4; // float32
        constexpr uintptr_t m_flShadowCascadeDistanceFade = 0xe8; // float32
        constexpr uintptr_t m_flShadowCascadeDistance0 = 0xec; // float32
        constexpr uintptr_t m_flShadowCascadeDistance1 = 0xf0; // float32
        constexpr uintptr_t m_flShadowCascadeDistance2 = 0xf4; // float32
        constexpr uintptr_t m_flShadowCascadeDistance3 = 0xf8; // float32
        constexpr uintptr_t m_nShadowCascadeResolution0 = 0xfc; // int32
        constexpr uintptr_t m_nShadowCascadeResolution1 = 0x100; // int32
        constexpr uintptr_t m_nShadowCascadeResolution2 = 0x104; // int32
        constexpr uintptr_t m_nShadowCascadeResolution3 = 0x108; // int32
        constexpr uintptr_t m_bUsesBakedShadowing = 0x10c; // bool
        constexpr uintptr_t m_nShadowPriority = 0x110; // int32
        constexpr uintptr_t m_nBakedShadowIndex = 0x114; // int32
        constexpr uintptr_t m_bRenderToCubemaps = 0x118; // bool
        constexpr uintptr_t m_nDirectLight = 0x11c; // int32
        constexpr uintptr_t m_nIndirectLight = 0x120; // int32
        constexpr uintptr_t m_flFadeMinDist = 0x124; // float32
        constexpr uintptr_t m_flFadeMaxDist = 0x128; // float32
        constexpr uintptr_t m_flShadowFadeMinDist = 0x12c; // float32
        constexpr uintptr_t m_flShadowFadeMaxDist = 0x130; // float32
        constexpr uintptr_t m_bEnabled = 0x134; // bool
        constexpr uintptr_t m_bFlicker = 0x135; // bool
        constexpr uintptr_t m_bPrecomputedFieldsValid = 0x136; // bool
        constexpr uintptr_t m_vPrecomputedBoundsMins = 0x138; // Vector
        constexpr uintptr_t m_vPrecomputedBoundsMaxs = 0x144; // Vector
        constexpr uintptr_t m_vPrecomputedOBBOrigin = 0x150; // Vector
        constexpr uintptr_t m_vPrecomputedOBBAngles = 0x15c; // QAngle
        constexpr uintptr_t m_vPrecomputedOBBExtent = 0x168; // Vector
        constexpr uintptr_t m_flPrecomputedMaxRange = 0x174; // float32
        constexpr uintptr_t m_nFogLightingMode = 0x178; // int32
        constexpr uintptr_t m_flFogContributionStength = 0x17c; // float32
        constexpr uintptr_t m_flNearClipPlane = 0x180; // float32
        constexpr uintptr_t m_SkyColor = 0x184; // Color
        constexpr uintptr_t m_flSkyIntensity = 0x188; // float32
        constexpr uintptr_t m_SkyAmbientBounce = 0x18c; // Color
        constexpr uintptr_t m_bUseSecondaryColor = 0x190; // bool
        constexpr uintptr_t m_bMixedShadows = 0x191; // bool
        constexpr uintptr_t m_flLightStyleStartTime = 0x194; // GameTime_t
        constexpr uintptr_t m_flCapsuleLength = 0x198; // float32
        constexpr uintptr_t m_flMinRoughness = 0x19c; // float32
    }
    namespace CCitadel_Modifier_ProjectMind {
        constexpr uintptr_t m_particleStart = 0xc0; // ParticleIndex_t
        constexpr uintptr_t m_particleEnd = 0xc4; // ParticleIndex_t
        constexpr uintptr_t m_particleTrail = 0xc8; // ParticleIndex_t
        constexpr uintptr_t m_vecEndLocation = 0xcc; // Vector
        constexpr uintptr_t m_vecStartPosition = 0xd8; // Vector
        constexpr uintptr_t m_flStartDelay = 0xe4; // float32
        constexpr uintptr_t m_vecApplyOffset = 0xe8; // Vector
    }
    namespace CCitadel_Modifier_MetalSkinVData {
        constexpr uintptr_t m_BuffStartParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffEndParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strHitProcSound = 0x7c8; // CSoundEventName
    }
    namespace C_EconItemView {
        constexpr uintptr_t m_iItemDefinitionIndex = 0x8; // item_definition_index_t
        constexpr uintptr_t m_iEntityQuality = 0xc; // int32
        constexpr uintptr_t m_iEntityLevel = 0x10; // uint32
        constexpr uintptr_t m_iItemID = 0x18; // itemid_t
        constexpr uintptr_t m_iAccountID = 0x20; // uint32
        constexpr uintptr_t m_iInventoryPosition = 0x24; // uint32
        constexpr uintptr_t m_bInitialized = 0x30; // bool
        constexpr uintptr_t m_nOverrideStyle = 0x31; // style_index_t
        constexpr uintptr_t m_bIsStoreItem = 0x32; // bool
        constexpr uintptr_t m_bIsTradeItem = 0x33; // bool
        constexpr uintptr_t m_bHasComputedAttachedParticles = 0x34; // bool
        constexpr uintptr_t m_bHasAttachedParticles = 0x35; // bool
        constexpr uintptr_t m_iEntityQuantity = 0x38; // int32
        constexpr uintptr_t m_unClientFlags = 0x3c; // uint8
        constexpr uintptr_t m_unOverrideOrigin = 0x40; // eEconItemOrigin
        constexpr uintptr_t m_AttributeList = 0x58; // CAttributeList
    }
    namespace C_HandleTest {
        constexpr uintptr_t m_Handle = 0x560; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bSendHandle = 0x564; // bool
    }
    namespace CAbilityTokamakHotShotVData {
        constexpr uintptr_t m_LaserModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strLaserStartSound = 0x1560; // CSoundEventName
        constexpr uintptr_t m_strLaserEndSound = 0x1570; // CSoundEventName
        constexpr uintptr_t m_strLaserLoopSound = 0x1580; // CSoundEventName
        constexpr uintptr_t m_strLaserHitSound = 0x1590; // CSoundEventName
        constexpr uintptr_t m_ChargeParticle = 0x15a0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BeamParticle = 0x1680; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x1760; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_GroundParticle = 0x1840; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_LifeDrain {
        constexpr uintptr_t m_tDrainLifeStopTime = 0xc98; // GameTime_t
    }
    namespace CCitadel_Ability_StormCloud {
        constexpr uintptr_t m_bApplyingVerticalAirDrag = 0xc98; // bool
    }
    namespace CCitadel_Modifier_SuperAcolytesGlove_VData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_SwingParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x728; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FistReadyEffect = 0x808; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_EnvWindClientside {
        constexpr uintptr_t m_EnvWindShared = 0x560; // C_EnvWindShared
    }
    namespace CCitadel_Ability_Chrono_PulseGrenade {
        constexpr uintptr_t m_vLaunchPosition = 0xc98; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xca4; // QAngle
    }
    namespace CCitadel_Modifier_Hornet_Sting {
        constexpr uintptr_t m_flLastTickTime = 0xc0; // GameTime_t
    }
    namespace CModifierNikumanVData {
        constexpr uintptr_t m_SelfParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AOEFriendParticle = 0x728; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAmbientLoopingLocalPlayerSound = 0x808; // CSoundEventName
    }
    namespace C_PointClientUIWorldTextPanel {
        constexpr uintptr_t m_messageText = 0xaa0; // char[512]
    }
    namespace CCitadel_Ability_Burrow {
        constexpr uintptr_t m_bInGround = 0xd78; // bool
        constexpr uintptr_t m_SpinEndTime = 0xd7c; // GameTime_t
        constexpr uintptr_t m_nBurrowEffect = 0xd80; // ParticleIndex_t
    }
    namespace CCitadel_Item_Disarm_VData {
        constexpr uintptr_t m_BuffModifier = 0x1698; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x16a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_WeaponUpgrade_WeaponEater {
        constexpr uintptr_t m_nWeaponPower = 0xd90; // int32
    }
    namespace CCitadel_Modifier_ComboBreakerHeal {
        constexpr uintptr_t m_flAmountPerSecond = 0xc0; // float32
    }
    namespace AbilityResource_t {
        constexpr uintptr_t m_flCurrentValue = 0x8; // float32
        constexpr uintptr_t m_flPrevRegenRate = 0xc; // float32
        constexpr uintptr_t m_flMaxValue = 0x10; // float32
        constexpr uintptr_t m_flLatchTime = 0x14; // GameTime_t
        constexpr uintptr_t m_flLatchValue = 0x18; // float32
    }
    namespace CCitadel_Modifier_Cadence_AnthemAOEVData {
        constexpr uintptr_t m_AuraParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Hornet_Snipe {
        constexpr uintptr_t m_flScopeStartTime = 0xedc; // GameTime_t
    }
    namespace CCitadel_Modifier_FlameDashBurnVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Backdoor_ProtectionVData {
        constexpr uintptr_t m_flActivationTime = 0x608; // float32
        constexpr uintptr_t m_flBackdoorProtectionDamageMitigationFromPlayers = 0x60c; // float32
        constexpr uintptr_t m_flHealthPerSecondRegen = 0x610; // float32
        constexpr uintptr_t m_flOutOfCombatHealthRegen = 0x614; // float32
        constexpr uintptr_t m_flOutOfCombatRegenDelay = 0x618; // float32
        constexpr uintptr_t m_flEffectsLingerTime = 0x61c; // float32
        constexpr uintptr_t m_ShieldImpactParticle = 0x620; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShieldActiveParticle = 0x700; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strActiveEffectConfigName = 0x7e0; // CUtlString
        constexpr uintptr_t flShieldImpactDirectionOffset = 0x7e8; // float32
    }
    namespace CPlayer_MovementServices {
        constexpr uintptr_t m_nImpulse = 0x40; // int32
        constexpr uintptr_t m_nButtons = 0x48; // CInButtonState
        constexpr uintptr_t m_nQueuedButtonDownMask = 0x68; // uint64
        constexpr uintptr_t m_nQueuedButtonChangeMask = 0x70; // uint64
        constexpr uintptr_t m_nButtonDoublePressed = 0x78; // uint64
        constexpr uintptr_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
        constexpr uintptr_t m_nLastCommandNumberProcessed = 0x180; // uint32
        constexpr uintptr_t m_nToggleButtonDownMask = 0x188; // uint64
        constexpr uintptr_t m_flMaxspeed = 0x198; // float32
        constexpr uintptr_t m_arrForceSubtickMoveWhen = 0x19c; // float32[4]
        constexpr uintptr_t m_flForwardMove = 0x1ac; // float32
        constexpr uintptr_t m_flLeftMove = 0x1b0; // float32
        constexpr uintptr_t m_flUpMove = 0x1b4; // float32
        constexpr uintptr_t m_vecLastMovementImpulses = 0x1b8; // Vector
        constexpr uintptr_t m_vecOldViewAngles = 0x1c4; // QAngle
    }
    namespace CModifierKnockdownVData {
        constexpr uintptr_t m_flSatVolumeRadius = 0x6e8; // float32
        constexpr uintptr_t m_flSatVolumeFadeOut = 0x6ec; // float32
        constexpr uintptr_t m_flGravityScale = 0x6f0; // float32
        constexpr uintptr_t m_flGetUpSeqDuration = 0x6f4; // float32
        constexpr uintptr_t m_cameraSequenceGetUp = 0x6f8; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Ability_PrimaryWeapon_Slork {
        constexpr uintptr_t m_angAimAngles = 0xf08; // QAngle
        constexpr uintptr_t m_bNeedAimAngleReset = 0xf38; // bool
    }
    namespace CModifier_Mirage_FireBeetles_Debuff_VData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_IncendiaryThinkerVData {
        constexpr uintptr_t m_GroundParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CEnvSoundscape {
        constexpr uintptr_t m_OnPlay = 0x560; // CEntityIOOutput
        constexpr uintptr_t m_flRadius = 0x588; // float32
        constexpr uintptr_t m_soundEventName = 0x590; // CUtlSymbolLarge
        constexpr uintptr_t m_bOverrideWithEvent = 0x598; // bool
        constexpr uintptr_t m_soundscapeIndex = 0x59c; // int32
        constexpr uintptr_t m_soundscapeEntityListId = 0x5a0; // int32
        constexpr uintptr_t m_positionNames = 0x5a8; // CUtlSymbolLarge[8]
        constexpr uintptr_t m_hProxySoundscape = 0x5e8; // CHandle< CEnvSoundscape >
        constexpr uintptr_t m_bDisabled = 0x5ec; // bool
        constexpr uintptr_t m_soundscapeName = 0x5f0; // CUtlSymbolLarge
        constexpr uintptr_t m_soundEventHash = 0x5f8; // uint32
    }
    namespace CBasePlayerVData {
        constexpr uintptr_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_vecIntrinsicModifiers = 0x108; // CUtlVector< CEmbeddedSubclass< CCitadelModifier > >
        constexpr uintptr_t m_flHeadDamageMultiplier = 0x120; // CSkillFloat
        constexpr uintptr_t m_flChestDamageMultiplier = 0x130; // CSkillFloat
        constexpr uintptr_t m_flStomachDamageMultiplier = 0x140; // CSkillFloat
        constexpr uintptr_t m_flArmDamageMultiplier = 0x150; // CSkillFloat
        constexpr uintptr_t m_flLegDamageMultiplier = 0x160; // CSkillFloat
        constexpr uintptr_t m_flHoldBreathTime = 0x170; // float32
        constexpr uintptr_t m_flDrowningDamageInterval = 0x174; // float32
        constexpr uintptr_t m_nDrowningDamageInitial = 0x178; // int32
        constexpr uintptr_t m_nDrowningDamageMax = 0x17c; // int32
        constexpr uintptr_t m_nWaterSpeed = 0x180; // int32
        constexpr uintptr_t m_flUseRange = 0x184; // float32
        constexpr uintptr_t m_flUseAngleTolerance = 0x188; // float32
        constexpr uintptr_t m_flCrouchTime = 0x18c; // float32
    }
    namespace CCitadel_Ability_Shiv_KillingBlow {
        constexpr uintptr_t m_bActive = 0xe58; // bool
        constexpr uintptr_t m_hCurrentTarget = 0xe5c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vStartPosition = 0xe60; // Vector
        constexpr uintptr_t m_vDeparturePosition = 0xe6c; // Vector
        constexpr uintptr_t m_flDepartureTime = 0xe78; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flArrivalTime = 0xe90; // CCitadelAutoScaledTime
        constexpr uintptr_t m_vLastKnownSafePos = 0xea8; // Vector
        constexpr uintptr_t m_flDrainSuppressEndTime = 0xeb8; // GameTime_t
    }
    namespace CAbilityWreckerSalvageVData {
        constexpr uintptr_t m_SalvageEnemyModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_StunEnemyModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Chrono_TimeWall_EffectVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffParticle = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDamageSound = 0x7d8; // CSoundEventName
    }
    namespace CCitadel_Modifier_TechBleed_ProcVData {
        constexpr uintptr_t m_BleedModifier = 0x638; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_SlowModifier = 0x648; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Ability_RocketBarrage {
        constexpr uintptr_t m_flCurrentTimeScale = 0xe90; // float32
        constexpr uintptr_t m_vecAimPos = 0xe94; // Vector
        constexpr uintptr_t m_vecAimVel = 0xea0; // Vector
        constexpr uintptr_t m_flLastUpdateTime = 0xeac; // GameTime_t
    }
    namespace CAbilityBloodShardsVData {
        constexpr uintptr_t m_DebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImpactParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifier_Upgrade_KineticSash_VData {
        constexpr uintptr_t m_KineticSashTriggeredModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ClimbRopeSpeedVData {
        constexpr uintptr_t m_flRampUpTime = 0x608; // float32
        constexpr uintptr_t m_flPercentageMultiplierStart = 0x60c; // float32
        constexpr uintptr_t m_flPercentageMultiplierEnd = 0x610; // float32
    }
    namespace CCitadelAbilityComponent {
        constexpr uintptr_t m_vecAbilities = 0x70; // C_NetworkUtlVectorBase< CHandle< C_CitadelBaseAbility > >
        constexpr uintptr_t m_vecUniversalItems = 0x88; // C_NetworkUtlVectorBase< CUtlStringToken >
        constexpr uintptr_t m_arPendingAsyncAbilityReservationSlots = 0xa0; // C_NetworkUtlVectorBase< int32 >
        constexpr uintptr_t m_arPendingAsyncAbilityReservationAbilityIDs = 0xb8; // C_NetworkUtlVectorBase< int32 >
        constexpr uintptr_t m_hSelectedAbility = 0xd0; // CHandle< C_CitadelBaseAbility >
        constexpr uintptr_t m_hPreviouslySelectedAbility = 0xd4; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bPreviousAbilityQueued = 0xd8; // bool
        constexpr uintptr_t m_flTimeScale = 0xdc; // float32
        constexpr uintptr_t m_flParticleTimeScale = 0xe0; // float32
        constexpr uintptr_t m_bInInterruptState = 0xe4; // bool
        constexpr uintptr_t m_ResourceStamina = 0xe8; // AbilityResource_t
        constexpr uintptr_t m_ResourceAbility = 0x108; // AbilityResource_t
        constexpr uintptr_t m_nExecuteAbilityMask = 0x170; // uint32
        constexpr uintptr_t m_bSelectedEffectsStarted = 0x178; // bool
    }
    namespace C_EnvWindShared::WindVariationEvent_t {
        constexpr uintptr_t m_flWindAngleVariation = 0x0; // float32
        constexpr uintptr_t m_flWindSpeedVariation = 0x4; // float32
    }
    namespace CCitadel_WeaponUpgrade_InstantReload {
        constexpr uintptr_t m_bIsManualReloading = 0xcb0; // bool
    }
    namespace CAbilityTokamakBreachVData {
        constexpr uintptr_t m_AllySmokeAOEModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EnemySmokeAOEModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PurgeParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityTokamakHeatSinksVData {
        constexpr uintptr_t m_HeatDotModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ThrownShiv_Damage_Debuff {
        constexpr uintptr_t m_nNumTicksRemaining = 0xc0; // int32
    }
    namespace CCitadel_Ability_FlameDashVData {
        constexpr uintptr_t m_FlameDashModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DashBurstSound = 0x1560; // CSoundEventName
        constexpr uintptr_t m_ChargeHitSound = 0x1570; // CSoundEventName
        constexpr uintptr_t m_cameraSpeedBoost = 0x1580; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Ability_PrimaryWeaponVData {
        constexpr uintptr_t m_DOFWhileZoomed = 0x1550; // DOFDesc_t
        constexpr uintptr_t m_bDOFFarSettingsAreOffsetByGunRange = 0x1560; // bool
        constexpr uintptr_t m_sDisarmedSound = 0x1568; // CSoundEventName
        constexpr uintptr_t m_flMinDisarmedSoundInterval = 0x1578; // float32
        constexpr uintptr_t m_sObstructedShotSound = 0x1580; // CSoundEventName
        constexpr uintptr_t m_flActionReloadTimingStart = 0x1590; // float32
        constexpr uintptr_t m_flActionReloadTimingDuration = 0x1594; // float32
    }
    namespace CCitadel_Modifier_Apex_Watcher {
        constexpr uintptr_t m_bShouldEnableBuff = 0x138; // bool
    }
    namespace CCitadel_Modifier_ColdFrontAOE_VData {
        constexpr uintptr_t m_TargetModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_ReloadSpeedVData {
        constexpr uintptr_t m_flReloadSpeedPercent = 0x608; // float32
        constexpr uintptr_t m_bDestroyAfterReload = 0x60c; // bool
    }
    namespace C_EnvParticleGlow {
        constexpr uintptr_t m_flAlphaScale = 0xdf0; // float32
        constexpr uintptr_t m_flRadiusScale = 0xdf4; // float32
        constexpr uintptr_t m_flSelfIllumScale = 0xdf8; // float32
        constexpr uintptr_t m_ColorTint = 0xdfc; // Color
        constexpr uintptr_t m_hTextureOverride = 0xe00; // CStrongHandle< InfoForResourceTypeCTextureBase >
    }
    namespace C_SoundEventEntity {
        constexpr uintptr_t m_bStartOnSpawn = 0x560; // bool
        constexpr uintptr_t m_bToLocalPlayer = 0x561; // bool
        constexpr uintptr_t m_bStopOnNew = 0x562; // bool
        constexpr uintptr_t m_bSaveRestore = 0x563; // bool
        constexpr uintptr_t m_bSavedIsPlaying = 0x564; // bool
        constexpr uintptr_t m_flSavedElapsedTime = 0x568; // float32
        constexpr uintptr_t m_iszSourceEntityName = 0x570; // CUtlSymbolLarge
        constexpr uintptr_t m_iszAttachmentName = 0x578; // CUtlSymbolLarge
        constexpr uintptr_t m_onGUIDChanged = 0x580; // CEntityOutputTemplate< uint64 >
        constexpr uintptr_t m_onSoundFinished = 0x5a8; // CEntityIOOutput
        constexpr uintptr_t m_flClientCullRadius = 0x5d0; // float32
        constexpr uintptr_t m_iszSoundName = 0x600; // CUtlSymbolLarge
        constexpr uintptr_t m_hSource = 0x610; // CEntityHandle
        constexpr uintptr_t m_nEntityIndexSelection = 0x614; // int32
        constexpr uintptr_t m_bClientSideOnly = 0x0; // bitfield:1
    }
    namespace CCitadel_Ability_SettingSun {
        constexpr uintptr_t m_TargetPreviews = 0xc98; // CUtlVector< ParticleIndex_t >
        constexpr uintptr_t m_bWasSelected = 0xd60; // bool
    }
    namespace CCitadel_ArmorUpgrade_RegenerativeArmorVData {
        constexpr uintptr_t m_RegenModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_QuickSilver_Watcher {
        constexpr uintptr_t m_bProcNextHit = 0x210; // bool
    }
    namespace CCitadel_Modifier_BaseEventProc {
        constexpr uintptr_t m_vecProcdUnitsThisShot = 0xc0; // CUtlVector< C_BaseEntity* >
        constexpr uintptr_t m_vecTrackedUnitsThisFrame = 0xd8; // CUtlVector< C_BaseEntity* >
        constexpr uintptr_t m_nLastShotId = 0xf0; // ShotID_t
    }
    namespace CAI_CitadelNPCVData {
        constexpr uintptr_t m_sAG2VariationName = 0x240; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphVariation > >
        constexpr uintptr_t m_mapBoundAbilities = 0x320; // CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > >
        constexpr uintptr_t m_flSightRangePlayers = 0x348; // float32
        constexpr uintptr_t m_flSightRangeNPCs = 0x34c; // float32
        constexpr uintptr_t m_MeleeAnimName = 0x350; // CGlobalSymbol
        constexpr uintptr_t m_flMeleeAttemptRange = 0x358; // float32
        constexpr uintptr_t m_flMeleeHitRange = 0x35c; // float32
        constexpr uintptr_t m_MeleeAttackPoints = 0x360; // CUtlVector< float32 >
        constexpr uintptr_t m_flMaxHealthBarDrawDistance = 0x378; // float32
        constexpr uintptr_t m_flWalkSpeed = 0x37c; // float32
        constexpr uintptr_t m_flRunSpeed = 0x380; // float32
        constexpr uintptr_t m_flTurnRate = 0x384; // float32
        constexpr uintptr_t m_flAcceleration = 0x388; // float32
        constexpr uintptr_t m_flStepHeight = 0x38c; // float32
        constexpr uintptr_t m_navHull = 0x390; // int8
        constexpr uintptr_t m_BeamStartSound = 0x398; // CSoundEventName
        constexpr uintptr_t m_BeamStopSound = 0x3a8; // CSoundEventName
        constexpr uintptr_t m_BeamPointStartLoopSound = 0x3b8; // CSoundEventName
        constexpr uintptr_t m_BeamPointEndLoopSound = 0x3c8; // CSoundEventName
        constexpr uintptr_t m_BeamPointClosestLoopSound = 0x3d8; // CSoundEventName
        constexpr uintptr_t m_strAmbientLoopSound = 0x3e8; // CSoundEventName
        constexpr uintptr_t m_DeathSound = 0x3f8; // CSoundEventName
        constexpr uintptr_t m_strLastHitSound = 0x408; // CSoundEventName
        constexpr uintptr_t m_bPlayLastHitSound = 0x418; // bool
        constexpr uintptr_t m_MeleeHitSound = 0x420; // CSoundEventName
        constexpr uintptr_t m_MeleeHitPlayerSound = 0x430; // CSoundEventName
        constexpr uintptr_t m_sDefaultMaterialGroupName = 0x440; // CUtlString
        constexpr uintptr_t m_sEnemyMaterialGroupName = 0x448; // CUtlString
        constexpr uintptr_t m_sTeam1MaterialGroupName = 0x450; // CUtlString
        constexpr uintptr_t m_sTeam2MaterialGroupName = 0x458; // CUtlString
        constexpr uintptr_t m_MeleeSwingParticle = 0x460; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MeleeActivateParticle = 0x540; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flModelScale = 0x620; // float32
        constexpr uintptr_t m_DeathParticle = 0x628; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealthBarParticle = 0x708; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sHealthBarAttachment = 0x7e8; // CUtlString
        constexpr uintptr_t m_HealthBarColorFriend = 0x7f0; // Color
        constexpr uintptr_t m_HealthBarColorEnemy = 0x7f4; // Color
        constexpr uintptr_t m_HealthBarColorTeam1 = 0x7f8; // Color
        constexpr uintptr_t m_HealthBarColorTeam2 = 0x7fc; // Color
        constexpr uintptr_t m_HealthBarColorTeamNeutral = 0x800; // Color
        constexpr uintptr_t m_flHealthBarOffset = 0x804; // float32
        constexpr uintptr_t m_flBeamWeaponWidth = 0x808; // float32
        constexpr uintptr_t m_flBeamTurnRate = 0x80c; // float32
        constexpr uintptr_t m_BeamWeaponParticle = 0x810; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flPhysicsImpulseMultiplier = 0x8f0; // float32
        constexpr uintptr_t m_WeaponInfo = 0x8f8; // CCitadelWeaponInfo
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_AOE_VData {
        constexpr uintptr_t m_AuraParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Burrow {
        constexpr uintptr_t m_flLastDamageTime = 0xc0; // GameTime_t
    }
    namespace CModifierLashGrappleTargetVData {
        constexpr uintptr_t m_LockingOnParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LockedOnParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_HornetMark {
        constexpr uintptr_t m_nFXIndex = 0xc98; // ParticleIndex_t
    }
    namespace CCitadel_UtilityUpgrade_HealthNova_VData {
        constexpr uintptr_t m_HealingModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_DebuffImmunityVData {
        constexpr uintptr_t m_ShieldParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PlayerShieldParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CNPC_ShieldedSentryVData {
        constexpr uintptr_t m_flZShootPostionOffset = 0x108; // float32
        constexpr uintptr_t m_LaserSightParticle = 0x110; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_KillExplosionParticle = 0x1f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DeployProgressModifier = 0x2d0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_NearDeathModifier = 0x2e0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_IntrinsicModifier = 0x2f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_sSpawnSound = 0x300; // CSoundEventName
        constexpr uintptr_t m_sKillExplosionSound = 0x310; // CSoundEventName
        constexpr uintptr_t m_sTargetAcquiredLocalSound = 0x320; // CSoundEventName
        constexpr uintptr_t m_sTargetAcquiredSound = 0x330; // CSoundEventName
        constexpr uintptr_t m_flIdleTurnSpeed = 0x340; // float32
        constexpr uintptr_t m_flIdleTurnAngles = 0x344; // float32
        constexpr uintptr_t m_flTrooperTakeDamageMult = 0x348; // float32
        constexpr uintptr_t m_flNeutralTakeDamageMulti = 0x34c; // float32
        constexpr uintptr_t m_flNotifyEventTime = 0x350; // float32
        constexpr uintptr_t m_flNearDeathDuration = 0x354; // float32
        constexpr uintptr_t m_flMinimapRevealTime = 0x358; // float32
    }
    namespace CCitadel_Modifier_SleepDaggerAsleepVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PostSleepModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityImmobilizeTrapVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PreviewRingParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TrapHighlightParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ArmedParticle = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strTripSound = 0x18d0; // CSoundEventName
        constexpr uintptr_t m_strExplodeSound = 0x18e0; // CSoundEventName
        constexpr uintptr_t m_strExpiredSound = 0x18f0; // CSoundEventName
        constexpr uintptr_t m_strImmobilizeTargetSound = 0x1900; // CSoundEventName
        constexpr uintptr_t m_strArmingSound = 0x1910; // CSoundEventName
        constexpr uintptr_t m_TrapModifier = 0x1920; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1930; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x1940; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_FireBomb {
        constexpr uintptr_t m_flDetonateTime = 0xd10; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flStartTime = 0xd28; // GameTime_t
    }
    namespace CCitadel_Modifier_MagicShock_ProcVData {
        constexpr uintptr_t m_ProcParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_hDamageTrackModifier = 0x718; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace C_Sun {
        constexpr uintptr_t m_fxSSSunFlareEffectIndex = 0x840; // ParticleIndex_t
        constexpr uintptr_t m_fxSunFlareEffectIndex = 0x844; // ParticleIndex_t
        constexpr uintptr_t m_fdistNormalize = 0x848; // float32
        constexpr uintptr_t m_vSunPos = 0x84c; // Vector
        constexpr uintptr_t m_vDirection = 0x858; // Vector
        constexpr uintptr_t m_iszEffectName = 0x868; // CUtlSymbolLarge
        constexpr uintptr_t m_iszSSEffectName = 0x870; // CUtlSymbolLarge
        constexpr uintptr_t m_clrOverlay = 0x878; // Color
        constexpr uintptr_t m_bOn = 0x87c; // bool
        constexpr uintptr_t m_bmaxColor = 0x87d; // bool
        constexpr uintptr_t m_flSize = 0x880; // float32
        constexpr uintptr_t m_flHazeScale = 0x884; // float32
        constexpr uintptr_t m_flRotation = 0x888; // float32
        constexpr uintptr_t m_flHDRColorScale = 0x88c; // float32
        constexpr uintptr_t m_flAlphaHaze = 0x890; // float32
        constexpr uintptr_t m_flAlphaScale = 0x894; // float32
        constexpr uintptr_t m_flAlphaHdr = 0x898; // float32
        constexpr uintptr_t m_flFarZScale = 0x89c; // float32
    }
    namespace CCitadel_Ability_Shiv_KillingBlowVData {
        constexpr uintptr_t m_LeapModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ActiveBuff = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_KillableModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AttackParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlashParticle = 0x1740; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_KillingBlowCastParticle = 0x1820; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChargeUpSound = 0x1900; // CSoundEventName
        constexpr uintptr_t m_OnKillSound = 0x1910; // CSoundEventName
        constexpr uintptr_t m_flPreArrivalAttackStartTime = 0x1920; // float32
        constexpr uintptr_t m_flKillableGlowRange = 0x1924; // float32
        constexpr uintptr_t m_flGlowMinTime = 0x1928; // float32
    }
    namespace CCitadel_Ability_ShivDash {
        constexpr uintptr_t m_vStartPosition = 0xc98; // Vector
        constexpr uintptr_t m_vDashDirection = 0xca4; // Vector
        constexpr uintptr_t m_bIsDashing = 0xcb0; // bool
        constexpr uintptr_t m_bStartedInAir = 0xcb1; // bool
        constexpr uintptr_t m_vecHitEnemies = 0xcb8; // CUtlVector< CEntityIndex >
        constexpr uintptr_t m_vecLastPosition = 0xcd0; // Vector
        constexpr uintptr_t m_nReductionsLeft = 0xcdc; // int32
        constexpr uintptr_t m_flStuckTime = 0xf10; // GameTime_t
    }
    namespace CCitadel_Modifier_Rutger_Pulse_Target {
        constexpr uintptr_t m_vAuraCenter = 0x1a0; // Vector
    }
    namespace CAbilityPsychicLiftVData {
        constexpr uintptr_t m_LiftModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetCastSound = 0x1640; // CSoundEventName
    }
    namespace CCitadel_Modifier_ColossusActive_VData {
        constexpr uintptr_t m_AuraModifier = 0x608; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ShieldParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BonusDamagePercentVData {
        constexpr uintptr_t m_bSelfish = 0x608; // bool
    }
    namespace CHitboxComponent {
        constexpr uintptr_t m_bvDisabledHitGroups = 0x24; // uint32[1]
    }
    namespace C_ColorCorrectionVolume {
        constexpr uintptr_t m_LastEnterWeight = 0x848; // float32
        constexpr uintptr_t m_LastEnterTime = 0x84c; // float32
        constexpr uintptr_t m_LastExitWeight = 0x850; // float32
        constexpr uintptr_t m_LastExitTime = 0x854; // float32
        constexpr uintptr_t m_bEnabled = 0x858; // bool
        constexpr uintptr_t m_MaxWeight = 0x85c; // float32
        constexpr uintptr_t m_FadeDuration = 0x860; // float32
        constexpr uintptr_t m_Weight = 0x864; // float32
        constexpr uintptr_t m_lookupFilename = 0x868; // char[512]
    }
    namespace CCitadel_Ability_IceBeam {
        constexpr uintptr_t m_flNextDamageTick = 0x12b0; // GameTime_t
        constexpr uintptr_t m_vStart = 0x12b4; // Vector
        constexpr uintptr_t m_vEnd = 0x12c0; // Vector
        constexpr uintptr_t m_vecEntitiesHit = 0x1308; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_vBeamAimPos = 0x1320; // Vector
        constexpr uintptr_t m_angBeamAngles = 0x1330; // QAngle
        constexpr uintptr_t m_bNeedsBeamReset = 0x1348; // bool
    }
    namespace CCitadelModifierVData {
        constexpr uintptr_t m_bIsBuildup = 0x3e8; // bool
        constexpr uintptr_t m_bNetworkValuesForStatsPreview = 0x3e9; // bool
        constexpr uintptr_t m_vecAutoRegisterModifierValueFromAbilityPropertyName = 0x3f0; // CUtlVector< CUtlString >
        constexpr uintptr_t m_bCasterCountsAsAssister = 0x408; // bool
        constexpr uintptr_t m_flLingeringAssistWindow = 0x40c; // float32
        constexpr uintptr_t m_bDurationCanBeTimeScaled = 0x410; // bool
        constexpr uintptr_t m_bDurationReducible = 0x411; // bool
        constexpr uintptr_t m_eTimeScaleSource = 0x414; // ModifierTimeScaleSource_t
        constexpr uintptr_t m_bDurationAffectedByEffectiveness = 0x418; // bool
        constexpr uintptr_t m_vecSetAndTrackedAnimGraphParams = 0x420; // CUtlVector< CCitadelTrackedAnimGraphModifierState_t >
        constexpr uintptr_t m_vecSetAndTrackedBodyGroups = 0x438; // CUtlVector< CCitadelTrackedBodygroupModifierState_t >
        constexpr uintptr_t m_eDrawOverheadStatus = 0x450; // ModifierOverheadDrawType_t
        constexpr uintptr_t m_bReverseHudProgressBar = 0x454; // bool
        constexpr uintptr_t m_strSmallIconCssClass = 0x458; // CUtlString
        constexpr uintptr_t m_strHintText = 0x460; // CUtlString
        constexpr uintptr_t m_strHudIcon = 0x468; // CPanoramaImageName
        constexpr uintptr_t m_eHudDisplayLocation = 0x478; // HudDisplayLocation_t
        constexpr uintptr_t m_strHudMessageText = 0x480; // CUtlString
        constexpr uintptr_t m_bIsHiddenOverhead = 0x488; // bool
        constexpr uintptr_t m_vecAlwaysShowInStatModifierUI = 0x490; // CUtlVector< EModifierValue >
        constexpr uintptr_t m_OnCreateResponse = 0x4a8; // CCitadelModifierResponseRules_t
        constexpr uintptr_t m_cameraSequenceCreated = 0x4e0; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_bEndCreatedSequenceOnRemove = 0x568; // bool
        constexpr uintptr_t m_cameraSequenceRemoved = 0x570; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_sExpiredSound = 0x5f8; // CSoundEventName
    }
    namespace CModifierLockDownDebuffVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AOEParticleCaster = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AOEParticleEnemy = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AOEParticleOthers = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strFollowLoop = 0x988; // CSoundEventName
        constexpr uintptr_t m_strExplodeSound = 0x998; // CSoundEventName
        constexpr uintptr_t m_strEscapedSound = 0x9a8; // CSoundEventName
        constexpr uintptr_t m_RootModifier = 0x9b8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BulletResistModifier = 0x9c8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierAirRaidVData {
        constexpr uintptr_t m_SlowModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strWeaponShootSound = 0x648; // CSoundEventName
    }
    namespace CCitadel_Ability_Bull_HealVData {
        constexpr uintptr_t m_AuraModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_ComboBreakerVData {
        constexpr uintptr_t m_ComboBreakerModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HealModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_SettingSunThinker_VData {
        constexpr uintptr_t m_TargetParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LingerParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LayerParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x988; // CSoundEventName
        constexpr uintptr_t m_strTargetingCompletedSound = 0x998; // CSoundEventName
    }
    namespace CCitadel_Modifier_PsychicDagger_MakeDaggers_VData {
        constexpr uintptr_t m_flDesatAmount = 0x608; // float32
        constexpr uintptr_t m_DesatTint = 0x60c; // Color
        constexpr uintptr_t m_SatTint = 0x610; // Color
        constexpr uintptr_t m_Outline = 0x614; // Color
        constexpr uintptr_t m_DaggerShot = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerSpawn = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerAoE = 0x7d8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerTargetPreview = 0x8b8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerShotFail = 0x998; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerFireSound = 0xa78; // CSoundEventName
        constexpr uintptr_t m_DaggerMissSound = 0xa88; // CSoundEventName
        constexpr uintptr_t m_LastDaggerMissSound = 0xa98; // CSoundEventName
    }
    namespace CCitadel_Modifier_GhostBloodShard {
        constexpr uintptr_t m_flMinSlowAmount = 0xc0; // float32
        constexpr uintptr_t m_flMoveSpeedPenaltyPerStack = 0xc4; // float32
        constexpr uintptr_t m_flSlowDuration = 0xc8; // float32
    }
    namespace CCitadel_Modifier_LifestrikeGauntlets_VData {
        constexpr uintptr_t m_SwingParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Objective_RegenVData {
        constexpr uintptr_t m_flOutOfCombatHealthRegen = 0x608; // float32
        constexpr uintptr_t m_flOutOfCombatRegenDelay = 0x60c; // float32
    }
    namespace CCitadel_Item_RescueBeam {
        constexpr uintptr_t m_bCanPull = 0xcb0; // bool
    }
    namespace CAbilityCadenceLullabyVData {
        constexpr uintptr_t m_SleepAOEModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_WeaponUpgrade_SurgingPowerVData {
        constexpr uintptr_t m_ModifierSurgingPower = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CastTargetEffect = 0x15a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_FireRateAuraVData {
        constexpr uintptr_t m_FireRateAuraSourceParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_Citadel_Shield {
        constexpr uintptr_t m_bAllowRotatingUp = 0x848; // bool
        constexpr uintptr_t m_bFixedPosition = 0x849; // bool
        constexpr uintptr_t m_flShieldOffset = 0x84c; // float32
    }
    namespace CAbilityGangActivityVData {
        constexpr uintptr_t m_AbilitySwap = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_SettingSun_VData {
        constexpr uintptr_t m_BeamTargetParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_UnitTargetParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SettingSunThinkerModifier = 0x1710; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_flSSCameraPreviewOffset = 0x1720; // float32
        constexpr uintptr_t m_flSSCameraPreviewSpeed = 0x1724; // float32
        constexpr uintptr_t m_flSSCameraPreviewDistance = 0x1728; // float32
    }
    namespace CCitadel_Modifier_Burrow_VData {
        constexpr uintptr_t m_BurrowPlayerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flDesatAmount = 0x6e8; // float32
        constexpr uintptr_t m_DesatTint = 0x6ec; // Color
        constexpr uintptr_t m_SatTint = 0x6f0; // Color
        constexpr uintptr_t m_Outline = 0x6f4; // Color
    }
    namespace CFuncFoliageVData {
        constexpr uintptr_t m_BulletImpactParticle = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BulletExitParticle = 0x108; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BaseBulletPreRollProc {
        constexpr uintptr_t m_nSuppressProcShotID = 0x168; // ShotID_t
        constexpr uintptr_t m_vecProcdBulletIDs = 0x170; // CUtlVector< BulletID_t >
    }
    namespace CCitadelPlayer_MovementServices {
        constexpr uintptr_t m_vPositionDeltaVelocity = 0x218; // CNetworkVelocityVector
        constexpr uintptr_t m_vecPogoVelocity = 0x248; // Vector
        constexpr uintptr_t m_vecSupport = 0x254; // Vector
        constexpr uintptr_t m_bColliding = 0x260; // bool
        constexpr uintptr_t m_bLandedOnGround = 0x261; // bool
        constexpr uintptr_t m_bHasFreeCursor = 0x262; // bool
    }
    namespace CAbilityWreckingBallVData {
        constexpr uintptr_t m_SummonParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SummonReadyParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SummonParticleAttachment = 0x1710; // CUtlString
        constexpr uintptr_t m_ExplodeParticle = 0x1718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AutoThrowModifier = 0x17f8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HoldingBallLoop = 0x1808; // CSoundEventName
    }
    namespace CCitadel_Modifier_Gravity_Lasso_Self {
        constexpr uintptr_t m_bHasUsedBouncePad = 0xc0; // bool
        constexpr uintptr_t m_vCastTargets = 0xc8; // CUtlVector< CHandle< C_BaseEntity > >
    }
    namespace C_OmniLight {
        constexpr uintptr_t m_flInnerAngle = 0xb88; // float32
        constexpr uintptr_t m_flOuterAngle = 0xb8c; // float32
        constexpr uintptr_t m_bShowLight = 0xb90; // bool
    }
    namespace CModifierSlorkAmbushVData {
        constexpr uintptr_t m_strAmbushEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Slork_Invis {
        constexpr uintptr_t m_bHasGoneFullyInvis = 0x2d8; // bool
    }
    namespace CCitadel_Modifier_RescueBeamVData {
        constexpr uintptr_t m_BeamParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifier_Mirage_SandPhantom {
        constexpr uintptr_t m_particleStart = 0xc0; // ParticleIndex_t
        constexpr uintptr_t m_particleEnd = 0xc4; // ParticleIndex_t
        constexpr uintptr_t m_particleTrail = 0xc8; // ParticleIndex_t
        constexpr uintptr_t m_vecStartPosition = 0xcc; // Vector
        constexpr uintptr_t m_flStartDelay = 0xd8; // float32
        constexpr uintptr_t m_vecApplyOffset = 0xdc; // Vector
    }
    namespace CModifier_Synth_Grasp_Victim {
        constexpr uintptr_t m_vecOrigin = 0xc0; // Vector
    }
    namespace CCitadel_Ability_ShieldedSentry_VData {
        constexpr uintptr_t m_InnateModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1560; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_flDamageFalloffEndScale = 0x1570; // float32
    }
    namespace CScaleFunctionVData {
        constexpr uintptr_t m_eSpecificStatScaleType = 0x28; // EStatsType
        constexpr uintptr_t m_flStatScale = 0x2c; // float32
        constexpr uintptr_t m_bFunctionDisabled = 0x30; // bool
    }
    namespace CCitadel_Modifier_Thumper_2_AuraVData {
        constexpr uintptr_t m_AoEParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_ItemWalkBackVData {
        constexpr uintptr_t m_IdleParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RunningParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flStopDistance = 0x7c8; // float32
        constexpr uintptr_t m_flMaxSpeedDistance = 0x7cc; // float32
        constexpr uintptr_t m_flSlowSpeed = 0x7d0; // float32
        constexpr uintptr_t m_flFastSpeed = 0x7d4; // float32
        constexpr uintptr_t m_flVerticalOffset = 0x7d8; // float32
        constexpr uintptr_t m_flTolerance = 0x7dc; // float32
        constexpr uintptr_t m_flRepathTime = 0x7e0; // float32
        constexpr uintptr_t m_flAutoRunTime = 0x7e4; // float32
        constexpr uintptr_t m_flTimeToStartAutoRun = 0x7e8; // float32
    }
    namespace CAbility_Synth_PlasmaFlux {
        constexpr uintptr_t m_bTeleported = 0xca8; // bool
        constexpr uintptr_t m_flProjectileLaunchTime = 0xcac; // GameTime_t
        constexpr uintptr_t m_flProjectileExpireTime = 0xcb0; // GameTime_t
        constexpr uintptr_t m_hActiveProjectile = 0xcb4; // CHandle< C_BaseEntity >
    }
    namespace CCitadel_Ability_ShivWeapon_VData {
        constexpr uintptr_t m_flPushForce = 0x1598; // float32
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatue {
        constexpr uintptr_t m_GameTimeEnabled = 0x100; // GameTime_t
        constexpr uintptr_t m_LastCatInAreaTime = 0x104; // GameTime_t
        constexpr uintptr_t m_bIsAttacking = 0x108; // bool
        constexpr uintptr_t m_iTargetID = 0x10c; // int32
    }
    namespace CCitadel_Modifier_Guiding_ArrowVData {
        constexpr uintptr_t m_GlowEnemeyModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Low_Health_GlowVData {
        constexpr uintptr_t m_GlowParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_HunterAuraTarget {
        constexpr uintptr_t m_flDebuffScale = 0x168; // float32
    }
    namespace CCitadel_ArmorUpgrade_SlowImmunityVData {
        constexpr uintptr_t m_ImmunityModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Discord_Friendly {
        constexpr uintptr_t m_flHealPerSecond = 0xc0; // float32
    }
    namespace CModifierObscuredVData {
        constexpr uintptr_t m_flHideDuration = 0x608; // float32
        constexpr uintptr_t m_flRevealDuration = 0x60c; // float32
    }
    namespace CCitadel_Modifier_HeldItemPickupAuraVData {
        constexpr uintptr_t m_strFilterAbilityName = 0x648; // CSubclassName< 4 >
    }
    namespace CCitadel_Modifier_BulletArmorShredder_ProcVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Modifier_Obscured {
        constexpr uintptr_t m_flStartObscuredAmount = 0xc0; // float32
        constexpr uintptr_t m_AmbientParticles = 0xc8; // CUtlVectorFixedGrowable< ParticleIndex_t, 3 >
    }
    namespace CNPC_TrooperBossVData {
        constexpr uintptr_t m_bMitigateDamageFromPlayers = 0x1658; // bool
        constexpr uintptr_t m_flPlayerAutoAttackRange = 0x165c; // float32
        constexpr uintptr_t m_flMinMeleeAttackTime = 0x1660; // float32
        constexpr uintptr_t m_flInvulRange = 0x1664; // float32
        constexpr uintptr_t m_sAngryStart = 0x1668; // CSoundEventName
        constexpr uintptr_t m_sAngryLoop = 0x1678; // CSoundEventName
        constexpr uintptr_t m_sAngryStop = 0x1688; // CSoundEventName
    }
    namespace C_EconItemAttribute {
        constexpr uintptr_t m_iAttributeDefinitionIndex = 0x30; // attrib_definition_index_t
        constexpr uintptr_t m_flValue = 0x34; // float32
    }
    namespace CAbilityTokamakRadianceVData {
        constexpr uintptr_t m_RadianceModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Perched_Predator {
        constexpr uintptr_t m_hActiveProjectile = 0xc98; // CHandle< C_BaseEntity >
    }
    namespace ice_path_shard_model_desc_t {
        constexpr uintptr_t m_nModelID = 0x8; // int32
        constexpr uintptr_t m_vecPanelSize = 0xc; // Vector2D
        constexpr uintptr_t m_vecPanelVertices = 0x18; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_flThickness = 0x30; // float32
        constexpr uintptr_t m_SurfacePropStringToken = 0x34; // CUtlStringToken
    }
    namespace EngineCountdownTimer {
        constexpr uintptr_t m_duration = 0x8; // float32
        constexpr uintptr_t m_timestamp = 0xc; // float32
        constexpr uintptr_t m_timescale = 0x10; // float32
    }
    namespace CCitadel_Modifier_Bull_Heal_Aura {
        constexpr uintptr_t m_playerAngles = 0xe0; // QAngle
        constexpr uintptr_t m_ConeParticle = 0xec; // ParticleIndex_t
    }
    namespace CAbilityMeleeParryVData {
        constexpr uintptr_t m_flWhiffDuration = 0x1550; // float32
        constexpr uintptr_t m_flMovementRestrictionTime = 0x1554; // float32
        constexpr uintptr_t m_flActiveTime = 0x1558; // float32
        constexpr uintptr_t m_flParryEndVisualTime = 0x155c; // float32
        constexpr uintptr_t m_flSuccessActiveTime = 0x1560; // float32
        constexpr uintptr_t m_flBossVictimNoMeleeTime = 0x1564; // float32
        constexpr uintptr_t m_flBossVictimCalmTime = 0x1568; // float32
        constexpr uintptr_t m_SuccessfulParryParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strSuccessfulParrySound = 0x1650; // CSoundEventName
        constexpr uintptr_t m_ParryActiveModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ParryVictimModifier = 0x1670; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ParryCooldownModifier = 0x1680; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ParryEndVisualModifier = 0x1690; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ParryBossVictimNoMeleeModifier = 0x16a0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ParryBossVictimCalmModifier = 0x16b0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_Citadel_BreakableProp {
        constexpr uintptr_t m_nHitIndex = 0xae8; // int32
    }
    namespace CCitadel_Ability_FlyingStrike {
        constexpr uintptr_t m_desatVolIdx = 0xca0; // SatVolumeIndex_t
        constexpr uintptr_t m_bShadowFormCast = 0xca4; // bool
        constexpr uintptr_t m_vYamatoCastPos = 0xca8; // Vector
        constexpr uintptr_t m_vTargetCastPos = 0xcb4; // Vector
        constexpr uintptr_t m_flFlyingToTargetStartTime = 0xcc0; // GameTime_t
        constexpr uintptr_t m_flEndAttackTime = 0xcc4; // GameTime_t
        constexpr uintptr_t m_flGrappleStartTime = 0xcc8; // GameTime_t
        constexpr uintptr_t m_flGrappleArriveTime = 0xccc; // GameTime_t
        constexpr uintptr_t m_flAttackLatchTime = 0xcd0; // GameTime_t
        constexpr uintptr_t m_vAttackLatchPos = 0xcd4; // Vector
        constexpr uintptr_t m_hTarget = 0xce0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flGrappleShotAttackTime = 0xce4; // GameTime_t
        constexpr uintptr_t m_rgPath = 0xcec; // Vector[20]
        constexpr uintptr_t m_nPathIdx = 0xddc; // int32
        constexpr uintptr_t m_nPathSize = 0xde0; // int32
        constexpr uintptr_t m_flPathLength = 0xde4; // float32
        constexpr uintptr_t m_vFlyingInitialOffsetToPath = 0xde8; // Vector
        constexpr uintptr_t flDistFlown = 0xdf4; // float32
        constexpr uintptr_t m_vLastSafePos = 0xdf8; // Vector
        constexpr uintptr_t m_nGrappleTravelEffect = 0xeb0; // ParticleIndex_t
        constexpr uintptr_t m_bPathDirty = 0xf08; // bool
    }
    namespace CCitadel_Modifier_ShivDash {
        constexpr uintptr_t m_bUseTrail = 0xf8; // bool
        constexpr uintptr_t m_bUseEchoEffect = 0xf9; // bool
    }
    namespace CCitadel_Modifier_TargetPracticeSelfVData {
        constexpr uintptr_t m_TracerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strWeaponShootSound = 0x6e8; // CSoundEventName
        constexpr uintptr_t m_strBulletWhizSound = 0x6f8; // CSoundEventName
    }
    namespace CCitadel_Modifier_Cadence_SleepAOEVData {
        constexpr uintptr_t m_AuraParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Slork_Raging_Current {
        constexpr uintptr_t m_bUnitTarget = 0x168; // bool
    }
    namespace CCitadel_Modifier_Astro_ShotgunBuffVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Bull_Heal_TargetVData {
        constexpr uintptr_t m_DrainParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_NapalmProjectileVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_WeaponUpgrade_WeaponEaterVData {
        constexpr uintptr_t m_WeaponEaterTracker = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CItemAOERootVData {
        constexpr uintptr_t m_AOEParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strRootTargetSound = 0x1678; // CSoundEventName
        constexpr uintptr_t m_TetherModifier = 0x1688; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_TrackingProjectileApplyModifierVData {
        constexpr uintptr_t m_ProjectileImpactParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetModifier = 0x1678; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_FriendlyOnlyModifier = 0x1688; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Projectile_HookBlade {
        constexpr uintptr_t bIsReturning = 0x8c8; // bool
    }
    namespace CCitadel_Modifier_Rutger_CheatDeath_Activated_VData {
        constexpr uintptr_t m_ActivatedParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_ReturnFireVData {
        constexpr uintptr_t m_AttackerHitFx = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SpiritReflectTracerReplacement = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAttackerHitSound = 0x8a8; // CSoundEventName
        constexpr uintptr_t m_strHitProcSound = 0x8b8; // CSoundEventName
    }
    namespace C_BaseFlex::Emphasized_Phoneme {
        constexpr uintptr_t m_sClassName = 0x0; // CUtlString
        constexpr uintptr_t m_flAmount = 0x18; // float32
        constexpr uintptr_t m_bRequired = 0x1c; // bool
        constexpr uintptr_t m_bBasechecked = 0x1d; // bool
        constexpr uintptr_t m_bValid = 0x1e; // bool
    }
    namespace IntervalTimer {
        constexpr uintptr_t m_timestamp = 0x8; // GameTime_t
        constexpr uintptr_t m_nWorldGroupId = 0xc; // WorldGroupId_t
    }
    namespace CCitadel_Modifier_BubbleVData {
        constexpr uintptr_t m_ExplodeParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSound = 0x988; // CSoundEventName
        constexpr uintptr_t m_BuffModifier = 0x998; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CNPC_FieldSentryVData {
        constexpr uintptr_t m_LaserSightParticle = 0x108; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_KillExplosionParticle = 0x1e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DeployProgressModifier = 0x2c8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_sSpawnSound = 0x2d8; // CSoundEventName
        constexpr uintptr_t m_sKillExplosionSound = 0x2e8; // CSoundEventName
        constexpr uintptr_t m_sTargetAcquiredLocalSound = 0x2f8; // CSoundEventName
        constexpr uintptr_t m_sTargetAcquiredSound = 0x308; // CSoundEventName
        constexpr uintptr_t m_flIdleTurnSpeed = 0x318; // float32
        constexpr uintptr_t m_flIdleTurnAngles = 0x31c; // float32
        constexpr uintptr_t m_flTrooperTakeDamageMult = 0x320; // float32
        constexpr uintptr_t m_flNeutralTakeDamageMulti = 0x324; // float32
        constexpr uintptr_t m_flNotifyEventTime = 0x328; // float32
    }
    namespace CCitadel_Ability_VoidSphereVData {
        constexpr uintptr_t m_BubbleModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_strCastEffect = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAllyPositionPreview = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelCatapultTrigger {
        constexpr uintptr_t m_vLaunchTarget = 0x848; // Vector
        constexpr uintptr_t m_flLaunchSpeed = 0x854; // float32
        constexpr uintptr_t m_nameTarget = 0x858; // CUtlSymbolLarge
    }
    namespace C_FuncLadder {
        constexpr uintptr_t m_vecLadderDir = 0x840; // Vector
        constexpr uintptr_t m_Dismounts = 0x850; // CUtlVector< CHandle< C_InfoLadderDismount > >
        constexpr uintptr_t m_vecLocalTop = 0x868; // Vector
        constexpr uintptr_t m_vecPlayerMountPositionTop = 0x874; // Vector
        constexpr uintptr_t m_vecPlayerMountPositionBottom = 0x880; // Vector
        constexpr uintptr_t m_flAutoRideSpeed = 0x88c; // float32
        constexpr uintptr_t m_bDisabled = 0x890; // bool
        constexpr uintptr_t m_bFakeLadder = 0x891; // bool
        constexpr uintptr_t m_bHasSlack = 0x892; // bool
    }
    namespace CModifier_Synth_Affliction_Debuff_VData {
        constexpr uintptr_t m_EffectParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Cadence_SilenceContraptionsVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TangoTether_Tether {
        constexpr uintptr_t m_fHealingSoundBuildup = 0xf8; // float32
    }
    namespace CCitadel_Modifier_Fervor_Bonuses_VData {
        constexpr uintptr_t m_BonusesParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ActivateBonusesSound = 0x6e8; // CSoundEventName
    }
    namespace CCitadel_Modifier_SilencerProcActiveVData {
        constexpr uintptr_t m_TracerParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SilencerActiveParticle = 0x718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SilenceActiveModifier = 0x7f8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CPlayer_WeaponServices {
        constexpr uintptr_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
        constexpr uintptr_t m_hActiveWeapon = 0x58; // CHandle< C_BasePlayerWeapon >
        constexpr uintptr_t m_hLastWeapon = 0x5c; // CHandle< C_BasePlayerWeapon >
        constexpr uintptr_t m_iAmmo = 0x60; // uint16[32]
    }
    namespace CUnitStatusOverlayOld {
        constexpr uintptr_t m_flUIScale = 0xae0; // float32
    }
    namespace CAttributeManager::cached_attribute_float_t {
        constexpr uintptr_t flIn = 0x0; // float32
        constexpr uintptr_t iAttribHook = 0x8; // CUtlSymbolLarge
        constexpr uintptr_t flOut = 0x10; // float32
    }
    namespace CCitadel_Modifier_Bolo {
        constexpr uintptr_t m_hRingEffect = 0xc0; // ParticleIndex_t
    }
    namespace CCitadelModifierDustStormAuraApplyVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_ZipLineBoost_VData {
        constexpr uintptr_t m_ZipboostModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flTimeToActivate = 0x1560; // float32
        constexpr uintptr_t m_flTimeForHint = 0x1564; // float32
    }
    namespace CCitadel_Ability_SuperNeutralCharge {
        constexpr uintptr_t m_bPreparing = 0xe58; // bool
        constexpr uintptr_t m_bTackling = 0xe59; // bool
        constexpr uintptr_t m_flTackleStartTime = 0xe5c; // GameTime_t
        constexpr uintptr_t m_flTackleDuration = 0xe60; // float32
        constexpr uintptr_t m_vecTackleDir = 0xe64; // Vector
        constexpr uintptr_t m_vecLastPosition = 0xe70; // Vector
        constexpr uintptr_t m_nStuckFramesCount = 0xe7c; // int32
        constexpr uintptr_t m_vecHitEnemies = 0xe80; // CUtlVector< CEntityIndex >
        constexpr uintptr_t m_flPrepareStartTime = 0xe98; // GameTime_t
        constexpr uintptr_t m_nDistancePreview = 0xe9c; // ParticleIndex_t
    }
    namespace STrooperFOWEntity {
        constexpr uintptr_t m_nEntIndex = 0x30; // CEntityIndex
        constexpr uintptr_t m_nTeam = 0x34; // int8
        constexpr uintptr_t m_nPositionXY = 0x36; // uint16
    }
    namespace VPhysicsCollisionAttribute_t {
        constexpr uintptr_t m_nInteractsAs = 0x8; // uint64
        constexpr uintptr_t m_nInteractsWith = 0x10; // uint64
        constexpr uintptr_t m_nInteractsExclude = 0x18; // uint64
        constexpr uintptr_t m_nEntityId = 0x20; // uint32
        constexpr uintptr_t m_nOwnerId = 0x24; // uint32
        constexpr uintptr_t m_nHierarchyId = 0x28; // uint16
        constexpr uintptr_t m_nCollisionGroup = 0x2a; // uint8
        constexpr uintptr_t m_nCollisionFunctionMask = 0x2b; // uint8
    }
    namespace CCitadel_Item_Bubble {
        constexpr uintptr_t m_flEndTime = 0xcb0; // GameTime_t
    }
    namespace C_EnvVolumetricFogController {
        constexpr uintptr_t m_flScattering = 0x560; // float32
        constexpr uintptr_t m_flAnisotropy = 0x564; // float32
        constexpr uintptr_t m_flFadeSpeed = 0x568; // float32
        constexpr uintptr_t m_flDrawDistance = 0x56c; // float32
        constexpr uintptr_t m_flFadeInStart = 0x570; // float32
        constexpr uintptr_t m_flFadeInEnd = 0x574; // float32
        constexpr uintptr_t m_flIndirectStrength = 0x578; // float32
        constexpr uintptr_t m_nVolumeDepth = 0x57c; // int32
        constexpr uintptr_t m_fFirstVolumeSliceThickness = 0x580; // float32
        constexpr uintptr_t m_nIndirectTextureDimX = 0x584; // int32
        constexpr uintptr_t m_nIndirectTextureDimY = 0x588; // int32
        constexpr uintptr_t m_nIndirectTextureDimZ = 0x58c; // int32
        constexpr uintptr_t m_vBoxMins = 0x590; // Vector
        constexpr uintptr_t m_vBoxMaxs = 0x59c; // Vector
        constexpr uintptr_t m_bActive = 0x5a8; // bool
        constexpr uintptr_t m_flStartAnisoTime = 0x5ac; // GameTime_t
        constexpr uintptr_t m_flStartScatterTime = 0x5b0; // GameTime_t
        constexpr uintptr_t m_flStartDrawDistanceTime = 0x5b4; // GameTime_t
        constexpr uintptr_t m_flStartAnisotropy = 0x5b8; // float32
        constexpr uintptr_t m_flStartScattering = 0x5bc; // float32
        constexpr uintptr_t m_flStartDrawDistance = 0x5c0; // float32
        constexpr uintptr_t m_flDefaultAnisotropy = 0x5c4; // float32
        constexpr uintptr_t m_flDefaultScattering = 0x5c8; // float32
        constexpr uintptr_t m_flDefaultDrawDistance = 0x5cc; // float32
        constexpr uintptr_t m_bStartDisabled = 0x5d0; // bool
        constexpr uintptr_t m_bEnableIndirect = 0x5d1; // bool
        constexpr uintptr_t m_bIndirectUseLPVs = 0x5d2; // bool
        constexpr uintptr_t m_bIsMaster = 0x5d3; // bool
        constexpr uintptr_t m_hFogIndirectTexture = 0x5d8; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_nForceRefreshCount = 0x5e0; // int32
        constexpr uintptr_t m_fNoiseSpeed = 0x5e4; // float32
        constexpr uintptr_t m_fNoiseStrength = 0x5e8; // float32
        constexpr uintptr_t m_vNoiseScale = 0x5ec; // Vector
        constexpr uintptr_t m_fWindSpeed = 0x5f8; // float32
        constexpr uintptr_t m_vWindDirection = 0x5fc; // Vector
        constexpr uintptr_t m_bFirstTime = 0x608; // bool
    }
    namespace CCitadel_Ability_Nano_Pounce_InstantVData {
        constexpr uintptr_t m_LeapModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ActiveBuff = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AttackParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlashParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1740; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSlowParticle = 0x1820; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PrimaryHitParticle = 0x1900; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AttackSound = 0x19e0; // CSoundEventName
        constexpr uintptr_t m_strExplodeSound = 0x19f0; // CSoundEventName
        constexpr uintptr_t m_flAttackTimePhase01 = 0x1a00; // float32
        constexpr uintptr_t m_flAttackTimePhase02 = 0x1a04; // float32
        constexpr uintptr_t m_flAllyMinTargetRange = 0x1a08; // float32
        constexpr uintptr_t m_flTargetVerticalOffset = 0x1a0c; // float32
    }
    namespace CCitadel_Ability_WreckingBall {
        constexpr uintptr_t m_bHoldingBall = 0xcd0; // bool
    }
    namespace CCitadel_Modifier_ArcaneEaterProcVData {
        constexpr uintptr_t m_StealWatcherModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_BaseBulletPreRollProcVData {
        constexpr uintptr_t m_bRollOnceForAllBulletsInAShot = 0x638; // bool
        constexpr uintptr_t m_flMaxBulletsToProcInShot = 0x63c; // float32
        constexpr uintptr_t m_bCanProcMultipleTimesFromSameShot = 0x640; // bool
        constexpr uintptr_t m_bRequiresTargetFilter = 0x641; // bool
        constexpr uintptr_t m_bCanBeEvaded = 0x642; // bool
        constexpr uintptr_t m_TracerAdditionParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_OnBulletRolledProcSound = 0x728; // CSoundEventName
    }
    namespace CModifierTangoTetherTargetVData {
        constexpr uintptr_t m_GrappleRopeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Vandal_PillarVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PetrifyModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
        constexpr uintptr_t m_AuraParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifierTier3BossInvulnVData {
        constexpr uintptr_t m_ShieldParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flShieldRadius = 0x6e8; // float32
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target_VData {
        constexpr uintptr_t m_DrainParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbility_Mirage_Teleport_VData {
        constexpr uintptr_t m_BuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImmunityModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_FireRateModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TeleportStartParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportEndParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strArriveSound = 0x1740; // CSoundEventName
        constexpr uintptr_t m_strDepartSound = 0x1750; // CSoundEventName
        constexpr uintptr_t m_strChannelDestinationSound = 0x1760; // CSoundEventName
    }
    namespace CCitadel_Modifier_QuickSilverBuffVData {
        constexpr uintptr_t m_RapidFireParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelPlayer_ObserverServices {
        constexpr uintptr_t m_nLastLocalPlayerObservedTeam = 0x58; // int32
        constexpr uintptr_t m_nLastObservedTeam = 0x5c; // int32
        constexpr uintptr_t m_nCurrentObservedTeam = 0x60; // int32
        constexpr uintptr_t m_hLastObserverTarget = 0x64; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hPreviousTeamTarget = 0x68; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hOverrideObserverTarget = 0x6c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_iOverrideObserverMode = 0x70; // ObserverMode_t
        constexpr uintptr_t m_iSecondsAfterDeathToAllowObserving = 0x74; // int32
        constexpr uintptr_t m_angTargetCamera = 0x78; // QAngle
        constexpr uintptr_t m_vTargetCameraPos = 0x90; // Vector
    }
    namespace C_PointCommentaryNode {
        constexpr uintptr_t m_bActive = 0xaf0; // bool
        constexpr uintptr_t m_bWasActive = 0xaf1; // bool
        constexpr uintptr_t m_flEndTime = 0xaf4; // GameTime_t
        constexpr uintptr_t m_flStartTime = 0xaf8; // GameTime_t
        constexpr uintptr_t m_flStartTimeInCommentary = 0xafc; // float32
        constexpr uintptr_t m_iszCommentaryFile = 0xb00; // CUtlSymbolLarge
        constexpr uintptr_t m_iszTitle = 0xb08; // CUtlSymbolLarge
        constexpr uintptr_t m_iszSpeakers = 0xb10; // CUtlSymbolLarge
        constexpr uintptr_t m_iNodeNumber = 0xb18; // int32
        constexpr uintptr_t m_iNodeNumberMax = 0xb1c; // int32
        constexpr uintptr_t m_bListenedTo = 0xb20; // bool
        constexpr uintptr_t m_hViewPosition = 0xb30; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bRestartAfterRestore = 0xb34; // bool
    }
    namespace CCitadel_Modifier_StormCloud {
        constexpr uintptr_t m_flNextRandomLightningStrike = 0xc0; // GameTime_t
        constexpr uintptr_t m_flStartTime = 0xc4; // GameTime_t
        constexpr uintptr_t m_flRadiusIncrementPerSecond = 0xc8; // float32
        constexpr uintptr_t m_vCastPosition = 0xcc; // Vector
        constexpr uintptr_t m_bFiredEndingSoonSound = 0xd8; // bool
        constexpr uintptr_t m_nLastTickForLightningCenterCalc = 0xdc; // int32
        constexpr uintptr_t m_vecLightningCenter = 0xe0; // Vector
        constexpr uintptr_t m_nSatVolumeIndex = 0xec; // SatVolumeIndex_t
    }
    namespace CCitadel_Modifier_LightningBallVData {
        constexpr uintptr_t m_ZapParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetScreenParticleEffect = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_UltCombo_Self {
        constexpr uintptr_t m_angles = 0xc0; // QAngle
    }
    namespace CModifier_Upgrade_ArcaneMedallion_VData {
        constexpr uintptr_t m_TriggeredModifier = 0x638; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Ability_Dash {
        constexpr uintptr_t m_flDashAngle = 0xc98; // float32
        constexpr uintptr_t m_GroundDashExecuteTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_nLastGroundDashTick = 0xca0; // int32
        constexpr uintptr_t m_flGroundDashCastTime = 0xca4; // GameTime_t
        constexpr uintptr_t m_bTagCanActivateGroundDash = 0xca8; // bool
        constexpr uintptr_t m_flGroundDashEndTime = 0xcb0; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flAirDashCastTime = 0xcc8; // GameTime_t
        constexpr uintptr_t m_flAirDashDragStartTime = 0xccc; // GameTime_t
        constexpr uintptr_t m_nConsecutiveAirDashes = 0xcd0; // int8
        constexpr uintptr_t m_nConsecutiveDownDashes = 0xcd1; // int8
        constexpr uintptr_t m_bDownAirDash = 0xcd2; // bool
        constexpr uintptr_t m_hJumpAbility = 0xe88; // CHandle< CCitadel_Ability_Jump >
    }
    namespace CAI_BaseNPCVData {
        constexpr uintptr_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_hFootstepSounds = 0x108; // CFootstepTableHandle
        constexpr uintptr_t m_vecNavLinkMovementNames = 0x110; // CUtlVector< CGlobalSymbol >
        constexpr uintptr_t m_nMaxHealth = 0x128; // int32
        constexpr uintptr_t m_vecIntrinsicModifiers = 0x130; // CUtlVector< CEmbeddedSubclass< CCitadelModifier > >
        constexpr uintptr_t m_statusEffectMap = 0x148; // NPCStatusEffectMap_t
        constexpr uintptr_t m_vecAttachments = 0x150; // CUtlVector< NPCAttachmentDesc_t >
        constexpr uintptr_t m_flHeadDamageMultiplier = 0x168; // CSkillFloat
        constexpr uintptr_t m_flChestDamageMultiplier = 0x178; // CSkillFloat
        constexpr uintptr_t m_flStomachDamageMultiplier = 0x188; // CSkillFloat
        constexpr uintptr_t m_flArmDamageMultiplier = 0x198; // CSkillFloat
        constexpr uintptr_t m_flLegDamageMultiplier = 0x1a8; // CSkillFloat
        constexpr uintptr_t m_nMaxAdditionalAmmoBalancingShots = 0x1b8; // CSkillInt
        constexpr uintptr_t m_bTakesDamage = 0x1c8; // bool
        constexpr uintptr_t m_nRagdollHealth = 0x1cc; // int32
        constexpr uintptr_t m_DestructiblePartsOverrideByPartName = 0x1d0; // CUtlOrderedMap< CUtlString, CDestructiblePartsSystemData_PartRuntimeData >
        constexpr uintptr_t m_bAllowNonZUpMovement = 0x1f8; // bool
        constexpr uintptr_t m_bUseDynamicCollisionHull = 0x1f9; // bool
        constexpr uintptr_t m_bRequestCapsuleCollision = 0x1fa; // bool
        constexpr uintptr_t m_flCapsuleRadiusOverride = 0x1fc; // float32
        constexpr uintptr_t m_flCapsuleHeightOverride = 0x200; // float32
        constexpr uintptr_t m_bAllowAnimgraphMotorMovementStates = 0x204; // bool
        constexpr uintptr_t m_vecActionDesiredShared = 0x208; // CUtlVector< CGlobalSymbol >
        constexpr uintptr_t m_sPlayerKilledNpcSound = 0x220; // CSoundEventName
        constexpr uintptr_t m_sCustomDeathHandshake = 0x230; // CGlobalSymbol
        constexpr uintptr_t m_flMovementMaxPathEndDirectionAngleDifferenceForStop = 0x238; // float32
    }
    namespace audioparams_t {
        constexpr uintptr_t localSound = 0x8; // Vector[8]
        constexpr uintptr_t soundscapeIndex = 0x68; // int32
        constexpr uintptr_t localBits = 0x6c; // uint8
        constexpr uintptr_t soundscapeEntityListIndex = 0x70; // int32
        constexpr uintptr_t soundEventHash = 0x74; // uint32
    }
    namespace CCitadel_Item_BaseProjectileAOEModifier {
        constexpr uintptr_t m_vLaunchPosition = 0xcb0; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xcbc; // QAngle
    }
    namespace CCitadel_Item_DivinersKevlar {
        constexpr uintptr_t m_bExecuted = 0xcb0; // bool
    }
    namespace CAbility_Rutger_RocketLauncher_VData {
        constexpr uintptr_t m_ImpactParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShootParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_PsychicDaggerVData {
        constexpr uintptr_t m_MakeDaggersModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierPowerJumpVData {
        constexpr uintptr_t m_FloatParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flAirDrag = 0x6e8; // float32
        constexpr uintptr_t m_flVerticalCameraOffset = 0x6ec; // float32
        constexpr uintptr_t m_flVerticalCameraOffsetLerpTime = 0x6f0; // float32
        constexpr uintptr_t m_flVerticalCameraOffsetBias = 0x6f4; // float32
    }
    namespace CCitadel_Ability_Bull_Charge {
        constexpr uintptr_t m_anglesCharging = 0xf38; // QAngle
        constexpr uintptr_t m_flChargeStartTime = 0xf44; // GameTime_t
        constexpr uintptr_t m_flFastChargeEndTime = 0xf48; // GameTime_t
        constexpr uintptr_t m_bHitAPlayer = 0xf4c; // bool
        constexpr uintptr_t m_bFirstTick = 0xf50; // bool
    }
    namespace CAbilitySlideVData {
        constexpr uintptr_t m_flMinAngleToConsiderASlope = 0x1550; // float32
        constexpr uintptr_t m_flSlideMaxSlopeMaxAccSpeed = 0x1554; // float32
        constexpr uintptr_t m_flSlideMinSlopeMaxAccSpeed = 0x1558; // float32
        constexpr uintptr_t m_flButtonPressWindow = 0x155c; // float32
        constexpr uintptr_t m_flTurnSpeed = 0x1560; // float32
        constexpr uintptr_t m_flSlideMinSlopeAcceleration = 0x1564; // float32
        constexpr uintptr_t m_flSlideMaxSlopeAcceleration = 0x1568; // float32
        constexpr uintptr_t m_flTurnMinAngDiff = 0x156c; // float32
        constexpr uintptr_t m_flTurnMaxAngDiff = 0x1570; // float32
        constexpr uintptr_t m_flLandedFlatGroundFrictionGraceTime = 0x1574; // float32
        constexpr uintptr_t m_flFlatGroundFrictionGraceTime = 0x1578; // float32
        constexpr uintptr_t m_flFrictionFlatGroundGrace = 0x157c; // float32
        constexpr uintptr_t m_flFrictionFlatGround = 0x1580; // float32
        constexpr uintptr_t m_flFrictionMinSlope = 0x1584; // float32
        constexpr uintptr_t m_flFrictionMaxSlope = 0x1588; // float32
        constexpr uintptr_t m_flFrictionUphillMinSlope = 0x158c; // float32
        constexpr uintptr_t m_flFrictionUphillMaxSlope = 0x1590; // float32
        constexpr uintptr_t m_flLandingSlopeScaleBias = 0x1594; // float32
        constexpr uintptr_t m_flBoostMinTriggerSpeed = 0x1598; // float32
        constexpr uintptr_t m_flBoostMaxTriggerSpeed = 0x159c; // float32
        constexpr uintptr_t m_flBoostMinSpeed = 0x15a0; // float32
        constexpr uintptr_t m_flBoostMaxSpeed = 0x15a4; // float32
        constexpr uintptr_t m_flMinActivationSpeed = 0x15a8; // float32
        constexpr uintptr_t m_flMinSustainSpeed = 0x15ac; // float32
        constexpr uintptr_t m_flSprintBoostSpeed = 0x15b0; // float32
        constexpr uintptr_t m_flDashSlideStartTime = 0x15b4; // float32
        constexpr uintptr_t m_flDashSlideSpeed = 0x15b8; // float32
        constexpr uintptr_t m_flDashSlideFailSpeed = 0x15bc; // float32
        constexpr uintptr_t m_strDashSlideActivate = 0x15c0; // CSoundEventName
        constexpr uintptr_t m_flDashSlideFrictionTime = 0x15d0; // float32
        constexpr uintptr_t m_flDashSlideFriction = 0x15d4; // float32
        constexpr uintptr_t m_flDashMinActivationSpeed = 0x15d8; // float32
        constexpr uintptr_t m_flAccMinSlopeDeg = 0x15dc; // float32
        constexpr uintptr_t m_flAccMaxSlopeDeg = 0x15e0; // float32
        constexpr uintptr_t m_flAccMinSlopeScale = 0x15e4; // float32
        constexpr uintptr_t m_flSlideProbeForwardOffset = 0x15e8; // float32
        constexpr uintptr_t m_flSlideActivationProbeForwardOffset = 0x15ec; // float32
        constexpr uintptr_t m_flMaxDistanceBetweenProbeSamples = 0x15f0; // float32
        constexpr uintptr_t m_flInitialSlideUseForwardProbeTime = 0x15f4; // float32
        constexpr uintptr_t m_flCurrentSlopeSampleDistance = 0x15f8; // float32
        constexpr uintptr_t m_flSampleVelDiffStdDevScaleCutoff = 0x15fc; // float32
        constexpr uintptr_t m_flSlopeFacingAngleToActivate = 0x1600; // float32
        constexpr uintptr_t m_flAirDragAfterJump = 0x1604; // float32
        constexpr uintptr_t m_flAirDragAfterJumpTime = 0x1608; // float32
        constexpr uintptr_t m_flAirDragMaxAngle = 0x160c; // float32
        constexpr uintptr_t m_flAirDragResetTime = 0x1610; // float32
        constexpr uintptr_t m_flLateSlideJumpWindow = 0x1614; // float32
        constexpr uintptr_t m_SlideEffectRemap = 0x1618; // CRemapFloat
        constexpr uintptr_t m_GetupSpeedCurve = 0x1628; // CPiecewiseCurve
        constexpr uintptr_t m_flGetupBusyDuration = 0x1668; // float32
        constexpr uintptr_t m_cameraSequenceStartSliding = 0x1670; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceEndSliding = 0x16f8; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_SlideParticle = 0x1780; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStartSound = 0x1860; // CSoundEventName
        constexpr uintptr_t m_strLoopingSound = 0x1870; // CSoundEventName
        constexpr uintptr_t m_strStopSound = 0x1880; // CSoundEventName
    }
    namespace C_InfoVisibilityBox {
        constexpr uintptr_t m_nMode = 0x564; // int32
        constexpr uintptr_t m_vBoxSize = 0x568; // Vector
        constexpr uintptr_t m_bEnabled = 0x574; // bool
    }
    namespace CAbilityTargetPracticeVData {
        constexpr uintptr_t m_TargetPracticeSelfModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetPracticeEnemyModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierHandleBase {
        constexpr uintptr_t m_hStableHandle = 0x8; // uint64
    }
    namespace C_AI_CitadelNPC {
        constexpr uintptr_t m_bBeamActive = 0xd2c; // bool
        constexpr uintptr_t m_vEyeBeamTarget = 0xd30; // Vector
        constexpr uintptr_t m_nPlayerTeamEvent = 0x11f0; // int32
        constexpr uintptr_t m_vecWeakPoints = 0x1240; // C_UtlVectorEmbeddedNetworkVar< WeakPoint_t >
        constexpr uintptr_t m_bMinion = 0x1290; // bool
        constexpr uintptr_t m_hLookTarget = 0x1294; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_CCitadelAbilityComponent = 0x1298; // CCitadelAbilityComponent
    }
    namespace C_FireSprite {
        constexpr uintptr_t m_vecMoveDir = 0x950; // Vector
        constexpr uintptr_t m_bFadeFromAbove = 0x95c; // bool
    }
    namespace CCitadel_Ability_Nano_ShadowVData {
        constexpr uintptr_t m_ShadowModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PurgeModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_EnemyAura = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flAuraRadius = 0x1580; // float32
    }
    namespace CCitadel_Ability_FissureWallVData {
        constexpr uintptr_t m_FriendlyWallParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyWallParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WallTravelSoundLoop = 0x1710; // CSoundEventName
        constexpr uintptr_t m_WallModifier = 0x1720; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Upgrade_WeaponPowerForHealthVData {
        constexpr uintptr_t m_BuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_HollowPoint_ProcVData {
        constexpr uintptr_t m_TracerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ParticleModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace ItemImbuementPair_t {
        constexpr uintptr_t m_SourceItemID = 0x30; // CUtlStringToken
        constexpr uintptr_t m_TargetAbilityID = 0x34; // CUtlStringToken
    }
    namespace CCitadel_Upgrade_AmmoScavenger {
        constexpr uintptr_t m_hLastOrbTarget = 0xcb0; // CHandle< C_BaseEntity >
    }
    namespace C_Precipitation {
        constexpr uintptr_t m_flDensity = 0x848; // float32
        constexpr uintptr_t m_flParticleInnerDist = 0x858; // float32
        constexpr uintptr_t m_pParticleDef = 0x860; // char*
        constexpr uintptr_t m_tParticlePrecipTraceTimer = 0x888; // TimedEvent[1]
        constexpr uintptr_t m_bActiveParticlePrecipEmitter = 0x890; // bool[1]
        constexpr uintptr_t m_bParticlePrecipInitialized = 0x891; // bool
        constexpr uintptr_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x892; // bool
        constexpr uintptr_t m_nAvailableSheetSequencesMaxIndex = 0x894; // int32
    }
    namespace CCitadel_ArmorUpgrade_RegeneratingBulletShieldVData {
        constexpr uintptr_t m_ActiveModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_QuickSilverVData {
        constexpr uintptr_t m_BuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ProcParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CNPC_SimpleAnimatingAIVData {
        constexpr uintptr_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    }
    namespace CAbilityCadenceSilenceContraptionsVData {
        constexpr uintptr_t m_SilenceContraptionsModifier = 0x15d8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CPrecipitationVData {
        constexpr uintptr_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flInnerDistance = 0x108; // float32
        constexpr uintptr_t m_nAttachType = 0x10c; // ParticleAttachment_t
        constexpr uintptr_t m_bBatchSameVolumeType = 0x110; // bool
        constexpr uintptr_t m_nRTEnvCP = 0x114; // int32
        constexpr uintptr_t m_nRTEnvCPComponent = 0x118; // int32
        constexpr uintptr_t m_szModifier = 0x120; // CUtlString
    }
    namespace CCitadel_Ability_Tengu_Urn {
        constexpr uintptr_t m_vLaunchPosition = 0xc98; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xca4; // QAngle
    }
    namespace CCitadel_Modifier_Killing_Blow_GlowVData {
        constexpr uintptr_t m_ShivOnlyDeathStatus = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShivOnlyDeathTrail = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strShivOnlyActivateSound = 0x7c8; // CSoundEventName
        constexpr uintptr_t m_strShivOnlyLoopSound = 0x7d8; // CSoundEventName
    }
    namespace CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
        constexpr uintptr_t m_TempShieldModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_FullSpectrumVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BonusDamageModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_AccuracyTracker {
        constexpr uintptr_t m_flProgress = 0xc0; // float32
    }
    namespace CCitadel_Modifier_Slork_Invis_VData {
        constexpr uintptr_t m_AmbushModifier = 0x8d0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_VisibleModifier = 0x8e0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_PerchedPredatorDrag {
        constexpr uintptr_t m_qRelativeOffset = 0x130; // QAngle
        constexpr uintptr_t m_flRelativeDist = 0x13c; // float32
        constexpr uintptr_t m_vecOffsetDir = 0x140; // Vector
        constexpr uintptr_t m_hFollowEnt = 0x14c; // CHandle< C_BaseEntity >
    }
    namespace CAbilityPsychicPulseVData {
        constexpr uintptr_t m_DebuffModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_PulseParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flCastEffectLifetime = 0x1640; // float32
        constexpr uintptr_t m_flConeAngle = 0x1644; // float32
        constexpr uintptr_t m_flConeHalfWidth = 0x1648; // float32
    }
    namespace CCitadel_Modifier_Hornet_Chain_Connection {
        constexpr uintptr_t m_vecOrigin = 0xc0; // Vector
    }
    namespace CCitadel_Item_Savior_VData {
        constexpr uintptr_t m_SaviorModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CastParticle = 0x15a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_BulletFlurry {
        constexpr uintptr_t m_nEffectId = 0x130; // ParticleIndex_t
        constexpr uintptr_t m_flNextSequenceChange = 0x134; // GameTime_t
        constexpr uintptr_t m_nCurrentPose = 0x138; // int32
    }
    namespace CCitadel_Modifier_MedicBulletsVData {
        constexpr uintptr_t m_ImpactParticle = 0x738; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ProcSound = 0x818; // CSoundEventName
    }
    namespace CBuoyancyHelper {
        constexpr uintptr_t m_nFluidType = 0x18; // CUtlStringToken
        constexpr uintptr_t m_flFluidDensity = 0x1c; // float32
        constexpr uintptr_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x20; // CUtlVector< float32 >
        constexpr uintptr_t m_vecWheelFrictionScales = 0x38; // CUtlVector< float32 >
        constexpr uintptr_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x50; // CUtlVector< float32 >
        constexpr uintptr_t m_vecWheelDrag = 0x68; // CUtlVector< float32 >
    }
    namespace C_BaseClientUIEntity {
        constexpr uintptr_t m_bEnabled = 0x848; // bool
        constexpr uintptr_t m_DialogXMLName = 0x850; // CUtlSymbolLarge
        constexpr uintptr_t m_PanelClassName = 0x858; // CUtlSymbolLarge
        constexpr uintptr_t m_PanelID = 0x860; // CUtlSymbolLarge
    }
    namespace C_FuncTrackTrain {
        constexpr uintptr_t m_nLongAxis = 0x840; // int32
        constexpr uintptr_t m_flRadius = 0x844; // float32
        constexpr uintptr_t m_flLineLength = 0x848; // float32
    }
    namespace CAbilitySleepBombVData {
        constexpr uintptr_t m_ExplosionParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AuraModifier = 0x1630; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Modifier_Bebop_LaserBeamVData {
        constexpr uintptr_t m_SlowModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BeamParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BeamParticleLocal = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BeamHitParticle = 0x7d8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strLaserStartSound = 0x8b8; // CSoundEventName
        constexpr uintptr_t m_strLaserEndSound = 0x8c8; // CSoundEventName
        constexpr uintptr_t m_strLaserLoopSound = 0x8d8; // CSoundEventName
        constexpr uintptr_t m_strLaserHitSound = 0x8e8; // CSoundEventName
    }
    namespace CCitadel_Modifier_Bull_Heal_Target {
        constexpr uintptr_t m_flTetherRangeSquared = 0x1d8; // float32
    }
    namespace CCitadelPlayer_CameraServices {
        constexpr uintptr_t m_hPrevPostProcessingVolume = 0x230; // CHandle< C_PostProcessingVolume >
    }
    namespace C_NPC_Trooper {
        constexpr uintptr_t m_iLane = 0x1438; // int32
        constexpr uintptr_t m_hTargetedEnemy = 0x143c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flHealingChargeParticlePct = 0x1440; // float32
    }
    namespace CModifier_WreckerSalvageBuffVData {
        constexpr uintptr_t m_WeaponBuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityAstroRifleVData {
        constexpr uintptr_t m_SelfModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_LashDownStrike {
        constexpr uintptr_t m_ImpactTime = 0xd40; // GameTime_t
        constexpr uintptr_t m_vDamagePos = 0xd44; // Vector
        constexpr uintptr_t m_PreviewEffect = 0xd54; // ParticleIndex_t
        constexpr uintptr_t m_vStrikeVel = 0xf18; // Vector
        constexpr uintptr_t m_flStartHeight = 0xf24; // float32
    }
    namespace CModifierPsychicLiftVData {
        constexpr uintptr_t m_LiftParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStartSound = 0x7c8; // CSoundEventName
    }
    namespace CAbilityMeleeVData {
        constexpr uintptr_t m_flMeleeInputBufferTime = 0x1550; // float32
        constexpr uintptr_t m_flCollisionDistance = 0x1554; // float32
        constexpr uintptr_t m_flHeavyAttackRequiredHoldTime = 0x1558; // float32
        constexpr uintptr_t m_flLightAttackMaxHoldTime = 0x155c; // float32
        constexpr uintptr_t m_MeleeDamageFlags = 0x1560; // TakeDamageFlags_t
        constexpr uintptr_t m_strEffectsAttachName = 0x1568; // CUtlString
    }
    namespace shard_model_desc_t {
        constexpr uintptr_t m_nModelID = 0x8; // int32
        constexpr uintptr_t m_hMaterialBase = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_solid = 0x20; // ShardSolid_t
        constexpr uintptr_t m_vecPanelSize = 0x24; // Vector2D
        constexpr uintptr_t m_vecStressPositionA = 0x2c; // Vector2D
        constexpr uintptr_t m_vecStressPositionB = 0x34; // Vector2D
        constexpr uintptr_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase< Vector2D >
        constexpr uintptr_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase< Vector4D >
        constexpr uintptr_t m_flGlassHalfThickness = 0x70; // float32
        constexpr uintptr_t m_bHasParent = 0x74; // bool
        constexpr uintptr_t m_bParentFrozen = 0x75; // bool
        constexpr uintptr_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
    }
    namespace C_SceneEntity::QueuedEvents_t {
        constexpr uintptr_t starttime = 0x0; // float32
    }
    namespace C_CitadelItemPickup {
        constexpr uintptr_t m_eLootType = 0xaf8; // int32
        constexpr uintptr_t m_nCurrencyValue = 0xafc; // int32
        constexpr uintptr_t m_iszModelName = 0xb00; // CUtlSymbolLarge
        constexpr uintptr_t m_flModelScale = 0xb08; // float32
        constexpr uintptr_t m_hTargetPlayer = 0xb0c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flFallRate = 0xb10; // float32
    }
    namespace CBaseProp {
        constexpr uintptr_t m_bModelOverrodeBlockLOS = 0xae8; // bool
        constexpr uintptr_t m_iShapeType = 0xaec; // int32
        constexpr uintptr_t m_bConformToCollisionBounds = 0xaf0; // bool
        constexpr uintptr_t m_mPreferredCatchTransform = 0xaf4; // matrix3x4_t
    }
    namespace CCitadel_Modifier_ThrowSandProjectile {
        constexpr uintptr_t m_vInitialCastPosition = 0x130; // Vector
        constexpr uintptr_t m_iParticleEffect = 0x13c; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_PuddleVData {
        constexpr uintptr_t m_puddleAoeDamageFx = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetDamageFx = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityHornetStingVData {
        constexpr uintptr_t m_DebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HitParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifierStormCloudVData {
        constexpr uintptr_t m_ZapFriendly = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DrawFriendly = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AoEFriendly = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZapEnemy = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DrawEnemy = 0x988; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AoEEnemy = 0xa68; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strChannelEndingSoonSound = 0xb48; // CSoundEventName
        constexpr uintptr_t m_strChannelFinishedSound = 0xb58; // CSoundEventName
        constexpr uintptr_t m_strDamageRecievedSound = 0xb68; // CSoundEventName
        constexpr uintptr_t m_strAmbientZapSound = 0xb78; // CSoundEventName
    }
    namespace CBaseModifier {
        constexpr uintptr_t m_nSerialNumber = 0x28; // ModifierSerialNumber_t
        constexpr uintptr_t m_flLastAppliedTime = 0x2c; // GameTime_t
        constexpr uintptr_t m_flCreationTime = 0x30; // GameTime_t
        constexpr uintptr_t m_flDuration = 0x34; // float32
        constexpr uintptr_t m_hCaster = 0x38; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hAbility = 0x3c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hAuraProvider = 0x40; // CModifierHandleBase
        constexpr uintptr_t m_nAbilitySubclassID = 0x58; // CUtlStringToken
        constexpr uintptr_t m_iAttributes = 0x5c; // uint8
        constexpr uintptr_t m_iTeam = 0x5d; // uint8
        constexpr uintptr_t m_iStackCount = 0x5e; // int16
        constexpr uintptr_t m_iMaxStackCount = 0x60; // int16
        constexpr uintptr_t m_pVecStackDecayTimes = 0x68; // CUtlVector< GameTime_t >*
        constexpr uintptr_t m_eDestroyReason = 0x70; // uint8
        constexpr uintptr_t m_bDisabled = 0x71; // bool
        constexpr uintptr_t m_bSuppressSendModifier = 0x72; // bool
        constexpr uintptr_t m_flThinkInterval = 0x74; // float32
        constexpr uintptr_t m_flThinkIntervalStartTime = 0x78; // GameTime_t
        constexpr uintptr_t m_flTimeScale = 0x7c; // float32
        constexpr uintptr_t m_pVecTrackedObjects = 0x80; // CUtlVector< IModifierTrackedObject* >*
        constexpr uintptr_t m_hModifierListHandle = 0x88; // ModifierRuntimeHandle_t
    }
    namespace CCitadel_Ability_Fathom_ScaldingSpray_VData {
        constexpr uintptr_t m_AuraModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CItemXP {
        constexpr uintptr_t m_timeLaunch = 0x8a0; // GameTime_t
    }
    namespace CModifier_Synth_Grasp_Victim_VData {
        constexpr uintptr_t m_strVictimTetheredSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_GraspVictimParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityRiotProtocolVData {
        constexpr uintptr_t m_ChargeUpParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastDelayModifier = 0x1710; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_WardenBuffModifier = 0x1720; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Chrono_KineticCarbineVData {
        constexpr uintptr_t m_TracerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FullyChargedParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strFullyCharged = 0x7c8; // CSoundEventName
        constexpr uintptr_t m_strShotSound = 0x7d8; // CSoundEventName
    }
    namespace C_Citadel_Destroyable_Building {
        constexpr uintptr_t m_CCitadelAbilityComponent = 0xaf0; // CCitadelAbilityComponent
        constexpr uintptr_t m_vecWeakPoints = 0xc90; // C_UtlVectorEmbeddedNetworkVar< WeakPoint_t >
        constexpr uintptr_t m_bDestroyed = 0xce0; // bool
        constexpr uintptr_t m_bActive = 0xce1; // bool
        constexpr uintptr_t m_bFinal = 0xce2; // bool
    }
    namespace CItem_RestorativeLocket {
        constexpr uintptr_t m_nNumStacks = 0xd58; // int32
    }
    namespace CCitadel_TechUpgrade_SuperAcolyteGloves {
        constexpr uintptr_t fl_StoredDamage = 0xce8; // float32
    }
    namespace CPointTemplate {
        constexpr uintptr_t m_iszWorldName = 0x560; // CUtlSymbolLarge
        constexpr uintptr_t m_iszSource2EntityLumpName = 0x568; // CUtlSymbolLarge
        constexpr uintptr_t m_iszEntityFilterName = 0x570; // CUtlSymbolLarge
        constexpr uintptr_t m_flTimeoutInterval = 0x578; // float32
        constexpr uintptr_t m_bAsynchronouslySpawnEntities = 0x57c; // bool
        constexpr uintptr_t m_pOutputOnSpawned = 0x580; // CEntityIOOutput
        constexpr uintptr_t m_clientOnlyEntityBehavior = 0x5a8; // PointTemplateClientOnlyEntityBehavior_t
        constexpr uintptr_t m_ownerSpawnGroupType = 0x5ac; // PointTemplateOwnerSpawnGroupType_t
        constexpr uintptr_t m_createdSpawnGroupHandles = 0x5b0; // CUtlVector< uint32 >
        constexpr uintptr_t m_SpawnedEntityHandles = 0x5c8; // CUtlVector< CEntityHandle >
        constexpr uintptr_t m_ScriptSpawnCallback = 0x5e0; // HSCRIPT
        constexpr uintptr_t m_ScriptCallbackScope = 0x5e8; // HSCRIPT
    }
    namespace CAbilityFealtyVData {
        constexpr uintptr_t m_TargetModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Ability_LifeDrainVData {
        constexpr uintptr_t m_LifeDrainTargetModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_LifeDrainCasterModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_BoxingGloveVData {
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SwingParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x728; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Viscous_TelepunchVData {
        constexpr uintptr_t m_PortalParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PunchParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WallPunchParticle = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CeilingPunchParticle = 0x18d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyPortalSound = 0x19b0; // CSoundEventName
        constexpr uintptr_t m_SelfPortalSound = 0x19c0; // CSoundEventName
        constexpr uintptr_t m_WindupSound = 0x19d0; // CSoundEventName
        constexpr uintptr_t m_PunchSound = 0x19e0; // CSoundEventName
        constexpr uintptr_t m_PunchRollSlowModifier = 0x19f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImpactModifier = 0x1a00; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flEnemyPortalTelegraphTime = 0x1a10; // float32
        constexpr uintptr_t m_flSelfPortalTelegraphTime = 0x1a14; // float32
        constexpr uintptr_t m_flWindupTime = 0x1a18; // float32
        constexpr uintptr_t m_flAttackTime = 0x1a1c; // float32
        constexpr uintptr_t m_flGroundTraceOnPlayerHitDistance = 0x1a20; // float32
        constexpr uintptr_t m_flPlayerCheckSphereRadius = 0x1a24; // float32
    }
    namespace CInfoDynamicShadowHint {
        constexpr uintptr_t m_bDisabled = 0x560; // bool
        constexpr uintptr_t m_flRange = 0x564; // float32
        constexpr uintptr_t m_nImportance = 0x568; // int32
        constexpr uintptr_t m_nLightChoice = 0x56c; // int32
        constexpr uintptr_t m_hLight = 0x570; // CHandle< C_BaseEntity >
    }
    namespace CAbility_Synth_Blitz {
        constexpr uintptr_t m_vecSpecialShots = 0xc98; // CUtlVector< ShotID_t >
        constexpr uintptr_t m_nFastFireBulletsLeft = 0xcb0; // int32
        constexpr uintptr_t m_flBlitzEndTime = 0xcb8; // CCitadelAutoScaledTime
        constexpr uintptr_t m_bCanApplyTechAmp = 0xcd0; // bool
        constexpr uintptr_t m_bCanLifesteal = 0xcd1; // bool
    }
    namespace CAbility_Synth_Pulse_VData {
        constexpr uintptr_t m_EscapeModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AoEParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EffectParticle = 0x1650; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChannelParticle = 0x1730; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x1810; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RadiusParticle = 0x18f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExpireSound = 0x19d0; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceInSatchel = 0x19e0; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Modifier_RocketBarrageVolleyVData {
        constexpr uintptr_t m_strFireSound = 0x608; // CSoundEventName
    }
    namespace CModifierContainmentVictimVData {
        constexpr uintptr_t m_AreaParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChainedParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CGlowProperty {
        constexpr uintptr_t m_fGlowColor = 0x8; // Vector
        constexpr uintptr_t m_iGlowType = 0x30; // int32
        constexpr uintptr_t m_iGlowTeam = 0x34; // int32
        constexpr uintptr_t m_nGlowRange = 0x38; // int32
        constexpr uintptr_t m_nGlowRangeMin = 0x3c; // int32
        constexpr uintptr_t m_glowColorOverride = 0x40; // Color
        constexpr uintptr_t m_bFlashing = 0x44; // bool
        constexpr uintptr_t m_flGlowTime = 0x48; // float32
        constexpr uintptr_t m_flGlowStartTime = 0x4c; // float32
        constexpr uintptr_t m_bGlowing = 0x50; // bool
    }
    namespace C_TriggerPhysics {
        constexpr uintptr_t m_gravityScale = 0x848; // float32
        constexpr uintptr_t m_linearLimit = 0x84c; // float32
        constexpr uintptr_t m_linearDamping = 0x850; // float32
        constexpr uintptr_t m_angularLimit = 0x854; // float32
        constexpr uintptr_t m_angularDamping = 0x858; // float32
        constexpr uintptr_t m_linearForce = 0x85c; // float32
        constexpr uintptr_t m_flFrequency = 0x860; // float32
        constexpr uintptr_t m_flDampingRatio = 0x864; // float32
        constexpr uintptr_t m_vecLinearForcePointAt = 0x868; // Vector
        constexpr uintptr_t m_bCollapseToForcePoint = 0x874; // bool
        constexpr uintptr_t m_vecLinearForcePointAtWorld = 0x878; // Vector
        constexpr uintptr_t m_vecLinearForceDirection = 0x884; // Vector
        constexpr uintptr_t m_bConvertToDebrisWhenPossible = 0x890; // bool
    }
    namespace CCitadel_Modifier_HookTargetVData {
        constexpr uintptr_t m_flApproachingWhooshAnticipationTime = 0x608; // float32
        constexpr uintptr_t m_flCloseEnoughDistance = 0x60c; // float32
        constexpr uintptr_t m_flTossUpSpeed = 0x610; // float32
        constexpr uintptr_t m_SlowModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HookRetrieveParticle = 0x628; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strRetractSound = 0x708; // CSoundEventName
        constexpr uintptr_t m_strRetractSoundEnd = 0x718; // CSoundEventName
        constexpr uintptr_t m_strApproachingWhooshSound = 0x728; // CSoundEventName
    }
    namespace CItem_RestorativeLocket_VData {
        constexpr uintptr_t m_CastParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TrailParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_CharmedWraps_VData {
        constexpr uintptr_t m_SwingParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_EnvCubemap {
        constexpr uintptr_t m_Entity_hCubemapTexture = 0x5e0; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_Entity_bCustomCubemapTexture = 0x5e8; // bool
        constexpr uintptr_t m_Entity_flInfluenceRadius = 0x5ec; // float32
        constexpr uintptr_t m_Entity_vBoxProjectMins = 0x5f0; // Vector
        constexpr uintptr_t m_Entity_vBoxProjectMaxs = 0x5fc; // Vector
        constexpr uintptr_t m_Entity_bMoveable = 0x608; // bool
        constexpr uintptr_t m_Entity_nHandshake = 0x60c; // int32
        constexpr uintptr_t m_Entity_nEnvCubeMapArrayIndex = 0x610; // int32
        constexpr uintptr_t m_Entity_nPriority = 0x614; // int32
        constexpr uintptr_t m_Entity_flEdgeFadeDist = 0x618; // float32
        constexpr uintptr_t m_Entity_vEdgeFadeDists = 0x61c; // Vector
        constexpr uintptr_t m_Entity_flDiffuseScale = 0x628; // float32
        constexpr uintptr_t m_Entity_bStartDisabled = 0x62c; // bool
        constexpr uintptr_t m_Entity_bDefaultEnvMap = 0x62d; // bool
        constexpr uintptr_t m_Entity_bDefaultSpecEnvMap = 0x62e; // bool
        constexpr uintptr_t m_Entity_bIndoorCubeMap = 0x62f; // bool
        constexpr uintptr_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x630; // bool
        constexpr uintptr_t m_Entity_bEnabled = 0x640; // bool
    }
    namespace CCitadel_Ability_Yakuza_Shakedown {
        constexpr uintptr_t m_IgnoreChannelSlow = 0xc98; // int32
    }
    namespace CCitadel_Item_CheatDeathVData {
        constexpr uintptr_t m_DamagePulseParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DamageTargetParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sHealPulseSound = 0x1758; // CSoundEventName
        constexpr uintptr_t m_sHealAndDamagePulseSound = 0x1768; // CSoundEventName
        constexpr uintptr_t m_DeathImmuneModifier = 0x1778; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Succor_Move {
        constexpr uintptr_t m_bHasPulled = 0xc0; // bool
        constexpr uintptr_t m_bIsPulling = 0xc1; // bool
    }
    namespace CCitadel_Modifier_ChronoSwap_BubbleMove {
        constexpr uintptr_t m_bOtherIsInFrontAtStart = 0xc0; // bool
        constexpr uintptr_t m_vOtherToDest = 0xc4; // Vector
        constexpr uintptr_t m_vStart = 0xd0; // Vector
        constexpr uintptr_t m_vDest = 0xdc; // Vector
        constexpr uintptr_t m_hOther = 0xe8; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vLastSafePos = 0xec; // Vector
        constexpr uintptr_t m_nNumTicks = 0xf8; // int32
        constexpr uintptr_t m_nTicksLeft = 0xfc; // int32
        constexpr uintptr_t m_nBeamIndex = 0x100; // ParticleIndex_t
    }
    namespace C_Citadel_FissureWall {
        constexpr uintptr_t m_vStartPos = 0xae8; // Vector
        constexpr uintptr_t m_vEndPos = 0xaf4; // Vector
        constexpr uintptr_t m_flStartEmitTime = 0xb00; // GameTime_t
        constexpr uintptr_t m_flEndEmitTime = 0xb04; // GameTime_t
        constexpr uintptr_t m_bSolid = 0xb08; // bool
        constexpr uintptr_t m_nTouchCount = 0xb0c; // int32
    }
    namespace CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
        constexpr uintptr_t m_bRollOnceForAllBulletsInAShot = 0x608; // bool
        constexpr uintptr_t m_flMaxBulletsToProcInShot = 0x60c; // float32
        constexpr uintptr_t m_bCanProcMultipleTimesFromSameShot = 0x610; // bool
        constexpr uintptr_t m_bRequiresTargetFilter = 0x611; // bool
        constexpr uintptr_t m_ProcReadyModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PassiveVictimModifier = 0x628; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ProcReadyParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TracerAdditionParticle = 0x718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeParticle = 0x7f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_OnBulletRolledProcSound = 0x8d8; // CSoundEventName
        constexpr uintptr_t m_ProcSound = 0x8e8; // CSoundEventName
        constexpr uintptr_t m_ExplodeSound = 0x8f8; // CSoundEventName
    }
    namespace CCitadel_Modifier_ViscousBall {
        constexpr uintptr_t m_nDirectionParticleIndex = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_Ability_PassiveBeefyVData {
        constexpr uintptr_t m_HealParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_IntensifyingClip {
        constexpr uintptr_t m_LastThinkTime = 0x130; // GameTime_t
        constexpr uintptr_t m_flSpinUpTime = 0x134; // float32
    }
    namespace CPropAnimatingBreakable {
        constexpr uintptr_t m_stages = 0xae8; // CBreakableStageHelper
        constexpr uintptr_t m_OnTakeDamage = 0xb00; // CEntityIOOutput
        constexpr uintptr_t m_OnFinalBreak = 0xb28; // CEntityIOOutput
        constexpr uintptr_t m_OnStageAdvanced = 0xb50; // CEntityIOOutput
    }
    namespace CAbilityStickyBombVData {
        constexpr uintptr_t m_BombAttachedModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CastBombParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_PointValueRemapper {
        constexpr uintptr_t m_bDisabled = 0x560; // bool
        constexpr uintptr_t m_bDisabledOld = 0x561; // bool
        constexpr uintptr_t m_bUpdateOnClient = 0x562; // bool
        constexpr uintptr_t m_nInputType = 0x564; // ValueRemapperInputType_t
        constexpr uintptr_t m_hRemapLineStart = 0x568; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hRemapLineEnd = 0x56c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flMaximumChangePerSecond = 0x570; // float32
        constexpr uintptr_t m_flDisengageDistance = 0x574; // float32
        constexpr uintptr_t m_flEngageDistance = 0x578; // float32
        constexpr uintptr_t m_bRequiresUseKey = 0x57c; // bool
        constexpr uintptr_t m_nOutputType = 0x580; // ValueRemapperOutputType_t
        constexpr uintptr_t m_hOutputEntities = 0x588; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_nHapticsType = 0x5a0; // ValueRemapperHapticsType_t
        constexpr uintptr_t m_nMomentumType = 0x5a4; // ValueRemapperMomentumType_t
        constexpr uintptr_t m_flMomentumModifier = 0x5a8; // float32
        constexpr uintptr_t m_flSnapValue = 0x5ac; // float32
        constexpr uintptr_t m_flCurrentMomentum = 0x5b0; // float32
        constexpr uintptr_t m_nRatchetType = 0x5b4; // ValueRemapperRatchetType_t
        constexpr uintptr_t m_flRatchetOffset = 0x5b8; // float32
        constexpr uintptr_t m_flInputOffset = 0x5bc; // float32
        constexpr uintptr_t m_bEngaged = 0x5c0; // bool
        constexpr uintptr_t m_bFirstUpdate = 0x5c1; // bool
        constexpr uintptr_t m_flPreviousValue = 0x5c4; // float32
        constexpr uintptr_t m_flPreviousUpdateTickTime = 0x5c8; // GameTime_t
        constexpr uintptr_t m_vecPreviousTestPoint = 0x5cc; // Vector
    }
    namespace CCitadel_Modifier_Fathom_ReefdwellerHarpoon_Move_VData {
        constexpr uintptr_t m_LatchedModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BeamParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealParticle = 0x6f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DamageParticle = 0x7d8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifierQuarantineVData {
        constexpr uintptr_t m_BubbleParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BubbleExplodeParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SilenceModifier = 0x7c8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_Citadel_BreakblePropGoldPickup {
        constexpr uintptr_t m_iGoldReward = 0xb00; // int32
    }
    namespace CCitadel_Item_Intensifying_Clip {
        constexpr uintptr_t m_flSpinUpTime = 0xce8; // float32
    }
    namespace CCitadelViscousBallVData {
        constexpr uintptr_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_flPhysicsRadius = 0x108; // float32
    }
    namespace CCitadel_WeaponUpgrade_HeadshotBooster_VData {
        constexpr uintptr_t m_HeadShotVictimSound = 0x1598; // CSoundEventName
        constexpr uintptr_t m_HeadShotConfirmationSound = 0x15a8; // CSoundEventName
    }
    namespace C_NPC_TrooperBoss {
        constexpr uintptr_t m_CCitadelPlayerClipComponent = 0x1480; // CCitadelPlayerClipComponent
        constexpr uintptr_t m_flFadeOutStart = 0x14ac; // GameTime_t
        constexpr uintptr_t m_flFadeOutEnd = 0x14b0; // GameTime_t
    }
    namespace CAbilityBouncePadVData {
        constexpr uintptr_t m_BounceModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AllyBounceModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SpeedOnLandModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_NoBounceModifier = 0x1580; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Melee_Base {
        constexpr uintptr_t m_bUsingThisMelee = 0xc98; // bool
        constexpr uintptr_t m_bUsingMeleeTagActive = 0xc99; // bool
        constexpr uintptr_t m_bHitWithThisAttack = 0xc9a; // bool
        constexpr uintptr_t m_flLastActivateTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_flNextAttackAllowedTime = 0xca0; // GameTime_t
        constexpr uintptr_t m_flAttackTriggeredTime = 0xca4; // GameTime_t
    }
    namespace C_SoundOpvarSetPointBase {
        constexpr uintptr_t m_iszStackName = 0x560; // CUtlSymbolLarge
        constexpr uintptr_t m_iszOperatorName = 0x568; // CUtlSymbolLarge
        constexpr uintptr_t m_iszOpvarName = 0x570; // CUtlSymbolLarge
        constexpr uintptr_t m_iOpvarIndex = 0x578; // int32
        constexpr uintptr_t m_bUseAutoCompare = 0x57c; // bool
    }
    namespace CCitadel_Modifier_PristineEmblem_VData {
        constexpr uintptr_t m_TracerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ParticleModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Nano_Pounce_VData {
        constexpr uintptr_t m_LeapModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ActiveBuff = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DoublePounceModifier = 0x1580; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AttackParticle = 0x1590; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlashParticle = 0x1670; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1750; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSlowParticle = 0x1830; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PrimaryHitParticle = 0x1910; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AttackSound = 0x19f0; // CSoundEventName
        constexpr uintptr_t m_strExplodeSound = 0x1a00; // CSoundEventName
        constexpr uintptr_t m_flAttackTimePhase01 = 0x1a10; // float32
        constexpr uintptr_t m_flAttackTimePhase02 = 0x1a14; // float32
        constexpr uintptr_t m_flAllyMinTargetRange = 0x1a18; // float32
        constexpr uintptr_t m_flTargetVerticalOffset = 0x1a1c; // float32
    }
    namespace CAbilityHornetChainVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_ChainModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DisarmModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_GuidedArrow {
        constexpr uintptr_t m_hProjectile = 0xca0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flArrowSpeed = 0xca4; // float32
        constexpr uintptr_t m_flSnapAnglesBackTime = 0xca8; // GameTime_t
        constexpr uintptr_t m_nBonusTechPower = 0xcac; // int32
        constexpr uintptr_t m_flCastTime = 0xcb0; // GameTime_t
        constexpr uintptr_t m_bNeedsExplosion = 0xcb4; // bool
        constexpr uintptr_t m_vProjectileRemovedOrigin = 0xcb8; // Vector
        constexpr uintptr_t m_angCasterAnglesAtCastTime = 0xcc4; // QAngle
        constexpr uintptr_t m_flTravelDistance = 0xcd0; // float32
        constexpr uintptr_t m_bInKillFlow = 0xcd4; // bool
        constexpr uintptr_t m_flProjectileTurnVel = 0xcd8; // float32
    }
    namespace CCitadel_Modifier_FireBombVData {
        constexpr uintptr_t m_ChargeParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_GroundParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_HoldMelee {
        constexpr uintptr_t m_flParryWindowEndTime = 0xd18; // GameTime_t
        constexpr uintptr_t m_flNextParryTime = 0xd1c; // GameTime_t
        constexpr uintptr_t m_flStateStartTime = 0xd20; // GameTime_t
        constexpr uintptr_t m_flDashStartTime = 0xd24; // GameTime_t
        constexpr uintptr_t m_eCurrentAttackState = 0xd28; // EMeleeHold_AttackState
        constexpr uintptr_t m_eCurrentAttackType = 0xd2c; // EMeleeHold_AttackType
        constexpr uintptr_t m_vAirDashDir = 0xd30; // Vector
        constexpr uintptr_t m_bAttackStartedWhileSliding = 0xd3c; // bool
        constexpr uintptr_t m_bCreatedChargeEffects = 0xd3d; // bool
        constexpr uintptr_t m_angForced = 0xd40; // QAngle
    }
    namespace CCitadelModifierApexWatcherVData {
        constexpr uintptr_t m_BuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityJumpVData {
        constexpr uintptr_t m_flShootingLockoutAfterJump = 0x1550; // float32
        constexpr uintptr_t m_DashJumpParticle = 0x1558; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AirJumpParticle = 0x1638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WallJumpParticle = 0x1718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AirJumpExecutedSound = 0x17f8; // CSoundEventName
        constexpr uintptr_t m_flMantleRefundWindow = 0x1808; // float32
        constexpr uintptr_t m_flZiplineRefundWindow = 0x180c; // float32
        constexpr uintptr_t m_flLateJumpGraceWindow = 0x1810; // float32
        constexpr uintptr_t m_flMaxSpeedDelta = 0x1814; // float32
        constexpr uintptr_t m_strDashJumpActivate = 0x1818; // CSoundEventName
        constexpr uintptr_t m_flDashJumpStartTime = 0x1828; // float32
        constexpr uintptr_t m_flDashJumpEndTime = 0x182c; // float32
        constexpr uintptr_t m_flDashJumpDistanceInMeters = 0x1830; // float32
        constexpr uintptr_t m_flDashJumpVerticalSpeed = 0x1838; // float32
        constexpr uintptr_t m_flDashJumpMissMaxSpeed = 0x183c; // float32
        constexpr uintptr_t m_flDashJumpMantleDisableTime = 0x1840; // float32
        constexpr uintptr_t m_WallJumpExecutedSound = 0x1848; // CSoundEventName
        constexpr uintptr_t m_flCollidedWallMaxDist = 0x1858; // float32
        constexpr uintptr_t m_flRemapSpeedToWallJumpVelocityDist = 0x185c; // CRemapFloat
        constexpr uintptr_t m_flWallJumpNormalSpeed = 0x186c; // float32
        constexpr uintptr_t m_WallJumpAirDragCurve = 0x1870; // CPiecewiseCurve
        constexpr uintptr_t m_flMaxWallYawOffset = 0x18b0; // float32
    }
    namespace CCitadel_Modifier_Objective_BulletReistVData {
        constexpr uintptr_t m_BulletResist = 0x608; // float32
        constexpr uintptr_t m_BulletResistReductionPerHero = 0x60c; // float32
    }
    namespace WeakPoint_t {
        constexpr uintptr_t m_bRegistered = 0x3c; // bool
        constexpr uintptr_t m_hOuter = 0x40; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nCritHitGroup = 0x44; // HitGroup_t
        constexpr uintptr_t m_nBodyGroup = 0x48; // int32
        constexpr uintptr_t m_bPermanentlyBroken = 0x4c; // bool
        constexpr uintptr_t m_nBrokenBodygroupIndex = 0x50; // int32
    }
    namespace C_NPC_SimpleAnimatingAI {
        constexpr uintptr_t m_hEnemy = 0xae8; // CHandle< C_BaseEntity >
    }
    namespace CCitadel_Modifier_Slork_Raging_Current_Countdown {
        constexpr uintptr_t m_hRingEffect = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_Ability_IcePathVData {
        constexpr uintptr_t m_IcePathModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flMomentumDecayRate = 0x1560; // float32
        constexpr uintptr_t m_flMomentumWeight = 0x1564; // float32
        constexpr uintptr_t m_flMaxPitchChange = 0x1568; // float32
        constexpr uintptr_t m_flMaxPitchUp = 0x156c; // float32
        constexpr uintptr_t m_flMaxPitchDown = 0x1570; // float32
        constexpr uintptr_t m_flMaxHeight = 0x1574; // float32
        constexpr uintptr_t m_flForwardAngleBias = 0x1578; // float32
    }
    namespace CCitadel_Ability_HealthSwapVData {
        constexpr uintptr_t m_SwapParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SwapModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PreCastModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadelControlPointTrigger {
        constexpr uintptr_t m_flInitialRadius = 0x848; // float32
        constexpr uintptr_t m_flEndRadius = 0x84c; // float32
        constexpr uintptr_t m_flProgress = 0x850; // float32
        constexpr uintptr_t m_flCaptureTime = 0x854; // float32
        constexpr uintptr_t m_hUnlockPrereq = 0x858; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bAvailable = 0x85c; // bool
        constexpr uintptr_t m_bIsBeingCaptured = 0x85d; // bool
        constexpr uintptr_t m_bIsBeingBlocked = 0x85e; // bool
        constexpr uintptr_t m_flLastTouchedTime = 0x868; // GameTime_t
        constexpr uintptr_t m_vecBeamTarget = 0x86c; // Vector
        constexpr uintptr_t m_vecBeamStart = 0x878; // Vector
        constexpr uintptr_t m_nFXProgressBeam = 0x884; // ParticleIndex_t
        constexpr uintptr_t m_strUnlockPrereq = 0x888; // CUtlSymbolLarge
        constexpr uintptr_t m_strBeamStart = 0x890; // CUtlSymbolLarge
        constexpr uintptr_t m_strBeamTarget = 0x898; // CUtlSymbolLarge
    }
    namespace CModifierLastBreathVData {
        constexpr uintptr_t m_ShieldParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BulletShieldHitParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TechShieldHitParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStartSound = 0x988; // CSoundEventName
        constexpr uintptr_t m_ExplodeSound = 0x998; // CSoundEventName
        constexpr uintptr_t m_flShieldImpactEffectDuration = 0x9a8; // float32
        constexpr uintptr_t m_BulletShieldImpactModifier = 0x9b0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TechShieldImpactModifier = 0x9c0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
        constexpr uintptr_t m_strLaserHitSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_strLaserStartSound = 0x618; // CSoundEventName
        constexpr uintptr_t m_strLaserLoopSound = 0x628; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_PsychicDagger_MakeDaggers {
        constexpr uintptr_t m_nSatVolumeIndex = 0xc0; // SatVolumeIndex_t
    }
    namespace CCitadel_Modifier_Bull_Leap_Boosting_CrashVData {
        constexpr uintptr_t m_DragModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CrashTrailParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flCollideRadius = 0x6f8; // float32
    }
    namespace CCitadel_Ability_PrimaryWeapon {
        constexpr uintptr_t m_flNextPrimaryAttack = 0xc98; // GameTime_t
        constexpr uintptr_t m_iClip = 0xc9c; // int32
        constexpr uintptr_t m_iBonusClip = 0xca0; // int32
        constexpr uintptr_t m_flSpreadPenalty = 0xca4; // float32
        constexpr uintptr_t m_flZoomTime = 0xca8; // GameTime_t
        constexpr uintptr_t m_flZoomOutTime = 0xcac; // GameTime_t
        constexpr uintptr_t m_iSpreadIndex = 0xcb0; // int8
        constexpr uintptr_t m_nShotRecoilIndex = 0xcb2; // int16
        constexpr uintptr_t m_flNextShotRecoilRecoveryTime = 0xcb4; // GameTime_t
        constexpr uintptr_t m_bIsZoomed = 0xcb8; // bool
        constexpr uintptr_t m_nBurstShotsRemaining = 0xcb9; // uint8
        constexpr uintptr_t m_nShotNumber = 0xcbc; // uint32
        constexpr uintptr_t m_bInReload = 0xcc0; // bool
        constexpr uintptr_t m_bSingleShotReloadFirstBullet = 0xcc1; // bool
        constexpr uintptr_t m_reloadQueuedStartTime = 0xcc4; // GameTime_t
        constexpr uintptr_t m_flReloadAvailableTime = 0xcc8; // GameTime_t
        constexpr uintptr_t m_bCanActiveReload = 0xccc; // bool
        constexpr uintptr_t m_flLastAttackTime = 0xcd0; // GameTime_t
        constexpr uintptr_t m_flNextAttackDelayStartTime = 0xcd4; // GameTime_t
        constexpr uintptr_t m_flNextAttackDelayEndTime = 0xcd8; // GameTime_t
        constexpr uintptr_t m_flAttackDelayPauseTotalTime = 0xcdc; // float32
        constexpr uintptr_t m_flAttackDelayPauseEndTime = 0xce0; // GameTime_t
        constexpr uintptr_t m_eNextAttackDelayReason = 0xce4; // ENextAttackDelayReason_t
        constexpr uintptr_t m_bInputPressedWhileSelected = 0xce8; // bool
        constexpr uintptr_t m_eActiveFireMode = 0xcec; // EFireMode_t
        constexpr uintptr_t m_angRecoilAngles = 0xcf0; // QAngle
        constexpr uintptr_t m_angRecoilToAdd = 0xcfc; // QAngle
        constexpr uintptr_t m_angRecoilRecovery = 0xd08; // QAngle
        constexpr uintptr_t m_flRecoilStartTime = 0xd14; // GameTime_t
        constexpr uintptr_t m_flRecoilRecoverySpeed = 0xd18; // float32
        constexpr uintptr_t m_flAddApproachSpeed = 0xd1c; // float32
        constexpr uintptr_t m_bFireBackwards = 0xd20; // bool
        constexpr uintptr_t m_currentSpread = 0xd24; // float32
        constexpr uintptr_t m_currentMaxSpread = 0xd28; // float32
        constexpr uintptr_t m_currentFireSpread = 0xd2c; // float32
        constexpr uintptr_t m_flCurrentSpinRate = 0xd30; // float32
        constexpr uintptr_t m_fFireDuration = 0xd38; // float32
        constexpr uintptr_t m_bFireOnEmpty = 0xd3d; // bool
        constexpr uintptr_t m_flNextDisarmSound = 0xd40; // GameTime_t
    }
    namespace CCitadel_Modifier_SleepBombVData {
        constexpr uintptr_t m_BombParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeDamageFriendlyParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeDamageEnemyParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SleepModifier = 0x8a8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strExplodeSound = 0x8b8; // CSoundEventName
    }
    namespace CCitadel_Modifier_Surging_PowerVData {
        constexpr uintptr_t m_BerserkerSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_ModifierActiveDisplay = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Neutral_Debuff_PushbackVData {
        constexpr uintptr_t m_flPushSpeed = 0x608; // float32
        constexpr uintptr_t m_flPushRange = 0x60c; // float32
    }
    namespace CInfoDynamicShadowHintBox {
        constexpr uintptr_t m_vBoxMins = 0x578; // Vector
        constexpr uintptr_t m_vBoxMaxs = 0x584; // Vector
    }
    namespace CAbilitySlorkScaldVData {
        constexpr uintptr_t m_DebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImpactParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifierAirLiftGrabVData {
        constexpr uintptr_t m_GrabEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flLiftHorizontal = 0x6e8; // float32
        constexpr uintptr_t m_flLiftHeight = 0x6ec; // float32
        constexpr uintptr_t m_flFollowDampingFactor = 0x6f0; // float32
        constexpr uintptr_t m_flFollowDistance = 0x6f4; // float32
        constexpr uintptr_t m_flAllyGrabCancelTime = 0x6f8; // float32
        constexpr uintptr_t m_flAllyPossibleStuckDistance = 0x6fc; // float32
    }
    namespace CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
        constexpr uintptr_t m_vHoldOffset = 0xc0; // Vector
        constexpr uintptr_t m_flLastTouchTime = 0xcc; // float32
    }
    namespace CCitadel_WeaponUpgrade_InstantReloadVData {
        constexpr uintptr_t m_ReloadParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_TeleportToObjective {
        constexpr uintptr_t m_vDest = 0xc0; // Vector
        constexpr uintptr_t m_angDestAngles = 0xcc; // QAngle
        constexpr uintptr_t m_vDestVelocity = 0xd8; // Vector
    }
    namespace C_Citadel_Ice_Path_Shard_Physics {
        constexpr uintptr_t m_ShardDesc = 0x840; // ice_path_shard_model_desc_t
        constexpr uintptr_t m_qForward = 0x878; // QAngle
        constexpr uintptr_t m_flStartTime = 0x884; // GameTime_t
        constexpr uintptr_t m_flEndTime = 0x888; // GameTime_t
    }
    namespace CAbilityPerchedPredatorVData {
        constexpr uintptr_t m_ExplodeBaseParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeFriendlyParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeEnemyParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x17f0; // CSoundEventName
        constexpr uintptr_t m_ModifierDragEnemy = 0x1800; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flOnHitDetonateTimer = 0x1810; // float32
        constexpr uintptr_t m_flTraceTravelRadius = 0x1814; // float32
    }
    namespace CCitadel_Modifier_UppercutClipSize {
        constexpr uintptr_t m_nPreClipSize = 0xf8; // int32
    }
    namespace CCitadel_Modifier_SpeedBoostVData {
        constexpr uintptr_t m_flMoveSpeedBoost = 0x608; // float32
    }
    namespace CBaseTriggerAbilityVData {
        constexpr uintptr_t m_AbilityToTrigger = 0x1550; // CSubclassName< 4 >
        constexpr uintptr_t m_flMinCancelTime = 0x1560; // float32
        constexpr uintptr_t m_eHintFeatureToMarkUsedOnTrigger = 0x1564; // ECitadelHintFeature
    }
    namespace C_EnvCubemapFog {
        constexpr uintptr_t m_flEndDistance = 0x560; // float32
        constexpr uintptr_t m_flStartDistance = 0x564; // float32
        constexpr uintptr_t m_flFogFalloffExponent = 0x568; // float32
        constexpr uintptr_t m_bHeightFogEnabled = 0x56c; // bool
        constexpr uintptr_t m_flFogHeightWidth = 0x570; // float32
        constexpr uintptr_t m_flFogHeightEnd = 0x574; // float32
        constexpr uintptr_t m_flFogHeightStart = 0x578; // float32
        constexpr uintptr_t m_flFogHeightExponent = 0x57c; // float32
        constexpr uintptr_t m_flLODBias = 0x580; // float32
        constexpr uintptr_t m_bActive = 0x584; // bool
        constexpr uintptr_t m_bStartDisabled = 0x585; // bool
        constexpr uintptr_t m_flFogMaxOpacity = 0x588; // float32
        constexpr uintptr_t m_nCubemapSourceType = 0x58c; // int32
        constexpr uintptr_t m_hSkyMaterial = 0x590; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_iszSkyEntity = 0x598; // CUtlSymbolLarge
        constexpr uintptr_t m_hFogCubemapTexture = 0x5a0; // CStrongHandle< InfoForResourceTypeCTextureBase >
        constexpr uintptr_t m_bHasHeightFogEnd = 0x5a8; // bool
        constexpr uintptr_t m_bFirstTime = 0x5a9; // bool
    }
    namespace CCitadel_Modifier_Afterburn_DOT_VData {
        constexpr uintptr_t m_sAfterburnParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Fervor_Bonuses {
        constexpr uintptr_t m_nBonusesParticle = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_Rutger_Pulse_Aura {
        constexpr uintptr_t m_flStartRadius = 0xe0; // float32
        constexpr uintptr_t m_flEndRadius = 0xe4; // float32
        constexpr uintptr_t m_flSpreadDuration = 0xe8; // float32
    }
    namespace CCitadel_ArmorUpgrade_DoubleJump {
        constexpr uintptr_t m_nTickJumped = 0xcb0; // int32
    }
    namespace CModifierChargedTacklePrepareVData {
        constexpr uintptr_t m_PrepareParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_MeleeParry {
        constexpr uintptr_t m_flParryStartTime = 0xc98; // GameTime_t
        constexpr uintptr_t m_bAttackParried = 0xc9c; // bool
        constexpr uintptr_t m_flParrySuccessTime = 0xca0; // GameTime_t
    }
    namespace CCitadel_Modifier_ExplosiveBullets {
        constexpr uintptr_t m_BuffedShotId = 0x1f8; // ShotID_t
    }
    namespace DynamicAbilityValues_t {
        constexpr uintptr_t m_SourceAbilityID = 0x30; // CUtlStringToken
        constexpr uintptr_t m_TargetAbilityID = 0x34; // CUtlStringToken
        constexpr uintptr_t m_eValType = 0x38; // EModifierValue
        constexpr uintptr_t m_flValue = 0x3c; // float32
    }
    namespace CCitadel_Modifier_Fathom_ReefdwellerHarpoon_Move {
        constexpr uintptr_t m_vCasterToDest = 0xc0; // Vector
        constexpr uintptr_t m_vStart = 0xcc; // Vector
        constexpr uintptr_t m_vDest = 0xd8; // Vector
        constexpr uintptr_t m_hOther = 0xe4; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vLastSafePos = 0xe8; // Vector
        constexpr uintptr_t m_nNumTicks = 0xf4; // int32
        constexpr uintptr_t m_nTicksLeft = 0xf8; // int32
        constexpr uintptr_t m_nBeamIndex = 0xfc; // ParticleIndex_t
    }
    namespace CCitadel_Ability_Spinning_BladeVData {
        constexpr uintptr_t m_DebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CatchIndicator = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CatchParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strThrowSound = 0x1720; // CSoundEventName
        constexpr uintptr_t m_strReturnSound = 0x1730; // CSoundEventName
        constexpr uintptr_t m_strCatchSound = 0x1740; // CSoundEventName
        constexpr uintptr_t m_strFailSound = 0x1750; // CSoundEventName
        constexpr uintptr_t m_strHitSound = 0x1760; // CSoundEventName
    }
    namespace CCitadel_Ability_Tengu_AirLiftVData {
        constexpr uintptr_t m_FlyingModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_GrabModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HoldBombModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DroppedBuffModifier = 0x1580; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodingAllyModifier = 0x1590; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AoEModifier = 0x15a0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_InitialExplodeParticle = 0x15b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HoldBombEffect = 0x1690; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x1770; // CSoundEventName
        constexpr uintptr_t m_flAirDrag = 0x1780; // float32
        constexpr uintptr_t m_flMaxFallSpeed = 0x1784; // float32
        constexpr uintptr_t m_flTargetAirSpeedFast = 0x1788; // float32
        constexpr uintptr_t m_flTargetAirSpeedBase = 0x178c; // float32
        constexpr uintptr_t m_flAcceleration = 0x1790; // float32
        constexpr uintptr_t m_flDecceleration = 0x1794; // float32
        constexpr uintptr_t m_flAirSideSpeedPercent = 0x1798; // float32
        constexpr uintptr_t m_flBoostTime = 0x179c; // float32
        constexpr uintptr_t m_flBoostSpeedUp = 0x17a0; // float32
        constexpr uintptr_t m_flMinFlyHeight = 0x17a4; // float32
        constexpr uintptr_t m_flMaxFlyHeight = 0x17a8; // float32
        constexpr uintptr_t m_flMaxPitchUp = 0x17ac; // float32
        constexpr uintptr_t m_flMaxPitchDown = 0x17b0; // float32
        constexpr uintptr_t m_flAllyDelayedBoostTime = 0x17b4; // float32
        constexpr uintptr_t m_flChannelingAirDrag = 0x17b8; // float32
        constexpr uintptr_t m_flChannelingMaxFallSpeed = 0x17bc; // float32
        constexpr uintptr_t m_flBombReleaseSpeed = 0x17c0; // float32
        constexpr uintptr_t m_flBombReleasePitch = 0x17c4; // float32
        constexpr uintptr_t m_flBombDropReleaseOffset = 0x17c8; // float32
        constexpr uintptr_t m_flHoldBombOffsetX = 0x17cc; // float32
        constexpr uintptr_t m_flHoldBombOffsetY = 0x17d0; // float32
        constexpr uintptr_t m_flHoldBombOffsetZ = 0x17d4; // float32
        constexpr uintptr_t m_flAnglePitchBias = 0x17d8; // float32
        constexpr uintptr_t m_flTrackAmount = 0x17dc; // float32
        constexpr uintptr_t m_flMoveCollideSpeed = 0x17e0; // float32
    }
    namespace CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
        constexpr uintptr_t m_BeamParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DamageParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Hero_Clone {
        constexpr uintptr_t m_bMimicOwner = 0xc0; // bool
    }
    namespace CCollisionProperty {
        constexpr uintptr_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
        constexpr uintptr_t m_vecMins = 0x40; // Vector
        constexpr uintptr_t m_vecMaxs = 0x4c; // Vector
        constexpr uintptr_t m_usSolidFlags = 0x5a; // uint8
        constexpr uintptr_t m_nSolidType = 0x5b; // SolidType_t
        constexpr uintptr_t m_triggerBloat = 0x5c; // uint8
        constexpr uintptr_t m_nSurroundType = 0x5d; // SurroundingBoundsType_t
        constexpr uintptr_t m_CollisionGroup = 0x5e; // uint8
        constexpr uintptr_t m_nEnablePhysics = 0x5f; // uint8
        constexpr uintptr_t m_flBoundingRadius = 0x60; // float32
        constexpr uintptr_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
        constexpr uintptr_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
        constexpr uintptr_t m_vecSurroundingMaxs = 0x7c; // Vector
        constexpr uintptr_t m_vecSurroundingMins = 0x88; // Vector
        constexpr uintptr_t m_vCapsuleCenter1 = 0x94; // Vector
        constexpr uintptr_t m_vCapsuleCenter2 = 0xa0; // Vector
        constexpr uintptr_t m_flCapsuleRadius = 0xac; // float32
    }
    namespace CNetworkedSequenceOperation {
        constexpr uintptr_t m_hSequence = 0x8; // HSequence
        constexpr uintptr_t m_flPrevCycle = 0xc; // float32
        constexpr uintptr_t m_flCycle = 0x10; // float32
        constexpr uintptr_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
        constexpr uintptr_t m_bSequenceChangeNetworked = 0x1c; // bool
        constexpr uintptr_t m_bDiscontinuity = 0x1d; // bool
        constexpr uintptr_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
        constexpr uintptr_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
    }
    namespace CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
        constexpr uintptr_t m_AuraParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Haunt_Damage_VData {
        constexpr uintptr_t m_sAfterburnParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityShivDeferDamageVData {
        constexpr uintptr_t m_ActiveCastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flDeferredDamageApplicationInterval = 0x1630; // float32
    }
    namespace CCitadel_Modifier_CheaterCurseVData {
        constexpr uintptr_t m_CursedModel = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_flModelScale = 0x6e8; // float32
    }
    namespace CBaseLockonAbilityVData {
        constexpr uintptr_t m_TargetModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_strApplyLockonStack = 0x1560; // CSoundEventName
    }
    namespace CCitadel_Ability_RiotProtocol {
        constexpr uintptr_t m_bActive = 0xc98; // bool
    }
    namespace CCitadel_Modifier_ThrowSandProjectileVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Astro_Rifle_DebuffVData {
        constexpr uintptr_t m_SlowModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strTargetHitSound = 0x618; // CSoundEventName
    }
    namespace CCitadel_Upgrade_MagicCarpetVData {
        constexpr uintptr_t m_SummonParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FlyingCarpetModifier = 0x1678; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SummonFlyingCarpetModifier = 0x1688; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SummonFlyingCarpetVisualModifier = 0x1698; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_FlyingCarpetVisualModifier = 0x16a8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ShieldModifier = 0x16b8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flSummonVisualDuration = 0x16c8; // float32
        constexpr uintptr_t m_flBurstSpeedBonus = 0x16cc; // float32
        constexpr uintptr_t m_flBurstSpeedMin = 0x16d0; // float32
        constexpr uintptr_t m_flBurstSpeedDuration = 0x16d4; // float32
        constexpr uintptr_t m_flMinDistanceAboveGround = 0x16d8; // float32
    }
    namespace CCitadel_Modifier_Tier3Boss_LaserBeam {
        constexpr uintptr_t m_flSoundStartTime = 0xc8; // GameTime_t
        constexpr uintptr_t m_vStart = 0xd0; // Vector
        constexpr uintptr_t m_vEnd = 0xdc; // Vector
        constexpr uintptr_t m_vPrevEnd = 0xe8; // Vector
        constexpr uintptr_t m_flAngleBetweenTrace = 0xf4; // float32
        constexpr uintptr_t m_flPlayerDamagePerTick = 0xf8; // float32
        constexpr uintptr_t m_flNPCDamagePerTick = 0xfc; // float32
        constexpr uintptr_t m_flNextDamageTick = 0x100; // GameTime_t
        constexpr uintptr_t m_vecEntitiesHit = 0x108; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_flDamageTickRate = 0x120; // float32
        constexpr uintptr_t m_flLastShakeTime = 0x124; // GameTime_t
        constexpr uintptr_t m_bSweepRightFirst = 0x128; // bool
        constexpr uintptr_t m_vecBeamTarget = 0x12c; // Vector
        constexpr uintptr_t m_flLastBeamUpdateTime = 0x138; // GameTime_t
        constexpr uintptr_t m_vecEnemyPosition = 0x13c; // Vector
        constexpr uintptr_t m_nTrackingIndex = 0x148; // int32
        constexpr uintptr_t m_bPreviewMode = 0x14c; // bool
        constexpr uintptr_t m_hAttachment = 0x14d; // AttachmentHandle_t
    }
    namespace CModifierProperty {
        constexpr uintptr_t __m_pChainEntity = 0x8; // CNetworkVarChainer
        constexpr uintptr_t m_hOwner = 0x30; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nProviderVisitedFlags = 0x198; // uint8
        constexpr uintptr_t m_bModifierStatesDirty = 0x199; // bool
        constexpr uintptr_t m_bPredictedOwner = 0x19a; // bool
        constexpr uintptr_t m_iLockRefCount = 0x19b; // int8
        constexpr uintptr_t m_hHandle = 0x19c; // ModifierPropRuntimeHandle_t
        constexpr uintptr_t m_nBroadcastEventListenerMask = 0x1a0; // uint32
        constexpr uintptr_t m_vecProviders = 0x1b0; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_nDisabledGroups = 0x1c8; // uint32
        constexpr uintptr_t m_bvEnabledStateMask = 0x1cc; // uint32[6]
        constexpr uintptr_t m_bvDisabledStateMask = 0x1e4; // uint32[6]
        constexpr uintptr_t m_bvEnabledPredictedStateMask = 0x1fc; // uint32[6]
    }
    namespace C_NPC_NanoRollermine {
        constexpr uintptr_t m_flForwardSpeed = 0x1450; // float32
        constexpr uintptr_t m_hOwnerPawn = 0x1454; // CHandle< C_BaseEntity >
    }
    namespace C_NPC_HeroCloneTrooper {
        constexpr uintptr_t m_hOwner = 0x1438; // CHandle< C_BaseEntity >
    }
    namespace CGameModifier_OverrideTargetIdentifier {
        constexpr uintptr_t m_sTargetIdentifier = 0xc0; // CGlobalSymbol
        constexpr uintptr_t m_hTarget = 0xc8; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nOriginType = 0xcc; // TargetIdentifierOriginType_t
        constexpr uintptr_t m_sAttachmentName = 0xd0; // CGlobalSymbol
        constexpr uintptr_t m_hAttachment = 0xd8; // AttachmentHandle_t
    }
    namespace CCitadel_Ability_RocketBarrageVData {
        constexpr uintptr_t m_BarrageModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_MoveSlowModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ImpactParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x1650; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceSelected = 0x1660; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_flMoveSpeedReductionPct = 0x16e8; // float32
        constexpr uintptr_t m_flHeightTestDistance = 0x16ec; // float32
    }
    namespace CCitadel_XPOrbVData {
        constexpr uintptr_t m_bIsObjective = 0x28; // bool
        constexpr uintptr_t m_strOrbClaimed = 0x30; // CSoundEventName
        constexpr uintptr_t m_strOrbClaimedTeammate = 0x40; // CSoundEventName
        constexpr uintptr_t m_strOrbDenied = 0x50; // CSoundEventName
        constexpr uintptr_t m_strOrbDeniedPlayer = 0x60; // CSoundEventName
        constexpr uintptr_t m_sOrbModel = 0x70; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_sPredictedHitLimboGlowParticle = 0x150; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sFriendlyGlowParticle = 0x230; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sEnemyGlowParticle = 0x310; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sGoldReceivedParticle = 0x3f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sFriendlyOrbDeniedParticle = 0x4d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sEnemyOrbDeniedParticle = 0x5b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sFriendlyOrbEarnedParticle = 0x690; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sEnemyOrbEarnedParticle = 0x770; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flOrbSpawnDelayMin = 0x850; // float32
        constexpr uintptr_t m_flOrbSpawnDelayMax = 0x854; // float32
        constexpr uintptr_t m_flOrbSpawnOffsetZ = 0x858; // float32
        constexpr uintptr_t m_flOrbSpawnOffsetRandomXYZ = 0x85c; // float32
        constexpr uintptr_t m_flGravityScale = 0x860; // float32
        constexpr uintptr_t m_flLateralSpeedMin = 0x864; // float32
        constexpr uintptr_t m_flLateralSpeedMax = 0x868; // float32
        constexpr uintptr_t m_flLateralMoveDuration = 0x86c; // float32
        constexpr uintptr_t m_flUpSpeedMin = 0x870; // float32
        constexpr uintptr_t m_flUpSpeedMax = 0x874; // float32
        constexpr uintptr_t m_flBurstSpeedMultiplier = 0x878; // float32
        constexpr uintptr_t m_flBurstSpeedDuration = 0x87c; // float32
        constexpr uintptr_t m_flOscillateFrequency = 0x880; // float32
        constexpr uintptr_t m_flLifeTime = 0x884; // float32
        constexpr uintptr_t m_flRadius = 0x888; // float32
        constexpr uintptr_t m_flCollisionRadius = 0x88c; // float32
        constexpr uintptr_t m_flInvulDuration = 0x890; // float32
        constexpr uintptr_t m_bUseKillerPlaneOffsets = 0x894; // bool
        constexpr uintptr_t m_flKillerPlaneOffset = 0x898; // float32
        constexpr uintptr_t m_flKillerPlaneHorizontalDecayRate = 0x89c; // float32
        constexpr uintptr_t m_flKillerPlaneHorizontalSpeedX = 0x8a0; // float32
        constexpr uintptr_t m_flKillerPlaneHorizontalSpeedY = 0x8a4; // float32
        constexpr uintptr_t m_flKillerPlaneVerticalSpeed = 0x8a8; // float32
        constexpr uintptr_t m_flKillerPlaneSpeedNoise = 0x8ac; // float32
        constexpr uintptr_t m_flKillerPlaneLaunchOffset = 0x8b0; // float32
        constexpr uintptr_t m_flKillerPlaneLaunchDelay = 0x8b4; // float32
        constexpr uintptr_t m_flOrbClaimWindow = 0x8b8; // float32
    }
    namespace EntityRenderAttribute_t {
        constexpr uintptr_t m_ID = 0x30; // CUtlStringToken
        constexpr uintptr_t m_Values = 0x34; // Vector4D
    }
    namespace C_ShatterGlassShardPhysics {
        constexpr uintptr_t m_ShardDesc = 0xc80; // shard_model_desc_t
    }
    namespace CCitadel_Ability_Tengu_StoneForm {
        constexpr uintptr_t m_flStartTime = 0xe58; // GameTime_t
        constexpr uintptr_t m_flLandedTime = 0xe5c; // GameTime_t
        constexpr uintptr_t m_bLanded = 0xe60; // bool
        constexpr uintptr_t m_bFalling = 0xe61; // bool
        constexpr uintptr_t m_bInStoneForm = 0xe62; // bool
        constexpr uintptr_t m_flStartHeight = 0xe64; // float32
        constexpr uintptr_t m_nStoneFormEffect = 0xe68; // ParticleIndex_t
    }
    namespace C_LightEntity {
        constexpr uintptr_t m_CLightComponent = 0x840; // CLightComponent*
    }
    namespace CCitadel_Modifier_Cadence_Crescendo_AOE {
        constexpr uintptr_t m_nTicks = 0xe8; // int32
    }
    namespace CAbility_Synth_Grasp_VData {
        constexpr uintptr_t m_CasterModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_VictimModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BulletShieldModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Tokamak_DyingStar {
        constexpr uintptr_t m_nRollFXIndex = 0xc98; // ParticleIndex_t
        constexpr uintptr_t m_bInFlight = 0xc9c; // bool
    }
    namespace CCitadel_Ability_IceGrenade {
        constexpr uintptr_t m_vLaunchPosition = 0xc98; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xca4; // QAngle
    }
    namespace CCitadel_Modifier_ChargePullEnemy {
        constexpr uintptr_t m_vecOffsetDir = 0xc0; // Vector
        constexpr uintptr_t m_flTackleRadius = 0xcc; // float32
        constexpr uintptr_t m_flPullTargetSpeed = 0xd0; // float32
    }
    namespace CCitadel_WeaponUpgrade_Headhunter_VData {
        constexpr uintptr_t m_HeadshotBuffModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HeadShotVictimSound = 0x15a8; // CSoundEventName
        constexpr uintptr_t m_HeadShotConfirmationSound = 0x15b8; // CSoundEventName
    }
    namespace CCitadel_Modifier_Base_Buildup {
        constexpr uintptr_t m_flLastBuildupAppliedTime = 0xc0; // GameTime_t
        constexpr uintptr_t m_flDelayedDieTimeRemaining = 0xc4; // float32
        constexpr uintptr_t m_bInDelayTime = 0xc8; // bool
        constexpr uintptr_t m_flBuildUpDecayDelayFromWeaponCycleTime = 0xcc; // float32
    }
    namespace C_PlayerVisibility {
        constexpr uintptr_t m_flVisibilityStrength = 0x560; // float32
        constexpr uintptr_t m_flFogDistanceMultiplier = 0x564; // float32
        constexpr uintptr_t m_flFogMaxDensityMultiplier = 0x568; // float32
        constexpr uintptr_t m_flFadeTime = 0x56c; // float32
        constexpr uintptr_t m_bStartDisabled = 0x570; // bool
        constexpr uintptr_t m_bIsEnabled = 0x571; // bool
    }
    namespace CCitadel_Ability_Magician_MagicBoltVData {
        constexpr uintptr_t m_SlowDebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodeParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_RetargetParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strRedirect = 0x1720; // CSoundEventName
    }
    namespace CAbilityRocketLauncherVData {
        constexpr uintptr_t m_ExplosionParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_FlameDash {
        constexpr uintptr_t m_flDashEndTime = 0xc98; // CCitadelAutoScaledTime
        constexpr uintptr_t m_bIsSpeedBursting = 0xcb0; // bool
    }
    namespace CCitadel_Modifier_ArcaneEaterDebuffVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Climb_RopeVData {
        constexpr uintptr_t m_flMinButtonHoldTimeToActivate = 0x1550; // float32
        constexpr uintptr_t m_flClimbSpeedUp = 0x1554; // float32
        constexpr uintptr_t m_flClimbSpeedDown = 0x1558; // float32
        constexpr uintptr_t m_flClimbSpeedDownMax = 0x155c; // float32
        constexpr uintptr_t m_flClimbDownAccelTime = 0x1560; // float32
        constexpr uintptr_t m_flLatchSpeed = 0x1564; // float32
        constexpr uintptr_t m_flAttachOffset = 0x1568; // float32
        constexpr uintptr_t m_flMinReconnectTime = 0x156c; // float32
        constexpr uintptr_t m_flSideMoveReduction = 0x1570; // float32
        constexpr uintptr_t m_flTopOffset = 0x1574; // float32
        constexpr uintptr_t m_flBottomOffset = 0x1578; // float32
        constexpr uintptr_t m_flTraceRadiusSize = 0x157c; // float32
        constexpr uintptr_t m_flStopTimeToShoot = 0x1580; // float32
        constexpr uintptr_t m_flJumpOffVertical = 0x1584; // float32
        constexpr uintptr_t m_flJumpOffHorizontal = 0x1588; // float32
        constexpr uintptr_t m_flDuckOffVertical = 0x158c; // float32
        constexpr uintptr_t m_flDuckOffHorizontal = 0x1590; // float32
        constexpr uintptr_t m_flActivateRange = 0x1594; // float32
        constexpr uintptr_t m_flJumpToRoofRayCheckDist = 0x1598; // float32
        constexpr uintptr_t m_flMinTimeToRoofCheck = 0x159c; // float32
        constexpr uintptr_t m_flTimeToHintRefresh = 0x15a0; // float32
        constexpr uintptr_t m_iMaxHintCount = 0x15a4; // float32
        constexpr uintptr_t m_flClimbRopeSlowDurationOnHit = 0x15a8; // float32
        constexpr uintptr_t m_ClimbRopeSlowOnHitModifier = 0x15b0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace fogparams_t {
        constexpr uintptr_t dirPrimary = 0x8; // Vector
        constexpr uintptr_t colorPrimary = 0x14; // Color
        constexpr uintptr_t colorSecondary = 0x18; // Color
        constexpr uintptr_t colorPrimaryLerpTo = 0x1c; // Color
        constexpr uintptr_t colorSecondaryLerpTo = 0x20; // Color
        constexpr uintptr_t start = 0x24; // float32
        constexpr uintptr_t end = 0x28; // float32
        constexpr uintptr_t farz = 0x2c; // float32
        constexpr uintptr_t maxdensity = 0x30; // float32
        constexpr uintptr_t exponent = 0x34; // float32
        constexpr uintptr_t HDRColorScale = 0x38; // float32
        constexpr uintptr_t skyboxFogFactor = 0x3c; // float32
        constexpr uintptr_t skyboxFogFactorLerpTo = 0x40; // float32
        constexpr uintptr_t startLerpTo = 0x44; // float32
        constexpr uintptr_t endLerpTo = 0x48; // float32
        constexpr uintptr_t maxdensityLerpTo = 0x4c; // float32
        constexpr uintptr_t lerptime = 0x50; // GameTime_t
        constexpr uintptr_t duration = 0x54; // float32
        constexpr uintptr_t blendtobackground = 0x58; // float32
        constexpr uintptr_t scattering = 0x5c; // float32
        constexpr uintptr_t locallightscale = 0x60; // float32
        constexpr uintptr_t enable = 0x64; // bool
        constexpr uintptr_t blend = 0x65; // bool
        constexpr uintptr_t m_bNoReflectionFog = 0x66; // bool
        constexpr uintptr_t m_bPadding = 0x67; // bool
    }
    namespace C_Citadel_Projectile_Tier2Boss_RocketBarrage {
        constexpr uintptr_t m_nLaserParticleIndex = 0x8c8; // ParticleIndex_t
        constexpr uintptr_t m_vecSmoothedVelocity = 0x8cc; // Vector
    }
    namespace CCitadel_Modifier_BreakablePropClipSizePickupVData {
        constexpr uintptr_t m_flClipSize = 0x608; // float32
        constexpr uintptr_t m_nClipCount = 0x60c; // int32
        constexpr uintptr_t m_flFireRate = 0x610; // float32
    }
    namespace CCitadel_Modifier_Shadow_Step {
        constexpr uintptr_t m_nRevealedEffect = 0x268; // ParticleIndex_t
    }
    namespace CAbilityHatTrickVData {
        constexpr uintptr_t m_SpectatingProjectileParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplosionParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HatTrickChannelParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DebuffModifier = 0x17f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strExplodeSound = 0x1800; // CSoundEventName
    }
    namespace CCitadel_Modifier_VoidSphere {
        constexpr uintptr_t m_bTeleported = 0xc0; // bool
        constexpr uintptr_t m_particleStart = 0xc4; // ParticleIndex_t
        constexpr uintptr_t m_particleEnd = 0xc8; // ParticleIndex_t
        constexpr uintptr_t m_particleTrail = 0xcc; // ParticleIndex_t
        constexpr uintptr_t m_vecEndLocation = 0xd0; // Vector
        constexpr uintptr_t m_vecStartPosition = 0xdc; // Vector
        constexpr uintptr_t m_vecEndLocationCaster = 0xe8; // Vector
    }
    namespace CCitadel_Modifier_ZiplineKnockdownImmuneVData {
        constexpr uintptr_t m_ZipLineEnemyKnockdownProtectionParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineSelfKnockdownProtectionParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineKnockdownProtectionStatusParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ZipLineKnockdownProtectionStatusEnemyParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
        constexpr uintptr_t m_nStartingClipSize = 0xc0; // int32
    }
    namespace CCitadelAbilityFlyingStrikeVData {
        constexpr uintptr_t m_flJumpFallSpeedMax = 0x1558; // float32
        constexpr uintptr_t m_flJumpAirDrag = 0x155c; // float32
        constexpr uintptr_t m_flJumpAirSpeedMax = 0x1560; // float32
        constexpr uintptr_t m_flOnCancelVerticalSpeedBonus = 0x1564; // float32
        constexpr uintptr_t m_flFlyingCloseEnoughToTarget = 0x1568; // float32
        constexpr uintptr_t m_curveSpeedScale = 0x1570; // CPiecewiseCurve
        constexpr uintptr_t m_flAnimToStrikePointTime = 0x15b0; // float32
        constexpr uintptr_t m_flAnimToStrikeArrivalBias = 0x15b4; // float32
        constexpr uintptr_t m_flGrappleShotFloatTime = 0x15b8; // float32
        constexpr uintptr_t m_flGrappleShotDelayToFlyOnHit = 0x15bc; // float32
        constexpr uintptr_t m_flGrappleSpeed = 0x15c0; // float32
        constexpr uintptr_t m_SlowModifier = 0x15c8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_GrappleTargetModifier = 0x15d8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_WeaponBuffModifier = 0x15e8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_LeapParticle = 0x15f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x16d8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SlashParticle = 0x17b8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BulletGrappleTracerParticle = 0x1898; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyGrappleParticle = 0x1978; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDamageTarget = 0x1a58; // CSoundEventName
        constexpr uintptr_t m_strStartFlyingToTarget = 0x1a68; // CSoundEventName
        constexpr uintptr_t m_strStartAttack = 0x1a78; // CSoundEventName
        constexpr uintptr_t m_strGrappleHitTarget = 0x1a88; // CSoundEventName
        constexpr uintptr_t m_strGrappleHitWorld = 0x1a98; // CSoundEventName
        constexpr uintptr_t m_strGrappleHitNothing = 0x1aa8; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceFlying = 0x1ab8; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraSequenceAttacking = 0x1b40; // CitadelCameraOperationsSequence_t
    }
    namespace CAbilityGooGrenadeVData {
        constexpr uintptr_t m_GooGrenadeImpactModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_GooGrenadePuddleAuraModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_GooGrenadeSkipParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_GooGrenadeExplodeParticle = 0x1650; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_GrenadeHitImpactSound = 0x1730; // CSoundEventName
        constexpr uintptr_t m_GrenadeMissImpactSound = 0x1740; // CSoundEventName
        constexpr uintptr_t m_flMinRestitution = 0x1750; // float32
        constexpr uintptr_t m_flMaxRestitution = 0x1754; // float32
    }
    namespace CCitadel_Ability_FireBombVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_ProgressBarModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_FireBombModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_CitadelGameRulesProxy {
        constexpr uintptr_t m_pGameRules = 0x560; // C_CitadelGameRules*
    }
    namespace CCitadelTrooperMinimap {
        constexpr uintptr_t m_timeLastUpdate = 0x560; // GameTime_t
        constexpr uintptr_t m_vecFOWEntities = 0x568; // C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity >
    }
    namespace C_NPC_BaseDefenseSentry {
        constexpr uintptr_t m_vecUnitStatusOffset = 0xaf0; // Vector
    }
    namespace C_Citadel_DynamicProp {
        constexpr uintptr_t m_nPlayerTeamEvent = 0xd98; // int32
        constexpr uintptr_t m_strDefaultSkin = 0xda0; // CUtlString
        constexpr uintptr_t m_strFriendlySkin = 0xda8; // CUtlString
        constexpr uintptr_t m_strEnemySkin = 0xdb0; // CUtlString
        constexpr uintptr_t m_bIsWorld = 0xdb8; // bool
    }
    namespace C_BaseFlex {
        constexpr uintptr_t m_flexWeight = 0xaf8; // C_NetworkUtlVectorBase< float32 >
        constexpr uintptr_t m_vLookTargetPosition = 0xb10; // Vector
        constexpr uintptr_t m_blinktoggle = 0xb28; // bool
        constexpr uintptr_t m_nLastFlexUpdateFrameCount = 0xb88; // int32
        constexpr uintptr_t m_CachedViewTarget = 0xb8c; // Vector
        constexpr uintptr_t m_nNextSceneEventId = 0xb98; // SceneEventId_t
        constexpr uintptr_t m_iBlink = 0xb9c; // int32
        constexpr uintptr_t m_blinktime = 0xba0; // float32
        constexpr uintptr_t m_prevblinktoggle = 0xba4; // bool
        constexpr uintptr_t m_iJawOpen = 0xba8; // int32
        constexpr uintptr_t m_flJawOpenAmount = 0xbac; // float32
        constexpr uintptr_t m_flBlinkAmount = 0xbb0; // float32
        constexpr uintptr_t m_iMouthAttachment = 0xbb4; // AttachmentHandle_t
        constexpr uintptr_t m_iEyeAttachment = 0xbb5; // AttachmentHandle_t
        constexpr uintptr_t m_bResetFlexWeightsOnModelChange = 0xbb6; // bool
        constexpr uintptr_t m_nEyeOcclusionRendererBone = 0xbd0; // int32
        constexpr uintptr_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xbd4; // matrix3x4_t
        constexpr uintptr_t m_vEyeOcclusionRendererHalfExtent = 0xc04; // Vector
        constexpr uintptr_t m_PhonemeClasses = 0xc20; // C_BaseFlex::Emphasized_Phoneme[3]
    }
    namespace CCitadel_Modifier_MageWalkVData {
        constexpr uintptr_t m_TeleportStartParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportEndParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportTrailParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flPreTeleportDuration = 0x8a8; // float32
        constexpr uintptr_t m_strAmbientLoopingLocalPlayerSound = 0x8b0; // CSoundEventName
    }
    namespace CCitadel_Ability_Mirage_FireBeetles_VData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CasterModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_RecentlyDebuffedModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_StealWatcherModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplosionSound = 0x1670; // CSoundEventName
        constexpr uintptr_t m_strHitConfirm = 0x1680; // CSoundEventName
    }
    namespace CCitadel_Modifier_SleepDagger_Drowsy_VData {
        constexpr uintptr_t m_SleepModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifierIcePathVData {
        constexpr uintptr_t m_FrontModel = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_BodyModel = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_GroundParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FloatingParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_IcePathBuffParticle = 0x988; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FriendlyAuraModifier = 0xa68; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BonusSpiritLingerModifier = 0xa78; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_VitalitySuppressor {
        constexpr uintptr_t m_flLastTickTime = 0xc0; // GameTime_t
    }
    namespace C_EnvSky {
        constexpr uintptr_t m_hSkyMaterial = 0x840; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_hSkyMaterialLightingOnly = 0x848; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_bStartDisabled = 0x850; // bool
        constexpr uintptr_t m_vTintColor = 0x851; // Color
        constexpr uintptr_t m_vTintColorLightingOnly = 0x855; // Color
        constexpr uintptr_t m_flBrightnessScale = 0x85c; // float32
        constexpr uintptr_t m_nFogType = 0x860; // int32
        constexpr uintptr_t m_flFogMinStart = 0x864; // float32
        constexpr uintptr_t m_flFogMinEnd = 0x868; // float32
        constexpr uintptr_t m_flFogMaxStart = 0x86c; // float32
        constexpr uintptr_t m_flFogMaxEnd = 0x870; // float32
        constexpr uintptr_t m_bEnabled = 0x874; // bool
    }
    namespace CCitadel_Ability_Jump {
        constexpr uintptr_t m_flLastTimeOnZipLine = 0xc98; // GameTime_t
        constexpr uintptr_t m_flLastOnGroundTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_flPhaseStartTime = 0xca0; // GameTime_t
        constexpr uintptr_t m_flJumpTime = 0xca4; // GameTime_t
        constexpr uintptr_t m_LastJumpType = 0xca8; // EJumpType_t
        constexpr uintptr_t m_bShouldCreateAirJumpEffects = 0xca9; // bool
        constexpr uintptr_t m_flDoubleJumpFailTime = 0xcac; // GameTime_t
        constexpr uintptr_t m_eDoubleJumpFailReason = 0xcb0; // ECitadelAbilityOrders
        constexpr uintptr_t m_vWallJumpNormalUsed = 0xcb4; // Vector
        constexpr uintptr_t m_flGroundDashJumpStartTime = 0xdd8; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flGroundDashJumpEndTime = 0xdf0; // CCitadelAutoScaledTime
        constexpr uintptr_t m_bJumped = 0xe08; // bool
        constexpr uintptr_t m_bCanDashJump = 0xe09; // bool
        constexpr uintptr_t m_nDesiredAirJumpCount = 0xe0c; // int32
        constexpr uintptr_t m_nExecutedAirJumpCount = 0xe10; // int32
        constexpr uintptr_t m_bInSlideJump = 0xe14; // bool
        constexpr uintptr_t m_nConsecutiveAirJumps = 0xe15; // int8
        constexpr uintptr_t m_nConsecutiveWallJumps = 0xe16; // int8
        constexpr uintptr_t m_vLastWallCollidedWithNormal = 0xe18; // Vector
    }
    namespace CCitadel_TechUpgrade_SuperAcolyteGlovesVData {
        constexpr uintptr_t m_SpiritMeleeProcModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TechCleaveVData {
        constexpr uintptr_t m_CleavePlayerParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CleaveTrooperParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sVictimSound = 0x7c8; // CSoundEventName
    }
    namespace C_DynamicProp {
        constexpr uintptr_t m_bUseHitboxesForRenderBox = 0xc70; // bool
        constexpr uintptr_t m_bUseAnimGraph = 0xc71; // bool
        constexpr uintptr_t m_pOutputAnimBegun = 0xc78; // CEntityIOOutput
        constexpr uintptr_t m_pOutputAnimOver = 0xca0; // CEntityIOOutput
        constexpr uintptr_t m_pOutputAnimLoopCycleOver = 0xcc8; // CEntityIOOutput
        constexpr uintptr_t m_OnAnimReachedStart = 0xcf0; // CEntityIOOutput
        constexpr uintptr_t m_OnAnimReachedEnd = 0xd18; // CEntityIOOutput
        constexpr uintptr_t m_iszIdleAnim = 0xd40; // CUtlSymbolLarge
        constexpr uintptr_t m_nIdleAnimLoopMode = 0xd48; // AnimLoopMode_t
        constexpr uintptr_t m_bRandomizeCycle = 0xd4c; // bool
        constexpr uintptr_t m_bStartDisabled = 0xd4d; // bool
        constexpr uintptr_t m_bFiredStartEndOutput = 0xd4e; // bool
        constexpr uintptr_t m_bForceNpcExclude = 0xd4f; // bool
        constexpr uintptr_t m_bCreateNonSolid = 0xd50; // bool
        constexpr uintptr_t m_bIsOverrideProp = 0xd51; // bool
        constexpr uintptr_t m_iInitialGlowState = 0xd54; // int32
        constexpr uintptr_t m_nGlowRange = 0xd58; // int32
        constexpr uintptr_t m_nGlowRangeMin = 0xd5c; // int32
        constexpr uintptr_t m_glowColor = 0xd60; // Color
        constexpr uintptr_t m_nGlowTeam = 0xd64; // int32
        constexpr uintptr_t m_iCachedFrameCount = 0xd68; // int32
        constexpr uintptr_t m_vecCachedRenderMins = 0xd6c; // Vector
        constexpr uintptr_t m_vecCachedRenderMaxs = 0xd78; // Vector
    }
    namespace CCitadel_ArmorUpgrade_SpellShield {
        constexpr uintptr_t fl_mSpellShieldBreakTime = 0xcb0; // GameTime_t
    }
    namespace CCitadel_Ability_TurretClone_VData {
        constexpr uintptr_t m_strTurretParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strSwapParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TurretSound = 0x1710; // CSoundEventName
        constexpr uintptr_t m_cameraSequenceTeleport = 0x1720; // CitadelCameraOperationsSequence_t
    }
    namespace CAbilityChargedTackleVData {
        constexpr uintptr_t m_ChargePreviewParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChargePrepareModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ChargeActiveModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DragModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strHitSound = 0x1670; // CSoundEventName
    }
    namespace CCitadel_Modifier_SpilledBloodThinkerVData {
        constexpr uintptr_t m_SpilledBloodParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flTickRate = 0x6e8; // float32
        constexpr uintptr_t m_flHeight = 0x6ec; // float32
    }
    namespace CCitadel_Modifier_AttachTarget {
        constexpr uintptr_t m_hTarget = 0xc0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vecOffset = 0xc4; // Vector
    }
    namespace CDestructableBuildingVData {
        constexpr uintptr_t m_iMaxHealthFinal = 0x28; // int32
        constexpr uintptr_t m_iMaxHealthGenerator = 0x2c; // int32
        constexpr uintptr_t m_ObjectiveRegen = 0x30; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BackdoorBulletResistModifier = 0x40; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CPropDataComponent {
        constexpr uintptr_t m_flDmgModBullet = 0x10; // float32
        constexpr uintptr_t m_flDmgModClub = 0x14; // float32
        constexpr uintptr_t m_flDmgModExplosive = 0x18; // float32
        constexpr uintptr_t m_flDmgModFire = 0x1c; // float32
        constexpr uintptr_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
        constexpr uintptr_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
        constexpr uintptr_t m_nInteractions = 0x30; // int32
        constexpr uintptr_t m_bSpawnMotionDisabled = 0x34; // bool
        constexpr uintptr_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
        constexpr uintptr_t m_nMotionDisabledSpawnFlag = 0x3c; // int32
    }
    namespace C_NPC_TrooperNeutral {
        constexpr uintptr_t m_bPlayingIdle = 0x1438; // bool
        constexpr uintptr_t m_bShieldActive = 0x1439; // bool
    }
    namespace CCitadel_Modifier_Chomp_LowHealth_GlowVData {
        constexpr uintptr_t m_strLocalStatusEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifierGravityLassoEnemyVData {
        constexpr uintptr_t m_LassoEffect = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Wraith_RapidFireVData {
        constexpr uintptr_t m_CastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetBuffSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_RapidFireModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_ItemWeaponParts {
        constexpr uintptr_t m_hTouchedPlayeres = 0xb08; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
    }
    namespace CAbilityStackingDamageVData {
        constexpr uintptr_t m_StackingModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TechDamageProcWatcher {
        constexpr uintptr_t m_flNextProcTime = 0x168; // GameTime_t
        constexpr uintptr_t m_shotProced = 0x16c; // ShotID_t
    }
    namespace CCitadel_Item_Discord_AuraVData_Enemy {
        constexpr uintptr_t m_strAreaEffectEnemy = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAreaEffectFriendly = 0x728; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAreaEffectSelf = 0x808; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelSoundOpvarSetOBB {
        constexpr uintptr_t m_iszStackName = 0x578; // CUtlSymbolLarge
        constexpr uintptr_t m_iszOperatorName = 0x580; // CUtlSymbolLarge
        constexpr uintptr_t m_iszOpvarName = 0x588; // CUtlSymbolLarge
        constexpr uintptr_t m_vDistanceInnerMins = 0x590; // Vector
        constexpr uintptr_t m_vDistanceInnerMaxs = 0x59c; // Vector
        constexpr uintptr_t m_vDistanceOuterMins = 0x5a8; // Vector
        constexpr uintptr_t m_vDistanceOuterMaxs = 0x5b4; // Vector
        constexpr uintptr_t m_nAABBDirection = 0x5c0; // int32
    }
    namespace CCitadel_Modifier_Slork_RagingCurrentVData {
        constexpr uintptr_t m_CountdownModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_WaterAuraParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Nano_Pounce {
        constexpr uintptr_t m_bActive = 0xec8; // bool
        constexpr uintptr_t m_hCurrentTarget = 0xecc; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hLastCastTarget = 0xed0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vStartPosition = 0xed4; // Vector
        constexpr uintptr_t m_vDeparturePosition = 0xee0; // Vector
        constexpr uintptr_t m_flDepartureTime = 0xef0; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flArrivalTime = 0xf08; // CCitadelAutoScaledTime
        constexpr uintptr_t m_vLastKnownSafePos = 0xf20; // Vector
        constexpr uintptr_t m_bIsFirstCastCompleted = 0xf2e; // bool
        constexpr uintptr_t m_tDoubleCastWindow = 0xf30; // GameTime_t
    }
    namespace CNPC_TrooperBarrackBossVData {
        constexpr uintptr_t m_flBackDoorProtectionRange = 0x1698; // float32
        constexpr uintptr_t m_BackdoorProtectionModifier = 0x16a0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BackdoorBulletResistModifier = 0x16b0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ObjectiveRegen = 0x16c0; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CModifier_Wrecker_UltimateGrabEnemyVData {
        constexpr uintptr_t m_EnemyHeroStasisEffect = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_EnemyHeroGrabEffect = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityHornetLeapVData {
        constexpr uintptr_t m_flChannelingAirDrag = 0x1550; // float32
        constexpr uintptr_t m_flChannelingMaxFallSpeed = 0x1554; // float32
        constexpr uintptr_t m_flVerticalMoveSpeedPercent = 0x1558; // float32
        constexpr uintptr_t m_flAirDrag = 0x155c; // float32
        constexpr uintptr_t m_flAirAcceleration = 0x1560; // float32
        constexpr uintptr_t m_flLaunchAirDrag = 0x1564; // float32
        constexpr uintptr_t m_flLaunchTime = 0x1568; // float32
        constexpr uintptr_t m_flMoveSpeedAboveBaseScale = 0x156c; // float32
        constexpr uintptr_t m_LeapModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DustParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TrailParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x1740; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Item_AOE_Tech_ShieldVData {
        constexpr uintptr_t m_DurationModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_LocalTempEntity {
        constexpr uintptr_t flags = 0xae8; // int32
        constexpr uintptr_t die = 0xaec; // GameTime_t
        constexpr uintptr_t m_flFrameMax = 0xaf0; // float32
        constexpr uintptr_t x = 0xaf4; // float32
        constexpr uintptr_t y = 0xaf8; // float32
        constexpr uintptr_t fadeSpeed = 0xafc; // float32
        constexpr uintptr_t bounceFactor = 0xb00; // float32
        constexpr uintptr_t hitSound = 0xb04; // int32
        constexpr uintptr_t priority = 0xb08; // int32
        constexpr uintptr_t tentOffset = 0xb0c; // Vector
        constexpr uintptr_t m_vecTempEntAngVelocity = 0xb18; // QAngle
        constexpr uintptr_t tempent_renderamt = 0xb24; // int32
        constexpr uintptr_t m_vecNormal = 0xb28; // Vector
        constexpr uintptr_t m_flSpriteScale = 0xb34; // float32
        constexpr uintptr_t m_nFlickerFrame = 0xb38; // int32
        constexpr uintptr_t m_flFrameRate = 0xb3c; // float32
        constexpr uintptr_t m_flFrame = 0xb40; // float32
        constexpr uintptr_t m_pszImpactEffect = 0xb48; // char*
        constexpr uintptr_t m_pszParticleEffect = 0xb50; // char*
        constexpr uintptr_t m_bParticleCollision = 0xb58; // bool
        constexpr uintptr_t m_iLastCollisionFrame = 0xb5c; // int32
        constexpr uintptr_t m_vLastCollisionOrigin = 0xb60; // Vector
        constexpr uintptr_t m_vecTempEntVelocity = 0xb6c; // Vector
        constexpr uintptr_t m_vecPrevAbsOrigin = 0xb78; // Vector
        constexpr uintptr_t m_vecTempEntAcceleration = 0xb84; // Vector
    }
    namespace CCitadel_Ability_InfinitySlash {
        constexpr uintptr_t m_flExplodeEndTime = 0xd10; // GameTime_t
        constexpr uintptr_t m_flBuffEndTime = 0xd14; // GameTime_t
    }
    namespace CCitadel_HeroTestOrbSpawnerVData {
        constexpr uintptr_t m_iGoldValue = 0x28; // int32
        constexpr uintptr_t m_flSpawnRate = 0x2c; // float32
        constexpr uintptr_t m_flFirstSpawnTime = 0x30; // float32
        constexpr uintptr_t m_hModel = 0x38; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_flModelScale = 0x118; // float32
        constexpr uintptr_t m_flSpawnOffset = 0x11c; // float32
        constexpr uintptr_t m_AmbientParticle = 0x120; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SpawnParticle = 0x200; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_EnvWindShared::WindAveEvent_t {
        constexpr uintptr_t m_flStartWindSpeed = 0x0; // float32
        constexpr uintptr_t m_flAveWindSpeed = 0x4; // float32
    }
    namespace CNPC_Boss_Tier3VData {
        constexpr uintptr_t m_nPhase2Health = 0xf78; // int32
        constexpr uintptr_t m_flEyeZOffset = 0xf7c; // float32
        constexpr uintptr_t m_flDefaultMoveSpeed = 0xf80; // float32
        constexpr uintptr_t m_flNoShieldMoveSpeed = 0xf84; // float32
        constexpr uintptr_t m_flDyingMoveSpeed = 0xf88; // float32
        constexpr uintptr_t m_flMovingToFinalPositionSpeed = 0xf8c; // float32
        constexpr uintptr_t m_DeathSmallExplosionParticle = 0xf90; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DeathLargeExplosionParticle = 0x1070; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WeakpointBrokenExplosionParticle = 0x1150; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChargeUpExplosionParticle = 0x1230; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strWIPModelName = 0x1310; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_DyingSmallExplosion = 0x13f0; // CSoundEventName
        constexpr uintptr_t m_AvatarKilledSound = 0x1400; // CSoundEventName
        constexpr uintptr_t m_AvatarBecomePatronSound = 0x1410; // CSoundEventName
        constexpr uintptr_t m_PatronLandedSound = 0x1420; // CSoundEventName
        constexpr uintptr_t m_PatronKilledSound = 0x1430; // CSoundEventName
        constexpr uintptr_t m_LaserSound = 0x1440; // CSoundEventName
        constexpr uintptr_t m_LaserBeamModifier = 0x1450; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_DyingModifier = 0x1460; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_VulnerableModifier = 0x1470; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_Phase1Modifier = 0x1480; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_Phase2Modifier = 0x1490; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_BackdoorProtection = 0x14a0; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ObjectiveRegen = 0x14b0; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_LaserChargingParticle = 0x14c0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaserBeamEffect = 0x15a0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaserPreviewEffect = 0x1680; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaserDamageEffect = 0x1760; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flLaserTargetingZOffset = 0x1840; // float32
        constexpr uintptr_t m_flLaserTrackingSpeed = 0x1844; // float32
        constexpr uintptr_t m_flLaserTrackingMaxSpeed = 0x1848; // float32
        constexpr uintptr_t m_flLaserCastingTrackSpeed = 0x184c; // float32
        constexpr uintptr_t m_flLaserCastingTrackMaxSpeed = 0x1850; // float32
        constexpr uintptr_t m_flLaserDPSToPlayers = 0x1854; // float32
        constexpr uintptr_t m_flLaserDPSToNPCs = 0x1858; // float32
        constexpr uintptr_t m_flNoShieldLaserTrackingSpeed = 0x185c; // float32
        constexpr uintptr_t m_flNoShieldLaserTrackingMaxSpeed = 0x1860; // float32
        constexpr uintptr_t m_flNoShieldLaserCastingTrackSpeed = 0x1864; // float32
        constexpr uintptr_t m_flNoShieldLaserCastingTrackMaxSpeed = 0x1868; // float32
        constexpr uintptr_t m_flNoShieldLaserDPSToPlayers = 0x186c; // float32
        constexpr uintptr_t m_flNoShieldLaserDPSToNPCs = 0x1870; // float32
    }
    namespace CCitadel_Ability_Hornet_Chain {
        constexpr uintptr_t m_vLaunchPosition = 0xc98; // Vector
        constexpr uintptr_t m_qLaunchAngle = 0xca4; // QAngle
    }
    namespace CItemSingleTargetStunVData {
        constexpr uintptr_t m_StunDelayModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CastParticle = 0x15a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CItem_WitheringWhip_VData {
        constexpr uintptr_t m_DebuffModifier = 0x1698; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CInfoOffscreenPanoramaTexture {
        constexpr uintptr_t m_bDisabled = 0x560; // bool
        constexpr uintptr_t m_nResolutionX = 0x564; // int32
        constexpr uintptr_t m_nResolutionY = 0x568; // int32
        constexpr uintptr_t m_szLayoutFileName = 0x570; // CUtlSymbolLarge
        constexpr uintptr_t m_RenderAttrName = 0x578; // CUtlSymbolLarge
        constexpr uintptr_t m_TargetEntities = 0x580; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
        constexpr uintptr_t m_nTargetChangeCount = 0x598; // int32
        constexpr uintptr_t m_vecCSSClasses = 0x5a0; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
        constexpr uintptr_t m_bCheckCSSClasses = 0x718; // bool
    }
    namespace C_DynamicLight {
        constexpr uintptr_t m_Flags = 0x840; // uint8
        constexpr uintptr_t m_LightStyle = 0x841; // uint8
        constexpr uintptr_t m_Radius = 0x844; // float32
        constexpr uintptr_t m_Exponent = 0x848; // int32
        constexpr uintptr_t m_InnerAngle = 0x84c; // float32
        constexpr uintptr_t m_OuterAngle = 0x850; // float32
        constexpr uintptr_t m_SpotRadius = 0x854; // float32
    }
    namespace CCitadel_Ability_PrimaryWeapon_SlorkVData {
        constexpr uintptr_t m_HitParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WeaponShapeParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WeaponRangeAssistParticle = 0x1758; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_nNumConePoints = 0x1838; // int32
        constexpr uintptr_t m_flRoundPerSecond = 0x183c; // float32
        constexpr uintptr_t m_DebuffModifier = 0x1840; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PoisonSprayerHitSound = 0x1850; // CSoundEventName
        constexpr uintptr_t m_WeaponLoopStartSound = 0x1860; // CSoundEventName
        constexpr uintptr_t m_WeaponLoopSound = 0x1870; // CSoundEventName
        constexpr uintptr_t m_WeaponLoopEndSound = 0x1880; // CSoundEventName
    }
    namespace CCitadel_Ability_ViperHookblade {
        constexpr uintptr_t m_vecOutgoingHitList = 0xc98; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_vecReturningHitList = 0xcb0; // CUtlVector< CHandle< C_BaseEntity > >
    }
    namespace CCitadel_Modifier_Bull_Leap_BoostingVData {
        constexpr uintptr_t m_BoostTrailParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
        constexpr uintptr_t m_AmbushModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_InvisModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityGuidedArrowVData {
        constexpr uintptr_t m_cameraCancelledTransitionBacktoArcher = 0x1550; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_cameraExplodedTransitionBackToArcher = 0x15d8; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_flCameraHoldAtExplosion = 0x1660; // float32
        constexpr uintptr_t m_flFadeToBlackTime = 0x1664; // float32
        constexpr uintptr_t m_SpectatingProjectileParticle = 0x1668; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplosionParticle = 0x1748; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_GuidedArrowChannelParticle = 0x1828; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ProjectileModel = 0x1908; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_ArrowOffsetX = 0x19e8; // float32
        constexpr uintptr_t m_ArrowCameraDistance = 0x19ec; // float32
        constexpr uintptr_t m_ArrowCameraHeightOffset = 0x19f0; // float32
        constexpr uintptr_t m_ArrowInitialPitch = 0x19f4; // float32
        constexpr uintptr_t m_GuidingModifier = 0x19f8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x1a08; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_KillCheckModifier = 0x1a18; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strExplodeSound = 0x1a28; // CSoundEventName
        constexpr uintptr_t m_flTrackAmount = 0x1a38; // float32
        constexpr uintptr_t m_flSpeedAccel = 0x1a3c; // float32
        constexpr uintptr_t m_flSpeedDeccel = 0x1a40; // float32
        constexpr uintptr_t m_flBaseProjectileSpeed = 0x1a44; // float32
        constexpr uintptr_t m_flMaxProjectileSpeed = 0x1a48; // float32
        constexpr uintptr_t m_flArrowModelTurnSpringStrength = 0x1a4c; // float32
        constexpr uintptr_t m_flKillCheckWindow = 0x1a50; // float32
        constexpr uintptr_t m_flWorldCollideGraceWindow = 0x1a54; // float32
    }
    namespace CAbilityPowerJumpVData {
        constexpr uintptr_t m_JumpParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_InAirModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PowerJumpModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_FuncElectrifiedVolume {
        constexpr uintptr_t m_nAmbientEffect = 0x840; // ParticleIndex_t
        constexpr uintptr_t m_EffectName = 0x848; // CUtlSymbolLarge
        constexpr uintptr_t m_bState = 0x850; // bool
    }
    namespace CCitadelModifierCadenceGunSpikesVData {
        constexpr uintptr_t m_strSmallIconCssClassMax = 0x608; // CUtlString
    }
    namespace CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
        constexpr uintptr_t m_BuildUpModifier = 0x608; // CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup >
        constexpr uintptr_t m_ExplodeParticle = 0x618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeSound = 0x6f8; // CSoundEventName
    }
    namespace CCitadelYamatoBaseVData {
        constexpr uintptr_t m_flShadowFormSpeed = 0x1550; // float32
    }
    namespace CCitadel_Modifier_TangoTether_TetherReceiverVData {
        constexpr uintptr_t m_strAttackBuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TetherSound = 0x6e8; // CSoundEventName
    }
    namespace CModifier_WreckerSalvageVData {
        constexpr uintptr_t m_SalvageBeam = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ConnectBeam = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_HatTrick {
        constexpr uintptr_t m_hProjectile = 0xc98; // CHandle< C_CitadelProjectile >
    }
    namespace CCitadel_Modifier_Ricochet_ProcVData {
        constexpr uintptr_t m_RicochetTracerParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Invis {
        constexpr uintptr_t m_bInvis = 0x248; // bool
        constexpr uintptr_t m_flStartInvisTime = 0x24c; // GameTime_t
        constexpr uintptr_t m_bFullyInvis = 0x250; // bool
        constexpr uintptr_t m_flLastDamageTaken = 0x254; // GameTime_t
        constexpr uintptr_t m_flLastSpotted = 0x258; // GameTime_t
        constexpr uintptr_t m_nDetectionRangeRing = 0x25c; // ParticleIndex_t
        constexpr uintptr_t m_nFullInvisEffect = 0x260; // ParticleIndex_t
    }
    namespace CCitadel_Ability_BloodBombVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SpilledBloodModifier = 0x1630; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strBloodSpillStatName = 0x1640; // CUtlString
    }
    namespace C_EnvDetailController {
        constexpr uintptr_t m_flFadeStartDist = 0x560; // float32
        constexpr uintptr_t m_flFadeEndDist = 0x564; // float32
    }
    namespace C_BaseEntity {
        constexpr uintptr_t m_CBodyComponent = 0x40; // CBodyComponent*
        constexpr uintptr_t m_NetworkTransmitComponent = 0x48; // CNetworkTransmitComponent
        constexpr uintptr_t m_nLastThinkTick = 0x328; // GameTick_t
        constexpr uintptr_t m_pGameSceneNode = 0x330; // CGameSceneNode*
        constexpr uintptr_t m_pRenderComponent = 0x338; // CRenderComponent*
        constexpr uintptr_t m_pCollision = 0x340; // CCollisionProperty*
        constexpr uintptr_t m_pModifierProp = 0x348; // CModifierProperty*
        constexpr uintptr_t m_iMaxHealth = 0x350; // int32
        constexpr uintptr_t m_iHealth = 0x354; // int32
        constexpr uintptr_t m_lifeState = 0x358; // uint8
        constexpr uintptr_t m_bTakesDamage = 0x359; // bool
        constexpr uintptr_t m_nTakeDamageFlags = 0x360; // TakeDamageFlags_t
        constexpr uintptr_t m_nPlatformType = 0x368; // EntityPlatformTypes_t
        constexpr uintptr_t m_ubInterpolationFrame = 0x369; // uint8
        constexpr uintptr_t m_hSceneObjectController = 0x36c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nNoInterpolationTick = 0x370; // int32
        constexpr uintptr_t m_nVisibilityNoInterpolationTick = 0x374; // int32
        constexpr uintptr_t m_flProxyRandomValue = 0x378; // float32
        constexpr uintptr_t m_iEFlags = 0x37c; // int32
        constexpr uintptr_t m_nWaterType = 0x380; // uint8
        constexpr uintptr_t m_bInterpolateEvenWithNoModel = 0x381; // bool
        constexpr uintptr_t m_bPredictionEligible = 0x382; // bool
        constexpr uintptr_t m_bApplyLayerMatchIDToModel = 0x383; // bool
        constexpr uintptr_t m_tokLayerMatchID = 0x384; // CUtlStringToken
        constexpr uintptr_t m_nSubclassID = 0x388; // CUtlStringToken
        constexpr uintptr_t m_nSimulationTick = 0x398; // int32
        constexpr uintptr_t m_iCurrentThinkContext = 0x39c; // int32
        constexpr uintptr_t m_aThinkFunctions = 0x3a0; // CUtlVector< thinkfunc_t >
        constexpr uintptr_t m_bDisabledContextThinks = 0x3b8; // bool
        constexpr uintptr_t m_flAnimTime = 0x3bc; // float32
        constexpr uintptr_t m_flSimulationTime = 0x3c0; // float32
        constexpr uintptr_t m_nSceneObjectOverrideFlags = 0x3c4; // uint8
        constexpr uintptr_t m_bHasSuccessfullyInterpolated = 0x3c5; // bool
        constexpr uintptr_t m_bHasAddedVarsToInterpolation = 0x3c6; // bool
        constexpr uintptr_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3c7; // bool
        constexpr uintptr_t m_nInterpolationLatchDirtyFlags = 0x3c8; // int32[2]
        constexpr uintptr_t m_ListEntry = 0x3d0; // uint16[11]
        constexpr uintptr_t m_flCreateTime = 0x3e8; // GameTime_t
        constexpr uintptr_t m_flSpeed = 0x3ec; // float32
        constexpr uintptr_t m_EntClientFlags = 0x3f0; // uint16
        constexpr uintptr_t m_bClientSideRagdoll = 0x3f2; // bool
        constexpr uintptr_t m_iTeamNum = 0x3f3; // uint8
        constexpr uintptr_t m_spawnflags = 0x3f4; // uint32
        constexpr uintptr_t m_nNextThinkTick = 0x3f8; // GameTick_t
        constexpr uintptr_t m_fFlags = 0x3fc; // uint32
        constexpr uintptr_t m_vecAbsVelocity = 0x400; // Vector
        constexpr uintptr_t m_vecVelocity = 0x410; // CNetworkVelocityVector
        constexpr uintptr_t m_hEffectEntity = 0x440; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hOwnerEntity = 0x444; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_MoveCollide = 0x448; // MoveCollide_t
        constexpr uintptr_t m_MoveType = 0x449; // MoveType_t
        constexpr uintptr_t m_nActualMoveType = 0x44a; // MoveType_t
        constexpr uintptr_t m_flWaterLevel = 0x44c; // float32
        constexpr uintptr_t m_fEffects = 0x450; // uint32
        constexpr uintptr_t m_hGroundEntity = 0x454; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nGroundBodyIndex = 0x458; // int32
        constexpr uintptr_t m_flFriction = 0x45c; // float32
        constexpr uintptr_t m_flElasticity = 0x460; // float32
        constexpr uintptr_t m_flGravityScale = 0x464; // float32
        constexpr uintptr_t m_flTimeScale = 0x468; // float32
        constexpr uintptr_t m_bAnimatedEveryTick = 0x46c; // bool
        constexpr uintptr_t m_flNavIgnoreUntilTime = 0x470; // GameTime_t
        constexpr uintptr_t m_hThink = 0x474; // uint16
        constexpr uintptr_t m_fBBoxVisFlags = 0x480; // uint8
        constexpr uintptr_t m_bPredictable = 0x481; // bool
        constexpr uintptr_t m_bRenderWithViewModels = 0x482; // bool
        constexpr uintptr_t m_nSplitUserPlayerPredictionSlot = 0x484; // CSplitScreenSlot
        constexpr uintptr_t m_nFirstPredictableCommand = 0x488; // int32
        constexpr uintptr_t m_nLastPredictableCommand = 0x48c; // int32
        constexpr uintptr_t m_hOldMoveParent = 0x490; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_Particles = 0x498; // CParticleProperty
        constexpr uintptr_t m_vecPredictedScriptFloats = 0x4c0; // CUtlVector< float32 >
        constexpr uintptr_t m_vecPredictedScriptFloatIDs = 0x4d8; // CUtlVector< int32 >
        constexpr uintptr_t m_nNextScriptVarRecordID = 0x508; // int32
        constexpr uintptr_t m_vecAngVelocity = 0x518; // QAngle
        constexpr uintptr_t m_DataChangeEventRef = 0x524; // int32
        constexpr uintptr_t m_dependencies = 0x528; // CUtlVector< CEntityHandle >
        constexpr uintptr_t m_nCreationTick = 0x540; // int32
        constexpr uintptr_t m_bAnimTimeChanged = 0x54d; // bool
        constexpr uintptr_t m_bSimulationTimeChanged = 0x54e; // bool
        constexpr uintptr_t m_sUniqueHammerID = 0x558; // CUtlString
    }
    namespace CGameModifier_FireConCommandVData {
        constexpr uintptr_t m_FireOnAdded = 0x608; // CUtlString
        constexpr uintptr_t m_FireOnRemoved = 0x610; // CUtlString
    }
    namespace CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData {
        constexpr uintptr_t m_AttackerHitFx = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_playerBuffSelf = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_playerBuffEnemy = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ReflectedBulletTracerParticle = 0x988; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAttackerHitSound = 0xa68; // CSoundEventName
        constexpr uintptr_t m_strVictimHitSound = 0xa78; // CSoundEventName
    }
    namespace CModifierAirLiftExplodeTargetVData {
        constexpr uintptr_t m_strSilenceTargetSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_SilenceModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x628; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BulletResistModifier = 0x638; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_ArmorUpgrade_DebuffReducerVData {
        constexpr uintptr_t m_DebuffReducedParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PurgeCastParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MoveSpeedModifier = 0x1758; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CEntityIdentity {
        constexpr uintptr_t m_nameStringableIndex = 0x14; // int32
        constexpr uintptr_t m_name = 0x18; // CUtlSymbolLarge
        constexpr uintptr_t m_designerName = 0x20; // CUtlSymbolLarge
        constexpr uintptr_t m_flags = 0x30; // uint32
        constexpr uintptr_t m_worldGroupId = 0x38; // WorldGroupId_t
        constexpr uintptr_t m_fDataObjectTypes = 0x3c; // uint32
        constexpr uintptr_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
        constexpr uintptr_t m_pPrev = 0x58; // CEntityIdentity*
        constexpr uintptr_t m_pNext = 0x60; // CEntityIdentity*
        constexpr uintptr_t m_pPrevByClass = 0x68; // CEntityIdentity*
        constexpr uintptr_t m_pNextByClass = 0x70; // CEntityIdentity*
    }
    namespace C_Citadel_Bounce_Pad {
        constexpr uintptr_t m_flUpFactor = 0xaf0; // float32
        constexpr uintptr_t m_flBounceVelocity = 0xaf4; // float32
        constexpr uintptr_t m_flBarrelBounceVelocity = 0xaf8; // float32
        constexpr uintptr_t m_flBarrelUpFactor = 0xafc; // float32
        constexpr uintptr_t m_bSpeedOnLand = 0xb00; // bool
    }
    namespace C_PhysicsProp {
        constexpr uintptr_t m_bAwake = 0xc70; // bool
    }
    namespace C_BreakableProp {
        constexpr uintptr_t m_CPropDataComponent = 0xb28; // CPropDataComponent
        constexpr uintptr_t m_OnBreak = 0xb68; // CEntityIOOutput
        constexpr uintptr_t m_OnHealthChanged = 0xb90; // CEntityOutputTemplate< float32 >
        constexpr uintptr_t m_OnTakeDamage = 0xbb8; // CEntityIOOutput
        constexpr uintptr_t m_impactEnergyScale = 0xbe0; // float32
        constexpr uintptr_t m_iMinHealthDmg = 0xbe4; // int32
        constexpr uintptr_t m_flPressureDelay = 0xbe8; // float32
        constexpr uintptr_t m_flDefBurstScale = 0xbec; // float32
        constexpr uintptr_t m_vDefBurstOffset = 0xbf0; // Vector
        constexpr uintptr_t m_hBreaker = 0xbfc; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_PerformanceMode = 0xc00; // PerformanceMode_t
        constexpr uintptr_t m_flPreventDamageBeforeTime = 0xc04; // GameTime_t
        constexpr uintptr_t m_BreakableContentsType = 0xc08; // BreakableContentsType_t
        constexpr uintptr_t m_strBreakableContentsPropGroupOverride = 0xc10; // CUtlString
        constexpr uintptr_t m_strBreakableContentsParticleOverride = 0xc18; // CUtlString
        constexpr uintptr_t m_bHasBreakPiecesOrCommands = 0xc20; // bool
        constexpr uintptr_t m_explodeDamage = 0xc24; // float32
        constexpr uintptr_t m_explodeRadius = 0xc28; // float32
        constexpr uintptr_t m_explosionDelay = 0xc30; // float32
        constexpr uintptr_t m_explosionBuildupSound = 0xc38; // CUtlSymbolLarge
        constexpr uintptr_t m_explosionCustomEffect = 0xc40; // CUtlSymbolLarge
        constexpr uintptr_t m_explosionCustomSound = 0xc48; // CUtlSymbolLarge
        constexpr uintptr_t m_explosionModifier = 0xc50; // CUtlSymbolLarge
        constexpr uintptr_t m_hPhysicsAttacker = 0xc58; // CHandle< C_BasePlayerPawn >
        constexpr uintptr_t m_flLastPhysicsInfluenceTime = 0xc5c; // GameTime_t
        constexpr uintptr_t m_flDefaultFadeScale = 0xc60; // float32
        constexpr uintptr_t m_hLastAttacker = 0xc64; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hFlareEnt = 0xc68; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_noGhostCollision = 0xc6c; // bool
    }
    namespace CCitadel_Ability_Lash_Ultimate {
        constexpr uintptr_t m_EGrappleState = 0xe12; // ELashGrappleState
        constexpr uintptr_t m_flStateEnterTime = 0xe14; // GameTime_t
        constexpr uintptr_t m_flNextStateTime = 0xe18; // GameTime_t
        constexpr uintptr_t m_flBoostEndTime = 0xe1c; // GameTime_t
    }
    namespace CCitadelModifierItemPickupTimerVData {
        constexpr uintptr_t m_TimerToSilence = 0x608; // float32
        constexpr uintptr_t m_SilenceDuration = 0x60c; // float32
        constexpr uintptr_t m_SilenceModifier = 0x610; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_bIsIdolPickup = 0x620; // bool
    }
    namespace CCitadel_Ability_Rutger_Pulse_VData {
        constexpr uintptr_t m_AuraModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CAbilityViscousBowlingVData {
        constexpr uintptr_t m_TransformStartFx = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplodeFX = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_WallImpactFx = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BallTrailFx = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_GroundImpactParticle = 0x18d0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_JumpParticle = 0x19b0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DirectionParticle = 0x1a90; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flVerticalCameraOffsetLerpTime = 0x1b70; // float32
        constexpr uintptr_t m_flVerticalCameraOffsetBias = 0x1b74; // float32
        constexpr uintptr_t m_flVerticalCameraOffset = 0x1b78; // float32
        constexpr uintptr_t m_flDistanceCameraOffsetLerpTime = 0x1b7c; // float32
        constexpr uintptr_t m_flDistanceCameraOffsetBias = 0x1b80; // float32
        constexpr uintptr_t m_flDistanceCameraOffset = 0x1b84; // float32
        constexpr uintptr_t m_strPopGraphParamter = 0x1b88; // CGlobalSymbol
        constexpr uintptr_t m_BallJumpSound = 0x1b90; // CSoundEventName
        constexpr uintptr_t m_EnterBallSound = 0x1ba0; // CSoundEventName
        constexpr uintptr_t m_BallLoopSound = 0x1bb0; // CSoundEventName
        constexpr uintptr_t m_ExitBallSound = 0x1bc0; // CSoundEventName
        constexpr uintptr_t m_WallImpactSound = 0x1bd0; // CSoundEventName
        constexpr uintptr_t m_PlayerImpactSound = 0x1be0; // CSoundEventName
        constexpr uintptr_t m_ImpactModifier = 0x1bf0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DamagePreventionModifier = 0x1c00; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_RollingModifier = 0x1c10; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flTransformToBallTime = 0x1c20; // float32
        constexpr uintptr_t m_flTransformFromBallTime = 0x1c24; // float32
        constexpr uintptr_t m_flAirTurnRatio = 0x1c28; // float32
        constexpr uintptr_t m_flWallTurnRatioMax = 0x1c2c; // float32
        constexpr uintptr_t m_flWallTurnRatioMin = 0x1c30; // float32
        constexpr uintptr_t m_flTurnRatio = 0x1c34; // float32
        constexpr uintptr_t m_flDefaultBallSpeed = 0x1c38; // float32
        constexpr uintptr_t m_flFastBallSpeed = 0x1c3c; // float32
        constexpr uintptr_t m_flSpeedAccel = 0x1c40; // float32
        constexpr uintptr_t m_flSpeedDeccel = 0x1c44; // float32
        constexpr uintptr_t m_flElasticity = 0x1c48; // float32
        constexpr uintptr_t m_flWallCheckGroundOffset = 0x1c4c; // float32
        constexpr uintptr_t m_flWallPauseTime = 0x1c50; // float32
        constexpr uintptr_t m_flWallAngleMin = 0x1c54; // float32
    }
    namespace CCitadel_Modifier_Base_BuildupVData {
        constexpr uintptr_t m_bUseBaseWeaponCycleTimeForDelay = 0x608; // bool
        constexpr uintptr_t m_flCycleTimeDelayAdd = 0x60c; // float32
        constexpr uintptr_t m_flBuildUpDecayDelay = 0x610; // float32
        constexpr uintptr_t m_eBuildupMode = 0x614; // BuildupMode_t
        constexpr uintptr_t m_bBuildupAffectedByEffectiveness = 0x618; // bool
        constexpr uintptr_t m_bPassBuildupEffectivenessToFillModifier = 0x619; // bool
    }
    namespace CCitadelItemPickupRejuv {
        constexpr uintptr_t m_CCitadelAbilityComponent = 0xb20; // CCitadelAbilityComponent
        constexpr uintptr_t m_bPickedUp = 0xcc0; // bool
    }
    namespace C_Beam {
        constexpr uintptr_t m_flFrameRate = 0x840; // float32
        constexpr uintptr_t m_flHDRColorScale = 0x844; // float32
        constexpr uintptr_t m_flFireTime = 0x848; // GameTime_t
        constexpr uintptr_t m_flDamage = 0x84c; // float32
        constexpr uintptr_t m_nNumBeamEnts = 0x850; // uint8
        constexpr uintptr_t m_queryHandleHalo = 0x854; // int32
        constexpr uintptr_t m_hBaseMaterial = 0x878; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_nHaloIndex = 0x880; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_nBeamType = 0x888; // BeamType_t
        constexpr uintptr_t m_nBeamFlags = 0x88c; // uint32
        constexpr uintptr_t m_hAttachEntity = 0x890; // CHandle< C_BaseEntity >[10]
        constexpr uintptr_t m_nAttachIndex = 0x8b8; // AttachmentHandle_t[10]
        constexpr uintptr_t m_fWidth = 0x8c4; // float32
        constexpr uintptr_t m_fEndWidth = 0x8c8; // float32
        constexpr uintptr_t m_fFadeLength = 0x8cc; // float32
        constexpr uintptr_t m_fHaloScale = 0x8d0; // float32
        constexpr uintptr_t m_fAmplitude = 0x8d4; // float32
        constexpr uintptr_t m_fStartFrame = 0x8d8; // float32
        constexpr uintptr_t m_fSpeed = 0x8dc; // float32
        constexpr uintptr_t m_flFrame = 0x8e0; // float32
        constexpr uintptr_t m_nClipStyle = 0x8e4; // BeamClipStyle_t
        constexpr uintptr_t m_bTurnedOff = 0x8e8; // bool
        constexpr uintptr_t m_vecEndPos = 0x8ec; // Vector
        constexpr uintptr_t m_hEndEntity = 0x8f8; // CHandle< C_BaseEntity >
    }
    namespace CCitadel_Modifier_ZiplineBoostVData {
        constexpr uintptr_t m_flRampUpTime = 0x608; // float32
        constexpr uintptr_t m_flPercentageSpeedIncrease = 0x60c; // float32
        constexpr uintptr_t m_cameraSequenceStartBoost = 0x610; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Modifier_Snipe_Glow {
        constexpr uintptr_t m_nFXIndex = 0xc0; // ParticleIndex_t
    }
    namespace CAbilitySlorkChompVData {
        constexpr uintptr_t m_ChompHobbled = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ChompGrapple = 0x1560; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Ability_Tengu_AirLift {
        constexpr uintptr_t m_nHoldBombEffect = 0xc98; // ParticleIndex_t
        constexpr uintptr_t m_bFlying = 0xe98; // bool
        constexpr uintptr_t m_bFlyingStarted = 0xe99; // bool
        constexpr uintptr_t m_bIsGrabbing = 0xe9a; // bool
        constexpr uintptr_t m_bIsHoldingBomb = 0xe9b; // bool
        constexpr uintptr_t m_flCurrentSpeed = 0xe9c; // float32
    }
    namespace CAbilityChronoSwapVData {
        constexpr uintptr_t m_BubbleMoveModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strSwapStarted = 0x1560; // CSoundEventName
    }
    namespace CCitadel_Modifier_Frenzy_MoveSpeed {
        constexpr uintptr_t m_flMoveSpeedPerStack = 0xc0; // float32
    }
    namespace CCitadelSpectateDirectedCamera {
        constexpr uintptr_t m_flCameraDist = 0x564; // float32
        constexpr uintptr_t m_flCameraPitch = 0x568; // float32
        constexpr uintptr_t m_flCameraHeight = 0x56c; // float32
        constexpr uintptr_t m_hTarget = 0x570; // CHandle< C_BaseEntity >
    }
    namespace CAbilityExplosiveBarrelVData {
        constexpr uintptr_t m_BarrelExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MirvExplodeParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BarrelBurnParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strExplodeSound = 0x17f0; // CSoundEventName
        constexpr uintptr_t m_strMirvExplodeSound = 0x1800; // CSoundEventName
        constexpr uintptr_t m_strRiccochetSound = 0x1810; // CSoundEventName
        constexpr uintptr_t m_strBarrelSoundLp = 0x1820; // CSoundEventName
        constexpr uintptr_t m_strBarrelLaunchSound = 0x1830; // CSoundEventName
        constexpr uintptr_t m_strBarrelMeleedSound = 0x1840; // CSoundEventName
    }
    namespace CCitadel_Ability_MobileResupplyVData {
        constexpr uintptr_t m_flResupplyForceScale = 0x1550; // float32
        constexpr uintptr_t m_flResupplyUp = 0x1554; // float32
        constexpr uintptr_t m_strKilledSound = 0x1558; // CSoundEventName
        constexpr uintptr_t m_AuraModifier = 0x1568; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_DispenserModel = 0x1578; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_SprayParticle = 0x1658; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DestroyedParticle = 0x1738; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Fervor_VData {
        constexpr uintptr_t m_FervorParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BonusesModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_WeaponPowerForHealth {
        constexpr uintptr_t m_flHealthDrained = 0xc0; // float32
    }
    namespace C_EnvScreenOverlay {
        constexpr uintptr_t m_iszOverlayNames = 0x560; // CUtlSymbolLarge[10]
        constexpr uintptr_t m_flOverlayTimes = 0x5b0; // float32[10]
        constexpr uintptr_t m_flStartTime = 0x5d8; // GameTime_t
        constexpr uintptr_t m_iDesiredOverlay = 0x5dc; // int32
        constexpr uintptr_t m_bIsActive = 0x5e0; // bool
        constexpr uintptr_t m_bWasActive = 0x5e1; // bool
        constexpr uintptr_t m_iCachedDesiredOverlay = 0x5e4; // int32
        constexpr uintptr_t m_iCurrentOverlay = 0x5e8; // int32
        constexpr uintptr_t m_flCurrentOverlayTime = 0x5ec; // GameTime_t
    }
    namespace CModifier_Mirage_FireScarabs_HealthLoss_VData {
        constexpr uintptr_t m_SiphonParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityTokamakHeatSinksInherentVData {
        constexpr uintptr_t m_HotTracerParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HotWeaponFxParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strHotWeaponShootSound = 0x1710; // CSoundEventName
        constexpr uintptr_t m_strOverheatRed = 0x1720; // CSoundEventName
        constexpr uintptr_t m_strOverheatFull = 0x1730; // CSoundEventName
    }
    namespace CCitadel_Modifier_TangoTether_TetherVData {
        constexpr uintptr_t m_TetherSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_HealSound = 0x618; // CSoundEventName
        constexpr uintptr_t m_HitIndicator = 0x628; // CSoundEventName
        constexpr uintptr_t m_GrappleHitSound = 0x638; // CSoundEventName
        constexpr uintptr_t m_BuffModifier = 0x648; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DisconnectingModifier = 0x658; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DisconnectedModifier = 0x668; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_LockedTargetModifier = 0x678; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flMinConnectTime = 0x688; // float32
        constexpr uintptr_t m_flDisconnectDistanceBuffer = 0x68c; // float32
        constexpr uintptr_t m_flCandidateCloserDistance = 0x690; // float32
        constexpr uintptr_t m_flTargetAwayDistance = 0x694; // float32
    }
    namespace CCitadel_Ability_WreckerTeleport {
        constexpr uintptr_t m_hProjectile = 0xca0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_flArrowSpeed = 0xca4; // float32
        constexpr uintptr_t m_flSnapAnglesBackTime = 0xca8; // GameTime_t
        constexpr uintptr_t m_flCastTimeDamage = 0xcac; // float32
        constexpr uintptr_t m_flCastTime = 0xcb0; // GameTime_t
        constexpr uintptr_t m_bNeedsExplosion = 0xcb4; // bool
        constexpr uintptr_t m_vProjectileRemovedOrigin = 0xcb8; // Vector
        constexpr uintptr_t m_angCasterAnglesAtCastTime = 0xcc4; // QAngle
        constexpr uintptr_t m_flTravelDistance = 0xcd0; // float32
    }
    namespace CCitadel_Modifier_SnipeGlowVData {
        constexpr uintptr_t m_GlowParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_ChargeDragEnemy {
        constexpr uintptr_t m_qRelativeOffset = 0xc0; // QAngle
        constexpr uintptr_t m_flRelativeDist = 0xcc; // float32
        constexpr uintptr_t m_flMaxDist = 0xd0; // float32
        constexpr uintptr_t m_vecOffsetDir = 0xd4; // Vector
        constexpr uintptr_t m_vecStartPosition = 0xe0; // Vector
    }
    namespace CCitadel_Modifier_Containment_Victim {
        constexpr uintptr_t m_flTetherRadius = 0xc0; // float32
        constexpr uintptr_t m_vecOrigin = 0xc4; // Vector
    }
    namespace CCitadel_GrandFinaleStage {
        constexpr uintptr_t m_vStartPos = 0xae8; // Vector
        constexpr uintptr_t m_vEndPos = 0xaf4; // Vector
        constexpr uintptr_t m_flStartEmitTime = 0xb00; // GameTime_t
        constexpr uintptr_t m_flEndEmitTime = 0xb04; // GameTime_t
        constexpr uintptr_t m_nTouchCount = 0xb08; // int32
    }
    namespace C_PointWorldText {
        constexpr uintptr_t m_bForceRecreateNextUpdate = 0x848; // bool
        constexpr uintptr_t m_messageText = 0x858; // char[512]
        constexpr uintptr_t m_FontName = 0xa58; // char[64]
        constexpr uintptr_t m_bEnabled = 0xa98; // bool
        constexpr uintptr_t m_bFullbright = 0xa99; // bool
        constexpr uintptr_t m_flWorldUnitsPerPx = 0xa9c; // float32
        constexpr uintptr_t m_flFontSize = 0xaa0; // float32
        constexpr uintptr_t m_flDepthOffset = 0xaa4; // float32
        constexpr uintptr_t m_bDrawBackground = 0xaa8; // bool
        constexpr uintptr_t m_Color = 0xaa9; // Color
        constexpr uintptr_t m_nJustifyHorizontal = 0xab0; // PointWorldTextJustifyHorizontal_t
        constexpr uintptr_t m_nJustifyVertical = 0xab4; // PointWorldTextJustifyVertical_t
        constexpr uintptr_t m_nReorientMode = 0xab8; // PointWorldTextReorientMode_t
    }
    namespace CCitadel_Modifier_ShieldImpactVData {
        constexpr uintptr_t m_ShieldBreakParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShieldBreakSound = 0x6e8; // CSoundEventName
    }
    namespace CCitadelHeroComponent {
        constexpr uintptr_t m_nHeroID = 0x14; // HeroID_t
        constexpr uintptr_t m_nHeroLoading = 0x18; // HeroID_t
    }
    namespace CCitadel_Ability_Nano_Pounce_Instant {
        constexpr uintptr_t m_bActive = 0xec8; // bool
        constexpr uintptr_t m_hCurrentTarget = 0xecc; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hLastCastTarget = 0xed0; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_vStartPosition = 0xed4; // Vector
        constexpr uintptr_t m_vDeparturePosition = 0xee0; // Vector
        constexpr uintptr_t m_flDepartureTime = 0xef0; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flArrivalTime = 0xf08; // CCitadelAutoScaledTime
        constexpr uintptr_t m_vLastKnownSafePos = 0xf20; // Vector
        constexpr uintptr_t m_bIsFirstCastCompleted = 0xf2e; // bool
        constexpr uintptr_t m_tDoubleCastWindow = 0xf30; // GameTime_t
    }
    namespace CCitadel_Modifier_Infuser_VData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadelAutoScaledTime {
        constexpr uintptr_t m_flTime = 0x8; // GameTime_t
    }
    namespace CNPC_MidBossVData {
        constexpr uintptr_t m_iStartingHealth = 0xf78; // int32
        constexpr uintptr_t m_iHealthGainPerMinute = 0xf7c; // int32
        constexpr uintptr_t m_flAggroTime = 0xf80; // float32
        constexpr uintptr_t m_DyingSmallExplosion = 0xf88; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DyingFinalExplosion = 0x1068; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_flDyingDuration = 0x1148; // float32
        constexpr uintptr_t m_KnockbackAura = 0x1150; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AggroEnemy = 0x1160; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Thumper_PullAOE_VData {
        constexpr uintptr_t m_AuraParticle = 0x648; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Tengu_StoneFormVData {
        constexpr uintptr_t m_CastParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_StoneFormParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastTargetSound = 0x17f0; // CSoundEventName
        constexpr uintptr_t m_strImpactSound = 0x1800; // CSoundEventName
        constexpr uintptr_t m_strFallCollideImpactSound = 0x1810; // CSoundEventName
        constexpr uintptr_t m_DragModifier = 0x1820; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_strTrueFormModel = 0x1830; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
        constexpr uintptr_t m_flLandHoldTime = 0x1910; // float32
        constexpr uintptr_t m_flRisingTime = 0x1914; // float32
        constexpr uintptr_t m_flCollideRadius = 0x1918; // float32
    }
    namespace CCitadel_Ability_UltComboVData {
        constexpr uintptr_t m_MeleeSwingParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_MeleeImpactParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SelfModifier = 0x1710; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetModifier = 0x1720; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_KillCheckModifier = 0x1730; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flKillCheckWindow = 0x1740; // float32
    }
    namespace CCitadel_Modifier_DragEnemyVData {
        constexpr uintptr_t m_flForwardOffset = 0x608; // float32
        constexpr uintptr_t m_flVerticalOffset = 0x60c; // float32
        constexpr uintptr_t m_flDragDistance = 0x610; // float32
        constexpr uintptr_t m_flForceDistScale = 0x614; // float32
    }
    namespace CCitadel_Item {
        constexpr uintptr_t m_vecComponentsConsumed = 0xc98; // C_NetworkUtlVectorBase< CUtlStringToken >
    }
    namespace CCitadel_Ability_Magician_MagicBolt {
        constexpr uintptr_t m_iCurrentRedirects = 0xc98; // int32
    }
    namespace CAbilityDustStormVData {
        constexpr uintptr_t m_DustStormAura = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_GrenadeTrailModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_UtilityUpgrade_DebuffImmunityVData {
        constexpr uintptr_t m_DebuffImmunityModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_UtilityUpgrade_RocketBootsVData {
        constexpr uintptr_t m_LaunchParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_InAirWatcherModifier = 0x1678; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_CritShotVData {
        constexpr uintptr_t m_SlowModifier = 0x738; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_CritSound = 0x748; // CSoundEventName
    }
    namespace CModifier_WarpStone_Caster_VData {
        constexpr uintptr_t m_playerBuffSelf = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CModifier_SiphonBullets_HealthLoss_VData {
        constexpr uintptr_t m_SiphonParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealModifier = 0x6e8; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_BerserkerVData {
        constexpr uintptr_t m_BerserkerSound = 0x608; // CSoundEventName
        constexpr uintptr_t m_StackModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Delayed_Stun {
        constexpr uintptr_t m_hRingEffect = 0xc0; // ParticleIndex_t
        constexpr uintptr_t m_flRadius = 0xc4; // float32
    }
    namespace CCitadel_Modifier_HeroUpgradeBonuses {
        constexpr uintptr_t m_pOwningPlayer = 0xc0; // C_CitadelPlayerPawn*
        constexpr uintptr_t m_flWeaponPower = 0xc8; // float32
        constexpr uintptr_t m_flArmorPower = 0xcc; // float32
        constexpr uintptr_t m_flTechPower = 0xd0; // float32
    }
    namespace C_BasePropDoor {
        constexpr uintptr_t m_eDoorState = 0xd98; // DoorState_t
        constexpr uintptr_t m_modelChanged = 0xd9c; // bool
        constexpr uintptr_t m_bLocked = 0xd9d; // bool
        constexpr uintptr_t m_bNoNPCs = 0xd9e; // bool
        constexpr uintptr_t m_closedPosition = 0xda0; // Vector
        constexpr uintptr_t m_closedAngles = 0xdac; // QAngle
        constexpr uintptr_t m_hMaster = 0xdb8; // CHandle< C_BasePropDoor >
        constexpr uintptr_t m_vWhereToSetLightingOrigin = 0xdbc; // Vector
    }
    namespace CCitadel_Modifier_ShieldTracker_Base {
        constexpr uintptr_t m_vecShield = 0xc0; // Vector
        constexpr uintptr_t m_flShieldDamageTime = 0xcc; // float32
        constexpr uintptr_t m_flShieldBreakTime = 0xd0; // float32
        constexpr uintptr_t m_flShieldBreakHealAmount = 0xd4; // float32
        constexpr uintptr_t m_flShieldBreakHealDone = 0xd8; // float32
        constexpr uintptr_t m_bShieldHealingAfterBreak = 0xdc; // bool
        constexpr uintptr_t m_bForceRegen = 0xdd; // bool
    }
    namespace CCitadel_Modifier_VacuumAuraTarget {
        constexpr uintptr_t m_flMaxDist = 0x138; // float32
        constexpr uintptr_t m_vecOffsetDir = 0x13c; // Vector
        constexpr uintptr_t m_vecStartPosition = 0x148; // Vector
        constexpr uintptr_t m_flAOERadius = 0x154; // float32
    }
    namespace CModifier_CloakingDevice_Active_Ambush {
        constexpr uintptr_t m_nAmbushParticle = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_ArmorUpgrade_AblativeCoatVData {
        constexpr uintptr_t m_RestoreEffectModifier = 0x1598; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_OnTakeDamageEffectModifier = 0x15a8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_OnBreakEffectModifier = 0x15b8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ResistBuffModifier = 0x15c8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flOnTakeDamageEffectDuration = 0x15d8; // float32
        constexpr uintptr_t m_flOnBreakEffectDuration = 0x15dc; // float32
        constexpr uintptr_t m_flOnRestoreEffectDuration = 0x15e0; // float32
    }
    namespace C_PhysPropClientside {
        constexpr uintptr_t m_flTouchDelta = 0xc70; // GameTime_t
        constexpr uintptr_t m_fDeathTime = 0xc74; // GameTime_t
        constexpr uintptr_t m_inertiaScale = 0xc78; // float32
        constexpr uintptr_t m_vecDamagePosition = 0xc7c; // Vector
        constexpr uintptr_t m_vecDamageDirection = 0xc88; // Vector
        constexpr uintptr_t m_nDamageType = 0xc94; // DamageTypes_t
    }
    namespace CCitadel_Ability_Viscous_Telepunch {
        constexpr uintptr_t m_vecTeleportPosition = 0xe90; // Vector
        constexpr uintptr_t m_vecTeleportPositionNormal = 0xe9c; // Vector
        constexpr uintptr_t m_eTelepunchState = 0xea8; // ETelepunchState_t
        constexpr uintptr_t m_flNextStateTime = 0xeac; // GameTime_t
    }
    namespace CCitadel_Ability_GooGrenade {
        constexpr uintptr_t m_vecPuddleModifiers = 0xc98; // CUtlVector< CHandle< C_BaseEntity > >
        constexpr uintptr_t m_LastDetonateTime = 0xee0; // GameTime_t
    }
    namespace CCitadel_Ability_ViscousWeapon_Alt_VData {
        constexpr uintptr_t m_strChargingParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ImpactParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FiringParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplosionSound = 0x17f0; // CSoundEventName
        constexpr uintptr_t m_ChargeSound = 0x1800; // CSoundEventName
        constexpr uintptr_t m_ShootSound = 0x1810; // CSoundEventName
    }
    namespace CCitadel_Ability_Chrono_TimeWall {
        constexpr uintptr_t m_hChargingParticle = 0xc98; // ParticleIndex_t
        constexpr uintptr_t m_vSpawnPos = 0xc9c; // Vector
        constexpr uintptr_t m_qAngles = 0xca8; // QAngle
        constexpr uintptr_t m_bAirCast = 0xcb4; // bool
    }
    namespace CCitadelBaseDashCastAbility {
        constexpr uintptr_t m_hAbilityToTrigger = 0xc98; // CHandle< C_CitadelBaseAbility >
        constexpr uintptr_t m_flDashCastStartTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_vDashCastDir = 0xca0; // Vector
    }
    namespace C_SoundAreaEntityBase {
        constexpr uintptr_t m_bDisabled = 0x560; // bool
        constexpr uintptr_t m_bWasEnabled = 0x568; // bool
        constexpr uintptr_t m_iszSoundAreaType = 0x570; // CUtlSymbolLarge
        constexpr uintptr_t m_vPos = 0x578; // Vector
    }
    namespace C_FogController {
        constexpr uintptr_t m_fog = 0x560; // fogparams_t
        constexpr uintptr_t m_bUseAngles = 0x5c8; // bool
        constexpr uintptr_t m_iChangedVariables = 0x5cc; // int32
    }
    namespace CCitadel_Modifier_ShivDashVData {
        constexpr uintptr_t m_DashParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DashEchoParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DashTrailParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_BurrowVData {
        constexpr uintptr_t m_ExplodeParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BurrowStartParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BurrowEndParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BurrowInGroundParticle = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BurrowModifier = 0x18d0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SpinModifier = 0x18e0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strBurrowEndSound = 0x18f0; // CSoundEventName
        constexpr uintptr_t m_flChannelEndEnemyPopUpForce = 0x1900; // float32
        constexpr uintptr_t m_flChannelEndEnemyPopUpCylinderHeight = 0x1904; // float32
        constexpr uintptr_t m_cameraSpinStart = 0x1908; // CitadelCameraOperationsSequence_t
    }
    namespace CCitadel_Modifier_Savior_VData {
        constexpr uintptr_t m_BuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TrailParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CAbilityWreckerTeleportVData {
        constexpr uintptr_t m_SpectatingProjectileParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ExplosionParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChannelParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastParticle = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ArrowOffsetX = 0x18d0; // float32
        constexpr uintptr_t m_ArrowCameraDistance = 0x18d4; // float32
        constexpr uintptr_t m_ArrowCameraHeightOffset = 0x18d8; // float32
        constexpr uintptr_t m_ArrowInitialPitch = 0x18dc; // float32
        constexpr uintptr_t m_GuidingModifier = 0x18e0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DebuffModifier = 0x18f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strExplodeSound = 0x1900; // CSoundEventName
        constexpr uintptr_t m_flTrackAmount = 0x1910; // float32
        constexpr uintptr_t m_flSpeedAccel = 0x1914; // float32
        constexpr uintptr_t m_flSpeedDeccel = 0x1918; // float32
        constexpr uintptr_t m_flBaseProjectileSpeed = 0x191c; // float32
        constexpr uintptr_t m_flMaxProjectileSpeed = 0x1920; // float32
    }
    namespace CCitadel_Modifier_BulletResistReductionStackVData {
        constexpr uintptr_t m_bSelfish = 0x608; // bool
    }
    namespace CCitadelBaseLockonAbility {
        constexpr uintptr_t m_vecLockonTargets = 0xdb0; // C_UtlVectorEmbeddedNetworkVar< LockonTarget_t >
        constexpr uintptr_t m_LockOnStartTime = 0xe00; // GameTime_t
        constexpr uintptr_t m_nTargetingLightEffect = 0xe08; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_BoucePadVData {
        constexpr uintptr_t m_StompParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strImpactSound = 0x6e8; // CSoundEventName
    }
    namespace CAbilityStompVData {
        constexpr uintptr_t m_StompParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strStompExplosionSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_strCastDelayLocalPlayerSound = 0x1640; // CSoundEventName
        constexpr uintptr_t m_DebuffModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BulletResistModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CAbilityStormCloudVData {
        constexpr uintptr_t m_StormCloudModifier = 0x1550; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Modifier_Tech_Bleed {
        constexpr uintptr_t m_hRingEffect = 0xc0; // ParticleIndex_t
    }
    namespace CCitadel_Modifier_HoldingGoldenIdol {
        constexpr uintptr_t m_iIdolParticle = 0x130; // ParticleIndex_t
        constexpr uintptr_t m_nGoldValue = 0x134; // int32
    }
    namespace CInfoWorldLayer {
        constexpr uintptr_t m_pOutputOnEntitiesSpawned = 0x560; // CEntityIOOutput
        constexpr uintptr_t m_worldName = 0x588; // CUtlSymbolLarge
        constexpr uintptr_t m_layerName = 0x590; // CUtlSymbolLarge
        constexpr uintptr_t m_bWorldLayerVisible = 0x598; // bool
        constexpr uintptr_t m_bEntitiesSpawned = 0x599; // bool
        constexpr uintptr_t m_bCreateAsChildSpawnGroup = 0x59a; // bool
        constexpr uintptr_t m_hLayerSpawnGroup = 0x59c; // uint32
        constexpr uintptr_t m_bWorldLayerActuallyVisible = 0x5a0; // bool
    }
    namespace CCitadel_Ability_ShivDaggerVData {
        constexpr uintptr_t m_DamageDebuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowDebuffModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DaggerStuckParticle = 0x1570; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerImpactParticle = 0x1650; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DaggerExplodeParticle = 0x1730; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDaggerHitSound = 0x1810; // CSoundEventName
        constexpr uintptr_t m_strDaggerExplodeSound = 0x1820; // CSoundEventName
    }
    namespace CCitadel_Modifier_PsychicLift {
        constexpr uintptr_t m_vecFloatDest = 0x138; // Vector
        constexpr uintptr_t m_vecStartingPos = 0x144; // Vector
    }
    namespace CCitadel_Modifier_ZiplineSpeedVData {
        constexpr uintptr_t m_flPercentageMultiplierStart = 0x608; // float32
        constexpr uintptr_t m_flPercentageMultiplierEnd = 0x60c; // float32
        constexpr uintptr_t m_flRampUpTime = 0x610; // float32
    }
    namespace C_Citadel_BreakblePropPickup {
        constexpr uintptr_t m_bActive = 0xae8; // bool
        constexpr uintptr_t m_sPickupName = 0xaf0; // CUtlString
        constexpr uintptr_t m_nNameOffset = 0xaf8; // int32
    }
    namespace CGameModifier_FireUserEntityIOVData {
        constexpr uintptr_t m_FireOnAdded = 0x608; // FireUserEntityIO_t
        constexpr uintptr_t m_FireOnRemoved = 0x60c; // FireUserEntityIO_t
    }
    namespace CCitadel_Ability_Shakedown_TargetVData {
        constexpr uintptr_t m_RootModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PulseModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_WingBlastPush {
        constexpr uintptr_t m_vPush = 0xc0; // Vector
    }
    namespace CCitadel_Ability_Mantle {
        constexpr uintptr_t m_flVertOffset = 0xc98; // float32
        constexpr uintptr_t m_flHorizGap = 0xc9c; // float32
        constexpr uintptr_t m_vStartPos = 0xca0; // Vector
        constexpr uintptr_t m_vTargetPos = 0xcac; // Vector
        constexpr uintptr_t m_angFacing = 0xcb8; // QAngle
        constexpr uintptr_t m_nMantleTypeIndex = 0xcc4; // int32
        constexpr uintptr_t m_flStartTime = 0xcc8; // GameTime_t
    }
    namespace CCitadel_Modifier_NearDeathFXVData {
        constexpr uintptr_t m_EnemyNearDeathParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_FriendlyNearDeathParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_sSelfDestructStart = 0x7c8; // CSoundEventName
        constexpr uintptr_t m_sSelfDestructEnd = 0x7d8; // CSoundEventName
    }
    namespace C_PhysMagnet {
        constexpr uintptr_t m_aAttachedObjectsFromServer = 0xae8; // CUtlVector< int32 >
        constexpr uintptr_t m_aAttachedObjects = 0xb00; // CUtlVector< CHandle< C_BaseEntity > >
    }
    namespace CCitadel_Ability_Magician_AnimalCurseVData {
        constexpr uintptr_t m_CurseModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AirDampingModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetWarningSound = 0x1570; // CSoundEventName
        constexpr uintptr_t m_ProjectileImpactParticle = 0x1580; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TargetWarningParticle = 0x1660; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ProjectileExplodeParticle = 0x1740; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Ability_Slork_LastBreathVData {
        constexpr uintptr_t m_ShieldModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Ability_Wrecker_Ultimate {
        constexpr uintptr_t m_angBeamAngles = 0xcb8; // QAngle
        constexpr uintptr_t m_bNeedsBeamReset = 0xcd0; // bool
    }
    namespace CCitadelModifierChronoPulseGrenadePulseAreaVData {
        constexpr uintptr_t m_DebuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_SlowModifier = 0x618; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_PreviewRingParticle = 0x628; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AreaEffect = 0x708; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strArmingSound = 0x7e8; // CSoundEventName
        constexpr uintptr_t m_strArmedSound = 0x7f8; // CSoundEventName
        constexpr uintptr_t m_strLoopingSound = 0x808; // CSoundEventName
        constexpr uintptr_t m_strHitSound = 0x818; // CSoundEventName
    }
    namespace CCitadel_Ability_HornetLeap {
        constexpr uintptr_t m_bLeaping = 0xc9a; // bool
        constexpr uintptr_t m_flLeapStartTime = 0xc9c; // GameTime_t
        constexpr uintptr_t m_nFXIndex = 0xca0; // ParticleIndex_t
    }
    namespace CEntityInstance {
        constexpr uintptr_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
        constexpr uintptr_t m_pEntity = 0x10; // CEntityIdentity*
        constexpr uintptr_t m_CScriptComponent = 0x30; // CScriptComponent*
        constexpr uintptr_t m_bVisibleinPVS = 0x38; // bool
    }
    namespace C_InWorldKeyBindPanel {
        constexpr uintptr_t m_hPlayer = 0xaa0; // CHandle< C_CitadelPlayerPawn >
    }
    namespace CCitadelPlayerController {
        constexpr uintptr_t m_ePlayState = 0x6f8; // EPlayerPlayState
        constexpr uintptr_t m_iGuidedBotMatchLastHits = 0x6fc; // int32
        constexpr uintptr_t m_iGuidedBotMatchOrbsSecured = 0x700; // int32
        constexpr uintptr_t m_iGuidedBotMatchOrbsDenied = 0x704; // int32
        constexpr uintptr_t m_iGuidedBotMatchDamageToGuardians = 0x708; // int32
        constexpr uintptr_t m_iGuidedBotMatchDamageToPlayers = 0x70c; // int32
        constexpr uintptr_t m_iGuidedBotMatchDamageTaken = 0x710; // int32
        constexpr uintptr_t m_iGuidedBotMatchNetWorth = 0x714; // int32
        constexpr uintptr_t m_iGuidedBotMatchModsPurchased = 0x718; // int32
        constexpr uintptr_t m_iGuidedBotMatchAbilityUpgrades = 0x71c; // int32
        constexpr uintptr_t m_flGuideBotMatchLastTaskNagVO = 0x720; // float32
        constexpr uintptr_t m_flGuideBotLastTimeTaskCompleted = 0x724; // float32
        constexpr uintptr_t m_eGuidedBotMatchObjective = 0x728; // EGuidedBotMatchObjective
        constexpr uintptr_t m_nCurrentRank = 0x72c; // int32
        constexpr uintptr_t m_nAssignedLane = 0x730; // int8
        constexpr uintptr_t m_nOriginalLaneAssignment = 0x731; // int8
        constexpr uintptr_t m_bIsKingPanda = 0x732; // bool
        constexpr uintptr_t m_bBotDisconnectTakeover = 0x733; // bool
        constexpr uintptr_t m_bInTeamChat = 0x734; // bool
        constexpr uintptr_t m_bInPartyChat = 0x735; // bool
        constexpr uintptr_t m_unHeroBuildID = 0x738; // HeroBuildID_t
        constexpr uintptr_t m_hHeroPawn = 0x73c; // CHandle< C_CitadelPlayerPawn >
        constexpr uintptr_t m_PlayerDataGlobal = 0x778; // PlayerDataGlobal_t
        constexpr uintptr_t m_nDeathReplayAvailable = 0x950; // int8
        constexpr uintptr_t m_unLobbyPlayerSlot = 0x951; // CitadelLobbyPlayerSlot_t
        constexpr uintptr_t m_bHasCheckedFriendName = 0x952; // bool
        constexpr uintptr_t m_sFriendName = 0x958; // CUtlString
    }
    namespace CCitadel_Ability_Ghost_BloodShards {
        constexpr uintptr_t m_vecDamagedTargets = 0xde8; // CUtlVector< CHandle< C_BaseEntity > >
    }
    namespace CModifierPowerGeneratorVData {
        constexpr uintptr_t m_EffectToTitan = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_VoidSphereVData {
        constexpr uintptr_t m_TeleportStartParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportEndParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportTrailParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportModelParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffModifier = 0x988; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_flPreTeleportDuration = 0x998; // float32
        constexpr uintptr_t m_strAmbientLoopingLocalPlayerSound = 0x9a0; // CSoundEventName
    }
    namespace CCitadel_Ability_Chrono_TimeWallVData {
        constexpr uintptr_t m_AuraModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TimeWallParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TimeWallChargeParticle = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TimeWallHitParticle = 0x1720; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TimeWallHitTimerParticle = 0x1800; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strWallCreated = 0x18e0; // CSoundEventName
        constexpr uintptr_t m_strChargeUpSound = 0x18f0; // CSoundEventName
    }
    namespace CCitadel_Modifier_GhostBloodShardDebuffVData {
        constexpr uintptr_t m_BloodShardDebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_DPSTracker {
        constexpr uintptr_t m_flProgress = 0xc0; // float32
        constexpr uintptr_t m_flDistToTarget = 0xc4; // float32
    }
    namespace CAbilityChargedShotVData {
        constexpr uintptr_t m_ChannelParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ChannelStartParticle = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ShootParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Modifier_Chomp_Hobbled {
        constexpr uintptr_t m_LastUpdate = 0xc0; // GameTime_t
        constexpr uintptr_t m_flDamageTime = 0xc4; // float32
        constexpr uintptr_t m_flMovementTime = 0xc8; // float32
        constexpr uintptr_t m_hGrappler = 0xcc; // CHandle< C_BaseEntity >
    }
    namespace CAbilityHookVData {
        constexpr uintptr_t m_SelfModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_TargetModifier = 0x1560; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BulletAmpModifier = 0x1570; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ShieldModifier = 0x1580; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HookOutParticle = 0x1590; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strHookSuccessSound = 0x1670; // CSoundEventName
        constexpr uintptr_t m_strHookAllySound = 0x1680; // CSoundEventName
        constexpr uintptr_t m_strHookMissSound = 0x1690; // CSoundEventName
        constexpr uintptr_t m_strHookImpactGeoSound = 0x16a0; // CSoundEventName
        constexpr uintptr_t m_SelfBuffCastSound = 0x16b0; // CSoundEventName
        constexpr uintptr_t m_flTrooperHitRadius = 0x16c0; // float32
    }
    namespace CCitadel_Ability_IcePath {
        constexpr uintptr_t m_bIcePathing = 0xd08; // bool
        constexpr uintptr_t m_qLastAngles = 0xd0c; // QAngle
        constexpr uintptr_t m_vLastVelocity = 0xd18; // Vector
        constexpr uintptr_t m_bFirstMovementTick = 0xd24; // bool
    }
    namespace CCitadel_Modifier_LearningHeroAbility {
        constexpr uintptr_t m_sDescription = 0xc0; // CBufferString
    }
    namespace CGameSceneNode {
        constexpr uintptr_t m_nodeToWorld = 0x10; // CTransform
        constexpr uintptr_t m_pOwner = 0x30; // CEntityInstance*
        constexpr uintptr_t m_pParent = 0x38; // CGameSceneNode*
        constexpr uintptr_t m_pChild = 0x40; // CGameSceneNode*
        constexpr uintptr_t m_pNextSibling = 0x48; // CGameSceneNode*
        constexpr uintptr_t m_hParent = 0x78; // CGameSceneNodeHandle
        constexpr uintptr_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
        constexpr uintptr_t m_angRotation = 0xc0; // QAngle
        constexpr uintptr_t m_flScale = 0xcc; // float32
        constexpr uintptr_t m_vecAbsOrigin = 0xd0; // Vector
        constexpr uintptr_t m_angAbsRotation = 0xdc; // QAngle
        constexpr uintptr_t m_flAbsScale = 0xe8; // float32
        constexpr uintptr_t m_nParentAttachmentOrBone = 0xec; // int16
        constexpr uintptr_t m_bDebugAbsOriginChanges = 0xee; // bool
        constexpr uintptr_t m_bDormant = 0xef; // bool
        constexpr uintptr_t m_bForceParentToBeNetworked = 0xf0; // bool
        constexpr uintptr_t m_bDirtyHierarchy = 0x0; // bitfield:1
        constexpr uintptr_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
        constexpr uintptr_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
        constexpr uintptr_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
        constexpr uintptr_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
        constexpr uintptr_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
        constexpr uintptr_t m_bBoneMergeFlex = 0x0; // bitfield:1
        constexpr uintptr_t m_nLatchAbsOrigin = 0x0; // bitfield:2
        constexpr uintptr_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
        constexpr uintptr_t m_nHierarchicalDepth = 0xf3; // uint8
        constexpr uintptr_t m_nHierarchyType = 0xf4; // uint8
        constexpr uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xf5; // uint8
        constexpr uintptr_t m_name = 0xf8; // CUtlStringToken
        constexpr uintptr_t m_hierarchyAttachName = 0x138; // CUtlStringToken
        constexpr uintptr_t m_flZOffset = 0x13c; // float32
        constexpr uintptr_t m_flClientLocalScale = 0x140; // float32
        constexpr uintptr_t m_vRenderOrigin = 0x144; // Vector
    }
    namespace CModifierVData_SetModelScale {
        constexpr uintptr_t m_flScale = 0x608; // CRangeFloat
    }
    namespace CModifier_Mirage_Tornado_Lift {
        constexpr uintptr_t m_vecFloatDest = 0x130; // Vector
        constexpr uintptr_t m_vecStartingPos = 0x13c; // Vector
    }
    namespace CCitadel_Ability_Slide {
        constexpr uintptr_t m_flGroundDashSlideTime = 0xcf0; // CCitadelAutoScaledTime
        constexpr uintptr_t m_flSlowGetupStartTime = 0xd08; // GameTime_t
        constexpr uintptr_t m_bShouldTriggerSlowGetup = 0xd0c; // bool
        constexpr uintptr_t m_bWantsSlide = 0xd0d; // bool
        constexpr uintptr_t m_bAirborneWhenDuckPressed = 0xd0e; // bool
        constexpr uintptr_t m_bIsSliding = 0xd0f; // bool
        constexpr uintptr_t m_flSpeedAdjust = 0xd10; // float32
        constexpr uintptr_t m_flDuckPressedTime = 0xd14; // GameTime_t
        constexpr uintptr_t m_flSlideChangeTime = 0xd18; // GameTime_t
        constexpr uintptr_t m_flSlidingOnFlatStartTime = 0xd1c; // GameTime_t
        constexpr uintptr_t m_nJumpsThisSlideSession = 0xd20; // int32
        constexpr uintptr_t m_flOnGroundStartTime = 0xd24; // GameTime_t
        constexpr uintptr_t m_flDashSlideStartTime = 0xd28; // GameTime_t
        constexpr uintptr_t m_bStartedSlideViaProbeSlope = 0xd2c; // bool
        constexpr uintptr_t m_nSlideEffectIndex = 0xd30; // ParticleIndex_t
    }
    namespace C_NPC_Boss_Tier3 {
        constexpr uintptr_t m_iLane = 0x1438; // int32
        constexpr uintptr_t m_angTargeting1 = 0x1440; // QAngle
        constexpr uintptr_t m_angTargeting2 = 0x1458; // QAngle
        constexpr uintptr_t m_nElectricBeamCasts = 0x1470; // int32
        constexpr uintptr_t m_eAliveState = 0x1474; // ETier3State_t
        constexpr uintptr_t m_ePhase = 0x1478; // ETier3Phase_t
    }
    namespace CCitadel_Modifier_BreakablePropExtraGoldPickupVData {
        constexpr uintptr_t m_iBaseExtraGoldBounty = 0x608; // int32
        constexpr uintptr_t m_iPerMinuteExtraGoldBounty = 0x60c; // int32
    }
    namespace CCitadel_Modifier_MageWalk {
        constexpr uintptr_t m_bIsFakeout = 0xc0; // bool
        constexpr uintptr_t m_bTeleported = 0xc1; // bool
        constexpr uintptr_t m_particleStart = 0xc4; // ParticleIndex_t
        constexpr uintptr_t m_particleEnd = 0xc8; // ParticleIndex_t
        constexpr uintptr_t m_particleTrail = 0xcc; // ParticleIndex_t
        constexpr uintptr_t m_vecEndLocation = 0xd0; // Vector
        constexpr uintptr_t m_vecStartPosition = 0xdc; // Vector
        constexpr uintptr_t m_vecEndLocationCaster = 0xe8; // Vector
    }
    namespace CCitadel_Ability_Astro_Shotgun_Toggle_VData {
        constexpr uintptr_t m_BuffModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_MagicStormWatcherVData {
        constexpr uintptr_t m_BuffModifier = 0x608; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_TrooperDisabledInvulnerability {
        constexpr uintptr_t m_flBulletResistancePctMax = 0xc0; // float32
        constexpr uintptr_t m_bShieldUp = 0xc4; // bool
        constexpr uintptr_t m_flShieldUpTime = 0xc8; // GameTime_t
        constexpr uintptr_t m_trackInfo = 0xcc; // ModifierTrackedParticle_t
    }
    namespace C_EntityFlame {
        constexpr uintptr_t m_hEntAttached = 0x560; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hOldAttached = 0x588; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bCheapEffect = 0x58c; // bool
    }
    namespace CCitadel_Ability_Uppercut {
        constexpr uintptr_t m_bShouldUseResources = 0xf48; // bool
    }
    namespace CCitadel_Ability_PsychicPulse {
        constexpr uintptr_t m_vecPulseTargets = 0xcd0; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    }
    namespace CCitadel_Modifier_PillarVData {
        constexpr uintptr_t m_DebuffParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffStartParticle = 0x7c8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_BuffEndParticle = 0x8a8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_PostSleepModifier = 0x988; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura {
        constexpr uintptr_t m_playerAngles = 0xe0; // QAngle
        constexpr uintptr_t m_flLastStackTime = 0xec; // GameTime_t
        constexpr uintptr_t m_ConeParticle = 0xf0; // ParticleIndex_t
    }
    namespace C_Sprite {
        constexpr uintptr_t m_hSpriteMaterial = 0x840; // CStrongHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_hAttachedToEntity = 0x848; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_nAttachment = 0x84c; // AttachmentHandle_t
        constexpr uintptr_t m_flSpriteFramerate = 0x850; // float32
        constexpr uintptr_t m_flFrame = 0x854; // float32
        constexpr uintptr_t m_flDieTime = 0x858; // GameTime_t
        constexpr uintptr_t m_nBrightness = 0x868; // uint32
        constexpr uintptr_t m_flBrightnessDuration = 0x86c; // float32
        constexpr uintptr_t m_flSpriteScale = 0x870; // float32
        constexpr uintptr_t m_flScaleDuration = 0x874; // float32
        constexpr uintptr_t m_bWorldSpaceScale = 0x878; // bool
        constexpr uintptr_t m_flGlowProxySize = 0x87c; // float32
        constexpr uintptr_t m_flHDRColorScale = 0x880; // float32
        constexpr uintptr_t m_flLastTime = 0x884; // GameTime_t
        constexpr uintptr_t m_flMaxFrame = 0x888; // float32
        constexpr uintptr_t m_flStartScale = 0x88c; // float32
        constexpr uintptr_t m_flDestScale = 0x890; // float32
        constexpr uintptr_t m_flScaleTimeStart = 0x894; // GameTime_t
        constexpr uintptr_t m_nStartBrightness = 0x898; // int32
        constexpr uintptr_t m_nDestBrightness = 0x89c; // int32
        constexpr uintptr_t m_flBrightnessTimeStart = 0x8a0; // GameTime_t
        constexpr uintptr_t m_hOldSpriteMaterial = 0x8a8; // CWeakHandle< InfoForResourceTypeIMaterial2 >
        constexpr uintptr_t m_nSpriteWidth = 0x948; // int32
        constexpr uintptr_t m_nSpriteHeight = 0x94c; // int32
    }
    namespace CAbilityBullChargeVData {
        constexpr uintptr_t m_cameraSequenceImpact = 0x1550; // CitadelCameraOperationsSequence_t
        constexpr uintptr_t m_ModifierTossAirControlLockout = 0x15d8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ModifierWeaponPowerIncrease = 0x15e8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ModifierChargeDragEnemy = 0x15f8; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_ModifierBullCharging = 0x1608; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_WallImpactParticle = 0x1618; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strWallSlamSound = 0x16f8; // CSoundEventName
        constexpr uintptr_t m_flWallStunLookAheadDist = 0x1708; // float32
    }
    namespace C_CitadelGameRules {
        constexpr uintptr_t m_bFreezePeriod = 0x58; // bool
        constexpr uintptr_t m_fLevelStartTime = 0x5c; // GameTime_t
        constexpr uintptr_t m_flGameStartTime = 0x60; // GameTime_t
        constexpr uintptr_t m_flRoundStartTime = 0x64; // GameTime_t
        constexpr uintptr_t m_eGameState = 0x68; // EGameState
        constexpr uintptr_t m_hTowerAmber = 0x6c; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hTowerSapphire = 0x70; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bEnemyInAmberBase = 0x74; // bool
        constexpr uintptr_t m_bEnemyInSapphireBase = 0x75; // bool
        constexpr uintptr_t m_vMinimapMins = 0x78; // Vector
        constexpr uintptr_t m_vMinimapMaxs = 0x84; // Vector
        constexpr uintptr_t m_bMatchSafeToAbandon = 0x90; // bool
        constexpr uintptr_t m_bNoDeathEnabled = 0x91; // bool
        constexpr uintptr_t m_bFastCooldownsEnabled = 0x92; // bool
        constexpr uintptr_t m_bStaminaCooldownsEnabled = 0x93; // bool
        constexpr uintptr_t m_bUnlimitedAmmoEnabled = 0x94; // bool
        constexpr uintptr_t m_bInfiniteResourcesEnabled = 0x95; // bool
        constexpr uintptr_t m_bFlexSlotsForcedUnlocked = 0x96; // bool
        constexpr uintptr_t m_eMatchMode = 0x98; // ECitadelMatchMode
        constexpr uintptr_t m_eGameMode = 0x9c; // ECitadelGameMode
        constexpr uintptr_t m_unSpectatorCount = 0xa0; // uint32
        constexpr uintptr_t m_hTrooperMinimap = 0xa4; // CHandle< CCitadelTrooperMinimap >
        constexpr uintptr_t m_hCurrentHeroDrafterRebels = 0xa8; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_hCurrentHeroDrafterCombine = 0xac; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_bDontUploadStats = 0xb0; // bool
        constexpr uintptr_t m_bServerPaused = 0x9e08; // bool
        constexpr uintptr_t m_iPauseTeam = 0x9e0c; // int32
        constexpr uintptr_t m_nMatchClockUpdateTick = 0x9e10; // int32
        constexpr uintptr_t m_flMatchClockAtLastUpdate = 0x9e14; // float32
        constexpr uintptr_t m_flPauseTime = 0x9e18; // float64
        constexpr uintptr_t m_pausingPlayerId = 0x9e20; // CPlayerSlot
        constexpr uintptr_t m_unpausingPlayerId = 0x9e24; // CPlayerSlot
        constexpr uintptr_t m_fPauseRawTime = 0x9e28; // float32
        constexpr uintptr_t m_fPauseCurTime = 0x9e2c; // float32
        constexpr uintptr_t m_fUnpauseRawTime = 0x9e30; // float32
        constexpr uintptr_t m_fUnpauseCurTime = 0x9e34; // float32
        constexpr uintptr_t m_bRequiresReportCardDismissal = 0x9e88; // bool
        constexpr uintptr_t m_flPreGameWaitEndTime = 0x9e8c; // GameTime_t
        constexpr uintptr_t m_flReportCardDismissalWaitStart = 0x9e90; // GameTime_t
        constexpr uintptr_t m_nLastPreGameCount = 0x9e94; // int32
        constexpr uintptr_t m_eGGTeam = 0x9e98; // int32
        constexpr uintptr_t m_flGGEndsAtTime = 0x9e9c; // GameTime_t
        constexpr uintptr_t m_unMatchID = 0x9ea0; // MatchID_t
        constexpr uintptr_t m_nExperimentalGameplayState = 0x9ea8; // int32
        constexpr uintptr_t m_nPlayerDeathEventID = 0x9eac; // int32
        constexpr uintptr_t m_nReplayChangedEvent = 0x9eb0; // int32
        constexpr uintptr_t m_nGameOverEvent = 0x9eb4; // int32
        constexpr uintptr_t m_flHeroDiedTime = 0x9ed8; // GameTime_t
    }
    namespace CCitadel_Modifier_Rutger_Pulse_VData {
        constexpr uintptr_t m_strSilenceTargetSound = 0x608; // CSoundEventName
    }
    namespace CAbilityShivDashVData {
        constexpr uintptr_t m_DashModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_DashImpactEffect = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DashSwingEffect = 0x1640; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_DashLineEffect = 0x1720; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strDashStartWithTargets = 0x1800; // CSoundEventName
        constexpr uintptr_t m_strDashStartEcho = 0x1810; // CSoundEventName
        constexpr uintptr_t m_strDashStartMiss = 0x1820; // CSoundEventName
        constexpr uintptr_t m_strDashHitEnemy = 0x1830; // CSoundEventName
        constexpr uintptr_t m_flEchoDelay = 0x1840; // float32
    }
    namespace CAbilityHornetSnipeVData {
        constexpr uintptr_t m_AssassinateShotParticle = 0x1550; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_AssassinateShotParticleOwnerOnly = 0x1630; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaserSightParticle = 0x1710; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_LaserSightParticleOwnerOnly = 0x17f0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_SnipeModifier = 0x18d0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_BuffOnKillModifier = 0x18e0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_GlowEnemyModifier = 0x18f0; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_strSnipeImpactSound = 0x1900; // CSoundEventName
        constexpr uintptr_t m_strZoomIn = 0x1910; // CSoundEventName
        constexpr uintptr_t m_strZoomOut = 0x1920; // CSoundEventName
        constexpr uintptr_t m_flMinScopeTimeToShoot = 0x1930; // float32
        constexpr uintptr_t m_flScopeTimeToFullPower = 0x1934; // float32
        constexpr uintptr_t m_flScopeMinPowerFrac = 0x1938; // float32
        constexpr uintptr_t m_flFadeToBlackTime = 0x193c; // float32
        constexpr uintptr_t m_flFoVChangeTime = 0x1940; // float32
        constexpr uintptr_t m_ScopeFoV = 0x1948; // CUtlVector< float32 >
    }
    namespace CModifierVitalitySuppressorVData {
        constexpr uintptr_t m_DebuffParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace C_RagdollProp {
        constexpr uintptr_t m_ragPos = 0xaf0; // C_NetworkUtlVectorBase< Vector >
        constexpr uintptr_t m_ragAngles = 0xb08; // C_NetworkUtlVectorBase< QAngle >
        constexpr uintptr_t m_flBlendWeight = 0xb20; // float32
        constexpr uintptr_t m_hRagdollSource = 0xb24; // CHandle< C_BaseEntity >
        constexpr uintptr_t m_iEyeAttachment = 0xb28; // AttachmentHandle_t
        constexpr uintptr_t m_flBlendWeightCurrent = 0xb2c; // float32
        constexpr uintptr_t m_parentPhysicsBoneIndices = 0xb30; // CUtlVector< int32 >
        constexpr uintptr_t m_worldSpaceBoneComputationOrder = 0xb48; // CUtlVector< int32 >
    }
    namespace CBaseDashCastAbilityVData {
        constexpr uintptr_t m_AbilityToTrigger = 0x1550; // CSubclassName< 4 >
        constexpr uintptr_t m_flDashCastTriggerRadius = 0x1560; // float32
        constexpr uintptr_t m_flDashSpeed = 0x1564; // float32
        constexpr uintptr_t m_bSnapToZeroSpeedOnEnd = 0x1568; // bool
        constexpr uintptr_t m_bUseCurveToDefineSpeed = 0x1569; // bool
        constexpr uintptr_t m_MovementSpeedCurve = 0x1570; // CPiecewiseCurve
        constexpr uintptr_t m_flMovementSpeedCurveAvgSpeed = 0x15b0; // float32
        constexpr uintptr_t m_strTargetHitSound = 0x15b8; // CSoundEventName
        constexpr uintptr_t m_strMissSound = 0x15c8; // CSoundEventName
    }
    namespace CCitadel_Ability_Gravity_Lasso_VData {
        constexpr uintptr_t m_GravityLassoSelf = 0x1550; // CEmbeddedSubclass< CBaseModifier >
        constexpr uintptr_t m_GravityLassoTarget = 0x1560; // CEmbeddedSubclass< CBaseModifier >
    }
    namespace CCitadel_Modifier_MeleeCharge_VData {
        constexpr uintptr_t m_SwingParticle = 0x638; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HitParticle = 0x718; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_ReloadVisualModifier = 0x7f8; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_AmmoAddedVisualModifier = 0x808; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Item_HealthRegenAuraVData {
        constexpr uintptr_t m_HealParticle = 0x1598; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_CastHealParticle = 0x1678; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_HealingPulseTrackerModifier = 0x1758; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace C_HeroPreview {
        constexpr uintptr_t m_CCitadelHeroComponent = 0x560; // CCitadelHeroComponent
    }
    namespace ViewAngleServerChange_t {
        constexpr uintptr_t nType = 0x30; // FixAngleSet_t
        constexpr uintptr_t qAngle = 0x34; // QAngle
        constexpr uintptr_t nIndex = 0x40; // uint32
    }
    namespace CCitadel_Ability_GoldenIdolVData {
        constexpr uintptr_t m_sIdolDropOffSound = 0x1630; // CSoundEventName
        constexpr uintptr_t m_DropoffTimerModifier = 0x1640; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_HoldingIdolModifier = 0x1650; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_RevealedHoldingIdolModifier = 0x1660; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_Bonus01 = 0x1670; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_Bonus02 = 0x1680; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_NoPickupModifier = 0x1690; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_flInstantGoldPercentage = 0x16a0; // float32
        constexpr uintptr_t m_iComebackBounty = 0x16a4; // int32
        constexpr uintptr_t m_flCasterBonusPercent = 0x16a8; // float32
        constexpr uintptr_t m_flRevealTime = 0x16ac; // float32
        constexpr uintptr_t m_flDamageTickRate = 0x16b0; // float32
        constexpr uintptr_t m_flMaxHealthDamage = 0x16b4; // float32
        constexpr uintptr_t m_flTimeToDamage = 0x16b8; // float32
        constexpr uintptr_t m_flNoPickupTime = 0x16bc; // float32
    }
    namespace CCitadel_Ability_Magician_ShadowCloneVData {
        constexpr uintptr_t m_CloneModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
        constexpr uintptr_t m_ExplodeParticle = 0x1560; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    }
    namespace CCitadel_Slork_Raging_CurrentVData {
        constexpr uintptr_t m_AuraModifier = 0x1550; // CEmbeddedSubclass< CCitadelModifier >
    }
    namespace CCitadel_Modifier_Thumper_Ability_2 {
        constexpr uintptr_t m_vLastPosition = 0xc0; // Vector
    }
    namespace CCitadel_Modifier_BulletFlurryVData {
        constexpr uintptr_t m_ImpactParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_strAttackerHitSound = 0x6e8; // CSoundEventName
    }
    namespace CCitadel_Ability_CardToss {
        constexpr uintptr_t m_bCardIsFlying = 0xf18; // bool
    }
    namespace CCitadel_Modifier_TeleportToObjectiveVData {
        constexpr uintptr_t m_TeleportOriginParticle = 0x608; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportDestinationParticle = 0x6e8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
        constexpr uintptr_t m_TeleportStartSound = 0x7c8; // CSoundEventName
        constexpr uintptr_t m_TeleportCompleteSound = 0x7d8; // CSoundEventName
        constexpr uintptr_t m_TeleportArriveSound = 0x7e8; // CSoundEventName
    }
    namespace StatViewerModifierValues_t {
        constexpr uintptr_t m_SourceModifierID = 0x30; // CUtlStringToken
        constexpr uintptr_t m_eValType = 0x34; // EModifierValue
        constexpr uintptr_t m_flValue = 0x38; // float32
    }
    namespace PhysicsRagdollPose_t {
        constexpr uintptr_t m_Transforms = 0x8; // C_NetworkUtlVectorBase< CTransform >
        constexpr uintptr_t m_hOwner = 0x20; // CHandle< C_BaseEntity >
    }
}
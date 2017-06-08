// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "FPSTest.h"
#include "FPSTest.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FPSTest() {}
	void AFPSProjectile::StaticRegisterNativesAFPSProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(AFPSProjectile::StaticClass(), "OnHit",(Native)&AFPSProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(AFPSProjectile, 377513677);
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "Fire",(Native)&AFPSCharacter::execFire);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "MoveForward",(Native)&AFPSCharacter::execMoveForward);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "MoveRight",(Native)&AFPSCharacter::execMoveRight);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "StartJump",(Native)&AFPSCharacter::execStartJump);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "StopJump",(Native)&AFPSCharacter::execStopJump);
	}
	IMPLEMENT_CLASS(AFPSCharacter, 1101819321);
	void AFPSHud::StaticRegisterNativesAFPSHud()
	{
	}
	IMPLEMENT_CLASS(AFPSHud, 2945404826);
	void AFPSTestGameMode::StaticRegisterNativesAFPSTestGameMode()
	{
	}
	IMPLEMENT_CLASS(AFPSTestGameMode, 1376226221);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	FPSTEST_API class UFunction* Z_Construct_UFunction_AFPSProjectile_OnHit();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSProjectile();
	FPSTEST_API class UFunction* Z_Construct_UFunction_AFPSCharacter_Fire();
	FPSTEST_API class UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	FPSTEST_API class UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	FPSTEST_API class UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump();
	FPSTEST_API class UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSCharacter();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSHud_NoRegister();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSHud();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSTestGameMode_NoRegister();
	FPSTEST_API class UClass* Z_Construct_UClass_AFPSTestGameMode();
	FPSTEST_API class UPackage* Z_Construct_UPackage__Script_FPSTest();
	UFunction* Z_Construct_UFunction_AFPSProjectile_OnHit()
	{
		struct FPSProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AFPSProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(FPSProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, FPSProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, FPSProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComponent, FPSProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, FPSProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, FPSProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSProjectile_NoRegister()
	{
		return AFPSProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FPSTest();
			OuterClass = AFPSProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovementComponent, AFPSProjectile), 0x00100000000a0009, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AFPSProjectile), 0x00100000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSProjectile_OnHit(), "OnHit"); // 820251085
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSProjectile(Z_Construct_UClass_AFPSProjectile, &AFPSProjectile::StaticClass, TEXT("AFPSProjectile"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectile);
	UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
	{
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(FPSCharacter_eventMoveForward_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FPSCharacter_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(FPSCharacter_eventMoveRight_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FPSCharacter_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
	{
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump()
	{
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FPSTest();
			OuterClass = AFPSCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_StartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_StopJump());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AFPSCharacter), 0x0014000000010001, Z_Construct_UClass_AFPSProjectile_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_MuzzleOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MuzzleOffset, AFPSCharacter), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_FPSMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSMesh, AFPSCharacter), 0x00100000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FPSCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSCameraComponent, AFPSCharacter), 0x0010000000080009, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_Fire(), "Fire"); // 874774978
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_MoveForward(), "MoveForward"); // 100766791
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_MoveRight(), "MoveRight"); // 462937296
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_StartJump(), "StartJump"); // 4195132295
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_StopJump(), "StopJump"); // 598623503
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("Category"), TEXT("FPSCharacter"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
	UClass* Z_Construct_UClass_AFPSHud_NoRegister()
	{
		return AFPSHud::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSHud()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_FPSTest();
			OuterClass = AFPSHud::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CrosshairTexture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrosshairTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CrosshairTexture, AFPSHud), 0x0020080000010001, Z_Construct_UClass_UTexture2D_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSHud.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSHud.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_CrosshairTexture, TEXT("Category"), TEXT("FPSHud"));
				MetaData->SetValue(NewProp_CrosshairTexture, TEXT("ModuleRelativePath"), TEXT("FPSHud.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSHud(Z_Construct_UClass_AFPSHud, &AFPSHud::StaticClass, TEXT("AFPSHud"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSHud);
	UClass* Z_Construct_UClass_AFPSTestGameMode_NoRegister()
	{
		return AFPSTestGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSTestGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_FPSTest();
			OuterClass = AFPSTestGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSTestGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSTestGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSTestGameMode(Z_Construct_UClass_AFPSTestGameMode, &AFPSTestGameMode::StaticClass, TEXT("AFPSTestGameMode"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSTestGameMode);
	UPackage* Z_Construct_UPackage__Script_FPSTest()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/FPSTest")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x71AB0EA2;
			Guid.B = 0xEF0EB339;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "MyProject3.h"
#include "MyProject3.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MyProject3() {}
FName MYPROJECT3_CountdownHasFinished = FName(TEXT("CountdownHasFinished"));
class UScriptStruct* FDirectorCamera::StaticStruct()
{
	extern MYPROJECT3_API class UPackage* Z_Construct_UPackage__Script_MyProject3();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT3_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectorCamera();
		extern MYPROJECT3_API uint32 Get_Z_Construct_UScriptStruct_FDirectorCamera_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectorCamera, Z_Construct_UPackage__Script_MyProject3(), TEXT("DirectorCamera"), sizeof(FDirectorCamera), Get_Z_Construct_UScriptStruct_FDirectorCamera_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectorCamera(FDirectorCamera::StaticStruct, TEXT("/Script/MyProject3"), TEXT("DirectorCamera"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject3_StaticRegisterNativesFDirectorCamera
{
	FScriptStruct_MyProject3_StaticRegisterNativesFDirectorCamera()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectorCamera")),new UScriptStruct::TCppStructOps<FDirectorCamera>);
	}
} ScriptStruct_MyProject3_StaticRegisterNativesFDirectorCamera;
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	IMPLEMENT_CLASS(ACameraDirector, 1630948312);
	void ASequentialCameras::StaticRegisterNativesASequentialCameras()
	{
	}
	IMPLEMENT_CLASS(ASequentialCameras, 3546652899);
	void ACountdown::CountdownHasFinished()
	{
		ProcessEvent(FindFunctionChecked(MYPROJECT3_CountdownHasFinished),NULL);
	}
	void ACountdown::StaticRegisterNativesACountdown()
	{
		FNativeFunctionRegistrar::RegisterFunction(ACountdown::StaticClass(), "CountdownHasFinished",(Native)&ACountdown::execCountdownHasFinished);
	}
	IMPLEMENT_CLASS(ACountdown, 638482822);
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
	}
	IMPLEMENT_CLASS(AMyPawn, 4231183461);
	void AMyProject3GameMode::StaticRegisterNativesAMyProject3GameMode()
	{
	}
	IMPLEMENT_CLASS(AMyProject3GameMode, 2821326487);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	MYPROJECT3_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectorCamera();
	MYPROJECT3_API class UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	MYPROJECT3_API class UClass* Z_Construct_UClass_ACameraDirector();
	MYPROJECT3_API class UClass* Z_Construct_UClass_ASequentialCameras_NoRegister();
	MYPROJECT3_API class UClass* Z_Construct_UClass_ASequentialCameras();
	MYPROJECT3_API class UFunction* Z_Construct_UFunction_ACountdown_CountdownHasFinished();
	MYPROJECT3_API class UClass* Z_Construct_UClass_ACountdown_NoRegister();
	MYPROJECT3_API class UClass* Z_Construct_UClass_ACountdown();
	MYPROJECT3_API class UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	MYPROJECT3_API class UClass* Z_Construct_UClass_AMyPawn();
	MYPROJECT3_API class UClass* Z_Construct_UClass_AMyProject3GameMode_NoRegister();
	MYPROJECT3_API class UClass* Z_Construct_UClass_AMyProject3GameMode();
	MYPROJECT3_API class UPackage* Z_Construct_UPackage__Script_MyProject3();
	UScriptStruct* Z_Construct_UScriptStruct_FDirectorCamera()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject3();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectorCamera_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectorCamera"), sizeof(FDirectorCamera), Get_Z_Construct_UScriptStruct_FDirectorCamera_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectorCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectorCamera>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsActive, FDirectorCamera, bool);
			UProperty* NewProp_bIsActive = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsActive, FDirectorCamera), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIsActive, FDirectorCamera), sizeof(bool), true);
			UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, FDirectorCamera), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
			MetaData->SetValue(NewProp_bIsActive, TEXT("Category"), TEXT("DirectorCamera"));
			MetaData->SetValue(NewProp_bIsActive, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
			MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("DirectorCamera"));
			MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectorCamera_CRC() { return 415602316U; }
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject3();
			OuterClass = ACameraDirector::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_FSmoothBlendTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FSmoothBlendTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FSmoothBlendTime, ACameraDirector), 0x0010000000000001);
				UProperty* NewProp_FTimeBetweenCameraChanges = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FTimeBetweenCameraChanges"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FTimeBetweenCameraChanges, ACameraDirector), 0x0010000000000001);
				UProperty* NewProp_FTimeToNextCameraChange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FTimeToNextCameraChange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FTimeToNextCameraChange, ACameraDirector), 0x0010000000000001);
				UProperty* NewProp_CameraTwo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraTwo"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraTwo, ACameraDirector), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_CameraOne = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraOne"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraOne, ACameraDirector), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_FSmoothBlendTime, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_FSmoothBlendTime, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(NewProp_FTimeBetweenCameraChanges, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_FTimeBetweenCameraChanges, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(NewProp_FTimeToNextCameraChange, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_FTimeToNextCameraChange, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(NewProp_CameraTwo, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_CameraTwo, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(NewProp_CameraOne, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_CameraOne, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("ACameraDirector"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
	UClass* Z_Construct_UClass_ASequentialCameras_NoRegister()
	{
		return ASequentialCameras::StaticClass();
	}
	UClass* Z_Construct_UClass_ASequentialCameras()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACameraDirector();
			Z_Construct_UPackage__Script_MyProject3();
			OuterClass = ASequentialCameras::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentCamera, ASequentialCameras), 0x0040000000000001, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_SequenceOfCameras = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SequenceOfCameras"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SequenceOfCameras, ASequentialCameras), 0x0040000000000001);
				UProperty* NewProp_SequenceOfCameras_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SequenceOfCameras, TEXT("SequenceOfCameras"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDirectorCamera());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SequentialCameras.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SequentialCameras.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_CurrentCamera, TEXT("Category"), TEXT("SequentialCameras"));
				MetaData->SetValue(NewProp_CurrentCamera, TEXT("ModuleRelativePath"), TEXT("SequentialCameras.h"));
				MetaData->SetValue(NewProp_SequenceOfCameras, TEXT("Category"), TEXT("SequentialCameras"));
				MetaData->SetValue(NewProp_SequenceOfCameras, TEXT("ModuleRelativePath"), TEXT("SequentialCameras.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASequentialCameras(Z_Construct_UClass_ASequentialCameras, &ASequentialCameras::StaticClass, TEXT("ASequentialCameras"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASequentialCameras);
	UFunction* Z_Construct_UFunction_ACountdown_CountdownHasFinished()
	{
		UObject* Outer=Z_Construct_UClass_ACountdown();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CountdownHasFinished"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Countdown.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACountdown_NoRegister()
	{
		return ACountdown::StaticClass();
	}
	UClass* Z_Construct_UClass_ACountdown()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyProject3();
			OuterClass = ACountdown::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ACountdown_CountdownHasFinished());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_iCountdownTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("iCountdownTime"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(iCountdownTime, ACountdown), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACountdown_CountdownHasFinished(), "CountdownHasFinished"); // 4095983741
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Countdown.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Countdown.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_iCountdownTime, TEXT("Category"), TEXT("Countdown"));
				MetaData->SetValue(NewProp_iCountdownTime, TEXT("ModuleRelativePath"), TEXT("Countdown.h"));
				MetaData->SetValue(NewProp_iCountdownTime, TEXT("ToolTip"), TEXT("Starting point of timer"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountdown(Z_Construct_UClass_ACountdown, &ACountdown::StaticClass, TEXT("ACountdown"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountdown);
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_MyProject3();
			OuterClass = AMyPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OurVisibleComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OurVisibleComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OurVisibleComponent, AMyPawn), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("Category"), TEXT("MyPawn"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("AMyPawn"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
	UClass* Z_Construct_UClass_AMyProject3GameMode_NoRegister()
	{
		return AMyProject3GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProject3GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_MyProject3();
			OuterClass = AMyProject3GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProject3GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProject3GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject3GameMode(Z_Construct_UClass_AMyProject3GameMode, &AMyProject3GameMode::StaticClass, TEXT("AMyProject3GameMode"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject3GameMode);
	UPackage* Z_Construct_UPackage__Script_MyProject3()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/MyProject3")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xBD0D6C2A;
			Guid.B = 0xF42107F8;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS

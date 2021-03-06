// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSTEST_FPSHud_generated_h
#error "FPSHud.generated.h already included, missing '#pragma once' in FPSHud.h"
#endif
#define FPSTEST_FPSHud_generated_h

#define FPSTest_Source_FPSTest_FPSHud_h_14_RPC_WRAPPERS
#define FPSTest_Source_FPSTest_FPSHud_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSTest_Source_FPSTest_FPSHud_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAFPSHud(); \
	friend FPSTEST_API class UClass* Z_Construct_UClass_AFPSHud(); \
	public: \
	DECLARE_CLASS(AFPSHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/FPSTest"), NO_API) \
	DECLARE_SERIALIZER(AFPSHud) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPSTest_Source_FPSTest_FPSHud_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAFPSHud(); \
	friend FPSTEST_API class UClass* Z_Construct_UClass_AFPSHud(); \
	public: \
	DECLARE_CLASS(AFPSHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/FPSTest"), NO_API) \
	DECLARE_SERIALIZER(AFPSHud) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPSTest_Source_FPSTest_FPSHud_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHud); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFPSHud(const AFPSHud& InCopy); \
public:


#define FPSTest_Source_FPSTest_FPSHud_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFPSHud(const AFPSHud& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHud)


#define FPSTest_Source_FPSTest_FPSHud_h_11_PROLOG
#define FPSTest_Source_FPSTest_FPSHud_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSTest_Source_FPSTest_FPSHud_h_14_RPC_WRAPPERS \
	FPSTest_Source_FPSTest_FPSHud_h_14_INCLASS \
	FPSTest_Source_FPSTest_FPSHud_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSTest_Source_FPSTest_FPSHud_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSTest_Source_FPSTest_FPSHud_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSTest_Source_FPSTest_FPSHud_h_14_INCLASS_NO_PURE_DECLS \
	FPSTest_Source_FPSTest_FPSHud_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSTest_Source_FPSTest_FPSHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

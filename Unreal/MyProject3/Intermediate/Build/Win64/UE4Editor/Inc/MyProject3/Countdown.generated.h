// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT3_Countdown_generated_h
#error "Countdown.generated.h already included, missing '#pragma once' in Countdown.h"
#endif
#define MYPROJECT3_Countdown_generated_h

#define MyProject3_Source_MyProject3_Countdown_h_11_RPC_WRAPPERS \
	virtual void CountdownHasFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define MyProject3_Source_MyProject3_Countdown_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define MyProject3_Source_MyProject3_Countdown_h_11_EVENT_PARMS
extern MYPROJECT3_API  FName MYPROJECT3_CountdownHasFinished;
#define MyProject3_Source_MyProject3_Countdown_h_11_CALLBACK_WRAPPERS
#define MyProject3_Source_MyProject3_Countdown_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesACountdown(); \
	friend MYPROJECT3_API class UClass* Z_Construct_UClass_ACountdown(); \
	public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ACountdown) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject3_Source_MyProject3_Countdown_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesACountdown(); \
	friend MYPROJECT3_API class UClass* Z_Construct_UClass_ACountdown(); \
	public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ACountdown) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject3_Source_MyProject3_Countdown_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACountdown(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACountdown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACountdown(const ACountdown& InCopy); \
public:


#define MyProject3_Source_MyProject3_Countdown_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACountdown(const ACountdown& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACountdown)


#define MyProject3_Source_MyProject3_Countdown_h_8_PROLOG \
	MyProject3_Source_MyProject3_Countdown_h_11_EVENT_PARMS


#define MyProject3_Source_MyProject3_Countdown_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_Countdown_h_11_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_Countdown_h_11_CALLBACK_WRAPPERS \
	MyProject3_Source_MyProject3_Countdown_h_11_INCLASS \
	MyProject3_Source_MyProject3_Countdown_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_Countdown_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_Countdown_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_Countdown_h_11_CALLBACK_WRAPPERS \
	MyProject3_Source_MyProject3_Countdown_h_11_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_Countdown_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_Countdown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
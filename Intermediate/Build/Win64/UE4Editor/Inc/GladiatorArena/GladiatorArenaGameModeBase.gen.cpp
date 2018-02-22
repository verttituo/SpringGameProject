// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GladiatorArenaGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGladiatorArenaGameModeBase() {}
// Cross Module References
	GLADIATORARENA_API UClass* Z_Construct_UClass_AGladiatorArenaGameModeBase_NoRegister();
	GLADIATORARENA_API UClass* Z_Construct_UClass_AGladiatorArenaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GladiatorArena();
// End Cross Module References
	void AGladiatorArenaGameModeBase::StaticRegisterNativesAGladiatorArenaGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGladiatorArenaGameModeBase_NoRegister()
	{
		return AGladiatorArenaGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGladiatorArenaGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_GladiatorArena();
			OuterClass = AGladiatorArenaGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AGladiatorArenaGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GladiatorArenaGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GladiatorArenaGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGladiatorArenaGameModeBase, 425600111);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGladiatorArenaGameModeBase(Z_Construct_UClass_AGladiatorArenaGameModeBase, &AGladiatorArenaGameModeBase::StaticClass, TEXT("/Script/GladiatorArena"), TEXT("AGladiatorArenaGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGladiatorArenaGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

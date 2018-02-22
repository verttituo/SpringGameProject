// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "blueprintimplementableActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblueprintimplementableActor() {}
// Cross Module References
	GLADIATORARENA_API UFunction* Z_Construct_UFunction_AblueprintimplementableActor_CPP_FUNCTION();
	GLADIATORARENA_API UClass* Z_Construct_UClass_AblueprintimplementableActor();
	GLADIATORARENA_API UClass* Z_Construct_UClass_AblueprintimplementableActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GladiatorArena();
// End Cross Module References
	static FName NAME_AblueprintimplementableActor_CPP_FUNCTION = FName(TEXT("CPP_FUNCTION"));
	void AblueprintimplementableActor::CPP_FUNCTION()
	{
		ProcessEvent(FindFunctionChecked(NAME_AblueprintimplementableActor_CPP_FUNCTION),NULL);
	}
	void AblueprintimplementableActor::StaticRegisterNativesAblueprintimplementableActor()
	{
	}
	UFunction* Z_Construct_UFunction_AblueprintimplementableActor_CPP_FUNCTION()
	{
		UObject* Outer = Z_Construct_UClass_AblueprintimplementableActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CPP_FUNCTION"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Implemented"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("blueprintimplementableActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AblueprintimplementableActor_NoRegister()
	{
		return AblueprintimplementableActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AblueprintimplementableActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GladiatorArena();
			OuterClass = AblueprintimplementableActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AblueprintimplementableActor_CPP_FUNCTION());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AblueprintimplementableActor_CPP_FUNCTION(), "CPP_FUNCTION"); // 3740646863
				static TCppClassTypeInfo<TCppClassTypeTraits<AblueprintimplementableActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("blueprintimplementableActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("blueprintimplementableActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AblueprintimplementableActor, 1465619409);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AblueprintimplementableActor(Z_Construct_UClass_AblueprintimplementableActor, &AblueprintimplementableActor::StaticClass, TEXT("/Script/GladiatorArena"), TEXT("AblueprintimplementableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AblueprintimplementableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

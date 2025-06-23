// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnShader.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FLearnShaderModule"

void FLearnShaderModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	const FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("LearnShader"))->GetBaseDir(), TEXT("Shaders"));
	if (!AllShaderSourceDirectoryMappings().Contains(TEXT("/LearnShader")))
	{
		AddShaderSourceDirectoryMapping(TEXT("/LearnShader"), PluginShaderDir);
	}
}

void FLearnShaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLearnShaderModule, LearnShader)
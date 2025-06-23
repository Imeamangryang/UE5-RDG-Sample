#include "LearnShaderSubsystem.h"
#include "LearnShaderSceneViewExtension.h"

void ULearnShaderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	// Register the custom scene view extension
	CustomSceneViewExtension = FSceneViewExtensions::NewExtension<LearnShaderSceneViewExtension>();
}

void ULearnShaderSubsystem::Deinitialize()
{
	Super::Deinitialize();
	// Unregister the custom scene view extension
	CustomSceneViewExtension.Reset();
	CustomSceneViewExtension = nullptr;
}

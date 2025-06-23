#include "TriangleShaderSubsystem.h"

#include "TriangleViewExtension.h"

#include "SceneViewExtension.h"

void UTriangleShaderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	// Create Shared Pointer Call
	UE_LOG(LogTemp, Warning, TEXT("Triangle View Extension Subsystem Init"));
	this->TrianglePass = FSceneViewExtensions::NewExtension<FTriangleViewExtension>();
}

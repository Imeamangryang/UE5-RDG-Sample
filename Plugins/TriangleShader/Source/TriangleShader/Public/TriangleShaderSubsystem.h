#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "TriangleShaderSubsystem.generated.h"

class FTriangleViewExtension;

UCLASS()
class TRIANGLESHADER_API UTriangleShaderSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

	// Add ViewExtension Pointer in Protected
protected:
	TSharedPtr<FTriangleViewExtension, ESPMode::ThreadSafe> TrianglePass;

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
};
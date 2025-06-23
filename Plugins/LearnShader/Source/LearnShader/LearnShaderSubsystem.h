#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "LearnShaderSubsystem.generated.h"

class FSceneViewExtensionBase;

UCLASS()
//DLL导出标志
class LEARNSHADER_API ULearnShaderSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

private:
	TSharedPtr<FSceneViewExtensionBase, ESPMode::ThreadSafe> CustomSceneViewExtension;

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	//被移除时执行
	virtual void Deinitialize() override;
};
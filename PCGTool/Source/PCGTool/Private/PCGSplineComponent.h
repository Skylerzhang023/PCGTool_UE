#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Components/SplineComponent.h"
#include "PcgSplineComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class  PCGTOOL_API UPcgSplineComponent : public USplineComponent
{
	GENERATED_UCLASS_BODY()
public:
	
		UPROPERTY(EditAnywhere, Category = "PCG")
		float Speed;
};
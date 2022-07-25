#pragma once
// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Components/SplineComponent.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class  UPCGSplineComponent : public USplineComponent
{
	GENERATED_UCLASS_BODY()
public:
	/**
	 * Defaults which are used to propagate values to spline points on instances of this in the world
	 */
	UPROPERTY(Category = PCG, EditDefaultsOnly)
		FPCGSplineCurveDefaults PCGSplineDefaults;

	float speed;
};
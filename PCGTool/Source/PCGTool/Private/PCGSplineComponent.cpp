#include "PCGSplineComponent.h"

UPcgSplineComponent::UPcgSplineComponent(const FObjectInitializer& ObjectInitializer)
	: USplineComponent(ObjectInitializer)
{
	SplineCurves.Position.Points.Empty(3);
	SplineCurves.Rotation.Points.Empty(3);
	SplineCurves.Scale.Points.Empty(3);
}
#include "Engine.h"

Classes::FVector Engine::GetBonePosition(Classes::ATslCharacter* p, int boneIndex)
{
	
}

bool Engine::GetBoneScreenPosition(Classes::ATslCharacter* p, Classes::FVector2D* result, int boneIndex)
{
	return W2S(GetBonePosition(p, boneIndex), result);
}

bool Engine::W2S(Classes::FVector worldPos, Classes::FVector2D* screenPos)
{
	
}

bool Engine::IsVisible(Classes::AActor* p, Classes::FVector viewPoint)
{
	return Global::PlayerController->LineOfSightTo(p, viewPoint, false);
}

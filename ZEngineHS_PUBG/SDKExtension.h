#pragma once

#include "Includes.h"
#include "Colors.h"
#include "Global.h"
#include "Definitions.h"
#include "Engine.h"

namespace Classes
{
	class ATslCharacter;
	class ATslWheeledVehicle;
	class AActor;
	class UItem;
	struct FVector;
}

namespace ESP
{
	void DrawPlayerSkeleton(Classes::ATslCharacter* player);
	void DrawPlayer(Classes::ATslCharacter*);
	void DrawWheeledVehicle(Classes::ATslWheeledVehicle*);
	void DrawLootGroup(Classes::AActor*);
	void DrawLootItem(std::wstring name, Classes::FVector absolutePos);
	void DrawActorBoundingBox(Classes::AActor* actor, Color color);
	void DrawAirdrop(Classes::AActor* actor);
	void DrawDeathDrop(Classes::AActor* actor);
	void DrawActorOnRadar(Classes::FVector deltaFromLocal, Color col);

	std::wstring GetVehicleName(Classes::ATslWheeledVehicle* vehicle);
}

namespace Aimbot
{
	void BeginFrame();
	void EvaluateTarget(Classes::ATslCharacter* p);
	void AimToTarget();
}
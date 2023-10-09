#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnPointEventDelegate.generated.h"

class AEnemySpawnPoint;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnPointEvent, AEnemySpawnPoint*, EnemySpawnPoint);


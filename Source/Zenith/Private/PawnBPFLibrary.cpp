#include "PawnBPFLibrary.h"
#include "Templates/SubclassOf.h"

class APawn;
class AZenithPlayerController;
class AAIController;

void UPawnBPFLibrary::SpawnCustomController(APawn* Pawn, TSubclassOf<AAIController> AIControllerClass) {
}

void UPawnBPFLibrary::ResetZVelocity(APawn* Pawn) {
}

void UPawnBPFLibrary::ResetVelocity(APawn* Pawn) {
}

AZenithPlayerController* UPawnBPFLibrary::GetZenithPlayerController(APawn* Pawn) {
    return NULL;
}

void UPawnBPFLibrary::AttributeFaction(APawn* Pawn, EFaction Faction) {
}

UPawnBPFLibrary::UPawnBPFLibrary() {
}


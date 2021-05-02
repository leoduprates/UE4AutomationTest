#include "ThirdPersonFTestScript.h"

AThirdPersonFTestScript::AThirdPersonFTestScript()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AThirdPersonFTestScript::BeginPlay()
{
    Super::BeginPlay();
}

void AThirdPersonFTestScript::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    FVector Location(EForceInit::ForceInit);
    Location = character->AActor::GetActorForwardVector();
    character->AddMovementInput(Location, 1.000000, false);

    Rotate(turnLeft1Trigger, &canTurnLeft1, FRotator(0.000000, -120.000000, 0.000000));
    Rotate(turnLeft2Trigger, &canTurnLeft2, FRotator(0.000000, -210.000000, 0.000000));
    Rotate(turnLeft3Trigger, &canTurnLeft3, FRotator(0.000000, -60.000000, 0.000000));
    Rotate(jump, &canJump, FRotator(0.000000, -210.000000, 0.000000));
    Jump();

    if (assert->IsOverlappingActor(character))
    {
        FinishTest(EFunctionalTestResult::Succeeded, FString(TEXT("Success")));
    }
}

void AThirdPersonFTestScript::Rotate(ATriggerSphere *trigger, bool *perform, FRotator rotator)
{

    if (trigger->IsOverlappingActor(character) && perform)
    {
        character->AActor::K2_SetActorRotation(rotator, false);
        *perform = false;
    }
}

void AThirdPersonFTestScript::Jump()
{
   GetWorld()->GetTimerManager().SetTimer(
        _loopTimerHandle, [this]() { character->Jump(); }, jumpDelay, false);
}
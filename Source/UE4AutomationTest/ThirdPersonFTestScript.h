#pragma once

#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/TriggerSphere.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"

#include "ThirdPersonFTestScript.generated.h"

class ACharacter;

UCLASS()
class UE4AUTOMATIONTEST_API AThirdPersonFTestScript : public AFunctionalTest
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	AThirdPersonFTestScript();

	virtual void Tick( float DeltaTime ) override;

	void Rotate( ATriggerSphere* trigger, bool* perform, FRotator rotator );

	void Jump();

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="Default", MultiLine="true", OverrideNativeName="Character"))
	ACharacter* character;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Turn Left 1", Category="Default", MultiLine="true", OverrideNativeName="Turn Left 1"))
	ATriggerSphere* turnLeft1Trigger;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Turn Left 2", Category="Default", MultiLine="true", OverrideNativeName="Turn Left 2"))
	ATriggerSphere* turnLeft2Trigger;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Turn Left 3", Category="Default", MultiLine="true", OverrideNativeName="Turn Left 3"))
	ATriggerSphere* turnLeft3Trigger;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Jump", Category="Default", MultiLine="true", OverrideNativeName="Jump"))
	ATriggerSphere* jump;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Assert", Category="Default", MultiLine="true", OverrideNativeName="Assert"))
	ATriggerSphere* assert;

private:
	bool canTurnLeft1 = true;
	bool canTurnLeft2 = true;
	bool canTurnLeft3 = true;
	bool canJump = true;

	float jumpDelay = 0.200000;

	FTimerHandle _loopTimerHandle;
};

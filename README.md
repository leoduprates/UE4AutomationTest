<p>
    <img alt="Unreal Engine" src="https://img.shields.io/badge/unrealengine-%23313131.svg?&style=for-the-badge&logo=unrealengine&logoColor=white"/>
    <img alt="C++" src="https://img.shields.io/badge/c++-%2300599C.svg?&style=for-the-badge&logo=c%2B%2B&ogoColor=white"/>
    <a href="https://linkedin.com/in/leonardo-duprates">
        <img alt="LinkedIn" src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white"/>
    </a>
</p>

# UE4 Automation Test

This project is a simple example of testing automation in Unreal Engine 4 using Blueprint Visual Scripting and Unreal Engine's C++ in the third-person starter kit.

## Tests

The automation tests will simulate the character running on the map, climbing on the platform and jumping over the box. The character is expected to arrive at the trigger sphere and attain the position.

* ThirdPersonFTestBlueprint: Developed using Blueprint Visual Scripting.
* ThirdPersonFTestScript: Developed using Unreal Engine's C++.

## Demo

![GIF demo](GitResources/demo.gif)

## Blueprint Resources

1. On Actor Begin Overlap [AActor]: Called when another actor begins to overlap this actor, for example a player walking into a trigger.
2. SetActorRotation [AActor/bool]: Set the Actor's rotation instantly to the specified rotation.
3. Jump [ACharacter/void]: Make the character jump on the next update.
4. Delay [FlowControl]: Perform a latent action with a delay (specified in seconds). Calling again while it is counting down will be ignored.
5. Add Movement Input [BlueprintAPI/Input]: Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'.
6. Get Actor Forward Vector [Transformation]: Get the forward (X) vector (length 1.0) from this Actor, in world space.
7. Variables types used: character, sphere trigger.

## Unreal Engine's C++ Resources

1. AActor::GetActorForwardVector: Get the forward (X) vector (length 1.0) from this Actor, in world space.
2. APawn::AddMovementInput: Add movement input along the given world direction vector.
3. AActor::IsOverlappingActor: Check whether any component of this Actor is overlapping any component of another Actor. 
4. AActor::K2_SetActorRotation: Set the Actor's rotation instantly to the specified rotation. 
5. UWorld::GetTimerManager: Returns TimerManager instance for this world. 
6. UPROPERTY: Property Specifiers can be added to the declaration to control in editor. 

## Getting Started

Follow the steps below to clone and run automated tests.

### Prerequisites

* Hardware and Software Specifications
  ```
  https://docs.unrealengine.com/en-US/Basics/RecommendedSpecifications/index.html
  ```
* Unreal Engine > 4
  ```
  https://www.unrealengine.com/en-US/download
  ```

### Installation

1. Clone the Git repository.
2. Build the project through the Toolbar > Build all Levels.
3. Compile the project through the Toolbar > Recompiles and reloads C++.
4. Run the tests through the Development Tool > Session Frontend window > Automation > Project > Functional Tests.

## Acknowledgements

* [UE4 Style Guide By Allar](https://github.com/Allar/ue4-style-guide)
* [Paul Gestwicki](https://www.youtube.com/watch?v=HscEt4As0_g)
* [DavieMakesGames](https://www.youtube.com/watch?v=528XSNTfxX8)

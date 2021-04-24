<p>
<img alt="Unreal Engine" src="https://img.shields.io/badge/unrealengine-%23313131.svg?&style=for-the-badge&logo=unrealengine&logoColor=white"/>
<img alt="C++" src="https://img.shields.io/badge/c++-%2300599C.svg?&style=for-the-badge&logo=c%2B%2B&ogoColor=white"/>
</p>

# UE4 Automated Tests With Blueprints

This project is an simple example of automated tests in Unreal Engine 4 using only blueprints (without cpp code) in the third person sample scene.

## About The Project

1. The automated test will simulate the character running on the map, climb on the the platform and jump over the box, it is expected to arrive on the trigger sphere assert.
2. The actions events is developed in Blueprint class using Event Graph.
3. Each action point is defined by Trigger Actors (Trigger Sphere).

## Game Framework Resources

1. On Actor Begin Overlap [AActor]: Called when another actor begins to overlap this actor, for example a player walking into a trigger.
2. SetActorRotation [AActor/bool]: Set the Actor's rotation instantly to the specified rotation.
3. Jump [ACharacter/void]: Make the character jump on the next update.
4. Delay [FlowControl]: Perform a latent action with a delay (specified in seconds). Calling again while it is counting down will be ignored.
5. Add Movement Input [BlueprintAPI/Input]: Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'.
6. Get Actor Forward Vector [Transformation]: Get the forward (X) vector (length 1.0) from this Actor, in world space.
7. Variables types used: character, sphere trigger.

## Getting Started

Follow the steps below to clone and run automated tests.

### Prerequisites
* Unreal Engine > 4
  ```
  https://www.unrealengine.com/en-US/download
  ```

### Installation

1. Clone the repo.
3. Build the project.
4. Run the tests through the Development Tool > Session Frontend window.

## Acknowledgements
* [Unreal Engine](https://www.unrealengine.com/en-US/)
* [UE4 Style Guide By Allar](https://github.com/Allar/ue4-style-guide)
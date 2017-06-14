// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameDataTables.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/Character.h"
#include "Gladiator.generated.h"

UCLASS(config = Game)
class BELLZ_API AGladiator : public ACharacter
{
public:

	GENERATED_BODY()

	//Camera boom used for positioning the camera behind the player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	//Reference to the camera itself
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	//Paper2D sprite used to render some effects instead of using HUD
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Effects, meta = (AllowPrivateAccess = "true"))
	class UPaperSpriteComponent* EffectSprite;

	//How fast the camera can look left and right in degrees per second
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	//How fast the camera can look up and down in degrees per second
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	//Vertical jump speed of the player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Attributes")
	float jumppingVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Attributes")
	bool IsStillAlive;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Attributes")
	bool IsAttacking;

	//Index of the players currently selected weapon
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Attributes")
	int32 WeaponIndex;

	//Can the player still give input
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Attributes")
	bool IsControlable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game DataTables")
	AGameDataTables* TablesInstance;

	UFUNCTION(BlueprintCallable, Category = "Player Attributes")
	bool GetIsStillAlive() const { return IsStillAlive; }

	//status determines whether or not the player should have control over the controller
	UFUNCTION(BlueprintCallable, Category = "Player Attributes")
	void OnSetPlayerController(bool status);

	//Called when player health has been changed
	UFUNCTION(BlueprintCallable, Category = "Player Attributes")
	void OnChangeHealthByAmount(float usedAmount);

	UFUNCTION(BlueprintCallable, Category = "Player Attributes")
	float OnGetHealthAmount() const { return TotalHealth; }

	//Called after the player has finished an attack
	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void OnPostAttack();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintCallable, Category = "Player Attributes")
	USpringArmComponent* GetCameraBoomAlternate() const { return CameraBoom; }

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Player Attributes")
	float TotalHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float AttackRange;

	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void MoveForward(float value);

	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void MoveRight(float value);

	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void Jump();

	//Stops the jump and goes back to idle/run
	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void StopJumping();

	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void OnAttack();

	UFUNCTION(BlueprintCallable, Category = "Player Actions")
	void OnChangeWeapon();

	//Adjust camera horizontal turn speed
	void TurnAtRate(float Rate);

	//Adjust camera vertical turn speed
	void LookUpAtRate(float Rate);

	// Sets default values for this character's properties
	AGladiator();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};

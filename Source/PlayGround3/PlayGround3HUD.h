// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "PlayGround3HUD.generated.h"

UCLASS()
class APlayGround3HUD : public AHUD
{
	GENERATED_BODY()

public:
	APlayGround3HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


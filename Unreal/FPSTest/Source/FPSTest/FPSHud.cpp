// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTest.h"
#include "FPSHud.h"


void AFPSHud::DrawHUD()
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		//Find the center of the screen
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
		
		//Off set the center of the texture so it matches the center of the screen
		FVector2D CrossHairDrawPosition(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5f));

		//Creates a tile sized item that is to be drawn to the canvas translucently
		FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairTexture->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}


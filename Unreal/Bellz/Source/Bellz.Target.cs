// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BellzTarget : TargetRules
{
	public BellzTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
        //PrivateIncludePaths.AddRange(new string[] { "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Classes",
        //                                            "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Public",
        //                                            "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Intermediate\\Build\\Win64\\UE4Editor\\Inc\\Paper2D",
        //                                            "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D" });
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "Bellz" } );
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Bellz : ModuleRules
{
	public Bellz(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D", "AIModule" });

        //PrivateIncludePaths.AddRange(new string[] { "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Classes",
        //                                            "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Public",
        //                                            "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Intermediate\\Build\\Win64\\UE4Editor\\Inc\\Paper2D",
        //                                            "C:\\Program Files\\Epic Games\\UE_4.12\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");
		// if ((Target.Platform == UnrealTargetPlatform.Win32) || (Target.Platform == UnrealTargetPlatform.Win64))
		// {
		//		if (UEBuildConfiguration.bCompileSteamOSS == true)
		//		{
		//			DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
		//		}
		// }
	}
}

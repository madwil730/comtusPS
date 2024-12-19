// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Comtus2PS : ModuleRules
{
	public Comtus2PS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PvZ_Lab : ModuleRules
{
	public PvZ_Lab(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}

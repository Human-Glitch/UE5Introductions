// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UdemyUE5IntroProject : ModuleRules
{
	public UdemyUE5IntroProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

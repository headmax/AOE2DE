#include "FeatureManager.h"
#include "Feature.h"


FeatureManager* FeatureManager::instance = NULL;



FeatureManager::FeatureManager()
{

}

FeatureManager* FeatureManager::Get()
{
	if (!instance)
	{
		instance = new FeatureManager();
	}
	return instance;
}

void FeatureManager::RegisterFeature(Feature* feature)
{
	static int feature_numer = 0;
	printf("Registered feature %d\n", feature_numer++);
	features.push_back(feature);
}

void FeatureManager::LoadConfig()
{
	for (Feature* feature : features)
	{
		feature->LoadConfig();
	}
}

void FeatureManager::SaveConfig()
{
	for (Feature* feature : features)
	{
		feature->SaveConfig();
	}
}

void FeatureManager::OnInitialise()
{
	for (Feature* feature : features)
	{
		feature->OnInitialise();
	}
}

void FeatureManager::OnGameStart()
{
	for (Feature* feature : features)
	{
		feature->OnGameStart();
	}
}

void FeatureManager::OnTurn()
{
	for (Feature* feature : features)
	{
		feature->OnTurn();
	}
}

void FeatureManager::OnCreateUnit(Unit* unit)
{
	for (Feature* feature : features)
	{
		feature->OnUnitCreated(unit);
	}
}

void FeatureManager::OnShutdown()
{
	for (Feature* feature : features)
	{
		feature->OnShutdown();
	}
}

void FeatureManager::OnDraw()
{
	for (Feature* feature : features)
	{
		feature->OnDraw();
	}
}

void FeatureManager::OnMenuMainWindow()
{
	for (Feature* feature : features)
	{
		feature->OnMenuMainWindow();
	}
}

void FeatureManager::OnMenuPlayerTreenode(Player* player, int playerIndex)
{
	for (Feature* feature : features)
	{
		feature->OnMenuPlayerTreenode(player, playerIndex);
	}
}

void FeatureManager::OnPlayerIteration(Player* player, int playerIndex)
{
	for (Feature* feature : features)
	{
		feature->OnPlayerIteration(player, playerIndex);
	}
}

void FeatureManager::OnUnitIteration(Unit* unit, Player* player, int playerIndex)
{
	for (Feature* feature : features)
	{
		feature->OnUnitIteration(unit, player, playerIndex);
	}
}

void FeatureManager::OnNeutralUnit(Unit* unit)
{
	for (Feature* feature : features)
	{
		feature->OnNeutralUnit(unit);
	}
}
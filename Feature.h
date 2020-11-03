#pragma once
#include <vector>

class Player;
class Unit;
class Feature
{

protected:
	bool enabled = true;
public:
	virtual void LoadConfig();
	virtual void SaveConfig();
	virtual void OnInitialise();
	virtual void OnGameStart();
	virtual void OnTurn();
	virtual void OnUnitCreated(Unit* unit);
	virtual void OnShutdown();

	virtual void OnDraw();
	virtual void OnMenuMainWindow();
	virtual void OnMenuPlayerTreenode(Player* player, int playerIndex);


	virtual void OnPlayerIteration(Player* player, int playerIndex);
	virtual void OnUnitIteration(Unit* unit, Player* player, int playerIndex);

	virtual void OnNeutralUnit(Unit* unit);
};
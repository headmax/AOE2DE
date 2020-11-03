#pragma once

/**
 * This class will be called on anything we hook.
 * - TODO: OnTurn, OnEnemyCommand, OnChatMessage, OnGameStarts, OnGameEnds...
 * - For now we just do everything from endscene.
 */

class Unit;
class Core
{
    bool skipLocalplayer = false;
public:
    Core();
    void OnPresent();
    void OnShutdown();
};

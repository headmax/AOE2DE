#include "Offsets.h"

namespace Offsets
{
	//48 8D 0D ? ? ? ? 41 B8 ? ? ? ? E8 ? ? ? ? 33 C0		//5
	int64_t pathfindingSystem = 0x2bb6e10;

	//48 8B 0D ? ? ? ? E8 ? ? ? ? C6 85						//5
	int64_t mainScreen = 0x2ba4988;

	//48 8B 0D ? ? ? ? 48 85 C9 0F 84 ? ? ? ? 40			//4
	int64_t tribePanelInven = 0x2ba5ed0;

	//48 8B 83 ? ? ? ? 48 8B 48 70 F3 0F 10					//4
	int64_t tribePanelInven_localPlayer = 0x208;

	//4C 8B 05 ? ? ? ? 45 84
	int64_t pAVGame = 0x2b96dd8;

	//TODO %s: %d/%d
	//MinimapText 88 85 ? ? ? ? 41 8B 46 0C					//2
	int64_t minimapHookOffset = 0xcb1646;

	//Functions
	int64_t printNotification = 0xca7b10;		//48 83 EC 48 48 8B 05 ? ? ? ? 4C 8D					//4
	int64_t printBottomText = 0xc914d0;			//48 8B C4 48 83 EC 78 F3 0F 10 05 ? ? ? ? 41			//4
	int64_t pauseGame = 0x874620;				//48 89 5C 24 ? 55 48 8D 6C 24 ? 48 81 EC ? ? ? ? 80	//3
	
	//E8 ? ? ? ? 90 48 8B 05 ? ? ? ? F2  - 0x94															//1
	int64_t sendChat = 0xa158c0;
	
	int64_t createUnitHook = 0xeacf60;			//48 89 5C 24 ? 48 89 6C 24 ? 57 48 83 EC 20 8B 41		//3

	int64_t playerArrayStart = 0x2a8;

	//Manual Update
	//CustomLoadingScreen
	int64_t pathToLoadScreen = 0x2012278;		// /resources/loading_slash.png
	int64_t loadPathToLoadScreen = 0xfe0eae;	// x-ref /resources/loading_slash.png
}
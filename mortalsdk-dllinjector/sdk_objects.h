#pragma once
#include "sdk.h"

namespace objects {

	extern UMOGlobal* MOGlobal;
	extern AMOCharacter* MOCharacter;
	extern UGeneralProjectSettings* ProjectSettings;
	extern UGameMapsSettings* GameMapSettings;
	extern UGameSessionSettings* GameSessionSettings;
	extern UObject* GeneralEngineSettings;
	extern UGameNetworkManagerSettings* GameNetworkManagerSettings;
	extern AMOGameModeMenu* GameModeMenu;
	extern UMOCheatManager* MainMenuCheat;

	void init();
}
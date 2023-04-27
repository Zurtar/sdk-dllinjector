#include "pch.h"
#include "sdk.h"
#include "sdk_objects.h"

extern TUObjectArray* ObjectArray;

namespace objects {
		UMOGlobal* MOGlobal = nullptr;
		AMOCharacter* MOCharacter = nullptr;
		UGeneralProjectSettings* ProjectSettings = nullptr;
		UGameMapsSettings* GameMapSettings = nullptr;
		UGameSessionSettings* GameSessionSettings = nullptr;
		UObject* GeneralEngineSettings = nullptr;
		UGameNetworkManagerSettings* GameNetworkManagerSettings = nullptr;
		AMOGameModeMenu* GameModeMenu = nullptr;

		void init() {
			MOGlobal = (UMOGlobal*)ObjectArray->FindObject("MOGlobal MortalOnline2.Default__MOGlobal");
			MOCharacter = (AMOCharacter*)ObjectArray->FindObject("MOCharacter MortalOnline2.Default__MOCharacter");
			ProjectSettings = (UGeneralProjectSettings*)ObjectArray->FindObject("GeneralProjectSettings EngineSettings.Default__GeneralProjectSettings");
			GameMapSettings = (UGameMapsSettings*)ObjectArray->FindObject("GameMapsSettings EngineSettings.Default__GameMapsSettings");
			GameSessionSettings = (UGameSessionSettings*)ObjectArray->FindObject("GameSessionSettings EngineSettings.Default__GameSessionSettings");
			GeneralEngineSettings = ObjectArray->FindObject("GeneralEngineSettings EngineSettings.Default__GeneralEngineSettings");
			GameNetworkManagerSettings = (UGameNetworkManagerSettings*)ObjectArray->FindObject("GameNetworkManagerSettings EngineSettings.Default__GameNetworkManagerSettings");
			GameModeMenu = (AMOGameModeMenu*)ObjectArray->FindObject("BP_MortalOnline2GameModeMenu_C MainMenu_P.MainMenu_P.PersistentLevel.BP_MortalOnline2GameModeMenu_C_2147482470");
		}
}
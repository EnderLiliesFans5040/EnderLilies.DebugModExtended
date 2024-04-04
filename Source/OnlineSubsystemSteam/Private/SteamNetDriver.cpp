#include "SteamNetDriver.h"

USteamNetDriver::USteamNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("/Script/OnlineSubsystemSteam.SteamNetConnection");
    this->ChannelDefinitions.AddDefaulted(3);
}



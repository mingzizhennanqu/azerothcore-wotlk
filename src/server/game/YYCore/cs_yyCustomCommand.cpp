//
//  cs_yyCustomCommand.cpp
//  game
//
//  Created by yu on 2025/10/24.
//

#include <stdio.h>
#include "CommandScript.h"
#include "ChatCommand.h"


using namespace Acore::ChatCommands;


class yy_commandscript : public CommandScript
{
public:
    yy_commandscript() : CommandScript("yy_commandscript") { }

    ChatCommandTable GetCommands() const override
    {
        static ChatCommandTable yyCommandTable =
        {
//            { "chat",      HandleGMChatCommand,       SEC_GAMEMASTER,     Console::No  },
//            { "fly",       HandleGMFlyCommand,        SEC_GAMEMASTER,     Console::No  },
//            { "ingame",    HandleGMListIngameCommand, SEC_PLAYER,         Console::Yes },
//            { "list",      HandleGMListFullCommand,   SEC_ADMINISTRATOR,  Console::Yes },
//            { "visible",   HandleGMVisibleCommand,    SEC_GAMEMASTER,     Console::No  },
//            { "on",        HandleGMOnCommand,         SEC_MODERATOR,      Console::No  },yy_commandscript
//            { "off",       HandleGMOffCommand,        SEC_MODERATOR,      Console::No  },
//            { "spectator", HandleGMSpectatorCommand,  SEC_GAMEMASTER,     Console::No  },
        };
        static ChatCommandTable commandTable =
        {
            { "yy", yyCommandTable }
        };
        return commandTable;
    }



};


void AddSC_yy_commandscript()
{
    new yy_commandscript();
}

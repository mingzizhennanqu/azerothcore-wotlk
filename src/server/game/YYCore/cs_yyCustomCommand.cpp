//
//  cs_yyCustomCommand.cpp
//  game
//
//  Created by yu on 2025/10/24.
//

#include <stdio.h>
#include "Chat.h"
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
            { "jzts",      YY_HandleJiaZaiTeSe,       SEC_CONSOLE,     Console::Yes  },
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
            { "jzts",          YY_HandleJiaZaiTeSe,       SEC_CONSOLE,     Console::Yes  },
            { "加载特色",       YY_HandleJiaZaiTeSe,       SEC_CONSOLE,     Console::Yes  },
            { "公告模版",       YY_HandleGongGao,       SEC_CONSOLE,     Console::Yes}
        };
        return commandTable;
    }

    
    static bool YY_HandleJiaZaiTeSe(ChatHandler* handler)
    {
        
        handler->SendSysMessage("加载特色========================");

        return true;
    }
    
    static bool YY_HandleGongGao(ChatHandler* handler,uint32 Id)
    {
        if (!Id) {
            return false;
        }
        handler->SendSysMessage("公告模版========================");

        return true;
    }


};


void AddSC_yy_commandscript()
{
    new yy_commandscript();
}

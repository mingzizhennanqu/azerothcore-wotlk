//
//  YYCoreManager.hpp
//  game
//
//  Created by yu on 2025/10/24.
//

#ifndef YYCoreManager_hpp
#define YYCoreManager_hpp

#include <stdio.h>

class YYCoreManager
{
public:
    static YYCoreManager* instance();


private:
    
};



#define YYMgr YYCoreManager::instance()
#endif /* YYCoreManager_hpp */

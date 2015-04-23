/*
 * MonolithOS by Rize Club:Robotics Group
 * Core header
 * Authors:
 */

#ifndef MONOLITHOS_CORE_H
#define MONOLITHOS_CORE_H

#endif //MONOLITHOS_CORE_H

//Modules
#include "depends.h"
#include "modules/diagnostic.h"
#include "modules/ai/ai_manager.h"
#include "modules/components/components_manager.h"
//

namespace core
{

    unsigned int GetTimeStamp()
    {
        struct timeval tv;
        gettimeofday(&tv, NULL);
        return tv.tv_sec*(uint64_t)1000000+tv.tv_usec;
    }

    int getrand(int n)
    {
        srand(GetTimeStamp());
        return rand() % n;
    }
}
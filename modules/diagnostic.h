//
// Created by Nicki on 22.04.2015.
//

#ifndef MONOLITHOS_DIAGNOSTIC_H
#define MONOLITHOS_DIAGNOSTIC_H

#endif //MONOLITHOS_DIAGNOSTIC_H

#include "../depends.h"

namespace checkit
{
    class Module
    {
    public:
        int type;
        int pins[];
        int status;
        bool on;

        int checkmodule()
        {
            return 1;
        }
    };
}
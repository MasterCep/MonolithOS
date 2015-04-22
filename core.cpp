/*
 * Probe Rover
 * MonolithOS by Rize Club:Robotics Group
 * Core source
 * Authors:
 */
#include "core.h"
using namespace core;
using namespace checkit;

void func1()
{
    for(int i = 0; i <= 3; i++)
    {
        cout << "2" << endl; // Быстрый рандом на микросекундах
    }
}

void func2()
{
    for(int i = 0; i <= 3; i++)
    {
        cout << "1" << endl;
    }
}

thread thr1(func1);
thread thr2(func2);

int main()
{
    thr1.detach();
    thr2.detach();
    gdf();
    getchar();
}
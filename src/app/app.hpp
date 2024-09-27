#pragma once
#include "../utils/singleton/singleton.hpp"
#include "sdk/sdk.hpp"
class CApp {
    public:
    void Run();
    void Shutdown();
};

MAKE_SINGLETON(CApp, App);
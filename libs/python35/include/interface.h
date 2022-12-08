// TODO(alexander): rename this file

#pragma once

#include <ksignals/ksignals.h>

struct Events {
    ksignals::Event<void()>                 DoHooking;
    ksignals::Event<uintptr_t(std::string)> GetProcAddress;
    ksignals::Event<void()>                 IHateEverything;
};

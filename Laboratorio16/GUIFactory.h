#pragma once
#ifndef GUIFACTORY_H
#define GUIFACTORY_h

#include "SO_Windows.h"
#include "SO_Mac.h"
#include "SO_Linux.h"

class GUIFactory
{
public:
    virtual WinFactory* CrearControlW() const = 0;
    virtual MacFactory* CrearControlM() const = 0;
    virtual LinuxFactory* CrearControlL() const = 0;
};

#endif
#pragma once
#ifndef PRODUCTABSTRACT_H
#define PRODUCTABSTRACT_H


#include "GUIFactory.h"


class Button : public GUIFactory
{
public:
    WinFactory* CrearControlW() const override {
        return new WinButton();
    }
    MacFactory* CrearControlM() const override {
        return new MacButton();
    }
    LinuxFactory* CrearControlL() const override {
        return new LinuxButton();
    }
};

class CheckBox : public GUIFactory
{
public:
    WinFactory* CrearControlW() const override {
        return new WinCheckBox();
    }
    MacFactory* CrearControlM() const override {
        return new MacCheckBox();
    }
    LinuxFactory* CrearControlL() const override {
        return new LinuxCheckBox();
    }

};

#endif

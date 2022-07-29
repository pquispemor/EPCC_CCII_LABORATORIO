#pragma once
#ifndef SO_WINDOWS_H
#define SO_WINDOWS_H

#include <iostream>

class WinFactory
{
public:
    virtual ~WinFactory() {};
    virtual std::string Draw() const = 0;
};

class WinCheckBox : public WinFactory
{
public:
    std::string Draw() const override {
        return "Dibujando CheckBox Windows.";
    }
};

class WinButton : public WinFactory
{
    std::string Draw() const override {
        return "Dibujando Button Windows";
    }
};

#endif
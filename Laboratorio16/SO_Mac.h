#pragma once
#ifndef SO_MAC_H
#define SO_MAC_h

#include <iostream>
#include "SO_Windows.h"

class MacFactory
{
public:
    virtual ~MacFactory() {};
    virtual std::string Draw() const = 0;
    virtual std::string draw(const WinFactory& colaborador) const = 0;
};

class MacCheckBox : public MacFactory
{
public:
    std::string Draw() const override {
        return "Dibujando CheckBox Mac";
    }

    std::string draw(const WinFactory& colaborador) const override {
        const std::string result = colaborador.Draw();
        return "Mac CheckBox " + result;
    }

};

class MacButton : public MacFactory
{
    std::string Draw() const override {
        return "Dibujando Button Mac";
    }

    std::string draw(const WinFactory& colaborador) const override {
        const std::string result = colaborador.Draw();
        return "Mac Button " + result;
    }
};

#endif
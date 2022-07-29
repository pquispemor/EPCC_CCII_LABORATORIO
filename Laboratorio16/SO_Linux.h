#pragma once
#ifndef SO_LINUX_H
#define SO_LINUX_h

#include <iostream>

class LinuxFactory
{
public:
    virtual ~LinuxFactory() {};
    virtual std::string Draw() const = 0;
};

class LinuxCheckBox : public LinuxFactory
{
    std::string Draw() const override {
        return "Dibujando CheckBox Linux.";
    }
};

class LinuxButton : public LinuxFactory
{
    std::string Draw() const override {
        return "Dibujando Button Linux";
    }
};

#endif
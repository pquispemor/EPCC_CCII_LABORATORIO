#pragma once

#ifndef IBUILDER_H
#define IBUILDER_H

#include <iostream>

class IBuilder
{
public:
	virtual ~IBuilder(){}
	virtual void prodPuertas(std::string) const = 0;
	virtual void prodLlantas(std::string) const = 0;
	virtual void prodTimon(std::string) const = 0;
	virtual void prodAsientos(std::string) const = 0;
	virtual void prodMotor(std::string) const = 0;
	virtual void prodEspejos(std::string) const = 0;
	virtual void prodVidrios(std::string) const = 0;
};

#endif

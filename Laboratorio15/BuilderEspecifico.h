#pragma once

#ifndef BUILDERESPECIFICO_H
#define BUILDERESPECIFICO_H

#include <iostream>
#include "IBuilder.h"
#include "Automovil.h"
class BuilderEspecifico : public IBuilder
{
private:
	Automovil* automovil;
public:
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete automovil;
	}
	void Reset() {
		this->automovil = new Automovil();
	}
	void prodPuertas(std::string c) const override {
		std::string comp = "Puertas[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	void prodLlantas(std::string c) const override {
		std::string comp = "LLantas[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	void prodTimon(std::string c) const override {
		std::string comp = "Timon[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	void prodAsientos(std::string c) const override {
		std::string comp = "Asientos[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	void prodMotor(std::string c) const override {
		std::string comp = "Motor[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	void prodEspejos(std::string c) const override {
		std::string comp = "Espejos[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	void prodVidrios(std::string c) const override {
		std::string comp = "Vidrios[" + c + "]";
		this->automovil->componentes.push_back(comp);
	}
	Automovil* getAutomovil() {
		Automovil* resultado = this->automovil;
		this->Reset();
		return resultado;
	}
};

#endif
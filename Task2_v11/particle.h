#pragma once
class Particle
{

public:
	Particle() {} //нужен ли?
	virtual double getMass() const = 0;
	virtual double getCharge() const = 0;

};


#pragma once
#include "particle.h"
#include <string>
class ComplexParticle :
    public Particle
{
protected:
    std::string name;
public:
    ComplexParticle(std::string n);

    std::string getName() const;

    virtual std::string showSubParts() const = 0;
};


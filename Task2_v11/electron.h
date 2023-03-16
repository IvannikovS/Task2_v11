#pragma once
#include "particle.h"
class Electron :
    public Particle
{
public:
    double getMass() const {
        return 9.109e-31;
    }
    
    double getCharge() const {
        return -1.6e-19;
    }

};


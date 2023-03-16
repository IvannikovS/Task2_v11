#pragma once
#include "nucleon.h"
class Proton :
    public Nucleon
{
public:
    double getMass() const {
        return 1.672e-27;
    }

    double getCharge() const {
        return 1.6e-19;
    }
};


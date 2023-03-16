#pragma once
#include "nucleon.h"
class Neutron :
    public Nucleon
{
public:
    double getMass() const {
        return 1.675e-27;
    }

    double getCharge() const {
        return 0;
    }
};


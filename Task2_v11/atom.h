#pragma once
#include <vector>
#include "complex_particle.h"
#include "electron.h"
#include "proton.h"
#include "neutron.h"

class Atom :
    public ComplexParticle
{
    Electron e;
    Proton p;
    Neutron n;
    int eCount;
    int pCount;
    int nCount;

public:
    void setName(const std::string& n);
    Atom(const std::string& n, int ec, int pc, int nc);
    virtual double getMass() const override;
    virtual double getCharge() const override;
    virtual std::string showSubParts() const override;
    bool operator==(const Atom& a) const;
};


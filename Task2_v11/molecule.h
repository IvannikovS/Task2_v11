#pragma once
#include <vector>
#include "complex_particle.h"
#include "atom.h"
class Molecule :
    public ComplexParticle
{
    std::vector<Atom> atoms;
    double bondEnergy;
public:
    Molecule(const Atom& a);
     
    void addAtom(const Atom& a, double dbe, std::string newName); 
      
    double getBondEnergy() const;

    double getMass() const override;

    double getCharge() const override;

    std::string showSubParts() const override;

    double getSumMassOfAtoms() const;

    int countThisAtom(const Atom& a) const;
};


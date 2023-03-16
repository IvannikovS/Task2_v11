#include <iostream>
#include "molecule.h"


Molecule::Molecule(const Atom& a) : ComplexParticle(a.getName()) {
    atoms.push_back(a);
    bondEnergy = 0;
}

void Molecule::addAtom(const Atom& a, double dbe, std::string newName) {
    atoms.push_back(a);
    name = newName;
    bondEnergy += dbe;
}

double Molecule::getBondEnergy() const {
    return bondEnergy;
}

double Molecule::getMass() const {
    double mass = getSumMassOfAtoms();
    return mass - (bondEnergy / 6e23) / 9e16; // масса в кг
}

double Molecule::getCharge() const {
    double charge = 0;
    for (size_t i = 0; i < atoms.size(); i++)
    {
        charge += atoms[i].getCharge();
    }
    return charge;
}

std::string Molecule::showSubParts() const {
    std::string s = name;
    s += "\n";
    for (size_t i = 0; i < atoms.size(); i++)
    {
        s += "\t";
        s += atoms[i].showSubParts();
        s += "\n";
    }
    return s;
}

double Molecule::getSumMassOfAtoms() const {
    double mass = 0;
    for (size_t i = 0; i < atoms.size(); i++)
    {
        mass += atoms[i].getMass();
    }
    return mass;
}

int Molecule::countThisAtom(const Atom& a) const {
    int count = 0;
    for (size_t i = 0; i < atoms.size(); i++)
    {
        if (atoms[i] == a) {
            count += 1;
        }
    }
    return count;
}
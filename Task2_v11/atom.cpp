#include "atom.h"


void Atom::setName(const std::string& n) {
	name = n;
}

Atom::Atom(const std::string& n, int ec, int pc, int nc) : ComplexParticle(n), eCount(ec), pCount(pc), nCount(nc) {}

double Atom::getMass() const {
	return e.getMass() * eCount + p.getMass() * pCount + n.getMass() * nCount;
}


double Atom::getCharge() const {
	return e.getCharge() * eCount + p.getCharge() * pCount + n.getCharge() * nCount;
}

std::string Atom::showSubParts() const {
	std::string s = name;
	s += "_";
	s += std::to_string(pCount);
	s += "_";
	s += std::to_string(pCount + nCount);
	s += " | protons: ";
	s += std::to_string(pCount);
	s += " | electrons: ";
	s += std::to_string(eCount);	
	s += " | neutrons: ";
	s += std::to_string(nCount);
	return s;
}

bool Atom::operator==(const Atom& a) const {
	return (eCount == a.eCount) && (pCount == a.pCount) && (nCount == a.nCount);
}
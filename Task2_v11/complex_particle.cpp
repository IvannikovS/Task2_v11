#include "complex_particle.h"

ComplexParticle::ComplexParticle(std::string n) : Particle(), name(n) {}

std::string ComplexParticle::getName() const {
	return name;
}

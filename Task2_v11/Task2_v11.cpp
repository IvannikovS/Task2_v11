// Task2_v11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iomanip>
#include <iostream>
#include "atom.h"
#include "particle.h"
#include "complex_particle.h"
#include "molecule.h"
#include "electron.h"
#include "proton.h"
#include "nucleon.h"
#include "neutron.h"
using std::cout;
using std::endl;

int main()
{
    Atom h("H", 1, 1, 0);
    Atom helium("He", 2, 2, 2);
    Atom lithium("Li", 3, 3, 4);
    Atom beryllium("Be", 4, 4, 5);
    Atom carbon("C", 6, 6, 6);
    Atom oxygen("O", 8, 8, 8);

    cout << h.showSubParts() << endl;
    cout << helium.showSubParts() << endl;
    cout << lithium.showSubParts() << endl;
    cout << beryllium.showSubParts() << endl;
    cout << carbon.showSubParts() << endl;
    cout << oxygen.showSubParts() << endl;

    Molecule m1(h);
    cout << m1.showSubParts() << endl;
    m1.addAtom(h, 435000, "H2");
    cout << m1.showSubParts() << endl;
    m1.addAtom(oxygen, 494000, "H2O");
    cout << m1.showSubParts() << endl;

    //Масса молекулы меньше массы отдельных частей(в сумме)
    cout << std::setprecision(16) << std::scientific << m1.getSumMassOfAtoms() << endl;
    cout << std::setprecision(16) << std::scientific << m1.getMass() << endl;

    cout << m1.getBondEnergy() << " J/mol\n";

    cout << "Count of " << h.getName() << " in " << m1.getName() << " = " << m1.countThisAtom(h) << endl;

    return 0;
}

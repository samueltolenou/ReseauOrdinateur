#include "../header/Equipement.h"

#include <iostream>
using namespace std;

Equipement::Equipement(const string& nom, const N_Interface& interface)
        : m_nom(nom), m_interface(interface) {}

void Equipement::afficher() const {
    cout << "Nom de l'equipement: " << m_nom << endl;
    m_interface.afficher();
}

ostream& Equipement::afficher(ostream& sortie) const {
    sortie << "Nom de l'equipement: " << m_nom << endl;
    m_interface.afficher(sortie);
    return sortie;
}

ostream& operator<<(ostream& sortie, const Equipement& equipement) {
    equipement.afficher(sortie);
    return sortie;
}

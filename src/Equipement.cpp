#include "../header/Equipement.h"

#include <iostream>

Equipement::Equipement(const std::string& nom, const N_Interface& interface)
        : m_nom(nom), m_interface(interface) {}

void Equipement::afficher() const {
    std::cout << "Nom de l'equipement: " << m_nom << std::endl;
    m_interface.afficher();
}

std::ostream& Equipement::afficher(std::ostream& sortie) const {
    sortie << "Nom de l'equipement: " << m_nom << std::endl;
    m_interface.afficher(sortie);
    return sortie;
}

std::ostream& operator<<(std::ostream& sortie, const Equipement& equipement) {
    equipement.afficher(sortie);
    return sortie;
}

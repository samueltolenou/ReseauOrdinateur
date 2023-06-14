#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H

#include <string>
#include "N_interface.h"

class Equipement {
public:
    Equipement(const std::string& nom, const N_Interface& interface);
    void afficher() const;
    std::ostream& afficher(std::ostream& sortie) const;

private:
    std::string m_nom;
    N_Interface m_interface;
};

std::ostream& operator<<(std::ostream& sortie, const Equipement& equipement);

#endif // EQUIPEMENT_H

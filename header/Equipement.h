#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H

#include <string>
#include "N_interface.h"

using namespace std;

class Equipement {
public:
    Equipement(const string& nom, const N_Interface& interface);
    void afficher() const;
    ostream& afficher(ostream& sortie) const;

private:
    string m_nom;
    N_Interface m_interface;
};

ostream& operator<<(ostream& sortie, const Equipement& equipement);

#endif // EQUIPEMENT_H

#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <vector>
#include <string>
#include "N_interface.h"

using namespace std;

class Equipement {
public:
    Equipement(const string& nom, const N_Interface& interface);
    void afficher() const;
    ostream& afficher(ostream& sortie) const;
    void set_ipAdress(string new_ip);
    string get_ipAdress();
    string get_Nom();
    bool ping(Equipement* equipement);
    string get_reseau_ad();
    void set_reseau_ad(string new_ra);
    int id_equip = 0;
    string havepasswd();

private:
    string wifi_passw = "None";
    string m_nom;
    N_Interface m_interface;
    string reseau_ad = "None";
};

ostream& operator<<(ostream& sortie, const Equipement& equipement);

#endif // EQUIPEMENT_H

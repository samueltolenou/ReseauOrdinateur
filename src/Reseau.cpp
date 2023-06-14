#include <iostream>
#include <vector>
#include "Equipement.hpp"
#include "Ordinateur.hpp"
#include "APN.hpp"
using namespace std;

class Reseau {
private:
    vector<Equipement*> listeEquip;

public:
    Reseau(APN* apn) {
        listeEquip.push_back(apn);
    }

    void addEquipement(Equipement* equip) {
        listeEquip.push_back(equip);
        equip->connecterReseau();
    }

    void afficheListe() {
        cout << "Liste des équipements du réseau :" << endl;
        for (int i = 0; i < listeEquip.size(); i++) {
            cout << "  - " << listeEquip[i]->getNom() << endl;
        }
    }
};

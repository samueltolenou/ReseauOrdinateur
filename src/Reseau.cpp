#include <iostream>
#include <vector>
#include "Equipement.hpp"
#include "Ordinateur.hpp"
#include "APN.hpp"

class Reseau {
private:
    std::vector<Equipement*> listeEquip;

public:
    Reseau(APN* apn) {
        listeEquip.push_back(apn);
    }

    void addEquipement(Equipement* equip) {
        listeEquip.push_back(equip);
        equip->connecterReseau();
    }

    void afficheListe() {
        std::cout << "Liste des équipements du réseau :" << std::endl;
        for (int i = 0; i < listeEquip.size(); i++) {
            std::cout << "  - " << listeEquip[i]->getNom() << std::endl;
        }
    }
};

#ifndef RESEAU_H
#define RESEAU_H
#include "Equipement.h"
#include "APN.h"
#include <vector>
using namespace std;

class Reseau {
private:
    vector<Equipement*> listeEquip;
    APN* m_apn;
    string address_reseau = "192.168.2.5";
    int pos = 0;
public:
    Reseau(APN* apn);

    void addEquipement(Equipement* equip);

    void afficheListe();
    void retriveEquipement(Equipement* equip);
};
#endif
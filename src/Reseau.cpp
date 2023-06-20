#include <iostream>
#include <vector>
#include "../header/N_interface.h"
#include "../header/Equipement.h"
#include "../header/Ordinateur.h"
#include "../header/Reseau.h"
#include "../header/APN.h"
using namespace std;

Reseau::Reseau(APN* apn): m_apn(apn) {
        Reseau::addEquipement(apn);
    }

void Reseau::addEquipement(Equipement* equip) {
    if (m_apn->getNiveauSecurite() == "aucune" || equip->havepasswd() == m_apn->getPassword()){
        equip->set_ipAdress(m_apn->getIP());
        equip->set_reseau_ad(address_reseau);
        equip->id_equip = pos++;
        //cout<<equip->id_equip<<endl;
        listeEquip.push_back(equip);
    }
    else
        cout<<"Immpossible de connecter "<<equip->get_Nom()<<": mot de passe incorrect :-( !!!"<<endl;
    }

void Reseau::retriveEquipement(Equipement* equip){
    equip->set_ipAdress("None");
    equip->set_reseau_ad("None");
    (*(listeEquip.begin() + equip->id_equip + 1))->id_equip = equip->id_equip;
    listeEquip.erase(listeEquip.begin() + equip->id_equip);
    equip->id_equip = 0;
}

void Reseau::afficheListe() {
        cout << "Liste des équipements du réseau :" << endl;
        for (int i = 0; i < listeEquip.size(); i++) {
            cout << "  - " << listeEquip[i]->get_Nom() << endl;
        }
    }

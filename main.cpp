#include <iostream>
#include "./header/N_interface.h"
#include "./header/Equipement.h"
#include "./header/Ordinateur.h"
#include "./header/APN.h"
#include "./header/Reseau.h"
using namespace std;

int main() {
    //creation d'une interface standard pour les appareils
    N_Interface my_interface("192.255.012", "amd", 200);

    // Création des ordinateurs
    Ordinateur* or1 = new Ordinateur("Ordi1", my_interface, true);
    Ordinateur* or2 = new Ordinateur("Ordi2", my_interface, true);
    Ordinateur* or3 = new Ordinateur("Ordi3", my_interface, true);
    Ordinateur* or4 = new Ordinateur("Ordi4", my_interface, true);
    Ordinateur* or5 = new Ordinateur("Ordi5", my_interface, true);

    // Configuration de l'APN
    APN* apn = new APN("wAP1", my_interface, "Arex", "zazou");

    // Création du réseau et ajout des équipements
    Reseau* nw1 = new Reseau(apn);
    nw1->addEquipement(or1);
    nw1->addEquipement(or2);
    nw1->addEquipement(or3);
    nw1->addEquipement(or4);
    nw1->addEquipement(or5);

    // Affichage de la liste des équipements
    nw1->afficheListe();

    // Ping de Ordi1 vers Ordi2
    or1->ping(or2);

    // Configuration de la sécurité de l'APN
    apn->setNiveauSecurite("wpa");
    apn->setCle("mypassword");

    // Déconnexion et reconnexion des équipements au réseau
    nw1->retriveEquipement(or1);
    nw1->retriveEquipement(or2);
    nw1->retriveEquipement(or3);
    nw1->retriveEquipement(or4);
    nw1->retriveEquipement(or5);

    nw1->addEquipement(or1);
    nw1->addEquipement(or2);
    nw1->addEquipement(or3);
    nw1->addEquipement(or4);
    nw1->addEquipement(or5);


    // Affichage de la liste des équipements après la mise à jour
    nw1->afficheListe();

    // Ping de Ordi1 vers Ordi2 après la mise à jour
    or1->ping(or2);

    // Nettoyage de la mémoire
    delete or1;
    delete or2;
    delete or3;
    delete or4;
    delete or5;
    delete apn;
    delete nw1;

    return 0;
}

#include <iostream>
#include "./header/Equipement.h"
#include "./header/Ordinateur.h"
#include "./header/APN.h"
#include "./src/Reseau.cpp"

int main() {
    // Création des ordinateurs
    Ordinateur* or1 = new Ordinateur("Ordi1");
    Ordinateur* or2 = new Ordinateur("Ordi2");
    Ordinateur* or3 = new Ordinateur("Ordi3");
    Ordinateur* or4 = new Ordinateur("Ordi4");
    Ordinateur* or5 = new Ordinateur("Ordi5");

    // Configuration de l'APN
    APN* apn = new APN("wAP1");
    apn->setAdresseIP("192.168.0.1");
    apn->setMasque("255.255.255.0");
    apn->activerDHCP(true);

    // Création du réseau et ajout des équipements
    Reseau* reseau = new Reseau(apn);
    reseau->addEquipement(or1);
    reseau->addEquipement(or2);
    reseau->addEquipement(or3);
    reseau->addEquipement(or4);
    reseau->addEquipement(or5);

    // Affichage de la liste des équipements
    reseau->afficheListe();

    // Ping de Ordi1 vers Ordi2
    or1->ping(or2);

    // Configuration de la sécurité de l'APN
    apn->setNiveauSecurite("wpa");
    apn->setCleSecurite("mypassword");

    // Déconnexion et reconnexion des équipements au réseau
    for (int i = 0; i < reseau->size(); i++) {
        reseau->getEquipement(i)->deconnecterReseau();
        reseau->getEquipement(i)->connecterReseau();
    }

    // Affichage de la liste des équipements après la mise à jour
    reseau->afficheListe();

    // Ping de Ordi1 vers Ordi2 après la mise à jour
    or1->ping(or2);

    // Nettoyage de la mémoire
    delete or1;
    delete or2;
    delete or3;
    delete or4;
    delete or5;
    delete apn;
    delete reseau;

    return 0;
}

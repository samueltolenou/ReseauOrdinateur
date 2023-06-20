#include "../header/Ordinateur.h"
#include <iostream>

using namespace std;

Ordinateur::Ordinateur(string nom, N_Interface interface, bool etat) :
        Equipement(nom, interface), etat(etat)
{
}

/*void Ordinateur::allumer() {
    etat = true;
}

void Ordinateur::eteindre() {
    etat = false;
}

bool Ordinateur::getEtat() const {
    return etat;
}

void Ordinateur::setNEtat(bool etat) {
    getInterface().setEtat(etat);
}

bool Ordinateur::getNEtat() const {
    return getInterface().getEtat();
}

void Ordinateur::setIPandMask(string adresse, string masque) {
    getInterface().setAdresse(adresse);
    getInterface().setMasque(masque);
}

void Ordinateur::connect(string cle) {
    if (getEtat()) {
        if (!getInterface().getAdresse().empty() && !getInterface().getMasque().empty()) {
            // connect to network
            // add this computer to network's list of equipment
            cout << "Successfully connected " << getNom() << " to network." << endl;
        } else {
            cout << "Cannot connect " << getNom() << " to network because it has no IP address." << endl;
        }
    } else {
        cout << getNom() << " is turned off and cannot connect to the network." << endl;
    }
}

void Ordinateur::disconnect() {
    // remove this computer from network's list of equipment
    cout << getNom() << " has been disconnected from the network." << endl;
}

bool Ordinateur::ping(const Equipement& equipement) const {
    // send a ping to the specified equipment
    cout << "Pinging " << equipement.getNom() << " from " << getNom() << endl;
    return true; // dummy return value for now
}

void Ordinateur::connecterAPN(APN& apn, string login, string mdp) {
    // Vérifier si l'ordinateur est éteint ou si la carte réseau est désactivée
    if (!m_etat || !m_interface.getEtat()) {
        cout << "L'ordinateur est éteint ou la carte réseau est désactivée. Impossible de se connecter à l'APN." << endl;
        return;
    }

    // Vérifier si l'APN est allumé et si le service dhcp est activé
    if (!apn.getEtat() || !apn.getServiceDHCP()) {
        cout << "L'APN est éteint ou le service dhcp est désactivé. Impossible de se connecter à l'APN." << endl;
        return;
    }

    // Demander une adresse IP disponible à l'APN
    string adresseIP = apn.getIP();

    // Demander le masque de sous-réseau à l'APN
    string masqueSousReseau = apn.getMask();

    // Configurer l'interface réseau de l'ordinateur avec l'adresse IP et le masque de sous-réseau obtenus
    m_interface.setIPandMask(adresseIP, masqueSousReseau);

    // Vérifier si l'APN est sécurisé avec WEP ou WPA
    if (apn.getNiveauSecurite() == "wep" || apn.getNiveauSecurite() == "wpa") {
        // Demander la clé de sécurité à l'utilisateur
        cout << "Entrez la clé de sécurité pour l'APN : ";
        string cle;
        cin >> cle;

        // Vérifier si la clé est correcte
        if (cle != apn.getCleSecurite()) {
            cout << "La clé de sécurité est incorrecte. Impossible de se connecter à l'APN." << endl;
            return;
        }
    }

    // Afficher un message de succès
    cout << "L'ordinateur est maintenant connecté à l'APN " << apn.getNom() << " avec l'adresse IP " << adresseIP << endl;

    // Ajouter l'ordinateur à la liste des équipements de l'APN
    apn.ajouterEquipement(*this);


}*/


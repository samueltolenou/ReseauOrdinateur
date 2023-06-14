#include "../header/APN.h"
using namespace std;
// APN.cpp

APN::APN(const string& nom, const N_Interface& interface, const string& login, const string& password,
         const string& niveau_securite, const string& cle, bool dhcp)
        : Ordinateur(nom, interface), login_(login), password_(password), niveau_securite_(niveau_securite),
          cle_(cle), dhcp_(dhcp)
{}

const string& APN::getLogin() const {
    return login_;
}

const string& APN::getPassword() const {
    return password_;
}

const string& APN::getNiveauSecurite() const {
    return niveau_securite_;
}

const string& APN::getCle() const {
    return cle_;
}

bool APN::getDhcp() const {
    return dhcp_;
}

void APN::setLogin(const string& login) {
    login_ = login;
}

void APN::setPassword(const string& password) {
    password_ = password;
}

void APN::setNiveauSecurite(const string& niveau_securite) {
    niveau_securite_ = niveau_securite;
}

void APN::setCle(const string& cle) {
    cle_ = cle;
}

void APN::setDhcp(bool dhcp) {
    dhcp_ = dhcp;
}

string APN::getIP() const {
    // TODO: Implémenter l'attribution d'une adresse IP disponible sur le réseau
    return "";
}

string APN::getMask() const {
    // Pour simplifier, on considère qu'on utilise des adresses de classe C (masque 255.255.255.0)
    return "255.255.255.0";
}

#include "../header/APN.h"

// APN.cpp

APN::APN(const std::string& nom, const N_interface& interface, const std::string& login, const std::string& password,
         const std::string& niveau_securite, const std::string& cle, bool dhcp)
        : Ordinateur(nom, interface), login_(login), password_(password), niveau_securite_(niveau_securite),
          cle_(cle), dhcp_(dhcp)
{}

const std::string& APN::getLogin() const {
    return login_;
}

const std::string& APN::getPassword() const {
    return password_;
}

const std::string& APN::getNiveauSecurite() const {
    return niveau_securite_;
}

const std::string& APN::getCle() const {
    return cle_;
}

bool APN::getDhcp() const {
    return dhcp_;
}

void APN::setLogin(const std::string& login) {
    login_ = login;
}

void APN::setPassword(const std::string& password) {
    password_ = password;
}

void APN::setNiveauSecurite(const std::string& niveau_securite) {
    niveau_securite_ = niveau_securite;
}

void APN::setCle(const std::string& cle) {
    cle_ = cle;
}

void APN::setDhcp(bool dhcp) {
    dhcp_ = dhcp;
}

std::string APN::getIP() const {
    // TODO: Implémenter l'attribution d'une adresse IP disponible sur le réseau
    return "";
}

std::string APN::getMask() const {
    // Pour simplifier, on considère qu'on utilise des adresses de classe C (masque 255.255.255.0)
    return "255.255.255.0";
}

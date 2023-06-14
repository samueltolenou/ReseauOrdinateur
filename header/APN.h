// APN.h

#ifndef APN_H
#define APN_H

#include <string>
#include "Ordinateur.h"

class APN : public Ordinateur {
public:
    APN(const std::string& nom, const N_interface& interface, const std::string& login, const std::string& password,
        const std::string& niveau_securite = "aucune", const std::string& cle = "", bool dhcp = true);

    const std::string& getLogin() const;
    const std::string& getPassword() const;
    const std::string& getNiveauSecurite() const;
    const std::string& getCle() const;
    bool getDhcp() const;

    void setLogin(const std::string& login);
    void setPassword(const std::string& password);
    void setNiveauSecurite(const std::string& niveau_securite);
    void setCle(const std::string& cle);
    void setDhcp(bool dhcp);

    std::string getIP() const;
    std::string getMask() const;

private:
    std::string login_;
    std::string password_;
    std::string niveau_securite_;
    std::string cle_;
    bool dhcp_;
};

#endif // APN_H

// APN.h

#ifndef APN_H
#define APN_H

#include <string>
#include "Ordinateur.h"
#include <vector>
using namespace std;

class APN : public Ordinateur {
    unsigned int nbr_ip = 0;
    public:
        APN(const string& nom, const N_Interface& interface, const string& login, const string& password,
            const string& niveau_securite = "aucune", const string& cle = "", bool dhcp = true);

        const string& getLogin() const;
        const string& getPassword() const;
        const string& getNiveauSecurite() const;
        const string& getCle() const;
        bool getDhcp() const;

        void setLogin(const string& login);
        void setPassword(const string& password);
        void setNiveauSecurite(const string& niveau_securite);
        void setCle(const string& cle);
        void setDhcp(bool dhcp);

        string getIP();
        string getMask() const;
    private:
        string login_;
        string password_;
        string niveau_securite_;
        string cle_;
        string ip_available[6] = {
            "192.168.123.132", 
            "192.168.123.133",
            "192.168.123.134",
            "192.168.123.135",
            "192.168.123.136",
            "192.168.123.137"
        };
        bool dhcp_;
};

#endif // APN_H

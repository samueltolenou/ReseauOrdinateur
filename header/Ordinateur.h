#ifndef ORDINATEUR_H
#define ORDINATEUR_H

#include <string>
#include "Equipement.h"
#include "N_interface.h"

class Ordinateur : public Equipement {
private:
    bool etat; // allumé ou éteint
public:
    Ordinateur(std::string nom, N_Interface interface, bool etat = false);

    void allumer();
    void eteindre();
    bool getEtat() const;
    void setNEtat(bool etat);
    bool getNEtat() const;
    void setIPandMask(std::string adresse, std::string masque);
    void connect(std::string cle = "");
    void disconnect();
    bool ping(const Equipement& equipement) const;
};

#endif
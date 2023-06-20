#ifndef ORDINATEUR_H
#define ORDINATEUR_H

#include <string>
#include "Equipement.h"
#include "N_interface.h"

using namespace std;

class Ordinateur : public Equipement {
private:
    bool etat; // allumé ou éteint
public:
    Ordinateur(string nom, N_Interface interface, bool etat = false);

    void allumer();
    void eteindre();
    bool getEtat() const;
    void setNEtat(bool etat);
    bool getNEtat() const;
    void connect(string cle = "");
    void disconnect();
    
};

#endif
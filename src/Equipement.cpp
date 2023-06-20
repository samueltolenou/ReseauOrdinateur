#include "../header/Equipement.h"

#include <iostream>
using namespace std;

Equipement::Equipement(const string& nom, const N_Interface& interface)
        : m_nom(nom), m_interface(interface) {}

/*void Equipement::afficher() const {
    cout << "Nom de l'equipement: " << m_nom << endl;
    m_interface.afficher();
}*/

void Equipement::set_ipAdress(string new_ip){
    m_interface.setIpAddress(new_ip, "255.255.255.0");
}
string Equipement::get_ipAdress(){
    return m_interface.getIpAddress();
}

string Equipement::get_Nom(){
    return m_nom;
}

void Equipement::set_reseau_ad(string new_ra){
    reseau_ad = new_ra;
}

string Equipement::get_reseau_ad(){
    return reseau_ad;
}

bool Equipement::ping(Equipement* equipement){
    if (reseau_ad != "None" && equipement->get_reseau_ad() != "None" && equipement->get_reseau_ad() == reseau_ad)
    {
        cout<<equipement->get_Nom()<<" trouvé dans le reseau :-)"<<endl;
        cout<<"communication possible..."<<endl;
        return true;
    }
    else{
        cout<<equipement->get_Nom()<<" n'a pas été trouvé dans le réseau :-("<<endl;
        cout<<"communication Impossible..."<<endl;
        return false;
    }
}

string Equipement::havepasswd(){
    return wifi_passw;
}


/*ostream& Equipement::afficher(ostream& sortie) const {
    sortie << "Nom de l'equipement: " << m_nom << endl;
    m_interface.afficher(sortie);
    return sortie;
}

ostream& operator<<(ostream& sortie, const Equipement& equipement) {
    equipement.afficher(sortie);
    return sortie;
}*/


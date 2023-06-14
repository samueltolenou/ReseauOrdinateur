#ifndef N_INTERFACE_H
#define N_INTERFACE_H

#include <string>
using namespace std;

class N_Interface {
public:
    N_Interface(const string& macAddress, const string& manufacturer, int maxSpeed);

    // getters
    string getMacAddress() const;
    string getManufacturer() const;
    int getMaxSpeed() const;
    bool isEnabled() const;
    string getIpAddress() const;
    string getSubnetMask() const;

    // setters
    void setEnabled(bool enabled);
    void setIpAddress(const string& ipAddress, const string& subnetMask);

    static int countInterfaces();

private:
    string macAddress_;
    string manufacturer_;
    int maxSpeed_;
    bool enabled_;
    string ipAddress_;
    string subnetMask_;

    static int totalInterfaces_;
};

#endif // N_INTERFACE_H

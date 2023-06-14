#ifndef N_INTERFACE_H
#define N_INTERFACE_H

#include <string>

class N_Interface {
public:
    N_Interface(const std::string& macAddress, const std::string& manufacturer, int maxSpeed);

    // getters
    std::string getMacAddress() const;
    std::string getManufacturer() const;
    int getMaxSpeed() const;
    bool isEnabled() const;
    std::string getIpAddress() const;
    std::string getSubnetMask() const;

    // setters
    void setEnabled(bool enabled);
    void setIpAddress(const std::string& ipAddress, const std::string& subnetMask);

    static int countInterfaces();

private:
    std::string macAddress_;
    std::string manufacturer_;
    int maxSpeed_;
    bool enabled_;
    std::string ipAddress_;
    std::string subnetMask_;

    static int totalInterfaces_;
};

#endif // N_INTERFACE_H

#include "../header/N_interface.h"


N_Interface::N_Interface(const std::string& macAddress, const std::string& manufacturer, int maxSpeed)
        : macAddress_(macAddress), manufacturer_(manufacturer), maxSpeed_(maxSpeed), enabled_(true)
{
    totalInterfaces_++;
}

std::string N_Interface::getMacAddress() const
{
    return macAddress_;
}

std::string N_Interface::getManufacturer() const
{
    return manufacturer_;
}

int N_Interface::getMaxSpeed() const
{
    return maxSpeed_;
}

bool N_Interface::isEnabled() const
{
    return enabled_;
}

std::string N_Interface::getIpAddress() const
{
    return ipAddress_;
}

std::string N_Interface::getSubnetMask() const
{
    return subnetMask_;
}

void N_Interface::setEnabled(bool enabled)
{
    enabled_ = enabled;
}

void N_Interface::setIpAddress(const std::string& ipAddress, const std::string& subnetMask)
{
    ipAddress_ = ipAddress;
    subnetMask_ = subnetMask;
}

int N_Interface::countInterfaces()
{
    return totalInterfaces_;
}

int N_Interface::totalInterfaces_ = 0;

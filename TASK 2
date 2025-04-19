#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void turnOn()= 0;
    virtual void turnOff() = 0;
    virtual void getStatus()const = 0;
    virtual ~SmartDevice(){}
};

class LightBulb : public SmartDevice {
private:
    bool isOn;
    int brightness;

public:
    LightBulb() : isOn(false), brightness(50) {}

    void turnOn() override {
        isOn = true;
        cout << "LightBulb turned ON.\n";
    }

    void turnOff() override {
        isOn = false;
        cout << "LightBulb turned OFF.\n";
    }

    void getStatus() const override {
        cout << "LightBulb is ";
        if (isOn) {
            cout <<"ON";
        } else {
            cout <<"OFF";
        }
        cout << ", Brightness:"<< brightness << "%\n";
    }
};

class Thermostat : public SmartDevice {
private:
    bool isOn;
    double temperature;

public:
    Thermostat() : isOn(false), temperature(22.0) {}

    void turnOn() override {
        isOn = true;
        cout << "Thermostat turned ON.\n";
    }

    void turnOff() override {
        isOn=false;
        cout <<"Thermostat turned OFF.\n";
    }

    void getStatus() const override {
        cout << "Thermostat is ";
        if (isOn) {
            cout<<"ON";
        } else {
            cout <<"OFF";
        }
        cout << ", Temperature: " << temperature << "°C\n";
    }
};

int main() {
    LightBulb bulb;
    Thermostat thermo;

    SmartDevice* device1 = &bulb;
    SmartDevice* device2 = &thermo;

    device1->turnOn();
    device2->turnOn();

    cout << "\nDevice Statuses:\n";
    device1->getStatus();
    device2->getStatus();

    cout << "\nTurning off devices.\n";
    device1->turnOff();
    device2->turnOff();

    cout << "\nUpdated Statuses:\n";
    device1->getStatus();
    device2->getStatus();

    return 0;
}

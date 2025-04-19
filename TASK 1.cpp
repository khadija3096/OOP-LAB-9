#include <iostream>
using namespace std;

class Vehicle {
protected:
    string model;
    double rate;

public:
    Vehicle(const string& modelName, double dailyRate) : model(modelName), rate(dailyRate) {}

    virtual double getDailyRate() const= 0;
    virtual void displayDetails() const= 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(const string& modelName, double dailyRate) : Vehicle(modelName, dailyRate) {}

    double getDailyRate() const override {
        return rate;
    }

    void displayDetails() const override {
        cout << "Car Model: " << model << endl;
        cout << "Daily Rate: $" << getDailyRate() << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(const string& modelName, double dailyRate) : Vehicle(modelName, dailyRate) {}

    double getDailyRate()const override {
        return rate;
    }

    void displayDetails()const override {
        cout << "Bike Model: " << model << endl;
        cout << "Daily Rate: $" << getDailyRate() << endl;
    }
};

int main() {
    Car car1("Toyota Camry", 77.50);
    Bike bike1("Yamaha FZ", 29.00);

    Vehicle* v1 = &car1;
    Vehicle* v2 = &bike1;

    cout << "Available Vehicles:\n" << endl;
    v1->displayDetails();
   
    v2->displayDetails();

    return 0;
}

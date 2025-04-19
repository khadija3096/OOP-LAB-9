#include <iostream>
#using namespace std;
class Activity {
public:
    virtual double calculateCaloriesBurned()= 0;  
    virtual ~Activity(){}
};
class Running : public Activity {
    double distance;  
    double time;      
public:
    Running(double dist, double t) : distance(dist), time(t) {}

    double calculateCaloriesBurned() override {
        double weight =70.0; 
        return 0.063 *weight *distance;
    }
};
class Cycling : public Activity {
    double speed; 
    double time; 
public:
    Cycling(double spd, double t) : speed(spd), time(t) {}

    double calculateCaloriesBurned() override {
        double weight = 70.0;  
        return 0.049 *weight*speed *time;
    }
};

int main() {
    Running run(5.0, 30);  
    Cycling cycle(20.0, 1); 
   cout << "Calories burned during running: " << run.calculateCaloriesBurned() << " kcal" << std::endl;
  cout << "Calories burned during cycling: " << cycle.calculateCaloriesBurned() << " kcal" << std::endl;

    return 0;
}

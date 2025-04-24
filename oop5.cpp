#include <iostream> 
#include <string> 
using namespace std;  
class Car { 
private: 
    bool fuelPump; 
    bool electricalSystem; 

public: 
    Car() { 
        fuelPump = false; 
        electricalSystem = false; 
    } 
    virtual string start() { 
    fuelPump = true; 
    electricalSystem = true; 
    string result; 
    result += "Fuel pump activated.\n"; 
    result += "Electrical system activated.\n"; 
    return result; 
} 
}; 
class Pride : public Car { 
public: 
string start() override { 
    string result = Car::start(); 
    result += "Radio turned on.\n"; 
    result += "Odometer activated.\n"; 
    return result; 
} 

}; 
class BMW : public Car { 
public: 
    string start() override { 
    string result = Car::start(); 
    result += "GPS turned on.\n"; 
    result += "Headlights turned on.\n"; 
    result += "Mirrors unfolded.\n"; 
    return result; 
} 

}; 
int main() { 
    Car* car1 = new Pride(); 
    Car* car2 = new BMW(); 

    cout << "pride:\n" << car1->start() << endl; 
    cout << " bmw:\n" << car2->start() << endl; 

    delete car1; 
    delete car2; 

    return 0; 
} 


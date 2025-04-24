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
private: 
    string turnOnRadio() { 
        return "Radio turned on.\n"; 
    } 

    string activateOdometer() { 
        return "Odometer activated.\n"; 
    } 

public: 
    string start() override { 
        string result = Car::start(); 
        result += turnOnRadio(); 
        result += activateOdometer(); 
        return result; 
    } 
}; 
class BMW : public Car { 
private: 
    string turnOnGPS() { 
        return "GPS turned on.\n"; 
    } 

    string turnOnHeadlights() { 
        return "Headlights turned on.\n"; 
    } 

    string unfoldMirrors() { 
        return "Mirrors unfolded.\n"; 
    } 

public: 
    string start() override { 
        string result = Car::start(); 
        result += turnOnGPS(); 
        result += turnOnHeadlights(); 
        result += unfoldMirrors(); 
        return result; 
    } 
};  
int main() { 
    Car* car1 = new Pride(); 
    Car* car2 = new BMW(); 

    cout << " Pride:\n" << car1->start() << endl; 
    cout << " BMW:\n" << car2->start() << endl; 

    delete car1; 
    delete car2; 

    return 0; 
}



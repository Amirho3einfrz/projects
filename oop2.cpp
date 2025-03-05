#include <iostream>

class Benz {
public:
    // turning the engine on
    bool startEngine() {
        if (startElectronicServices()) {
            std::cout << "Engine started" << std::endl;
            return true;
        } else {
            std::cout << "Failed to start" << std::endl;
            return false;
        }
    }

private:
    // starting the electronic services
    bool startElectronicServices() {
        std::cout << "Electronic services started" << std::endl;
        return true;
    }

    // starting the light system(we wont use it in here)
    bool startLightSystem() {
        std::cout << "Light system started" << std::endl;
        return true;
    }
};

int main() {
    // 
    Benz b;
    
    // starting the engine
    bool r = b.startEngine();

    return 0;
}

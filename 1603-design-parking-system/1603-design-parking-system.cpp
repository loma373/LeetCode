class ParkingSystem {
    int parking[3];
public:
    ParkingSystem(int big, int medium, int small) {
        parking[0]=big;
        parking[1]=medium;
        parking[2]=small;
    }
    
    bool addCar(int ct) {
        if(parking[ct-1]){
            parking[ct-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
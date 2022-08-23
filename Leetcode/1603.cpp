/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

class ParkingSystem {
private:
    int big{0};
    int medium{0};
    int small{0};

public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }

    bool addCar(int car_type) {
        switch(car_type){
            case 1:
                if(this->big==0) return false;
                this->big--;
                return true;
                break;
            case 2:
                if(this->medium==0) return false;
                this->medium--;
                return true;
                break;
            case 3:
                if(this->small==0) return false;
                this->small--;
                return true;
                break;
            default:
                break;
        }
        return true; // the program won't even execute here, but leetcode compiler won't compile without this return value!
    }
};
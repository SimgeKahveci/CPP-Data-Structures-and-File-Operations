#include <iostream>
using namespace std;
class Car{ 
    public:
    double fuelTankCapacity;
    double currentFuelLevel;
    double fuelEfficiency;
     
Car(double capacity,double currentLevel,double efficieny){
    fuelTankCapacity=capacity;
    currentFuelLevel=currentLevel;
    fuelEfficiency=efficieny;
}
double getDistance(){
    return(currentFuelLevel/fuelEfficiency)*100.0;
}
void fillFuel(double amount){
    if(currentFuelLevel + amount > fuelTankCapacity) {
        cout<<"you can not fill fuel more than tank capacity!"<<endl;
        currentFuelLevel=fuelTankCapacity;
    }else{
        currentFuelLevel += amount;
        cout<<amount<<" liters of fuel added"<<endl;
    }
    
}
};
int main(){
    Car myCar(50.0,10.0,5.0);
    myCar.fillFuel(20.0);
    cout<<"total distance the car can travel:"<<myCar.getDistance()<<"km."<<endl;
    return 0;
}
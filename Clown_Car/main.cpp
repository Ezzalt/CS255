#include <iostream>
#include "clowncar.h"
using namespace std;

int main()
{
    clownCar blueCar(15);
    cout << "blueCar has " << blueCar.getNumOfClowns() << " clowns." << endl;

    clownCar redCar;
    redCar = blueCar;
    cout << "redCar has " << redCar.getNumOfClowns() << " clowns." << endl;

    redCar.setNumOfClowns(25);
    cout << "redCar has " << redCar.getNumOfClowns() << " clowns." << endl;
    cout << "blueCar has " << blueCar.getNumOfClowns() << " clowns." << endl;
    
    clownCar purpleCar = redCar + blueCar;
    cout << "purpleCar has " << purpleCar.getNumOfClowns() << " clowns." << endl;

    if (redCar == blueCar)
       cout << "Equal!";
    else
        cout << "Not Equal!";
    return 0;
}

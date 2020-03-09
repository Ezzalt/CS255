#include "clowncar.h"

clownCar::clownCar()
{
    clowns = 0;
}

clownCar::clownCar(unsigned int numInCar)
{
    setNumOfClowns(numInCar);
}

unsigned int clownCar::getNumOfClowns() const
{
    return clowns;
}

void clownCar::setNumOfClowns(unsigned int numInCar)
{
    clowns = numInCar;
}

const clownCar operator+(const clownCar& car1, const clownCar& car2)
{
    unsigned int totalClowns;
    totalClowns = car1.getNumOfClowns() + car2.getNumOfClowns();
    return clownCar(totalClowns);
}

bool operator==(const clownCar& car1, const clownCar& car2)
{
    return (car1.getNumOfClowns() == car2.getNumOfClowns());
}

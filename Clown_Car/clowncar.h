#ifndef CLOWNCAR_H
#define CLOWNCAR_H

class clownCar
{
    public:
        clownCar();
        clownCar(unsigned int);

        unsigned int getNumOfClowns() const;
        void setNumOfClowns(unsigned int);

    private:
        unsigned int clowns;
};

const clownCar operator+(const clownCar& car1, const clownCar& car2);

bool operator==(const clownCar& car1, const clownCar& car2);

#endif

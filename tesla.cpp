#include<iostream>
#include<string>
#include "tesla.h"
using namespace std;

tesla::tesla()
{
    vehicleModel = "";
    vehicleRange = 0;
}

void tesla::setModel(std::string model, int range)
{
    vehicleModel = model;
    vehicleRange = range;
}

void tesla::displayModel() const
{
    cout<<"display: "<< vehicleModel<<endl<<"Range: "<<vehicleRange<<endl;
}

#include <iostream>
#include "odometer.h"

using namespace std;

odometer::odometer()
{
  gallonsConsumed = 0;
  milesDriven = 0;
}

void odometer::inputMilesNGallons()
{
  cout<<"Input the number of miles driven: ";
  cin>>milesDriven;
  cout<<"Input the number of gallons consumed: ";
  cin>>gallonsConsumed;
}

void odometer::odometerReset()
{
  milesDriven = 0;
}

void odometer::gallonsReset()
{
  gallonsConsumed = 0;
}

int odometer::displayOdometer()
{
  return milesDriven;
}

double odometer::efficiency()
{
  if(milesDriven>0)
    return (double)milesDriven/gallonsConsumed;
  else
    return 0.0d;
}

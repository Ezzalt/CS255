#include <iostream>
#include "odometer.h"

using namespace std;

int main()
{
  odometer test;

  test.inputMilesNGallons();

  cout<<endl<<"The odometer reading is now "<<test.displayOdometer()<<" Miles";
  cout<<endl<<"The efficiency of the car is "<<test.efficiency()<<" Mpg"<<endl;

  test.odometerReset();
  test.gallonsReset();

  cout<<endl<<"The odometer reading after reset is "<<test.displayOdometer()
    <<" Miles";
  cout<<endl<<"The efficiency of the car is "<<test.efficiency()<<" Mpg"<<endl;
  return 0;
}

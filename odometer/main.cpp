//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 2
// Due date: 01/31/2020
// Collaborators: NA
// Resources: NA
// Description: A program that emulates an odometer in a car
//------------------------------------------------------------------------------
#include <iostream>
#include "odometer.h"

using namespace std;

//driver function begins
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

//driver end

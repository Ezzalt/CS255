//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 2
// Due date: 01/31/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for odometer.h
//------------------------------------------------------------------------------
#include <iostream>
#include "odometer.h"

using namespace std;

//class implementation begins
//------------------------------------------------------------------------------
/* odometer() - constructor to initlialise values of odometer to zero
*/
odometer::odometer()
{
  gallonsConsumed = 0;
  milesDriven = 0;
}

//------------------------------------------------------------------------------
/* inputMilesNGallons() - input function to assign values to milesDriven and
* gallonsConsumed
*/
void odometer::inputMilesNGallons()
{
  cout<<"Input the number of miles driven: ";
  cin>>milesDriven;
  cout<<"Input the number of gallons consumed: ";
  cin>>gallonsConsumed;
}

//------------------------------------------------------------------------------
/* odometerReset() - Reset value of milesDriven
*/
void odometer::odometerReset()
{
  milesDriven = 0;
}

void odometer::gallonsReset()
//------------------------------------------------------------------------------
/* gallonsReset() - reset value of gallonsConsumed
*/
{
  gallonsConsumed = 0;
}

//------------------------------------------------------------------------------
/* displayOdometer() - return value of odometer milesDriven as an int
*/
int odometer::displayOdometer()
{
  return milesDriven;
}

//------------------------------------------------------------------------------
/* efficiency() - show value of efficiency and return it as a double value
*/
double odometer::efficiency()
{
  if(milesDriven>0)
    return (double)milesDriven/gallonsConsumed;
  else
    return 0.0d;    //this is to make sure not to recieve an NA value due to
                    //compiler differences
}

//class implementation ends

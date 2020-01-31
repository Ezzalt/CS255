//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 2
// Due date: 01/31/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for odometer
//------------------------------------------------------------------------------
//inclusion guard begins
#ifndef ODOMETER_H
#define  ODOMETER_H

//class declaration begins
class odometer
{
  private:    //private variables for storage of values
    int gallonsConsumed;
    int milesDriven;
  public:     //public member functions for class
    odometer();
    void inputMilesNGallons();      //<--
    void odometerReset();           //mutator functions
    void gallonsReset();            //<--
    double efficiency();            //<--accessor functions
    int displayOdometer();          //<--
};

//class declarations ends

#endif
//inclusion guard ends

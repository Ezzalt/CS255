#ifndef ODOMETER_H
#define  ODOMETER_H

class odometer
{
  private:
    int gallonsConsumed;
    int milesDriven;
  public:
    odometer();
    void inputMilesNGallons();
    void odometerReset();
    void gallonsReset();
    double efficiency();
    int displayOdometer();
};

#endif

#include<string>
#ifndef TESLA_H
#define TESLA_H

class tesla
{
    public:
      void setModel(std::string model, int range);
      void displayModel() const;


    private:
      std::string vehicleModel;
      int vehicleRange;
};

#endif

#include <string>
#ifndef BEVERAGE_H
#define BEVERAGE_H

class beverage
{
  private:
    float size;
    string name;
    float price;

  public:
    beverage();
    beverage(float sz, string prd);

    string getName(){return name;}
    string getPrice(){return price;};
};

#endif

#include<strings>
#include "beverage.h"

beverage::beverage()
{
  size = 0;
  price = 0;
}

beverage::beverage(float sz, string prd)
{
  size = sz;
  name = prd;
  price = 0;
}

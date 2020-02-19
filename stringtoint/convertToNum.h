#include<string>
#ifndef CTONUM_H
#define CTONUM_H

class convertToNum
{
  public:
    convertToNum();
    convertToNum(std::string in);
    bool convert(std::string in);
    long getIntValue();
    double getDecValue();

  private:
    std::string input;
    long returnInt;
    double returnDouble;
};
#endif

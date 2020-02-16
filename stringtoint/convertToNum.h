#ifndef "CONVERTTONUM_H"
#define "CONVERTTONUM_H"
class convertToNum
{
  public:
    convertToNum();
    convertToNum(string in);
    bool convert(string in);
    long getIntValue();
    double getDecValue();

  private:
    string input;
};
#endif

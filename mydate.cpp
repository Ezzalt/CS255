#include<iostream>
#include<iomanip>
using namespace std;

class clDate
{
	public:
		void setDate(unsigned short m, unsigned short d, unsigned int y);
		void showDate();
	private:
		unsigned short mth;
		unsigned short day;
		unsigned int yr;
};

void clDate::setDate(unsigned short m, unsigned short d, unsigned int y)
{
	mth = m;
	day = d;
	yr = y;
}

void clDate::showDate()
{
	cout<<setw(2)<<setfill('0')<<mth<<"/";
	cout<<setw(2)<<setfill('0')<<day<<"/";
	cout<<setw(4)<<yr<<endl;
}

int main()
{
	clDate today;

	today.setDate(1,24,2020);
	
	cout<<"Today is ";
	today.showDate();

	return 0;
}

#include<iostream>
using namespace std;

int main(){
	float volts = 800;
	float current = 7.5;
	float power;

	power = volts * current * 0.83;

	cout<<"PV: "<<volts<<endl;
	cout<<"PC: "<<current<<endl;
	cout<<"Powewr: "<<power<<" watts"<<endl;

	return 0;
}

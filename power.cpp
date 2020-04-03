#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int result = 0, x = 20, i = 0;
	while(x != 0)
	{
			result += (pow(4,i++)) * (x % 10);
			x /= 10;
	}
	int y = 10, r2 = 0;
	i = 0;
	while(y != 0)
	{
			r2 += (pow(4,i++)) * (y % 10);
			y /= 10;
	}

	cout << result+r2;
	return 0;
}

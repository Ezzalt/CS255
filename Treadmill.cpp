#include <iostream>
using namespace std;
const int SCREENWIDTH = 80;
void drawLine(char lineSymbol);
char displayMenu();
double getSpeedKPH();
void getPace(int& minutes, int& seconds);
double convertToMPH(const int minutes, const int seconds);
double convertToMPH(const double speedKPH);
int main(){
  char selection;
  int minutes = 0, seconds = 0;
  double speed = 0;
  do {
    selection = displayMenu();
    switch(selection){
      case 'P':
        getPace(minutes,seconds);
        speed = convertToMPH(minutes,seconds);
        cout<<"Your speed is"<<speed<<"MPH"<<endl;
        break;
      case 'S':
        speed = getSpeedKPH();
        speed = convertToMPH(speed);
        cout<<"Your speed is"<<speed<<"MPH"<<endl;
        break;
      case 'X':
        break;
      default:
        cout<<"Invalid Choice"<<endl;
    }
  } while(selection!='X');
  return 0;
}
void drawLine(char symbol){
  cout<<string(100,symbol)<<endl;
}
char displayMenu(){
  char selection = ' ';
  drawLine('-');
  cout<<"Input Mode of working"<<endl<<"P for pace input, S for speed input in KPH: ";
  cin>>selection;
  return selection;
}
void getPace(int& minutes, int&seconds){
  cout<<"Input your minutes:";
  cin>>minutes;
  cout<<"Input seconds";
  cin>>seconds;
}
double getSpeedKPH(){
  double speed = 0;
  cout<<"Input speed in KPH:";
  cin>>speed;
  return speed;
}
double convertToMPH(const int minutes, const int seconds){
  return(1/minutes*60/seconds*60);
}
double convertToMPH(const double speedKPH){
  return(speedKPH*0.621371);
}

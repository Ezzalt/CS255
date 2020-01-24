//ID Block
#include<iostream>
#include<iomanip>
using namespace std;

struct st_date{
  unsigned short m;
  unsigned short d;
  unsigned int y;
};

enum DATE_FMAT{US, UK, WORLD};

st_date getDate();
void displayDate(const st_date, DATE_FMAT fmt);

int main(){
  st_date today;
  today = getDate();

  cout << "You entered ";
  displayDate(today,UK);

  return 0;
}

st_date getDate(){
  st_date dt = {0};
  cout<<endl;

  do{
    cout<<"Month: ";
    cin>>dt.m;
  }while(dt.m < 1 || dt.m > 12);

  do{
    cout<<"Day: ";
    cin>>dt.d;
  }while(dt.d < 1 || dt.d > 31);

  do{
    cout<<"Year: ";
    cin>>dt.y;
  }while(dt.y < 1900 || dt.y > 9999);

  return dt;
}

void displayDate(const st_date date, DATE_FMAT fmt){
  switch(fmt){
    case US:
      cout<<setw(2)<<setfill('0')<<date.m<<"/"<<date.d<<"/";
      cout<<date.y<<endl;
      break;
    case UK:
      cout<<date.y<<".";
      cout<<setw(2)<<setfill('0')<<date.m<<"."<<date.d<<endl;
      break;
    case WORLD:
      cout<<setw(2)<<setfill('0')<<date.d<<"/"<<date.m<<"/";
      cout<<date.y<<endl;
      break;
  }
}

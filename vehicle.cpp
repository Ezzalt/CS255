#include<iostream>
#include<string>
using namespace std;
/*
The following is just the description of the structure, not a variable
*/
struct vehicle{
  string make;
  string model;
  unsigned int year;
  string color;
};

void displayTruck(const vehicle);
vehicle paintCar(vehicle car, string newColor);
bool compareTrucks(const vehicle t1, const vehicle t2);

int main(){
  vehicle truck;
  truck.make = "Tesla";
  truck.model = "Cybertruck";
  truck.year = 2022;
  truck.color = "Silver";

  displayTruck(truck);

  vehicle truck2;
  truck2 = truck;

  truck2 = paintCar(truck2,"Red");
  displayTruck(truck2);

  if(compareTrucks(truck,truck2))
    cout<<"Same"<<endl;
  else
    cout<<"Not the same"<<endl;
  return 0;
}

void displayTruck(const vehicle car){
  cout<<"Make: \t"<<car.make<<endl<<"Model: \t"<<car.model<<endl<<"Year: \t"<<car.year<<endl<<"Color: \t"<<car.color<<endl<<endl;
}

vehicle paintCar(vehicle car, string newColor){
  car.color = newColor;
  return car;
}

bool compareTrucks(const vehicle t1, const vehicle t2){
  return (t1.make == t2.make && t1.model == t2.model && t1.year == t2.year && t1.color == t2.color);
}

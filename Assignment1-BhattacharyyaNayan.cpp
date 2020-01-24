//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 1
// Due date: 01/22/2020
// Collaborators: NA
// Resources: NA
// Description: A program that reads the inventory file for storage of
// computers in a shop.
//------------------------------------------------------------------------------

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

//------------------------------------------------------------------------------
/* The main record structure that is to be followed during the program.
* Provided in the program description and implemented as per the given
* guidelines.
*/
struct inventory
{

  string manufacturer, processor, location, tag;

  unsigned int ram, diskSize;

  double cost;

  struct stDate{
    unsigned short m, d;
    unsigned int y;
  } acquired;
};

void input(inventory&, ifstream&);
void display(const inventory out);

int main()
{
  ifstream in("inventory.txt");

  inventory computer;

  if(in.is_open())
  {

      input(computer,in);

  }
  else
    cout<<"Error! File not found!!!";

  in.close();

  return 0;
}

//------------------------------------------------------------------------------
/* input() function reads the input file stream that has been passed by
* reference to it and stores the values in the struct storage(also passed by
* reference). It will then call the display() function. It continues till EOF.
* Does not return any value.
*/
void input(inventory &storage, ifstream &in)
{
  while(getline(in,storage.manufacturer))
  {

    getline(in,storage.processor);
    in>>storage.ram>>storage.diskSize>>storage.cost>>ws;
    getline(in,storage.location);
    in>>storage.acquired.m>>storage.acquired.d>>storage.acquired.y>>ws;
    getline(in,storage.tag);

    display(storage);
  }
}

//------------------------------------------------------------------------------
/* display() function displays the const values of the struct out. Does not
* return any values.
*/
void display(const inventory out)
{
  cout<<string(50,'-')<<endl;
  cout<<left<<setw(25)<<"Asset tag:";
  cout<<out.tag<<endl;
  cout<<left<<setw(25)<<"Acquired:";
  cout<<out.acquired.m<<"/"<<out.acquired.d<<"/"<<out.acquired.y<<endl;
  cout<<left<<setw(25)<<"Cost:";
  cout<<out.cost<<endl;
  cout<<left<<setw(25)<<"Location:";
  cout<<out.location<<endl;
  cout<<left<<setw(25)<<"Manufacturer:";
  cout<<out.manufacturer<<endl;
  cout<<left<<setw(25)<<"CPU:";
  cout<<out.processor<<endl;
  cout<<left<<setw(25)<<"RAM:";
  cout<<out.ram<<endl;
  cout<<left<<setw(25)<<"Disk:";
  cout<<out.diskSize<<endl;
  cout<<string(50,'-')<<endl;
}

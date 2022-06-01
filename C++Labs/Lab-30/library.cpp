#include <iostream>
#include<iomanip>
#include <fstream>
#include <string>
#include "library.h"
using namespace std;

string electricCar(Car c) 
{
  if (c.isElectric == true)
 {
    c.isOrIsNot = "This car is electric";
  }
  if(c.isElectric == false) 
  {
    c.isOrIsNot = "This car is not electric";
  }
  return c.isOrIsNot;
}

void printCar(Car c) 
{
  cout << "Color:"  << setw(30) << c.color << endl;
  cout << "Model:" << setw(30) <<c.model << endl;
  cout << "Year:" << setw(31) <<c.year << endl;
  cout << setw(36) <<c.isOrIsNot << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << "Top Speed: " << setw(25) << c.topSpeed << endl;
  cout<< endl;
}

void saveCar(Car c, ofstream& save)
{
  save << "Color:"  << setw(30) << c.color << endl;
  save << "Model:" << setw(30) <<c.model << endl;
  save << "Year:" << setw(31) <<c.year << endl;
  save << setw(36) <<c.isOrIsNot << endl;
  save << fixed << showpoint << setprecision(2);
  save << "Top Speed: " << setw(25) << c.topSpeed << endl;
  save<< endl;
}

void readAllCars(Car& c,ifstream& fin)
{
  fin >> c.color;
  fin >> c.model;
  fin >> c.year;
  fin >> c.isElectric;
  c.isOrIsNot = electricCar(c);
  fin >> c.topSpeed;
}

void findFastest(Car c[], Car& fastest, int numCars)
{    
  for(int index = 0; index < numCars;index++)
    {
      if(index == 0)
      {
        fastest = c[index];
      }
      else 
      {
        if(c[index].topSpeed > fastest.topSpeed)
        {
          fastest = c[index];
        }
      }
    }
}

void saveFastest(Car fastest, ofstream& save, int numCars)
{
  save << "Out of the " << numCars << " cars, the fastest is the " << fastest.year << " " << fastest.color << " " << fastest.model << endl;
  save << "The fastest the car can go is " << fastest.topSpeed << " MPH" << endl;
  save << fastest.isOrIsNot << endl;
}
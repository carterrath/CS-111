#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Car {
  string color, model, isOrIsNot;
  int year;
  bool isElectric;
  double topSpeed;
};

string electricCar(Car theCar);
void printCar(Car theCar);
void ReadBothCars(Car &firstCar, Car &secondCar);

int main() {
  Car myCar, userCar;
  ReadBothCars(myCar, userCar);
  printCar(myCar);
  printCar(userCar);
}

string electricCar(Car theCar) {
 if (theCar.isElectric == true){
    theCar.isOrIsNot = "is electric";
  }if(theCar.isElectric == false) {
    theCar.isOrIsNot = "is not electric";
  }
  return theCar.isOrIsNot;
}
void printCar(Car theCar) {
  cout << "The car is a "  << theCar.year << " " << theCar.color << " " << theCar.model << endl;
  cout << "The fastest the car can go is " << theCar.topSpeed << " MPH" << endl;
  cout << "The car " << theCar.isOrIsNot << endl;
  cout<< endl;
}
void ReadBothCars(Car &firstCar, Car &secondCar){
  ifstream fin;
  fin.open("cars.txt");
  if(!fin.is_open()){
    cout << "The file could not be opened." << endl;
  }
  fin >> firstCar.color;
  fin >> firstCar.model;
  fin >> firstCar.year;
  fin >> firstCar.isElectric;
  firstCar.isOrIsNot = electricCar(firstCar);
  fin >> firstCar.topSpeed;
  fin >> secondCar.color;
  fin >> secondCar.model;
  fin >> secondCar.year;
  fin >> secondCar.isElectric;
  secondCar.isOrIsNot = electricCar(secondCar);
  fin >> secondCar.topSpeed;
  fin.close();
}



/*Modify Lab 16 so that the ReadBothCars function reads the cars from a file called cars.txt, instead of having the user type in the
information at the keyboard. Make sure when PrintCar prints out the information about a car it prints “the car is electric” or “the car is not electric” (or a similar statement) instead of directly printing
the Boolean value.
Note: See Lab 16 for reference (Lab 16 document also includes
Labs 14 and 15 that were built on to create Lab 16).
Sample contents for cars.txt:
Red TeslaModelX 2020 1 215.3
Blue FordF-150 2015 0 120.5
Test run 1:
The first car is a 2020 red TeslaModelX that can go 215.3 MPH.
It is electric.
The second car is a 2015 Blue FordF-150 that can go 120.5 MPH.
It is not electric.*/
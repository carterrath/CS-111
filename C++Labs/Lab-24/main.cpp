#include <iostream>
#include<iomanip>
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
void ReadBothCars(Car &firstCar, Car &secondCar,ifstream& fin);
void SaveCar(Car theCar, ofstream& save);

int main() {
  Car myCar, userCar;
  ifstream inputFile;
  ofstream outputFile;
  inputFile.open("cars.txt");
  outputFile.open("cars_list.txt");
  if(inputFile.is_open())
  {
  do{
  ReadBothCars(myCar, userCar, inputFile);
  printCar(myCar);
  printCar(userCar);
  SaveCar(myCar,outputFile);
  SaveCar(userCar, outputFile);
  }while(!inputFile.eof());
  inputFile.close();
  }
  else {
    cout << "The file cannot be opened." << endl;
  }
}

string electricCar(Car theCar) {
 if (theCar.isElectric == true){
    theCar.isOrIsNot = "This car is electric";
  }if(theCar.isElectric == false) {
    theCar.isOrIsNot = "This car is not electric";
  }
  return theCar.isOrIsNot;
}
void printCar(Car theCar) {
  cout << "The car is a "  << theCar.year << " " << theCar.color << " " << theCar.model << endl;
  cout << "The fastest the car can go is " << theCar.topSpeed << " MPH" << endl;
  cout << theCar.isOrIsNot << endl;
  cout<< endl;
}

void SaveCar(Car theCar, ofstream& save){
  save << "Color:"  << setw(30) << theCar.color << endl;
  save << "Model:" << setw(30) <<theCar.model << endl;
  save << "Year:" << setw(31) <<theCar.year << endl;
  save << setw(36) <<theCar.isOrIsNot << endl;
  save << fixed << showpoint << setprecision(2);
  save << "Top Speed: " << setw(25) << theCar.topSpeed << endl;
  save<< endl;
}

/*Sample Output File
Color: Red
Model: TeslaModelX
Year: 2020
 This car is Electric
Top Speed: 215.36*/

void ReadBothCars(Car &firstCar, Car &secondCar, ifstream& fin){
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
}






/*Modify printCar() in Lab 23 to output to a file the car
information.
File:
Red TeslaModelX 2020 1 215.355
Blue FordF-150 2015 0 120
Black FordMustang 2019 0 155.687
Black DodgeCharger 1973 0 160
White HyundaiKarmaRevero 2019 1 130
Blue ToyotaMirai 2020 1 125
Red FordThunderbird 1994 0 144.911
Beige LexusSC 2004 0 145
Yellow CheverlotteCorvetteZR1 2019 0 212
Green LamborghiniAventadorSVJ 2020 0 218

Notice that some of these have different decimal values.
Make sure in your output you only show the top speed with
two numbers after the decimal i.e. 123.545 changes to 123.55
Some of these will end up looking like 120.00. That is fine.

Sample Output File
Color: Red
Model: TeslaModelX
Year: 2020
 This car is Electric
Top Speed: 215.36
//There are 10 outputs for this specific file not just the one above
Hint: Look at pages 43 and 44 for help.
Hint 2: Use setw() on the stuff outputted on the left and the
right. Also use the same number for most of the setw so they
align properly.*/
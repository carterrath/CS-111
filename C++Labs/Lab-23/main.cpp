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
void ReadBothCars(Car &firstCar, Car &secondCar,ifstream& fin);

int main() {
  Car myCar, userCar;
  ifstream carFile;
  carFile.open("cars.txt");
  if(carFile.is_open())
  {
  do{
  ReadBothCars(myCar, userCar, carFile);
  printCar(myCar);
  printCar(userCar);
  }while(!carFile.eof());
  carFile.close();
  }
  else {
    cout << "The file cannot be opened." << endl;
  }
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
void ReadBothCars(Car &firstCar, Car &secondCar, ifstream& fin){
  //ifstream fin;
  //fin.open("cars.txt");
  //if(fin.is_open())
  //{
    fin >> firstCar.color;
    //fin.ignore(100,' ');
    fin >> firstCar.model;
    //fin.ignore(100,' ');
    fin >> firstCar.year;
    //fin.ignore(100,' ');
    fin >> firstCar.isElectric;
    firstCar.isOrIsNot = electricCar(firstCar);
    //fin.ignore(100,' ');
    fin >> firstCar.topSpeed;
    //fin.ignore();
    fin >> secondCar.color;
    //fin.ignore(100,' ');
    fin >> secondCar.model;
    //fin.ignore(100,' ');
    fin >> secondCar.year;
    //fin.ignore(100,' ');
    fin >> secondCar.isElectric;
    secondCar.isOrIsNot = electricCar(secondCar);
    //fin.ignore(100,' ');
    fin >> secondCar.topSpeed;
     //fin.ignore();
   //fin.close();
  //}
  //else
  //{
    //cout << "The file could not be opened." << endl;
  //}
}





/*Modify Lab 22 so that you open the file in the main and it prints
out all the cars in a file.
Requirement: Use the eof function on page 42
File:
Red TeslaModelX 2020 1 215.3
Blue FordF-150 2015 0 120.5
Black FordMustang 2019 0 155
Black DodgeCharger 1973 0 160
White HyundaiKarmaRevero 2019 1 130
Blue ToyotaMirai 2020 1 125
Red FordThunderbird 1994 0 144
Beige LexusSC 2004 0 145
Yellow CheverlotteCorvetteZR1 2019 0 212
Green LamborghiniAventadorSVJ 2020 0 218
Hint: Don’t just call the function ReadBothCars 5 times.
Remember your program has to work for any number of cars.
Assume that the file always has a number of cars that is a
multiple of two.
Hint 2: Don’t create 10 cars. Use the two you created and just
print them afterwards. Reuse the same cars when reading in the
next two cars*/
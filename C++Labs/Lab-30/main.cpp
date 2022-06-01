#include <iostream>
#include<iomanip>
#include <fstream>
#include <string>
#include "library.h"
using namespace std;

int main() {
  Car theCars[100];
  ifstream inputFile;
  ofstream outputFile;
  inputFile.open("cars.txt");
  outputFile.open("cars_list.txt");
  if(inputFile.is_open())
  {
    int numCars = 0;
    do
    {
      readAllCars(theCars[numCars], inputFile);
      printCar(theCars[numCars]);
      saveCar(theCars[numCars],outputFile);
      numCars++;
    }while(!inputFile.eof());
    Car fastestCar;
    findFastest(theCars, fastestCar, numCars);
    saveFastest(fastestCar, outputFile, numCars);
  inputFile.close();
  }
  else 
  {
    cout << "The file cannot be opened." << endl;
  }
}
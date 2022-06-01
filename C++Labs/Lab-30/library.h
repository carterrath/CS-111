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

string electricCar(Car c);
void printCar(Car c);
void readAllCars(Car& c,ifstream& fin);
void saveCar(Car c, ofstream& save);
void findFastest(Car c[], Car& fastest, int numCars);
void saveFastest(Car fastest, ofstream& save, int numCars);
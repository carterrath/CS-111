#include <iostream>
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
  }else {
    theCar.isOrIsNot = "is not electric";
  }
  return theCar.isOrIsNot;
}
void printCar(Car theCar) {
  cout << "The car is a "  << theCar.year << " " << theCar.color << " " << theCar.model << endl;
  cout << "The fastest the car can go is " << theCar.topSpeed << " miles per hour" << endl;
  cout << "The car " << theCar.isOrIsNot << endl;
  cout<< endl;
}
void ReadBothCars(Car &firstCar, Car &secondCar){
  cout << "What is the color of the first car? ";  
  cin >> firstCar.color;
  cin.ignore();
  cout << "What is the model of the first car? ";
  getline(cin,firstCar.model);
  cout << "What year was the first car made? ";
  cin >> firstCar.year;
  cout << "What is the fastest speed the first car can go?\nType in miles per hour: ";
  cin >> firstCar.topSpeed;
  cout<< "Is the first car electric?\nType 1 for yes and type 0 for no: ";
  cin >> firstCar.isElectric;
  firstCar.isOrIsNot = electricCar(firstCar);
  cout << endl;
  cout << "What is the color of the second car? ";
  cin >> secondCar.color;
  cin.ignore();
  cout << "What is the model of the second car? ";
  getline(cin,secondCar.model);
  cout << "What year was the second car made? ";
  cin >> secondCar.year;
  cout << "What is the fastest speed the second car can go?\nType in miles per hour: ";
  cin >> secondCar.topSpeed;
  cout << "Is the second car electric?\nType 1 for yes and type 0 for no: ";
  cin >> secondCar.isElectric;
  secondCar.isOrIsNot = electricCar(secondCar);
  cout<<endl;
}
//Modify Lab 15 – Main will still have two car structs, representing two cars belonging to the same household. Add a function called ReadBothCars to read in and store the information for both cars in a household (same as was previously done in main – for this lab you can assume a household always has exactly two cars). This function should take two car structs as parameters – they will need to be passed by reference so that they can be modified.
//The function will have a return type of void.
//For this lab you will have two functions, PrintCar (from Lab 15) and ReadBothCars (from this lab) - You MUST place the functions below the main function – this will require prototypes for the functions.
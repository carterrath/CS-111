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

int main() {
  Car myCar, userCar;
  cout << "What is the color of my car? ";
  cin >> myCar.color;
  cin.ignore();
  cout << "What is the model of my car? ";
  getline(cin,myCar.model);
  cout << "What year was my car made? ";
  cin >> myCar.year;
  cout << "What is the fastest speed my car can go?\nType in miles per hour: ";
  cin >> myCar.topSpeed;
  cout<< "Is my car electric?\nType 1 for yes and type 0 for no: ";
  cin >> myCar.isElectric;
  myCar.isOrIsNot = electricCar(myCar);
  cout << endl;
  printCar(myCar);
  cout << "What is the color of your car? ";
  cin >> userCar.color;
  cin.ignore();
  cout << "What is the model of your car? ";
  getline(cin,userCar.model);
  cout << "What year was your car made? ";
  cin >> userCar.year;
  cout << "What is the fastest speed your car can go?\nType in miles per hour: ";
  cin >> userCar.topSpeed;
  cout << "Is your car electric?\nType 1 for yes and type 0 for no: ";
  cin >> userCar.isElectric;
  userCar.isOrIsNot = electricCar(userCar);
  cout << endl;
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
//Modify lab 14 to add a function called PrintCar to print out the information about a car struct. This function should take a single car struct as a parameter (passed by value) and have a return type of void.
//Modify main to call this function to print the information about the two cars instead of doing so directly (total of two calls to the function in main).
//For this lab you MUST place the PrintCar function below the main function – this will require a prototype for the PrintCar function.

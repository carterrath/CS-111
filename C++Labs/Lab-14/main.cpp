#include <iostream>
#include <string>
using namespace std;

struct Car {
  string color, model, isOrIsNot;
  int year;
  bool isElectric;
  double topSpeed;
};

string electricCar(Car theCar) {
 if (theCar.isElectric == true){
   theCar.isOrIsNot = "is electric";
  }else {
    theCar.isOrIsNot = "is not electric";
  }
  return theCar.isOrIsNot;
}

int main() {
  Car myCar, userCar;
  cout << "What is the color of my car? ";
  cin >> myCar.color;
  cin.ignore();
  cout << "What is the model of my car? ";
  getline(cin,myCar.model);
  cout << "What year was my car made? ";
  cin >> myCar.year;
  cout << "What is the fastest speed my car can go?(in miles per hour) ";
  cin >> myCar.topSpeed;
  cout<< "is my car electric?(1 for yes, 0 for no) ";
  cin >> myCar.isElectric;
  myCar.isOrIsNot = electricCar(myCar);
  cout << endl;
  cout << "My car is a "  << myCar.year << " " << myCar.color << " " << myCar.model << endl;
  cout << "The fastest my car can go is " << myCar.topSpeed << " miles per hour" << endl;
  cout << "My car " << myCar.isOrIsNot << endl;
  cout<< endl;
  
  cout << "What is the color of your car? ";
  cin >> userCar.color;
  cin.ignore();
  cout << "What is the model of your car? ";
  getline(cin,userCar.model);
  cout << "What year was your car made? ";
  cin >> userCar.year;
  cout << "What is the fastest speed your car can go?(in miles per hour) ";
  cin >> userCar.topSpeed;
  cout << "Is your car electric? (1 for yes, 0 for no) ";
  cin >> userCar.isElectric;
  userCar.isOrIsNot = electricCar(userCar);
  cout << endl;
  cout << "Your car is a "  << userCar.year << " " << userCar.color << " " << userCar.model << endl;
  cout << "The fastest speed your car can go is " << userCar.topSpeed << " miles per hour" << endl;
  cout << "Your car " << userCar.isOrIsNot << endl;
  cout<< endl;
}
//Create a struct called car that has the following data members
//(variables):
//- Color //color of the car
//- Model //model name of the car
//- Year //year the car was made
//- isElectric //whether the car is electric (true) or not (false)
//- topSpeed //top speed of the car, can be a decimal
//Use an appropriate date type for each variable in the struct.
//In main, create two instances of your car struct and have the user enter information for each, then print out the information for both cars to the console window.
//HINT: You must instantiate (create) an instance of a struct (like declaring a variable) before you can use the date members (variables) inside it.
//HINT: Each instance of a struct has it’s own variables.
//HINT: Remember the dot operator to access the variables inside a struct.
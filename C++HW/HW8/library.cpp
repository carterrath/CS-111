#include <string>
#include <iostream>
#include "library.h"
using namespace std;

void generate(Date& d) {
  d.month = rand() % 12 + 1;
  d.day = rand() % 28 + 1;
}

void display(Date d) {
  cout << d.month << '/' << d.day;
}

string zodiac(Date d) {
  string sign;
  switch (d.month) {
    case 1:
      if (d.day < 20)
        sign = "Capricorn";
      else
        sign = "Aquarius";
      break;
    case 2:
      if (d.day < 19)
        sign = "Aquarius";
      else
        sign = "Pisces";
      break;
    case 3:
      if (d.day < 21)
        sign = "Pisces";
      else
        sign = "Aries";
      break;
    case 4:
      if (d.day < 20)
        sign = "Aries";
      else

        sign = "Taurus";
      break;
    case 5:
      if (d.day < 21)
        sign = "Taurus";
      else

        sign = "Gemini";
      break;
    case 6:
      if (d.day < 21)
        sign = "Gemini";
      else
        sign = "Cancer";
      break;
    case 7:
      if (d.day < 23)
        sign = "Cancer";
      else

        sign = "Leo";
      break;
    case 8:
      if (d.day < 23)
        sign = "Leo";
      else

        sign = "Virgo";
      break;

case 9:
      if (d.day < 23)
        sign = "Virgo";
      else
        sign = "Libra";
      break;
    case 10:
      if (d.day < 23)
        sign = "Libra";
      else
        sign = "Scorpio";
break;
    case 11:
      if (d.day < 22)
        sign = "Scorpio";
      else
        sign = "Sagittarius";
      break;
    case 12:
      if (d.day < 22)
        sign = "Sagittarius";
      else
        sign = "Capricorn";
      break;
  }
  return sign;
}
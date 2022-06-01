#include <string>
using namespace std;

struct Date {
  int month, day;
};

void generate(Date& d);
void display(Date d);
string zodiac(Date d);
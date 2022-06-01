#include <string>
#include <fstream>
using namespace std;

struct SaleItem {
  string item_name; 
  double original_price;  
  double sale_price;  
};

void collect_item(ifstream&, SaleItem&);
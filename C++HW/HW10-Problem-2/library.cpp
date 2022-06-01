#include <iostream>
#include <fstream>
#include "library.h"

/* How many parameters does this function take?
    Answer: 2
  What would the following getline function do?
    Answer: The getline function would extract everything in the file up to the comma (',') and discard the comma.
  What would be ignored by the first ignore method?   
    Answer: The first ignore method would ignore the comma since the extractor tool (>>) will not discard it.
  What would be ignored by the second ignore method?
    Answer: The second ignore method would ignore the newline (\n) since the extractor tool (>>) will not discard it.*/
void collect_item(ifstream& input, SaleItem& s) {
  getline(input, s.item_name, ',');
  input >> s.original_price;
  input.ignore();
  input >> s.sale_price;
  input.ignore();
}
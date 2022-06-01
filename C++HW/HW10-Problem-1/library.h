#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Game {
  string opponent; 
  unsigned goals_scored; 
  unsigned goals_lost;
};

void collect_game(Game& game, ifstream& fin);
#include <iostream>
#include <fstream>
#include <string>
#include "library.h"
using namespace std;

void collect_game(Game& game, ifstream&fin)
{
  getline(fin, game.opponent, ',');
  fin >> game.goals_scored;
  fin.ignore();
  fin >> game.goals_lost;
  fin.ignore();
}
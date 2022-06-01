#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
struct Game {
 string opponent, scored_string, lost_string;
 unsigned goals_scored;
 unsigned goals_lost;
 int game_number;
};
 
int main() {
 Game one_game;
 ifstream game_data;
 game_data.open("schedule.csv");
if (game_data.is_open())
{
   unsigned game_number = 0, highest_csusm_goals = 0,sum_opposing_goals = 0, csusm_wins = 0,sum_csusm_goals = 0;
   do
   {
    getline(game_data, one_game.opponent,',');
    //cout << "Opposing school: "<< one_game.opponent << endl;
    getline(game_data, one_game.scored_string, ',');
    one_game.goals_scored = stoi(one_game.scored_string);
    //cout <<"Goals scored by CSUSM: "<< one_game.goals_scored <<endl;
    getline(game_data, one_game.lost_string, '\n');
    one_game.goals_lost = stoi(one_game.lost_string);
    //cout <<"Goals scored by "<< one_game.opponent << ": "<< one_game.goals_lost << endl;
    //cout << endl;

     if(highest_csusm_goals == 0)
     {
       highest_csusm_goals = one_game.goals_scored;
     }if(one_game.goals_scored>highest_csusm_goals)
     {
       highest_csusm_goals = one_game.goals_scored;
     }
     sum_opposing_goals+= one_game.goals_lost;
     if(one_game.goals_scored>one_game.goals_lost)
     {
       csusm_wins++;
     }
     sum_csusm_goals += one_game.goals_scored; 
   }while(!game_data.eof());
    cout <<"The highest number of goals CSUSM scored in one game was: " << highest_csusm_goals <<" goals"<< endl;
    cout << "The sum of goals scored by all opposing teams combined: " << sum_opposing_goals << " goals" <<endl;
    cout << "For the season, CSUSM won a total of: " << csusm_wins << " games" << endl;
    cout << "The overall sum of the goals scored by CSUSM: " << sum_csusm_goals <<" goals"<< endl;
   game_data.close();
 }
 else {
 cout << "Unable to open file";
 }
}
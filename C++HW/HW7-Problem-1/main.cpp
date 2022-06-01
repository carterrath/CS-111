#include <iostream>
#include <string>
using namespace std;

/* Complete the following struct definition to include three members.
  The first member is a string to keep the name of a movie, e.g. Hubbie Halloween.
  The second member is a string to keep the rating of a movie, e.g. G, PG-13, R.
  The third member is an unsigned int to keep the duration of the movie in minutes. */
struct Movie {
string name, rating, rating_inquiry, hour_or_hours, min_or_mins;
int length_min, length_hours, leftover_min;
};

/* Complete the following function to prompt for and
  collect information of one movie. You get to design
  how the user should enter the information. Be sure to
  use clear prompt so that the user is not confused about
  what to enter. */
void collect_movie(Movie& m) {
  string movie_details, str_length_min;
  int first_comma, second_comma, rating_string, str_rating;
  cout << endl;
  cout << "Please enter information for one movie of your choice.\nIt should be in movie name,rating,minutes format with no spaces.\n(ex. Hubie Halloween,PG-13,102): "; 
  //Hubie Halloween,PG-13,102
  //The Devil All the Time,R,138
  //Halloweentown,PG,84
  //Monsters Inc.,G,96
  getline(cin, movie_details);//to get whole string
  first_comma = movie_details.find(","); 
  second_comma = movie_details.find(",", first_comma + 1 );
  str_rating = second_comma - first_comma - 1;//to get length of rating substring
  m.name = movie_details.substr(0,first_comma);
  m.rating = movie_details.substr(first_comma + 1,str_rating);
  if (m.rating == "G") {
    m.rating_inquiry = " general audiences, all ages are admitted.";
  }else if (m.rating == "PG") {
    m.rating_inquiry = " parental guidance is suggested.";
  }else if (m.rating == "PG-13") {
    m.rating_inquiry = " some material may be inappropriate for children under 13.";
  }else {
    m.rating_inquiry = " children under 17 require accompanying by a parent or an adult guardian.";
  }
  str_length_min = movie_details.substr(second_comma + 1);
  m.length_min = stoi(str_length_min);//convert string to int
  m.length_hours = m.length_min / 60;
  m.leftover_min = m.length_min % 60;
  if(m.leftover_min == 1){
    m.min_or_mins = " minute.";
  }else {
    m.min_or_mins = " minutes.";
  }
  if (m.length_hours == 1) {
    m.hour_or_hours = " hour";
  }else {
    m.hour_or_hours = " hours";
  }
} //end of parse_movie

/* Complete the following function to display the details
  of a movie in the prescribed format by the assignment.
  Hints:
    Convert duration into corresponding hours and minutes
    Use conditional statements to decide whether to use
    singular or plural form of hour and minute
    Use conditional statement to decide the message for
    respective rating. */

void display_movie(Movie m) {
  
  cout << endl; //To seperate input from output
  cout << "According to your movie details, the movie \"" << m.name << "\" lasts " << m.length_hours << m.hour_or_hours << " and " << m.leftover_min << m.min_or_mins << " It is rated " <<  m.rating << ", i.e."<< m.rating_inquiry << endl;
}

/* The main function has been set up to test your functions on
  three movies of your choice. Do not modify. */
int main() {
  Movie one_movie;
  cout << "Test your functions on one movie of your choice.\n";
  collect_movie(one_movie);
  display_movie(one_movie);
  cout << endl;
  cout << "Test your functions on another movie of your choice.\n";
  collect_movie(one_movie);
  display_movie(one_movie);
  cout<< endl;
  cout << "Test your functions on the third movie of your choice.\n";
  collect_movie(one_movie);
  display_movie(one_movie);
  return 0; //normal completion of the program
}




//Directions:
//This program is an upgrade from last week's movie program. It is designed to organize movie details using a struct data type called Movie.
//A skeleton of Movie struct has been provided for you. Complete the struct definition to include three members as described in the comments above the struct skeleton.
//A skeleton of the collect_movie function has been provided for you. Complete the function to prompt for and collect user input about one movie.
//A skeleton of the display_movie function has been provided for you. Complete the function to display a movie using the following format. "The movie "____" lasts __ and __. It is rated ___, i.e. ___." The first blank is for the movie name. The second blank is for the number of hour(s). The third blank is for the number of remaining minutes. The fourth blank is for the movie rating. And the last blank is for what the rating means.
//The main function has already been defined for you. Do not alter its content.
//You get to choose how you would like to prompt for and collect the movie data. But the display format has to match the above. Here are two example display results:
//The movie "Hubie Halloween" lasts 1 hour and 42 minutes. It is rated PG-13, i.e. some material may be inappropriate for children under 13.
//The movie "The Devil All the Time" lasts 2 hours and 18 minutes. It is rated R, i.e. children under 17 require accompanying parent or adult guardian.
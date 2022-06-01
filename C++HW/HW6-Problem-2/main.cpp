#include <iostream>
#include <string>
using namespace std;
/*
  Replace the function body with appropriate statements to parse_movie
  a string of movie details into its corresponding movie name, rating,
  and length.
*/
void parse_movie(string movie, string& name, string& rating, string& length) {
  int first_comma, second_comma, rating_string;
  first_comma = movie.find(","); 
  second_comma = movie.find(",", first_comma + 1 );
  rating_string = second_comma - first_comma - 1;
  name = movie.substr(0,first_comma);
  rating = movie.substr(first_comma + 1,rating_string);
  length = movie.substr(second_comma + 1);
} //end of parse_movie

int main() {
  string movie_details, movie_name, movie_rating, movie_length;
  cout << "Please enter information for one movie of your choice (ex. Hubie Halloween,PG-13,102): ";
  getline(cin, movie_details);
  //Add appropriate statement(s) to call the parse function
  //and display the name, rating, and length of the movie
  //in a format that is easy for user to understand.
  parse_movie(movie_details, movie_name, movie_rating, movie_length);
  cout << endl;
  cout << "In " << movie_details << ", the movie name is \"" << movie_name << "\", the rating is \""
  << movie_rating << "\", and the length is \""<< movie_length << "\" minutes.";
  return 0; //normal completion of the program
}

//Many software applications use comma-separated values to store and transfer data. For example, a movie app may save the information about a movie as follows,

//Hubie Halloween,PG-13,102
//The Devil All the Time,R,138

//In this program, you are asked to implement the parse_movie function that will parse a string of the above structure into the corresponding movie name, rating, and movie length.

//In "Hubie Halloween,PG-13,102", the movie name is "Hubie Halloween", the rating is "PG-13", and the length of the movie is "102".
//In "The Devil All the Time,R,138", the movie name is "The Devil All the Time", the rating is "R", and the length of the movie is "138".

//You may assume that commas are used only to separate the three parts of the movie data and that no space is used right before or after commas.

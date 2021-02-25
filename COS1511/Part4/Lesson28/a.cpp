// Structs lesson activity a
//
#include <iostream>
using namespace std;

const int MAX_ACTORS = 10;
const int MAX_MAINACTORS = 5;

struct Movie
{
  string title;
  string director;
  int year;
  string actors[MAX_ACTORS];
};

void addMovie(Movie &movieInfoP)
{
  int counter = 0;

  cout << "Enter the title of the movie: ";
  getline(cin, movieInfoP.title, '\n');

  cout << "Enter the director of the movie: ";
  getline(cin, movieInfoP.director, '\n');

  cout << "Enter the year of the movie: ";
  cin >> movieInfoP.year;
  cin.get();

  for (counter; counter < MAX_ACTORS; counter++)
  {
    cout << "Enter actors name: ";
    getline(cin, movieInfoP.actors[counter], '\n');
  };
}

bool checkDirector(Movie movieInfoP)
{
  for (int i = 0; i < MAX_ACTORS; i++)
  {
    if (movieInfoP.director == movieInfoP.actors[i])
    {
      return true;
    }
  }
  return false;
}

void displayMovie(Movie movieInfoP)
{
  bool directorCheck = checkDirector(movieInfoP);

  cout << "Title:\t\t" << movieInfoP.title << endl;

  if (directorCheck)
    cout << "Director&Actor:\t" << movieInfoP.director << endl;
  else
    cout << "Director:\t" << movieInfoP.director << endl;

  cout << "Year:\t\t" << movieInfoP.year << endl;

  cout << "Actors:";
  for (int i = 0; i < MAX_MAINACTORS; i++)
  {
    cout << "\t\t" << movieInfoP.actors[i] << endl;
  }
}

int main()
{
  Movie movieInfo;

  addMovie(movieInfo);
  displayMovie(movieInfo);

  return 0;
}
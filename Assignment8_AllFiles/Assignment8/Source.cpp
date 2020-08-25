/*
Assignment 8: The printMovie functions takes the movie data stored on the movieData abstract data type and it prints it out.
By: Jose Flores
Date: 7/30/2019
*/


#include <iostream>
#include <string>

using namespace std;

struct movieData
{
	string title;
	string director;
	int year;
	int runtime;
};

void printMovie(movieData);

int main()
{
	movieData myMovie1;
	myMovie1.title = "Guardians of The Galaxy";
	myMovie1.director = "James Gunn";
	myMovie1.year = 2014;
	myMovie1.runtime = 121;

	movieData myMovie2 = { "Guardians of the Galaxy Vol. 2", "James Gunn", 2017, 136 };

	printMovie(myMovie1);
	printMovie(myMovie2);

	system("pause");
	return 0;


}

void printMovie(movieData gotMovie)
{
	cout << "Title of the movie: " << gotMovie.title << endl;
	cout << "Director of the movie: " << gotMovie.director << endl;
	cout << "Year released: " << gotMovie.year << endl;
	cout << "Running time: " << gotMovie.runtime << endl << endl;
}

/* Assignment 3: User inputs cookies per serving, calories per serving, and the number of cookies eaten then the program outputs the number of calories consumed.
Author: Jose Flores
Date: 06/11/2019*/

#include <iostream>

using namespace std;


int main()
{
	double cookiesPerServing, caloriesPerServing, equation, eatenCookies;

	cout << "What is the number of cookies per serving?\n";
	cin >> cookiesPerServing;

	cout << "What is the number of calories per serving?\n";
	cin >> caloriesPerServing;

	equation = cookiesPerServing / caloriesPerServing;

	cout << "How many cookies did you eat?\n";
	cin >> eatenCookies;

	cout << "This is the number of calories you consumed: " << eatenCookies / equation << "\n";

	system("pause");
	return 0;
}
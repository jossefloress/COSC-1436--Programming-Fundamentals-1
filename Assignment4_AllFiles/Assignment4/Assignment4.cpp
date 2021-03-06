/*Assignment4: Asks the user for a number of a seconds and determines how many minutes, hours, and days it's equivalent to
Author: Jose Flores
Date: 06/12/2019*/


#include <iostream>

using namespace std;

int main()
{
	//Variable for user input
	double seconds;

	cout << "Enter a number of seconds:\n";
	cin >> seconds;

	//Constant variables for seconds per day, hour and minute
	const int SECONDS_PER_MIN = 60;
	const int SECONDS_PER_HOUR = 3600;
	const int SECONDS_PER_DAY = 86400;

	// Chooses what to print out: minutes, seconds, or days 
	if (seconds >= SECONDS_PER_DAY)
	{

		cout << "This is the number of days in that many seconds: \n" << seconds / SECONDS_PER_DAY << "\n";
	}

	else if (seconds >= SECONDS_PER_HOUR)
	{
		cout << "This is the number of hours in that many seconds: \n" << seconds / SECONDS_PER_HOUR << "\n";

	}

	else if (seconds >= SECONDS_PER_MIN)
	{
		cout << "This is the number of minutes in that many seconds: \n" << seconds / SECONDS_PER_MIN << "\n";

	}


	system("pause");
	return 0;
}
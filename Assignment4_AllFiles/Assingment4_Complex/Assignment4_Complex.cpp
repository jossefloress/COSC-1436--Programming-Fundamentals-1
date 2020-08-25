/*Assignment4: Asks the user for a number of a seconds and determines how many minutes, hours, and days it's equivalent to
Author: Jose Flores
Date: 06/12/2019*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int seconds; // Holds the number of seconds the user inputs
	bool isValid = false; //If the number the user inputs is not a number, a 1 will be added to this variable

	const int secondsPerMin = 60; // Constant for the number of seconds in one minutes
	const int secondsPerHour = 3600; // Constant for the number of seconds in one hour
	const int secondsPerDay = 86400; // Constant for the number of seconds in one day
	const int seconds2 = 1; //Constant for the number of seconds in one second

	while (!isValid)
	{
		//Asks the user to input a number of seconds
		cout << "Enter a number of seconds:\n";
		cin >> seconds;

		//Outputs Days, with leftover Hours, leftover Minutes and leftover Seconds
		if (seconds >= secondsPerDay)
		{

			cout << "Days in that many seconds: \n" << seconds / secondsPerDay << "\n";

			if (seconds % secondsPerDay >= 3600)
			{
				cout << "Leftover hours in that many seconds: \n" << (seconds % secondsPerDay) / secondsPerHour << "\n";

				if (((seconds % secondsPerDay) % secondsPerHour) / secondsPerMin != 0)
				{
					cout << "This is the number of minutes in that many seconds: \n" << ((seconds % secondsPerDay) % secondsPerHour) / secondsPerMin << "\n";

					if (seconds % secondsPerMin)
					{
						cout << "Leftover seconds \n" << ((seconds % secondsPerDay) % secondsPerHour % secondsPerMin) / seconds2 << "\n";
					}
				}

				else
				{
					cout << "Leftover seconds \n" << ((seconds % secondsPerDay) % secondsPerHour % secondsPerMin) / seconds2 << "\n";
				}
			}

			else if (seconds % secondsPerHour > 0 && seconds % secondsPerHour <= 3600)
			{
				cout << "Leftover minutes in that many seconds \n" << ((seconds % secondsPerDay) % secondsPerHour) / secondsPerMin << "\n";
			}

		}

		//Outputs Hours with leftover Minutes and leftover Seconds
		else if (seconds >= secondsPerHour)
		{
			cout << "This is the number of hours in that many seconds: \n" << seconds / secondsPerHour << "\n";

			if (((seconds % secondsPerDay) % secondsPerHour) / secondsPerMin != 0)
			{
				cout << "This is the number of minutes in that many seconds: \n" << ((seconds % secondsPerDay) % secondsPerHour) / secondsPerMin << "\n";

				if (seconds % secondsPerMin)
				{
					cout << "Leftover seconds \n" << ((seconds % secondsPerHour) % secondsPerMin) / seconds2 << "\n";
				}
			}

			else
			{
				cout << "Leftover seconds \n" << ((seconds % secondsPerHour) % secondsPerMin) / seconds2 << "\n";
			}

		}

		// Outputs Minutes and leftover Seconds
		else if ((((seconds % secondsPerDay) % secondsPerHour) / secondsPerMin != 0))
		{
			cout << "This is the number of minutes in that many seconds: \n" << seconds / secondsPerMin << "\n";

			if (seconds % secondsPerMin)
			{
				cout << "Leftover seconds \n" << (seconds % secondsPerMin) / seconds2 << "\n";
			}


			else
			{
				cout << "Leftover seconds \n" << (seconds % secondsPerMin) / seconds2 << "\n";
			}

		}

		else
		{
			cout << "Invalid input, please enter a number greater than 59\n";
			isValid = false;
		}


		system("pause");
		return 0;
	}
}
/*Assignment5: Asks the user for the speed of their vehicle and the # of hours they've traveled, then
the program displays the distance the vehicle has traveled for each hour of that time period.
By: Jose Flores
Date: 06/28/2019 */

#include <iostream>

using namespace std;


int main()
{
	//Variables for user input
	int mph;
	int hoursTraveled;

	//Asks the user for the speed of the vehicle 
	cout << "What is the speed of the vehicle in mph? ";
	cin >> mph;

	//A loop that doesn't allow the user to enter a negative number for the speed of the vehicle
	while (mph < 0)
	{
		cout << "The speed cannot be less than 0\n";
		cout << "What is the speed of the vehicle in mph? ";
		cin >> mph;
	}

	//Asks the user for the # of hours traveled
	cout << "How many hours has it traveled? ";
	cin >> hoursTraveled;

	//A loop that doesn't allow the user to enter a number less than 1 for the # of hours traveled
	while (hoursTraveled < 1)
	{
		cout << "The number of hours traveled cannot be less than 1\n";
		cout << "How many hours has it traveled? ";
		cin >> hoursTraveled;
	}

	//Displays the  table heading
	cout << "Hour\t\t" << "Distance Traveled\n\n";
	cout << "-------------------------------------\n";

	//Displays the table data
	for (int count = 1; count <= hoursTraveled; count++)
	{
		cout << count << "\t\t" << (count * mph) << endl;
	}

	system("pause");

	return 0;
}
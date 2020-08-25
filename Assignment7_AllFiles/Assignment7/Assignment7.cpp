/*
Assignment7:The program records the number of sales for 5 different types of salsas, the total sales and the names of the
lowest/highest selling products.
By: Jose Flores
Date: 7/18/19
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Constant variable that controls the size of the arrays ( sals[], and soldJars[] ).
	const int SIZE = 5;

	//Array that holds the types of salsas
	string salsa[SIZE] = { "Mild", "Medium", "Sweet","Hot", "Zesty" };

	//Ararys that holds the # of jars sold 
	int soldJars[SIZE];

	//Contains the total salsa jars sold 
	int totalSold = 0;

	//Variables that will hold the value of
	//bestseller (salsa name), highest value (int), worst seller (salsa name), and lowest value (int).
	string highestSalsa;
	string lowestSalsa;
	int lowestVal;
	int highestVal;

	//Asks the user to input the # of sold jars and it stores it in soldJars array
	for (int a = 0; a < SIZE; a++)
	{
		cout << "Enter the number of " << salsa[a] << " salsa jars sold: ";
		cin >> soldJars[a];
		while (soldJars[a] < 0)
		{
			cout << "Number of sold jars can't be negative.\n";
			cout << "Enter the number of " << salsa[a] << " salsa jars sold: ";
			cin >> soldJars[a];
		}

	}

	//Initializing all these variables
	highestVal = soldJars[0];
	highestSalsa = salsa[0];
	lowestVal = soldJars[0];
	lowestSalsa = salsa[0];

	//Checks best seller, and worst seller
	for (int b = 0; b < SIZE; b++)
	{
		totalSold += soldJars[b];

		if (soldJars[b] < lowestVal)
		{
			lowestSalsa = salsa[b];
			lowestVal = soldJars[b];
		}

		else if (soldJars[b] > highestVal)
		{
			highestSalsa = salsa[b];
			highestVal = soldJars[b];

		}

	}




	//Display the table headings.
	cout << "\n\t# of Salsa Jars Sold\n";
	cout << "-------------------------------------\n";

	//Displays the Salsa array followed by the soldJars array (ex: Hot: 10)
	for (int c = 0; c < SIZE; c++)
	{
		cout << salsa[c] << ": " << soldJars[c] << endl;

	}
	cout << "Total: " << totalSold << "\n"
		<< "The lowest selling salsa: " << lowestSalsa << "\n"
		<< "The highest selling salsa: " << highestSalsa << "\n\n";



	system("pause");
	return 0;
}

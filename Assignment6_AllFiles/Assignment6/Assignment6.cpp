/*
Assigment6: Will ask the user to enter an int value and after the user enters the value, it'll
check wheter the value is a prime number or not.
Author: Jose Flores
Date: 7/11/2019
*/

#include <iostream>

using namespace std;

//Prototype for the checkPrime function
bool checkPrime(int); 


int main()
{
	//The variable that will hold the user's entered value
	int input; 
	//The variable that will hold the returned bool of the checkPrime function
	bool primeResult;
	
	//Asks the user for the value
	cout << "Enter a number to check if that number is prime: ";
	cin >> input;

	//The results of the checkPrime function is initialized onto the variable primeResult
	primeResult = checkPrime(input);

	//Checks if the returned result from checkPrime is true or false.
	//If false, it'll say "not prime".
	//If true, it'll say "prime".
	if (primeResult == true)
	{
		cout << "Your value is prime \n";
	}
	
	else
	{
		cout << "Your value is not prime\n" ;
	}

	system("pause");
	return 0;
}

//Function to check if the entered value is prime or not prime.
bool checkPrime(int gotInput) 
{
	//Program already believes that the number can be divided by 1 and by itself. 
	//So the for loop only checks if the entered value can be divide by something other than by 1 or itself.
	for (int num = 2; num < gotInput; num++)
	{	
		//If it goes into the if statement, it means that it can be divided by something other than
		//by 1 or by itself.
		if (gotInput % num == 0)
		{
			return false;
		}

	}

	return true;
}
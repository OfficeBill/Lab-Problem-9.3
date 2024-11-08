// File Name:     Lab Problem 9.3
// Author:        William Inkrott
// Date:          11/07/24
// Description:   Check 20 dice rolls for runs. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayRun(int values[], int size);

int main(void)
{
	int values[20], size = 20;
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		int max_value = 6;
		int randnum = rand() % max_value+1;
		values[i] = randnum;
		cout << values[i] << " ";
	}
	cout << endl;
	displayRun(values, size);

}

void displayRun(int values[], int size)
{
		for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			cout << "(" << values[i] << " " << values[i + 1];
			while (values[i] == values[i + 2])
			{
				cout << " " << values[i];
				i++;
			}
			cout << ") ";
			i = i + 1;
		}
		else
		{
			cout << values[i] << " ";
		}
	}
}
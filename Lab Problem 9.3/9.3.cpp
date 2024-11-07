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
	int values[], size = 20;
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		int max_value = 6;
		int randnum = rand() % max_value;
		switch (randnum)
		{
		case 0:
			values[i] = 1;
			break;
		case 1:
			values[i] = 2;
			break;
		case 2:
			values[i] = 3;
			break;
		case 3:
			values[i] = 4;
			break;
		case 4:
			values[i] = 5;
			break;
		case 5:
			values[i] = 6;
			break;
		}
	}
}

void displayRun(int values[], int size)
{
	int runnum = 1
		bool run;
	for (int i = 0; i < size; i++)
	{
		if (values[i] == values[i + 1])
		{
			runnum = 1;
			run = true;
			for (run; run != true; runnum + 1)
			{

			}
		}
	}
}
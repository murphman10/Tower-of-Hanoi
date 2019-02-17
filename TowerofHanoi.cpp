/************************************
Asa Murphy
10/23/18
Assignment 7, Tower of Hanoi Problem
************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

void towerOfHanoi(int n, char l_rod, char r_rod, char m_rod);

int main()
{
	int n = 4; // Number of discs. Using 3,4 and 5.
	cout << "For " << n << " discs" << endl;

	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
	//A being the left, C being the right, and B being the medium.
	return 0;
}

//  recursive function for tower of hanoi puzzle.

void towerOfHanoi(int n, char l_rod, char r_rod, char m_rod)
{
	if (n == 1)
	{

		printf("\n Move disk 1 from peg %c to peg %c", l_rod, r_rod);
		return;
	}
	towerOfHanoi(n-1, l_rod, m_rod, r_rod);
	printf("\n Move disk %d from peg %c to peg %c", n, l_rod, r_rod);
	towerOfHanoi(n-1, l_rod, r_rod, m_rod);
}


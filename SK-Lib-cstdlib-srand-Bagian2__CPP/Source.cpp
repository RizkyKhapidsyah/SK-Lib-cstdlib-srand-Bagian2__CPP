#include<iostream>
#include<cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {

	// set seed to 10
	srand(10);

	// generate random number
	int random = rand();

	cout << random;

	_getch();
	return 0;
}
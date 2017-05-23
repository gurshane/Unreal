// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int x = 5;
	int* px;

	px = &x;

	cout << *px << endl;
	cout << endl;

	string s = "Hello";
	printf("string %s\n", s.c_str()); //c_str() accesses the pointer to the string

	cout << endl;

	string name;
	cout << "Give me your name: ";
	cin >> name;
	cout << endl;
	printf("Your name is: %s\n", name.c_str());


    return 0;
}


// CalculateAreaOfARectangleForClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is going to calculate the area of a rectangle
// INPUT: length of two sides
// OUTPUT: Area of rectangle

#include <iostream>

using namespace std;

int main()
{
	//get length of two sides
	//Multiply lengths
	//output answer
	int width , length;
	cout << "What is the width of the rectangle?";
	cin >> width;
	cout << "What is the length of the rectangle?";
	cin >> length;

	int area;
	area = width * length;
	cout << "the area is:" << area;
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

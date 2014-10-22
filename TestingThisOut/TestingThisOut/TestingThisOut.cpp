// TestingThisOut.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

#pragma region
// Calculator section
float num1;
float num2;

float addition(float num1, float num2) {
	float equals1;
	equals1 = num1 + num2;
	return (equals1);
}

float subtraction(float num1, float num2) {
	float equals1;
	equals1 = num1 - num2;
	return (equals1);
}

float multiplication(float num1, float num2) {
	float equals1;
	equals1 = num1 * num2;
	return (equals1);
}

float division(float num1, float num2) {
	float equals1;
	equals1 = num1 / num2;
	return (equals1);
}

float power(float num1, float num2) {
	float equals1;
	equals1 = pow(num1, num2);
	return equals1;
}

float square(float num1) {
	float equals1;
	equals1 = sqrt(num1);
	return (equals1);
}

// Handles input / output
void calculator(void) {
	char again1;

	do {
		char mathFunc1;

		// Gather input information
		system("CLS");
		cout << "Enter the first number in the problem." << endl;
		cin >> num1;
		system("CLS");
		cout << "Enter the mathematical function you want to use (+, -, *, /, ^, #)." << endl;
		cin >> mathFunc1;
		system("CLS");
		if (mathFunc1 != '#') {
			cout << "Enter the second number in the problem." << endl;
			cin >> num2;
			system("CLS");
		}

		// Answer the problem
		switch (mathFunc1) {
		case '+':
			cout << "The answer to your math problem is: " << addition(num1, num2) << endl;
			break;
		case '-':
			cout << "The answer to your math problem is: " << subtraction(num1, num2) << endl;
			break;
		case '*':
			cout << "The answer to your math problem is: " << multiplication(num1, num2) << endl;
			break;
		case '/':
			cout << "The answer to your math problem is: " << division(num1, num2) << endl;
			break;
		case '#':
			cout << "The answer to your math problem is: " << square(num1) << endl;
			break;
		default:
			cout << "The information you input was invalid." << endl;
			break;
		}

		cout << "Do you want to do another math problem? (Y/N)" << endl;
		cin >> again1;
	} while (again1 == 'y' || again1 == 'Y');
}
#pragma endregion Calculator data

#pragma region
// Asks how many quesstions are on the test
void test(void) {
	int amountQuestions1 = 0;
	char amountQuestions2;

	do {
		cout << "How many questions do you want in your test? (Maximum 25)" << endl;
		cin >> amountQuestions1;
		cout << "Are you sure you want " << amountQuestions1 << "? (Y/N)" << endl;
		cin >> amountQuestions2;
	} while (amountQuestions2 != 'y' || amountQuestions2 != 'Y');
}
#pragma endregion Test Section

int _tmain(int argc, _TCHAR* argv[])
{
	string testvcalc1;
	cout << "Do you want to use the calculator or make a test? (C/T)" << endl;
	cin >> testvcalc1;
	if (testvcalc1 == "c" || testvcalc1 == "C") {
		calculator();
	}
	else {
		// TODO: Make a test
	}

	cin.ignore();
	return EXIT_SUCCESS;
}


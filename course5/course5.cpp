// *********************************************************************** 1 *********************************************************************
// ************************************************************* Multiplication Table From 1 to 10 ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void funcPrintHeader() {
	cout << "\n\n\n\t\t\t\t\tMultiplication Table From 1 To 10 \n\n";
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\n----------------------------------------------------------------------------------------------------\n";
}


string funcReturnSeperetor(int i) {

	if (i < 10) {
		return "   |";
	}
	else {
		return "  |";
	}
}




void funcPrintMultiplication() {
	for (int i = 1; i <= 10; i++) {
		cout << i << funcReturnSeperetor(i)<<"\t";
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << "\n";
	}
}


int main() {
	funcPrintHeader();
	funcPrintMultiplication();
}
*/



















// ****************************************************************** 2 ***************************************************************************
// ***************************************************** Print All Prime Numbers From 1 To N ******************************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


enum enPrimeNotPrime{Prime = 1 , NotPrime = 2};


int funcReadPositiveNumber(string message) {

	int number = 0;
	do {
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}


enPrimeNotPrime funcCheckPrimeNumber(int number) {
	int halfNumber = round(number / 2);

	for (int i = 2; i <= halfNumber; i++) {
		if (number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}



void funcPrintAllPrimeNumbers(int number) {

	cout << "Prime Numbers are From 1 To " << number << " : \n";

	for (int i = 1; i <= number; i++) {

	if (funcCheckPrimeNumber(i) == enPrimeNotPrime::Prime) {

		cout << i << endl;
		}
	}
}


int main() {

	funcPrintAllPrimeNumbers(funcReadPositiveNumber("Please Enter a Positive Number : "));

}


*/



























// *********************************************************************** 3 *********************************************************************
// ************************************************************* Perfect Number ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

bool funcIsPerfectNumber(int number) {

	int sum = 0;

	for (int i = 1; i < number; i++) {

		if (number % i == 0) {
			sum += i;
		}
	}

	//if (sum == number)
	//	return 1;
	//else return 0;

	return sum == number;

}


void funcPrintPerfectNumber(int number ) {

	if (funcIsPerfectNumber(number))
		cout << number << " , is a perfect Number\n";
	else
		cout << number << " , is not a perfect Number\n";
}



int main() {

	funcPrintPerfectNumber(funcReadPositiveNumber("Please Enter a Positive Number : "));

}
*/


















// *********************************************************************** 4 *********************************************************************
// ************************************************************* Perfect Number from 1 To N ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}


bool funcIsPerfectNumber(int number) {

	int sum = 0;

	for (int i = 1; i < number; i++) {

		if (number % i == 0) {
			sum += i;
		}

	}

	return sum == number;
}


void funcPrintPerfectNumber(int number) {

	for (int i = 1; i <= number; i++) {

		if (funcIsPerfectNumber(i))
			cout << i << endl;
	}
}


int main() {

	funcPrintPerfectNumber(funcReadPositiveNumber("Please Enter a Positive Number : "));
}
*/





















// *********************************************************************** 5 *********************************************************************
// ************************************************************* Print Digits In A Reversed Order ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

void funcPrintDigits(int number) {

	float remainder = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}


int main() {

	funcPrintDigits(funcReadPositiveNumber("Please , Enter a positive Number : "));

}
*/


















// *********************************************************************** 6 *********************************************************************
// ************************************************************* Sum Of Digits ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

int funcPrintDigits(int number) {

	float remainder = 0, sum = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;

		sum += remainder;
	}
	return sum;
}


int main() {

	cout << "Sum Of Digits = " << funcPrintDigits(funcReadPositiveNumber("Please Enter a Positive Number : ")) << endl;
}
*/



















// *********************************************************************** 7 *********************************************************************
// ************************************************************* Reverse Number ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}


int funcPrintDigits(int number) {

	float remainder = 0, number2 = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}

	return number2;
}


int main() {
	cout << "\nReverse Number = " << funcPrintDigits(funcReadPositiveNumber("\nPlease , Enter a positive number : ")) << endl;
}
*/




















// *********************************************************************** 8 *********************************************************************
// ************************************************************* Digit Frequency ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

int funcCountDigitFrequeny(short digitToCheck, int number) {
	int counter = 0, remainder = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;

		if (digitToCheck == remainder)
			counter++;
	}
	return counter;
}



int main() {

	int number = funcReadPositiveNumber("Please Enter a Positive Number : ");
	short digitToCheck = funcReadPositiveNumber("Enter a Number To check How many in this number : ");
	cout << digitToCheck << " , is frequency " << funcCountDigitFrequeny(digitToCheck, number) << " Time(s)";
}
*/





















// *********************************************************************** 9 *********************************************************************
// ************************************************************* Digits Frequency ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

int funcCountDigitFrequeny(short digitToCheck, int number) {
	int counter = 0, remainder = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;

		if (digitToCheck == remainder)
			counter++;
	}
	return counter;
}

void funcPrintAllDigitsFrequency(int number) {


	for (int i = 1; i < 10; i++) {

		short digitFrequency = funcCountDigitFrequeny(i, number);

		if (digitFrequency > 0) {
			cout << "\nDigit : " << i << " ,is frequency :" << funcCountDigitFrequeny(i, number) << endl;
		}

		//		cout << "Digit " << i << " is frequency " << funcCountDigitFrequeny(i, number) << " Time(s)\n";
	}
}


int main() {

	funcPrintAllDigitsFrequency(funcReadPositiveNumber("Please , Enter a positive number : "));
}
*/




















// *********************************************************************** 10 *********************************************************************
// ************************************************************* Print Digits In Order ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}



int funcPrintDigits(int number) {

	float remainder = 0, number2 = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}

	return number2;
}


void funcPrintNumberInOrder(int number) {

	float remainder = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;

	}
}


int main() {

	funcPrintNumberInOrder(funcPrintDigits(funcReadPositiveNumber("Please , Enter a positive number : ")));
}
*/




















// *********************************************************************** 11 *********************************************************************
// ************************************************************* Palindrome Number ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}



int funcPrintDigits(int number) {

	float remainder = 0, number2 = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}

	return number2;
}


bool funcIsPalindromeNumber(int number) {

	return number == funcPrintDigits(number);
}



int main() {
	int number = funcReadPositiveNumber("Please , Enter a Positive Number : \n");

	if (funcIsPalindromeNumber(number)) {
		cout << endl << number << " , is a Palindrome Number..\n";
	}
	else {
		cout << endl << number << " , no it is NOT a Palindrome Number..\n";
	}
}
*/






















// *********************************************************************** 12 *********************************************************************
// ************************************************************* Inverted Number Pattern ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

//void funcPrintInvertedNumberPattern(int number) {
//	cout << "\n";
//	for (int i = number; i >= 1; i--) {
//		for (int j = 1; j <= i; j++) {
//			cout << i;
//		}
//		cout << endl;
//	}
//}
//

void funcPrintInvertedNumberPattern(int number) {
	for (int i = number; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

int main() {

	funcPrintInvertedNumberPattern(funcReadPositiveNumber("Please , Enter a Positive Number : "));
}
*/





















// *********************************************************************** 13 *********************************************************************
// *************************************************************  Number Pattern ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}


void funcPrintNumberPattern(int number) {
	cout << endl;
	for (int i = 1; i <= number; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}


int main() {

	funcPrintNumberPattern(funcReadPositiveNumber("Enter positive number : "));
}
*/





















// *********************************************************************** 14 *********************************************************************
// ************************************************************* Inverted Letter Pattern ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

void funcPrintInvertedLLetterPattern(int number) {
	cout << "\n";
	for (int i =64+ number; i >= 65; i--) {
		for (int j = 65; j <= i; j++) {
			cout << char(i);
		}
		cout << endl;
	}
}


int main() {

	funcPrintInvertedLLetterPattern(funcReadPositiveNumber("Please , Enter a Positive Number : "));
}
*/


















// *********************************************************************** 15 *********************************************************************
// ************************************************************* Letter Pattern ***********************************************
/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int funcReadPositiveNumber(string message) {

	int number = 0;

	do {

		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}


void funcPrintLetterPattern(int number) {

	cout << endl;
	for (int i = 65; i <= number + 64; i++) {
		for (int j = 65; j <= i; j++) {
			cout << char(i);
		}
		cout << endl;
	}

}

int main() {

	funcPrintLetterPattern(funcReadPositiveNumber("Enter a positive number : "));

}
*/





















// *********************************************************************** 16 *********************************************************************
// ************************************************************* All Words From AAA to ZZZ ***********************************************

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void funcPrintWordsFromAAAToZZZ() {

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				cout << char(i) << char(j) << char(k) << endl;
			}

		}

		cout << "\n--------------------------------------\n";
	}
}

void funcPrintWordsFromAAAToZZZ2() {

	string word = "";

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {

				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				cout << word << endl;
				word = "";
			}
		}
		cout << "\n------------------------------------------------\n";
	}
}



int main() {

	//funcPrintWordsFromAAAToZZZ();
	funcPrintWordsFromAAAToZZZ2();

	}
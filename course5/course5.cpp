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



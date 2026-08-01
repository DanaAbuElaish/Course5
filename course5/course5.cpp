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




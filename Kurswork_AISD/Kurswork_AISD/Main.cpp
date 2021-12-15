#include <iostream>
#pragma warning(disable : 4996)
#include "String.h"
#include "Counting_and_Postfix.h"
using namespace std;

int main() {
	String stroka1, stroka2;
	try{
		Postfix_notation_and_Calculation(stroka1);
	}
	catch (const invalid_argument error){
		cout << " Invalid character entered";
	}
	cout << endl << endl;
	try {
		Postfix_notation_and_Calculation(stroka2);
	}
	catch (const invalid_argument error) {
		cout << " Invalid character entered";
	}
	return 0;
}
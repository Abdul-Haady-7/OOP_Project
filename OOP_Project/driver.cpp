#include <iostream>
#include "social_app.h"
using namespace std;

void isIntValid(int& n) {
	while (true)
	{
		if (cin >> n) {
			if (cin.peek() == '\n') break;
		}

		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid input. Enter ONE integer: ";
	}
}

int main()
{
	int choice;
	
	    do {
	        cout << "\n============================================" << endl;
	        cout << "Social Network Application" << endl;
	        cout << "============================================" << endl;
	        cout << "1. Add two rational numbers" << endl;
	        cout << "2. Subtract two rational numbers" << endl;
	        cout << "3. Multiply two rational numbers" << endl;
	        cout << "4. Divide two rational numbers" << endl;
	        cout << "5. Compare two rational numbers" << endl;
	        cout << "6. Convert to decimal" << endl;
	        cout << "7. Compound Assignment Operations" << endl;
	        cout << "8. Prefix and Postfix Increment" << endl;
	        cout << "9. Prefix and Postfix increment" << endl;
	        cout << "10. Function Call Operator ()" << endl;
	        cout << "11. Operations with integers" << endl;
	        cout << "12. Exit" << endl;
	        cout << "Enter choice: ";
	
	        isIntValid(choice);
	
	        
	    } while (choice != 12);

	return 0;
}
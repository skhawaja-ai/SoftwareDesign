///////////////////////////////////////////////////////////////////////////////
// 
// Menu Stubbing Project
// CSC 414 Software Design
// 09/22/20
// Sara Khawaja
// Description: This code demonstrates code stubbing in a menu design.
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

// Prototypes
//
void menu();
int getChoice(int);
//void printChoice(int);

int main()
{
	// set background/text color
	//
	system("Color A0");
	

	// call selection() to get the choice from user. The number we get back 
	// gets set equal to choice.
	//
	int choice = 0;
	choice = getChoice(choice);

	//printChoice(choice);

	//cin.get();
	return 0;
}

// getChoice() gets the user's choice (1-10) or -1 to exit
//
int getChoice(int choice)
{
	do
	{
		// Call menu() to display choices and prompt user for their input.
		//
		menu();
		cout << "Enter your choice: ";
		cin >> choice;

		// Check to make sure we got a number from the user in the range we 
		// are hoping for. Protects code from buffer overflows. 
		// Checks if someone typed a non-int value/ cannot make 0 amounts of data/ can't be bigger than limit
		//
		if (cin.fail() || choice > 10 || choice <= 0)
		{
			// Clears the cin and what is in the buffer. If this is NOT cleared, 
			// the program would continue in an infinite loop.
			//
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

			// -1 is used to exit the loop so we break if that is the input
			//
			if (choice == -1)
			{
				break;
			}
			// Notify the user they gave us bad info
			//
			cout << "Invalid Option. Please enter a number from 1 to 10 or -1 to exit. ";
		}
		// Unfinished code (stubbing portion)
		//
		switch (choice)
		{
		case 1:
			cout << "Choice 1 NOT finished." << endl;
			break;
		case 2:
			cout << "Choice 2 NOT finished." << endl;
			break;
		case 3:
			cout << "Choice 3 NOT finished." << endl;
			break;
		case 4:
			cout << "Choice 4 NOT finished." << endl;
			break;
		case 5:
			cout << "Choice 5 NOT finished." << endl;
			break;
		case 6:
			cout << "Choice 6 NOT finished." << endl;
			break;
		case 7:
			cout << "Choice 7 NOT finished." << endl;
			break;
		case 8:
			cout << "Choice 8 NOT finished." << endl;
			break;
		case 9:
			cout << "Choice 9 NOT finished." << endl;
			break;
		case 10:
			cout << "Choice 10 NOT finished." << endl;
			break;
		default:
			cout << "!" << endl;
		}
		cout << endl;

	} while (choice != -1);


	return choice;
}

// menu() displays the items on the menu.
//
void menu()
{
	cout << "1. Coffee " << endl;
	cout << "2. Tea " << endl;
	cout << "3. Soda " << endl;
	cout << "4. Water " << endl;
	cout << "5. Juice " << endl;
	cout << "6. Cake " << endl;
	cout << "7. Pie " << endl;
	cout << "8. Croissant " << endl;
	cout << "9. Sandwich " << endl;
	cout << "10. Bagel " << endl;
	cout << "Enter -1 to exit \n" << endl;
}

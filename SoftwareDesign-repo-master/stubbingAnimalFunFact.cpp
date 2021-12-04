///////////////////////////////////////////////////////////////////////////////
// 
// Menu Stubbing Project
// CSC 414 Software Design
// 09/22/20
// Sara Khawaja
// Description: This code demonstrates code stubbing in a menu design.
//
// Update 11/17/20 - Building off the stubbing project, this program displays 10 different animals
//					 and based on the user's selection, the output will be a fun fact of that animal..
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

// Prototypes
//
void animals();
int getChoice(int);
//void printChoice(int);

int main()
{
	// set background/text color
	//
	system("Color A0");
	

	// call getChoice() to get the choice from user. The number we get back 
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
		// Call animals() to display the animal choices and prompt user for their input.
		//
		animals();
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
		// Display the respective animal's fact based on the user's choice. 
		//
		switch (choice)
		{
		case 1:
			cout << "Alpaca wool is flame-resistant and water-resistant." << endl;
			break;
		case 2:
			cout << "A bobcat's favorite meal is rabbit." << endl;
			break;
		case 3:
			cout << "Coyotes are monogamous, so they have one mate their entire life." << endl;
			break;
		case 4:
			cout << "Dolphins use half of their brain to help them breathe during sleep and be on the lookout for predators. " << endl;
			break;
		case 5:
			cout << "Elephants can be left-tusked or right-tusked similar to humans being left or right-handed. " << endl;
			break;
		case 6:
			cout << "A flamingo's eggs are similar to chicken eggs except the yolk may be pink. " << endl;
			break;
		case 7:
			cout << "A giraffe's spots are like human fingerprints-- no two giraffes have the same spot pattern." << endl;
			break;
		case 8:
			cout << "A hamster's cheek pouches extend halfway down the length of their body. " << endl;
			break;
		case 9:
			cout << "Red pandas groom themselves similar to how cats do." << endl;
			break;
		case 10:
			cout << "Pikas resemble mice, but they belong to the family of rabbits. " << endl;
			break;
		default:
			cout << "!" << endl;
		}
		cout << endl;

	} while (choice != -1);


	return choice; // Return the particular animal's fun fact
}

// animals() displays a list of animals for the user to choose from. 
//
void animals()
{
	cout << "1. Alpaca " << endl;
	cout << "2. Bobcat " << endl;
	cout << "3. Coyote " << endl;
	cout << "4. Dolphin " << endl;
	cout << "5. Elephant " << endl;
	cout << "6. Flamingo " << endl;
	cout << "7. Giraffe " << endl;
	cout << "8. Hamster " << endl;
	cout << "9. Red Panda " << endl;
	cout << "10. Pika " << endl;
	cout << "Enter -1 to exit \n" << endl;
}

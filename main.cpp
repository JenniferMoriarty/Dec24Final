#include<iostream>
using namespace std;

//global variables (can be seen and used by errbody in the clurb)
string inventory[10];
int money = 100;

//declarations
void shop();

int main() {
	//local variables (only be seen and used by main)
	int room = 1;
	string input;
	do {

		//stuff here gets done every turn
		cout << "your inventory:";
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << "|";
		cout << endl << endl;

		switch (room) {
		case 1:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 2;
			break;
		case 2:
			shop();//function call
			cout << "you're in room 2, you can go south" << endl;
			cin >> input;
			if (input == "north")
				room = 1;
			break;
		}//end switch

	} while (input != "quit");


}//end main


//function definition
void shop() {
	char input = 'p';
	cout << endl << endl << "------------------------" << endl;
	cout << "SHOP" << endl;
	while (input != 'q') {
		cout << "press p for potion, s for sword, a for armor" << endl;
		cin >> input;
		switch (input) {
		case 'p':
			cout << "you got a potion!" << endl;
			inventory[0] = "potion";
			break;
		case 's':
			cout << "you got some armor" << endl;
			inventory[1] = "armor";
			break;
		case 'a':
			cout << "you got a sword" << endl;
			inventory[2] = "sword";
			break;
		}

	}
	cout << "------------------------" << endl;
}

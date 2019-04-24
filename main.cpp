#include <iostream>
#include <string>
// #include "Person.cpp"

using namespace std;

int main(){
	
	string player1;
	char hOrS = 'h';

	cout << "Enter the name of your player: ";
	cin >> player1;
	
	cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
	cout << player1 << " has a 8 of Spades, and a K of Hearts" << endl;
	cout << "(h)it or (s)tay: ";
	cin >> hOrS;

	return 0;
}
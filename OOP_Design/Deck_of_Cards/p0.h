/*
	* program name: Deck of Cards:
	* Prompt: Design the data structures for a generic deck of cards.
		Explain how you would subclass the data structures to implement blackjack.

*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

ifstream i_f; // pointer to input file

ofstream o_f("output.txt", ios::out); // pointer to output file

class Cards{

	public:
	// constructor
	Cards(int, int);
	// cards shape: Diamond (D), Heart(H), Club(C),Spade(S);
	// example usage: B.Cards(x, y);
	// B is an object with x shape, and y number
	// values read from cardInfo.txt
	// returns no value

	// method
	int Cards_List(int); //
	// example usage: B.Cards_List(x);
	// B is an object, x is an integer
	// if x == 1, list all ids and return 1
	// otherwise display input error and return -1
		
	private:
	//

	protected:
	int n; // no of cards
	int e; // no of each card
	int id[4];
	int card[15][15];
}
// constructor implementation
Cards::Cards(int, int){
	int i, j;

	i_f.open('cardsInfo.txt', ios::in);

	n = x; // assign number of cards
	e = y; // assign number of cards in each shape

	for(i = 0; i<n; i++){
		i_f >> id[i];
		for(j = 0; j<e; j++){
			i_f >> card[i][j];
		}
	}
}




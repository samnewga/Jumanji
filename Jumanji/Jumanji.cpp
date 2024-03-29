// Jumanji.cpp : Defines the entry point for the console application.
//Jumaji
//2nd C++ Code

#include "stdafx.h"
#include <iostream>
#include <string>

//std stands for standard library
//using the std here uses up more memory
//memory usage isn't much of a problem nowadays
//the std::prefix is called for resolution operator
using std::cout;
using std::cin;
using std::endl;
using std::string;


//The program always start at the main function
//This also applies to C#, Java, and other languages
//The int before the main stands for integer
//Integer is the return type
//The end of the main function is return 0;
//0 is an integer, that data type must match
//If you see the void main () , you will only see a return.
int main()
{
	//code inside the {} is called a code block
	//cout stands for console out
	//The ; is the end of the statement for the compiler to use
	const int Gold_Coins = 900;
	int players, killed, survivors;
	string captain;

	//This will get information from the player
	//This allows the player to input values for the variable
	cout << "Welcome to the jungle!\n\n";
	cout << "Create your adventure\n";

	cout << "Enter number of players: ";
	cin >> players;

	cout << "Enter a number, smaller than the first:";
	cin >> killed;

	survivors = players - killed;

	cout << "Enter your name: ";
	cin >> captain;

	//This is the story dialogue
	cout << "\n A group of " << players << " players set out on an adventure";
	cout << "--to explore Jumanji and obtain it's treasures";
	cout << "The group was being lead by, " << captain << ".\n ";
	cout << "\n A pack of lions attacked the players.";
	cout << "\n They all fought with everything they had under the leadership of " << captain;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the players, " << killed << " were killed, ";
	cout << "leaving just " << survivors << " in the group. \n ";
	
	//Continuation of the story
	//Into the conclusion of the dialogue
	cout << "\n While the group burried the fallen, ";
	cout << "they stumbled upon a treasure chest. ";
	cout << "The players split the loot, " << Gold_Coins << " gold pieces.";
	cout << captain << " held on to the extra " << (Gold_Coins % survivors);
	cout << " due to him being the main reason for this success.\n";
	
	system("pause");
    return 0;
}


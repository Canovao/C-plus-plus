/*
 * jankenpon.cpp
 *
 *  Created on: 2 de mai. de 2023
 *      Author: surelynotmiguel
 */

#include <iostream>
#include <regex>
#include <string>
using namespace std;


void welcome(string programName){
	cout << "Executing: " << programName << endl;
	cout << "\nWelcome to JANKENPON!" << endl;
}

void farewell(string programName){
	cout << "Goodbye! :D" << endl;
	cout << "Terminating: " << programName << endl;
}

const string Choices[] = {"ROCK", "PAPER", "SCISSORS"};
int gameCounter[3];

string computerChoice() {
	int index = rand() % 3;
	return Choices[index];
}

void printGameStatus(int game, string playerName){
	if(game == 0){
		cout << "=================================================================" << endl;
	} else{
		cout << "\n==========================<\033[1;36mFINAL STATS\033[0m>==========================" << endl;
	}
	cout << playerName << " Wins: " << gameCounter[0] << " | Computer Wins: " <<
	gameCounter[1] << " | Ties: " << gameCounter[2] << endl;
}

bool isChoiceValid(string uChoice){
	if(uChoice == Choices[0] || uChoice == Choices[1] || uChoice == Choices[2]){
		return true;
	} else{
		return false;
	}
}

string toUpperCase(string inputString) {
    regex lowercaseRegex("[a-z]");
    string uppercaseReplacement = "$0";
    transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);
    return regex_replace(inputString, lowercaseRegex, uppercaseReplacement);
}

void chooseWinner(string uChoice, string playerName){
	if(isChoiceValid(uChoice)){
		string cChoice = computerChoice();

		if(uChoice != cChoice){
			if(uChoice == "ROCK" && cChoice == "SCISSORS"){
				cout << "\n\033[1;32m" << playerName << "\033[0m wins!" << endl;
				gameCounter[0]++;
			} else if(uChoice == "ROCK" && cChoice == "PAPER"){
				cout << "\n\033[1;33mComputer\033[0m wins!" << endl;
				gameCounter[1]++;
			} else if(uChoice == "PAPER" && cChoice == "ROCK"){
				cout << "\n\033[1;32m" << playerName << "\033[0m wins!" << endl;
				gameCounter[0]++;
			} else if(uChoice == "PAPER" && cChoice == "SCISSORS"){
				cout << "\n\033[1;33mComputer\033[0m wins!" << endl;
				gameCounter[1]++;
			} else if(uChoice == "SCISSORS" && cChoice == "PAPER"){
				cout << "\n\033[1;32m" << playerName << "\033[0m wins!" << endl;
				gameCounter[0]++;
			} else {
				cout << "\n\033[1;33mComputer\033[0m wins!" << endl;
				gameCounter[1]++;
			}
			cout << playerName << "'s choice: " << uChoice << " | Computer's choice: " << cChoice << endl;
		} else{
			cout << "\nIt's a \033[1;36mtie\033[0m!\nNo points obtained." << endl;
			gameCounter[2]++;
		}
		printGameStatus(0, playerName);
	} else{
		cout << "\nInvalid choice!\nPlease, try again." << endl;
	}

}

int main(int agrc, char *argv[]){
	welcome(argv[0]);

	bool stopGame = false;
	char ch;
	string playerName;
	string uChoice;

	cout << "\nType in your name: ";
	cin >> playerName;
	while(!stopGame){

		cout << "\nMake your choice!: ";
		cin >> uChoice;
		chooseWinner(toUpperCase(uChoice), toUpperCase(playerName));

		cout << "\nDo you want to cotinue playing?[y/n]: ";
		cin >> ch;
		if(ch == 'n'){
			printGameStatus(1, toUpperCase(playerName));
			stopGame = true;
		}
	}

	cout << endl;
	farewell(argv[0]);
	return 0;
}

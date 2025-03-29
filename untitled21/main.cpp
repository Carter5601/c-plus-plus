#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;

void PlayGame(string cardType, int numPlayers, int numCards, bool &continueCoup,
              vector<string> &namePlayer, vector<string> &namePlayerCards);
void GeneratePlayerCard(string &playerName,
                        vector<string> &namePlayer, vector<string> &namePlayerCards);
void GeneratePlayerCardAmb(string &playerName,
                        vector<string> &namePlayer, vector<string> &namePlayerCards);
void DisplayMenu();
void ClaimAmbassador(string &playerName, vector<string> &namePlayerCards, vector<string> &namePlayer);
void ClaimCaptain();
void ClaimContessa();
void ClaimAssassin();
void ClaimDuke(vector<int> &numberPlayerCoins);
string GetName();

const int NUM_CARDS = 15;
const int NUM_CARDS_PER_PLAYER = 2;


int main() {
    bool continueCoup = true;
    string cardType;
    vector<string> namePlayer;
    vector<string> namePlayerCards;
    vector<int> numberPlayerCoins;
    int numPlayers;
    int numCards;
    cout << "Ready to play Coup?" << endl;
    cout << endl;
    cout << "Hand computer to he who won the last game of coup" << endl << endl;

    while (continueCoup) {
        cout << "Enter number of players: " << endl;

        PlayGame(cardType, numPlayers, numCards, continueCoup, namePlayer, namePlayerCards);

    }

    return 0;
}

std::string GetUserString(const std::string& prompt) {
    std::string userAnswer = "none";

    std::cout << prompt;
    std::getline(std::cin, userAnswer);
    std::cout << std::endl;
    return userAnswer;
}

void DisplayMenu() {
    cout << "Claim Ambassador (type amb)" << endl;
    cout << "Claim Captain (type cap)" << endl;
    cout << "Claim Contessa (type con)" << endl;
    cout << "Claim Assassin (type as)" << endl;
    cout << "Claim Duke (type duke)" << endl;
    cout << endl;
}

void PlayGame(string cardType, int numPlayers, int numCards, bool &continueCoup,
              vector<string> &namePlayer, vector<string> &namePlayerCards) {
    int playerCard;
    string playerName;
    std::string userMenuChoice = "none";


    cin >> numPlayers;
    cout << endl;
    numCards = numPlayers * 2;

    for (int i = 0; i < numPlayers; ++i) {
        GeneratePlayerCard(playerName, namePlayer, namePlayerCards);
    }
    for (int i = 0; i < numPlayers; ++i) {
        cout << namePlayer.at(i) << " choose your action from menu below: " << endl;
        //userMenuChoice = GetUserString(" choose your action from menu below: ");
        DisplayMenu();
        cin >> userMenuChoice;

        if (userMenuChoice == "amb") {
            ClaimAmbassador(playerName, namePlayerCards, namePlayer);
        }
        if (userMenuChoice == "cap") {
            ClaimCaptain();
        }
        if (userMenuChoice == "con") {
            ClaimContessa();
        }
        if (userMenuChoice == "as") {
            ClaimAssassin();
        }
        if (userMenuChoice == "duke") {
            ClaimDuke(numberPlayerCoins);
        }
        cout << endl;





    }




    if (numPlayers < 2) {
            continueCoup = false;
        }

}

void ClaimAmbassador(string &playerName, vector<string> &namePlayerCards, vector<string> &namePlayer) {
    cout << "Enter Name: " << endl;
    string name;
    cin >> name;
    if (name == namePlayer.at(0)) {
        for (int i = 0; i < 2; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
        GeneratePlayerCardAmb(playerName, namePlayer, namePlayerCards);
    }
    if (name == namePlayer.at(1)) {
        for (int i = 2; i < 4; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(2)) {
        for (int i = 4; i < 6; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(3)) {
        for (int i = 6; i < 8; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(4)) {
        for (int i = 8; i < 10; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
}

void ClaimCaptain() {

}

void ClaimContessa() {

}

void ClaimAssassin() {

}

void ClaimDuke(vector<int> &numberPlayerCoins) {
    cout << "Enter Name: " << endl;
    string name;
    cin >> name;
    if (name == namePlayer.at(0)) {
        for (int i = 0; i < 2; ++i) {
            numberPlayerCoins.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(1)) {
        for (int i = 2; i < 4; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(2)) {
        for (int i = 4; i < 6; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(3)) {
        for (int i = 6; i < 8; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }
    if (name == namePlayer.at(4)) {
        for (int i = 8; i < 10; ++i) {
            cout << namePlayerCards.at(i);
            cout << endl;
        }
    }

}

string GetName() {
    string playerName;
    return playerName;
}

void GeneratePlayerCard(string &playerName, vector<int> &numberPlayerCoins,
                        vector<string> &namePlayer, vector<string> &namePlayerCards) {
    string cardReceived;
    int playerCard = 0;

    for (int i = 0; i < 5; i++) {
        numberPlayerCoins.push_back(2);
    }

    for (int i = 1; i < NUM_CARDS_PER_PLAYER + 1 ; i++) {
        srand(time(0));
        cout << "Enter a number 1-5" << endl;
        cin >> playerCard;
        if (playerCard == 1) {
            cout << "Player's " << i << " card is the abassador" << endl;
            cardReceived = "ambassador";
            namePlayerCards.push_back(cardReceived);
        }
        if (playerCard == 2) {
            cout << "Player's " << i << " card is the captain" << endl;
            cardReceived = "captain";
            namePlayerCards.push_back(cardReceived);
        }
        if (playerCard == 3) {
            cout << "Player's " << i << " card is the contessa" << endl;
            cardReceived = "contessa";
            namePlayerCards.push_back(cardReceived);
        }
        if (playerCard == 4) {
            cout << "Player's " << i << " card is the assassin" << endl;
            cardReceived = "assassin";
            namePlayerCards.push_back(cardReceived);
        }
        if (playerCard == 5) {
            cout << "Player's " << i << " card is the duke" << endl;
            cardReceived = "duke";
            namePlayerCards.push_back(cardReceived);
        }
    }
    cout << "Enter your game name and hand the game to the next player" << endl << endl << endl << endl << endl;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cin >> playerName;
    namePlayer.push_back(playerName);
}

void GeneratePlayerCardAmb(string &playerName,
                        vector<string> &namePlayer, vector<string> &namePlayerCards) {
    string cardReceived;
    int playerCard = 0;
    string userstring;
    cout << "Your 2 new cards are:" << endl;

    for (int i = 1; i < NUM_CARDS_PER_PLAYER + 1 ; i++) {
        srand(time(0));
        playerCard = rand() % 5 + 1;
        if (playerCard == 1) {
            cout << "Player's " << i << " card is the abassador" << endl;
            cardReceived = "ambassador";
            cout << cardReceived << endl;
            cout << "Do you want to take it? Enter yes or no." << endl;
            cin >> userstring;
            if (userstring == "yes"){

            }
        }
        if (playerCard == 2) {
            cout << "Player's " << i << " card is the captain" << endl;
            cardReceived = "captain";
            cout << cardReceived << endl;
        }
        if (playerCard == 3) {
            cout << "Player's " << i << " card is the contessa" << endl;
            cardReceived = "contessa";
            cout << cardReceived << endl;
        }
        if (playerCard == 4) {
            cout << "Player's " << i << " card is the assassin" << endl;
            cardReceived = "assassin";
            cout << cardReceived << endl;
        }
        if (playerCard == 5) {
            cout << "Player's " << i << " card is the duke" << endl;
            cardReceived = "duke";
            cout << cardReceived << endl;
        }
    }
    cout << "" << endl << endl << endl << endl << endl;
    cout << endl << endl << endl << endl << endl << endl << endl;
}
    /*for (int i = 1; i < NUM_CARDS_PER_PLAYER + 1; i++) {
            playerCard = rand() % 5 + 1;
            if (playerCard == 1) {
                cout << "Player " << i << "'s card is the abassador" << endl;
            }
            if (playerCard == 2) {
                cout << "Player " << i << "'s card is the contessa" << endl;
            }
            if (playerCard == 3) {
                cout << "Player " << i << "'s card is the assassin" << endl;
            }
            if (playerCard == 4) {
                cout << "Player " << i << "'s card is the duke" << endl;
            }
            if (playerCard == 5) {
                cout << "Player " << i << "'s card is the captain" << endl;
            }
    }

    */


    /* for (int i = 0; i < NUM_CARDS_PER_PLAYER; ++i) {
        playerCard = rand() % 5 + 1;
        if (playerCard == 1) {
            cout << "Player 2's card is the abassador" << endl;
        }
        if (playerCard == 2) {
            cout << "Player 2's card is the contessa" << endl;
        }
        if (playerCard == 3) {
            cout << "Player 2's card is the assassin" << endl;
        }
        if (playerCard == 4) {
            cout << "Player 2's card is the duke" << endl;
        }
        if (playerCard == 5) {
            cout << "Player 2's card is the captain" << endl;
        }
    }
    for (int i = 0; i < NUM_CARDS_PER_PLAYER; ++i) {
        playerCard = rand() % 5 + 1;
        if (playerCard == 1) {
            cout << "Player 3's card is the abassador" << endl;
        }
        if (playerCard == 2) {
            cout << "Player 3's card is the contessa" << endl;
        }
        if (playerCard == 3) {
            cout << "Player 3's card is the assassin" << endl;
        }
        if (playerCard == 4) {
            cout << "Player 3's card is the duke" << endl;
        }
        if (playerCard == 5) {
            cout << "Player 3's card is the captain" << endl;
        }
    }
    for (int i = 0; i < NUM_CARDS_PER_PLAYER; ++i) {
        playerCard = rand() % 5 + 1;
        if (playerCard == 1) {
            cout << "Player 4's card is the abassador" << endl;
        }
        if (playerCard == 2) {
            cout << "Player 4's card is the contessa" << endl;
        }
        if (playerCard == 3) {
            cout << "Player 4's card is the assassin" << endl;
        }
        if (playerCard == 4) {
            cout << "Player 4's card is the duke" << endl;
        }
        if (playerCard == 5) {
            cout << "Player 4's card is the captain" << endl;
        }
    }
    for (int i = 0; i < NUM_CARDS_PER_PLAYER; ++i) {
        playerCard = rand() % 5 + 1;
        if (playerCard == 1) {
            cout << "Player 5's card is the abassador" << endl;
        }
        if (playerCard == 2) {
            cout << "Player 5's card is the contessa" << endl;
        }
        if (playerCard == 3) {
            cout << "Player 5's card is the assassin" << endl;
        }
        if (playerCard == 4) {
            cout << "Player 5's card is the duke" << endl;
        }
        if (playerCard == 5) {
            cout << "Player 5's card is the captain" << endl;
        }
    }
    for (int i = 0; i < NUM_CARDS_PER_PLAYER; ++i) {
        playerCard = rand() % 5 + 1;
        if (playerCard == 1) {
            cout << "Player 6's card is the abassador" << endl;
        }
        if (playerCard == 2) {
            cout << "Player 6's card is the contessa" << endl;
        }
        if (playerCard == 3) {
            cout << "Player 6's card is the assassin" << endl;
        }
        if (playerCard == 4) {
            cout << "Player 6's card is the duke" << endl;
        }
        if (playerCard == 5) {
            cout << "Player 6's card is the captain" << endl;
        }
    } */



#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//Display The Game Name and Input the Name
void displayMenu() {
    cout << "Welcome to Rock Paper Scissors Game!" << endl;
    cout << "Enter your name: ";
}

string getPlayerChoice() {
    string choice;
    //Enter Your Choice for Game
    cout << "Enter your choice (rock, paper, or scissors): ";
    cin >> choice;
    //Here Make The Condition
    while (choice != "rock" && choice != "paper" && choice != "scissors") {
        cout << "Invalid choice. Please choose rock, paper, or scissors." << endl;
        cout << "Enter your choice (rock, paper, or scissors): ";
        cin >> choice;
    }
    return choice;
}

int getNumberOfRounds() {
    int rounds;
    // Input the Number of Rounds you want to play
    cout << "Enter number of rounds: ";
    cin >> rounds;
    return rounds;
}

// Here make Condition for the Computer Choice, Computer Choose randomly from these Three names
string getComputerChoice() {
    string choices[] = {"rock", "paper", "scissors"};
    int index = rand() % 3;
    return choices[index];
}

// Here Make Condition for Player and Computer Wining
string determineWinner(string playerChoice, string computerChoice) {
    if (playerChoice == computerChoice)
        return "It's a tie!";
    else if ((playerChoice == "rock" && computerChoice == "scissors") ||
             (playerChoice == "paper" && computerChoice == "rock") ||
             (playerChoice == "scissors" && computerChoice == "paper"))
        return "You win!";
    else
        return "Computer wins!";
}

// Here making the Loop For Number of round which input by the User or Player
void playGame(string playerName, int numberOfRounds) {
    int playerScore = 0, computerScore = 0;
    for (int i = 1; i <= numberOfRounds; i++) {
        cout << "\nRound " << i << endl;
        string playerChoice = getPlayerChoice();
        string computerChoice = getComputerChoice();
        cout << playerName << " chose: " << playerChoice << endl;
        cout << "Computer chose: " << computerChoice << endl;
        string result = determineWinner(playerChoice, computerChoice);
        cout << result << endl;
        if (result == "You win!")
            playerScore++;
        else if (result == "Computer wins!")
            computerScore++;
    }
    cout << "\nFinal Score:" << endl;
    cout << playerName << ": " << playerScore << endl;
    cout << "Computer: " << computerScore << endl;
    if (playerScore == computerScore)
        cout << "It's a tie!" << endl;
    else if (playerScore > computerScore)
        cout << playerName << " wins the game!" << endl;
    else
        cout << "Computer wins the game!" << endl;
}

// Here all the Functions call according to their Requirement
int main() {
    srand(time(0));
    displayMenu();
    string playerName;
    cin >> playerName;
    int rounds = getNumberOfRounds();
    playGame(playerName, rounds);
    return 0;
}


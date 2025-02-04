#include <iostream>
using namespace std;

/*
enum enRockPaperScissor { Rock = 1, Paper = 2, Scissor = 3 };

struct stGame {
    int gameRounds = 0;
    int userChoice = 0;
    int computerChoice = 0;
    string winner = "";
    int userWins = 0;
    int computerWins = 0;
    int drawTimes = 0;
    string finalWinner = "";
};

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

int readNumberOfRounds() {
    int numberOfRounds = 0;
    do {
        cout << "Please enter How many rounds do you want to play (Max rounds are 5) : ";
        cin >> numberOfRounds;
    } while (numberOfRounds <= 0 || numberOfRounds >= 6);

    return numberOfRounds;
}

int readUserChoice() {
    int number = 0;
    do {
        cout << "\nPlease Select your choice from the list below:\n";
        cout << "[1] ROCK\n";
        cout << "[2] PAPER\n";
        cout << "[3]SCISSOR\n";
        cout << "Please enter your choice here >> : ";
        cin >> number;
    } while (number <= 0 || number >= 4);
    return number;
}

int computerChoice() {
    return randomNumber(1, 3);
}

enRockPaperScissor playerChoice(int choice) {
    enRockPaperScissor enChoice = (enRockPaperScissor)choice;

    switch (enChoice)
    {
    case Rock:
        return enRockPaperScissor::Rock;
    case Paper:
        return enRockPaperScissor::Paper;
    case Scissor:
        return enRockPaperScissor::Scissor;
    }
}

string pickWinner(stGame roundGame) {
    enRockPaperScissor enUserChoice = playerChoice(roundGame.userChoice);
    enRockPaperScissor enComputerChoice = playerChoice(roundGame.computerChoice);

    if (enUserChoice == enComputerChoice) {
        return "DRAW";
    }
    
    if (enUserChoice == enRockPaperScissor::Paper) {
        if (enComputerChoice == enRockPaperScissor::Rock) {
            return "User";
        }
        else {
            return "Computer";
        }
    }

    if (enUserChoice == enRockPaperScissor::Rock) {
        if (enComputerChoice == enRockPaperScissor::Scissor) {
            return "User";
        }
        else {
            return "Computer";
        }
    }

    if (enUserChoice == enRockPaperScissor::Scissor) {
        if (enComputerChoice == enRockPaperScissor::Paper) {
            return "User";
        }
        else {
            return "Computer";
        }
    }
}

string showPlayerName(int number){
    switch (number)
    {
    case 1:
        return "ROCK";
    case 2:
        return "PAPER";
    case 3:
        return "SCISSOR";
    }
}

void reactAfterRound(stGame& oneRound) {
    if (oneRound.winner == "User") {
        system("color 2F");
        oneRound.userWins += 1;
    }
    else if (oneRound.winner == "Computer") {
        system("color 4F");
        cout << "\a";
        oneRound.computerWins += 1;
    }
    else {
        oneRound.drawTimes += 1;
        system("color 6F");
    }
}

string fWinner(int userWins, int cmpWins) {
    if (userWins > cmpWins)
        return "User";
    else if (userWins < cmpWins)
        return "Computer";
    else
        return "Draw";
}

void fillRound(stGame oneRound) {

    oneRound.userChoice = readUserChoice();
    oneRound.computerChoice = computerChoice();
    oneRound.winner = pickWinner(oneRound);
    oneRound.finalWinner = fWinner(oneRound.userWins, oneRound.computerWins);
}

void playRound(stGame& oneRound) {
    oneRound.gameRounds = readNumberOfRounds();

    for (int i = 0; i < oneRound.gameRounds; i++) {
        fillRound(oneRound);
        cout << "Round [" << i + 1 << "] begins :\n\n";
        cout << "User choice : " << showPlayerName(oneRound.userChoice) << endl;
        cout << "Computer choice : " << showPlayerName(oneRound.computerChoice) << endl;
        cout << "Round winner : " << oneRound.winner << endl;
        reactAfterRound(oneRound);
    }
    
}

//cout << "________________ Round [" << i + 1 << "] ________________\n\n";

void printResult(stGame oneRound) {
    cout << "\t---------------------------------\n";
    cout << "\t*** G a M e O v E r ***\n";
    cout << "\t---------------------------------\n\n";
    cout << "\t--------Game Results--------\n";
    cout << "\tGame rounds : " << oneRound.gameRounds << endl;
    cout << "\tUser won times : " << oneRound.userWins << endl;
    cout << "\tComputer won times : " << oneRound.computerWins << endl;
    cout << "\tDraw times : " << oneRound.drawTimes << endl;
    cout << "\tFinal winner : " << oneRound.finalWinner << endl;
}

void playGame(stGame game) {
    char playAgain = 'n';
    do {
        playRound(game);
        printResult(game);
        cout << "\n\nDo you want to play again (y/n) : ";
        cin >> playAgain;
    } while (playAgain == 'y');
}

*/

struct stGame {
    int numberOfRounds = 0;
    int userWinTimes = 0;
    int computerWinTimes = 0;
    int drawTimes = 0;
    string finalWinner = "";
};

enum enRockPaperScissor { Rock = 1, Paper = 2, Scissor = 3 };

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

int numberOfRounds() {
    int round = 0;
    do {
        cout << "How many rounds 1 to 10 : ";
        cin >> round;
    } while (round < 0 || round >= 11);
    return round;
}

int readUserChoice() {
    int choice = 0;
    do {
        cout << "Your choice : [1]: Rock, [2]: Paper, [3]: Scissor : ";
        cin >> choice;
    } while (choice <= 0 || choice >= 4);
    return choice;
}

string showChoice(int choice) {
    switch (choice)
    {
    case 1:
        return "Rock";
    case 2:
        return "Paper";
    case 3:
        return "Scissor";
    }
}

string pickWinner(int userChoice, int computerChoice) {
    enRockPaperScissor enUserChoice = (enRockPaperScissor)userChoice;
    enRockPaperScissor enComputerChoice = (enRockPaperScissor)computerChoice;

    if (enUserChoice == enComputerChoice) {
        return "DRAW";
    }

    if (enUserChoice == enRockPaperScissor::Paper) {
        if (enComputerChoice == enRockPaperScissor::Rock) {
            return "User";
        }
        else {
            return "Computer";
        }
    }

    if (enUserChoice == enRockPaperScissor::Rock) {
        if (enComputerChoice == enRockPaperScissor::Scissor) {
            return "User";
        }
        else {
            return "Computer";
        }
    }

    if (enUserChoice == enRockPaperScissor::Scissor) {
        if (enComputerChoice == enRockPaperScissor::Paper) {
            return "User";
        }
        else {
            return "Computer";
        }
    }
}

void printRound(int userChoice, int computerChoice , int roundNumber) {
    cout << "\n_______________ Round [" << roundNumber << "] _______________\n";
    cout << "User choice\t\t : " << showChoice(userChoice) << endl;
    cout << "Computer choice\t\t : " << showChoice(computerChoice) << endl;
    cout << "Round winner\t\t : " << pickWinner(userChoice,computerChoice) << endl;
    cout << "_____________________________________________________________" << endl;
}

void countWins(string roundWinner,stGame& round) {
    if (roundWinner == "User")
        round.userWinTimes += 1;
    else if (roundWinner == "Computer") 
        round.computerWinTimes += 1;
    else
        round.drawTimes += 1;
}

void react(int userChoice,int computerChoice,string winner) {
    
    if (winner == "User") {
        system("color 2F");
    }
    else if (winner == "Computer") {
        system("color 4F");
        cout << "\a";
    }
    else {
        system("color 6F");
    }

}

void finalWinner(stGame& game,int userChoice,int computerChoice) {
    countWins(pickWinner(userChoice, computerChoice), game);
    
    if (game.computerWinTimes > game.userWinTimes)
        game.finalWinner = "Computer";
    else if (game.computerWinTimes < game.userWinTimes)
        game.finalWinner = "User";
    else
        game.finalWinner = "Draw";

}

void playRound(stGame& game) {
    int userChoice = 0,
        computerChoice = 0,
        rounds = numberOfRounds();
    game.numberOfRounds = rounds;
    
    for (int i = 0; i < rounds; i++) {
        cout << "\nRound [" << i + 1 << "] begins :\n\n";
        userChoice = readUserChoice();
        computerChoice = randomNumber(1, 3);
        react(userChoice,computerChoice, pickWinner(userChoice, computerChoice));
        printRound(userChoice, computerChoice, i + 1);
        finalWinner(game, userChoice, computerChoice);
    }
   
    react(userChoice, computerChoice, game.finalWinner);
}

void printResult(stGame game) {

    cout << "\t---------------------------------\n";
    cout << "\t*** G a M e O v E r ***\n";
    cout << "\t---------------------------------\n\n";
    cout << "\t--------Game Results--------\n";
    cout << "\tGame rounds : " << game.numberOfRounds << endl;
    cout << "\tUser won times : " << game.userWinTimes << endl;
    cout << "\tComputer won times : " << game.computerWinTimes << endl;
    cout << "\tDraw times : " << game.drawTimes << endl;
    cout << "\tFinal winner : " << game.finalWinner << endl;
}

void play() {
    stGame game;
    char playAgain = 'n';

    do {
        playRound(game);
        printResult(game);
        
        cout << "\nDo you want to play again (y/n) : ";
        cin >> playAgain;
    } while (playAgain == 'y');

}

int main()
{
    srand((unsigned)time(NULL));
    
    
    play();
}
#include <iostream>
using namespace std;

 // All the names are descriptive, i'm just breaking down the code to well understand all the used concepts

// enums for how wins
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

// enum for the user/computer choice
enum enGameChoice { Stone = 1, Paper = 2, Scissor = 3 };

// Structure to save the final game results
struct stGameResults {
    short GameRounds = 0;           // to save game rounds
    short Player1WinTimes = 0;      // to save player win times
    short Computer2WinTimes = 0;    // to save computer win times
    short DrawTimes = 0;            // to save draw times
    enWinner GameWinner;            // to save the final winner
    string WinnerName = "";         // to save the winner name
};

// Structure to save each round in the game rounds
struct stRoundInfo {
    short RoundNumber = 0;          // to save the round number
    enGameChoice Player1Choice;     // to save the player choice in the round
    enGameChoice ComputerChoice;    // to save the computer choice in the round
    enWinner Winner;                // to save the round winner
    string WinnerName = "";         // to save the round winner name
};

// read number of rounds max 10
short ReadHowManyRounds() {
    short GameRounds = 1; 
    
    do {
        cout << "How many rounds 1 to 10 : ";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds>10);
    
    return GameRounds;
}

// generate random number
int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// to read the player choice as enum datatype
enGameChoice readPlayer1Choice() {
    short choice = 1;
    do {
        cout << "\nYour choice : [1]: Stone, [2]: Paper, [3]: Scissor :\n";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    return (enGameChoice)choice;
}

// to read the computer choice as enum datatype
enGameChoice getComputerChoice() {
    return (enGameChoice)randomNumber(1, 3);
}

// to save the round winner : very usefull if&switch statement logic used 
enWinner whoWonTheRound(stRoundInfo RoundInfo) {
    // if the choices are equal return draw directly
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice) {
        return enWinner::Draw;
    }

    // compare player choices
    switch (RoundInfo.Player1Choice)
    {
    case Stone:
        if (RoundInfo.ComputerChoice == enGameChoice::Paper) {
            return enWinner::Computer;
        }
        break;
    case Paper:
        if (RoundInfo.ComputerChoice == enGameChoice::Scissor) {
            return enWinner::Computer;
        }
        break;
    case Scissor:
        if (RoundInfo.ComputerChoice == enGameChoice::Stone) {
            return enWinner::Computer;
        }
        break;
    }

    // switch statement breakDown :
    // - we compared first if choices are equal to return draw straight
    // - switch statement used to compare playerchoices 
    // - no need to compare all the possible cases with this logic because it's a powerfull shortcut
    // - after removing the draw cases, only way to win the user is what is listed above

    
    // if we reach here then Player 1 is the winner
    return enWinner::Player1;
}

// to return the winner name from an array of names using enum param
string winnerName(enWinner Winner) {
    string arrWinnerName[3] = { "Player1","Computer","No Winner" };
    return arrWinnerName[Winner - 1];
}

// to return the choice from an array of possible choices using enum param
string ChoiceName(enGameChoice Choice) {
    string arrGameChoices[3] = { "Stone","Paper","Scissor" };
    return arrGameChoices[Choice - 1];
}

// to set the screen color accordingly
void SetWinnerScreenColor(enWinner winner) {
    switch (winner)
    {
    case Player1:
        system("color 2F"); // to green
        break;

    case Computer:
        system("color 4F"); // to red
        cout << "\a";       // ring the bell
        break;

    default:
        system("color 6F"); // to yellow
        break;
    }
}

// to print the round result and set the screen color according to win probabilities
void PrintRoundResults(stRoundInfo RoundInfo) {
    cout << "\n____________Round [" << RoundInfo.RoundNumber << "]____________\n\n";
    cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner : [" << RoundInfo.WinnerName << "]\n";
    cout << "__________________________________\n" << endl;
    
    SetWinnerScreenColor(RoundInfo.Winner);
}

// to save the game winner as enum datatype
enWinner whoWonTheGame(short player1WinTimes, short computerWinTimes) {
    if (player1WinTimes > computerWinTimes)
        return enWinner::Player1;
    else if (computerWinTimes > player1WinTimes)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

// to fill the game struct and return it full of all needed data
stGameResults fillGameResults(int gameRounds, short player1WinTimes, short computerWinTimes, short drawTimes) {
    stGameResults gameResults;

    gameResults.GameRounds = gameRounds;
    gameResults.Player1WinTimes = player1WinTimes;
    gameResults.Computer2WinTimes = computerWinTimes;
    gameResults.DrawTimes = drawTimes;
    gameResults.GameWinner = whoWonTheGame(player1WinTimes, computerWinTimes);
    gameResults.WinnerName = winnerName(gameResults.GameWinner);

    return gameResults;
}

// play the game for number of round inseted then using the above function to return the structure filled with the game
stGameResults PlayGame(short howManyRounds) {
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= howManyRounds; GameRound++) {
        cout << "\nRound [" << GameRound << "] begins :\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = readPlayer1Choice();
        RoundInfo.ComputerChoice = getComputerChoice();
        RoundInfo.Winner = whoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = winnerName(RoundInfo.Winner);

        // Increase win/draw counters
        if (RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

        PrintRoundResults(RoundInfo);
    }

    // return the game info filled after playing the needed rounds
    return fillGameResults(howManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}

// to print the needed tabs
string Tabs(short numberOfTabs) {
    string t = "";

    for (int i = 1; i < numberOfTabs; i++) {
        t = t + "\t";
        cout << t;
    }
    return t;
}

// to show game oven panel
void showGameOver() {
    cout << Tabs(2) << "__________________________________________________________\n\n";
    cout << Tabs(2) << "                +++ G a m e O v e r ++ + \n";
    cout << Tabs(2) <<"__________________________________________________________\n\n";
}

// to show the final game results and set the screen color accordingly
void showFinalGameResults(stGameResults GameResults) {
    cout << Tabs(2) << "_____________________ [Game Results]_____________________\n\n";
    cout << Tabs(2) << "Game Rounds : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << "Player1 won times : " << GameResults.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer won times : " << GameResults.Computer2WinTimes << endl;
    cout << Tabs(2) << "Draw times : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "___________________________________________________________\n";

    SetWinnerScreenColor(GameResults.GameWinner);
}

// to reset the screen to black and clear the console
void ResetScreen() {
    system("cls");      // to clear the console
    system("color 0F"); // to set the black screen color
}

// to play the game as long the user wants to play more
void StartGame() {
    char PlayAgain = 'Y';

    do {
        ResetScreen();
        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        showGameOver();
        showFinalGameResults(GameResults);

        cout << endl << Tabs(3) << "Do you want to play again (Y/N) : ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
 }

int main()  // very clean and readable code
{
    // called once to randomising purposes
    srand((unsigned)time(NULL));

    // to start the game
    StartGame();

    return 0;
}
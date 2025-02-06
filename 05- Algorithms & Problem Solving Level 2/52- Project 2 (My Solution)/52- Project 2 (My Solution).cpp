#include <iostream>
using namespace std;

// enum datatype to hold the choosen level
enum enQuestionLevel
{
    Easy = 1,
    Medium = 2,
    Hard = 3,
    Mixed = 4,
};

// enum datatype to choose the opperation
enum enOppType
{
    Add = 1,
    Sub = 2,
    Mul = 3,
    Div = 4,
    Mix = 5,
};

// struct datatype to hold the rounds info
struct stRoundInfo
{
    int number1 = 0;
    int number2 = 0;
    int userAnswer = 0;
    enOppType oppType;
    bool isRightAnswer = false;
    int correctAnswer = 0;
};

// struct datatype to hold the final infos
struct stGameInfo
{
    int numberOfQuestions = 0;
    enQuestionLevel questionLevel;
    enOppType oppType;
    int numberOfCorrectAnswers = 0;
    int numberOfWrongAnswers = 0;
};

// read number of rounds from the user assuming 10 rounds is the max
short readNumberOfRounds()
{
    short number = 0;
    do
    {
        cout << "Please enter how many questions do you want to answer : ";
        cin >> number;
    } while (number < 1 || number > 10);
    return number;
}

// generate a random number in range
int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

// enum function to return the choosen opperation type
enOppType choosenOppType()
{
    short choice = 0;
    do
    {
        cout << "please enter the opperation type :\n";
        cout << "[1]: Add, [2]: Sub, [3]: Mul, [4]: Div, [5]: Mix\n";
        cout << "=> : ";
        cin >> choice;
    } while (choice < 1 || choice > 5);
    return (enOppType)choice;
}

// enum function to return the choosen level
enQuestionLevel choosenQuestionLevel()
{
    short level = 0;
    do
    {
        cout << "Please enter the questions level :\n";
        cout << "[1]: Easy, [2]: Medium, [3]: Hard, [4]: Mix\n";
        cout << "=> : ";
        cin >> level;
    } while (level < 1 || level > 4);
    return (enQuestionLevel)level;
}

// fill the final game structure
stGameInfo fillFinalGameResults(short numberOfQuestions, short correctAnswers, short wrongAnswers,
    enOppType oppType, enQuestionLevel questionLevel)
{
    stGameInfo finalGame;

    finalGame.numberOfQuestions = numberOfQuestions;
    finalGame.oppType = oppType;
    finalGame.questionLevel = questionLevel;
    finalGame.numberOfCorrectAnswers = correctAnswers;
    finalGame.numberOfWrongAnswers = wrongAnswers;

    return finalGame;
}

// char function to return the choosen opperation type
string showOppChosen(enOppType oppType)
{
    string oppTypes[4] = { "+", "-", "*", "/" };
    return oppTypes[oppType - 1];
}

// bool function to check is right answer inserted
bool checkIsRightAnswer(stRoundInfo roundInfo)
{
    return roundInfo.userAnswer == roundInfo.correctAnswer;
}

// to show the screen reaction
void showScreenReaction(stRoundInfo roundInfo)
{
    if (roundInfo.isRightAnswer)
    {
        system("color 2F");
    }else {
        cout << "\a";
        system("color 4F");
    }
}

// logic to calculate correct answers
stRoundInfo fillRoundAnswers(enOppType oppType,enQuestionLevel questionLevel)
{
    stRoundInfo roundInfo;

    // switch case statement to fill number1 and number 2 according to the level choosed
    switch (questionLevel)
    {
    case Easy:
        roundInfo.number1 = randomNumber(1, 9);
        roundInfo.number2 = randomNumber(1, 9);
        break;
    case Medium:
        roundInfo.number1 = randomNumber(10, 20);
        roundInfo.number2 = randomNumber(10, 20);
        break;
    case Hard:
        roundInfo.number1 = randomNumber(30, 100);
        roundInfo.number2 = randomNumber(30, 100);
        break;
    default:
        roundInfo.number1 = randomNumber(enQuestionLevel::Easy, enQuestionLevel::Hard);
        roundInfo.number2 = randomNumber(enQuestionLevel::Easy, enQuestionLevel::Hard);
        break;
    }

    // switch case statement to fill the correct answer, oppType and the isrightanswer  
    switch (oppType)
    {
    case Add:
        roundInfo.oppType = oppType;
        roundInfo.correctAnswer = roundInfo.number1 + roundInfo.number2;
        roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
        break;
    case Sub:
        roundInfo.oppType = oppType;
        roundInfo.correctAnswer = roundInfo.number1 - roundInfo.number2;
        roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
        break;
    case Mul:
        roundInfo.oppType = oppType;
        roundInfo.correctAnswer = roundInfo.number1 * roundInfo.number2;
        roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
        break;
    case Div:
        roundInfo.oppType = oppType;
        roundInfo.correctAnswer = roundInfo.number1 / roundInfo.number2;
        roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
        break;
    default:
        roundInfo.oppType = (enOppType)randomNumber(enOppType::Add, enOppType::Div);
        switch (roundInfo.oppType)
        {
        case Add:
            roundInfo.oppType = oppType;
            roundInfo.correctAnswer = roundInfo.number1 + roundInfo.number2;
            roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
            break;
        case Sub:
            roundInfo.oppType = oppType;
            roundInfo.correctAnswer = roundInfo.number1 - roundInfo.number2;
            roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
            break;
        case Mul:
            roundInfo.oppType = oppType;
            roundInfo.correctAnswer = roundInfo.number1 * roundInfo.number2;
            roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
            break;
        case Div:
            roundInfo.oppType = oppType;
            roundInfo.correctAnswer = roundInfo.number1 / roundInfo.number2;
            roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
            break;
        }

        //roundInfo.isRightAnswer = checkIsRightAnswer(roundInfo);
    }

    return roundInfo;
}

// structure playGame to fill the finalGame results based on played structure rounds
stGameInfo playGame()
{
    stRoundInfo roundInfo;

    short numberOfQuestions = readNumberOfRounds(),
        numberOfCorrectAnswers = 0,
        numberOfWrongAnswers = 0;

    enQuestionLevel questionLevel = choosenQuestionLevel();
    enOppType oppType = choosenOppType();

    roundInfo = fillRoundAnswers(oppType,questionLevel);

    for (int i = 0; i < numberOfQuestions; i++)
    {
        cout << "\nQuestion [" << i + 1 << "/" << numberOfQuestions << "] :\n";

        cout << roundInfo.number1 << endl;
        cout << roundInfo.number2 << "\t" << showOppChosen(roundInfo.oppType) << endl;
        cout << "-------------------\n";
        cin >> roundInfo.userAnswer;
        
        if (!checkIsRightAnswer(roundInfo))
        {
            numberOfWrongAnswers++;
            cout << "Wrong answer :-(\n";
            cout << "The right answer is : " << roundInfo.correctAnswer << endl;
        }
        else
        {
            numberOfCorrectAnswers++;
            cout << "Right Answer :-)" << endl;
        }
        
        showScreenReaction(roundInfo);
    }

    return fillFinalGameResults(numberOfQuestions, numberOfCorrectAnswers, numberOfWrongAnswers, oppType, questionLevel);
}

// to return the game result as string value
string finalGameResult(short corrects, short wrongs)
{
    if (corrects > wrongs)
    {
        return "PASS :)";
    }
    else if (corrects < wrongs)
    {
        return "FAIL :(";
    }
    else
    {
        return "NEUTRAL :|";
    }
}

// string function to tab the needed space
string tabs(int numberOfTabs) {
    string tabs = "";
    
    for (int i = 0; i < numberOfTabs; i++) {
        tabs += "\t";
    }
    return tabs;
}

// void procedure to show game over
void showFinalGameResult(stGameInfo gameInfo)
{
    cout << "\n\n";

    cout << tabs(2) << "---------------------------------" << endl;
    cout << tabs(2) << "Final Results is : " << finalGameResult(gameInfo.numberOfCorrectAnswers, gameInfo.numberOfWrongAnswers) << endl;
    cout << tabs(2) << "---------------------------------" << endl;
}

// string function to return choosen question level
string showChosenQuestionLevel(enQuestionLevel questionLevel)
{
    string questionLevels[4] = { "Easy", "Medium", "Hard", "Mix" };
    return questionLevels[questionLevel - 1];
}

// screen reaction based on final results
void showFinalScreenReaction(stGameInfo gameInfo)
{
    if (gameInfo.numberOfCorrectAnswers > gameInfo.numberOfWrongAnswers)
    {
        system("color 2F");
    }
    else if (gameInfo.numberOfCorrectAnswers < gameInfo.numberOfWrongAnswers)
    {
        cout << "\a";
        system("color 4F");
    }
    else
    {
        system("color 6F");
    }
}

// void procedure to show game results
void showFinalGameDetails(stGameInfo gameInfo)
{
    showFinalGameResult(gameInfo);

    cout << tabs(2) << "Number Of Questions : " << gameInfo.numberOfQuestions << endl;
    cout << tabs(2) << "Questions level     : " << showChosenQuestionLevel(gameInfo.questionLevel) << endl;
    cout << tabs(2) << "Opperation type     : " << showOppChosen(gameInfo.oppType) << endl;
    cout << tabs(2) << "Number of right answers : " << gameInfo.numberOfCorrectAnswers << endl;
    cout << tabs(2) << "Number of wrong answers : " << gameInfo.numberOfWrongAnswers << endl;

    showFinalScreenReaction(gameInfo);
}

// set screen to blank again
void setScreen()
{
    system("cls");
    system("color 0F");
}

// play the game
void playTheGame()
{
    char playAgain = 'y';

    do
    {
        setScreen();
        stGameInfo gameInfo = playGame();
        showFinalGameDetails(gameInfo);

        cout << "\n\nDo you want to play again (y/n) : ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));

    playTheGame();
    
    return 0;
}
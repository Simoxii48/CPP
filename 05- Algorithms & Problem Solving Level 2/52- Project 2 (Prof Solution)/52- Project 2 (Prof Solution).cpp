#include <iostream>
using namespace std;

// enum to save the existing levels
enum enQuestionsLevel { EasyLevel = 1, MidLevel = 2, HardLevel = 3, Mix = 4 };

// enum to save the existing operations
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5 };

// short function to read the number of questions
short readHowManyQuestions() {
    short numberOfQuestions = 0;
    
    do {
        cout << "How many questions do you want to answer : ";
        cin >> numberOfQuestions;
    } while (numberOfQuestions < 1 || numberOfQuestions>10);
    
    return numberOfQuestions;
}

// int function to randomise a number in a range
int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// enum function to read the question level
enQuestionsLevel readQuestionsLevel() {
    short questionLevel = 0;
    
    do {
        cout << "Enter questions level [1]: Easy, [2]: Med, [3]: Hard, [4]: Mix => : ";
        cin >> questionLevel;
    } while (questionLevel < 1 || questionLevel>4);
    
    // casting the choosed number to enum
    return (enQuestionsLevel)questionLevel;
}

// enum function to read the operation type
enOperationType readOpType() {
    short opType = 0;
    
    do {
        cout << "Enter operation type [1]: Add, [2]: Sub, [3]: Mul, [4]: Div, [5]: Mix => : ";
        cin >> opType;
    } while (opType < 1 || opType>5);
    
    // casting the choosed number to enum
    return (enOperationType)opType;
}

// structure to save the question round infos
struct stQuestion {
    int number1 = 0;
    int number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int correctAnswer = 0;
    int playerAnswer = 0;
    bool answerResult = false;
};

// structure to save the quiz infos
struct stQuiz {
    stQuestion QuestionList[100]; // assuming the max is a 100 questions
    short NumberOfQuestions = 0;
    enQuestionsLevel QuestionLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfCorrectAnswers = 0;
    bool isPass = false;
};

// enum function to randomise the operation type
enOperationType getRandomOperationType() {
    int op = randomNumber(1, 4);
    return (enOperationType)op;
}

// enum function to randomise the question level
enQuestionsLevel getRandomQuestionLevel() {
    int RandomQuestionLevel = randomNumber(1, 3);
    return (enQuestionsLevel)RandomQuestionLevel;
}

// int function to calculate the result based on the chosen operation type
int simpleCalculator(int number1, int number2, enOperationType opType) {
    switch (opType)
    {
    case Add:
        return number1 + number2;
    case Sub:
        return number1 - number2;
    case Mul:
        return number1 * number2;
    case Div:
        return number1 / number2;
    default:
        return number1 + number2;
    }
}

// structure function to generate one question
stQuestion generateQuestion(enQuestionsLevel questionLevel, enOperationType opType) {
    stQuestion question;
    
    // in case the choosen level is mix, then we assign the questionLevel to the function to randomise the question level
    if (questionLevel == enQuestionsLevel::Mix) {
        questionLevel = getRandomQuestionLevel();
    }

    // in case the choosen operation type is mix, then we assign the opType to the function to randomise the operation type
    if (opType == enOperationType::MixOp) {
        opType = getRandomOperationType();
    }

    // assigning the opType to the question structure operation type 
    question.OperationType = opType;

    switch (questionLevel)
    {
    case EasyLevel:
        question.number1 = randomNumber(1, 10);
        question.number2 = randomNumber(1, 10);

        question.correctAnswer = simpleCalculator(question.number1, question.number2, question.OperationType);
        question.QuestionLevel = questionLevel;
        return question;

    case MidLevel:
        question.number1 = randomNumber(10, 50);
        question.number2 = randomNumber(10, 50);

        question.correctAnswer = simpleCalculator(question.number1, question.number2, question.OperationType);
        question.QuestionLevel = questionLevel;
        return question;

    case HardLevel:
        question.number1 = randomNumber(50, 100);
        question.number2 = randomNumber(50, 100);

        question.correctAnswer = simpleCalculator(question.number1, question.number2, question.OperationType);
        question.QuestionLevel = questionLevel;
        return question;
    }

    return question;
}

// procedure to generate the questions and save them in the quiz structure question list array
void generateQuizQuestions(stQuiz& quiz) {
    for (short question = 0; question < quiz.NumberOfQuestions; question++) {
        quiz.QuestionList[question] = generateQuestion(quiz.QuestionLevel, quiz.OpType);
    }
}

// reading the user answer
int readQuestionAnswer() {
    int answer = 0;
    cin >> answer;
    return answer;
}

// string function to return the choosen operation type
string getOpTypeSymbol(enOperationType opType) {
    switch (opType)
    {
    case Add:
        return "+";
    case Sub:
        return "-";
    case Mul:
        return "*";
    case Div:
        return "/";
    default:
        return "Mix";
    }
}

// procedure to change the screen color based on the answer
void setScreenColor(bool right) {
    if (right)
        system("color 2F");
    else {
        system("color 4F");
        cout << "\a";
    }
}

// procedure to correct the user answer in case of failing the answer and incresing correct/wrong answers counter
void correctTheQuestionAnswer(stQuiz& quiz, short questionNumber) {
    if (quiz.QuestionList[questionNumber].playerAnswer != quiz.QuestionList[questionNumber].correctAnswer) {
        quiz.QuestionList[questionNumber].answerResult = false;
        quiz.NumberOfWrongAnswers++;

        cout << "Wrong answer :-( \n";
        cout << "The right answer is : ";
        cout << quiz.QuestionList[questionNumber].correctAnswer << endl;
    }
    else {
        quiz.QuestionList[questionNumber].answerResult = true;
        quiz.NumberOfCorrectAnswers++;

        cout << "Right answer :-) \n";
    }
    cout << endl;

    // change the color after the answer
    setScreenColor(quiz.QuestionList[questionNumber].answerResult);
}

// procedure to print one question format
void printTheQuestion(stQuiz& quiz, short questionNumber) {
    cout << "\n";
    cout << "Question [" << questionNumber + 1 << "/" << quiz.NumberOfQuestions << "] \n\n";
    cout << quiz.QuestionList[questionNumber].number1 << endl;
    cout << quiz.QuestionList[questionNumber].number2 << " ";
    cout << getOpTypeSymbol(quiz.QuestionList[questionNumber].OperationType);
    cout << "\n----------" << endl;
}

// printing the questions and reading the answers 
void askAndCorrectQuestionListAnswer(stQuiz& quiz) {
    
    for (short questionNumber = 0; questionNumber < quiz.NumberOfQuestions; questionNumber++) {
        printTheQuestion(quiz, questionNumber);
        quiz.QuestionList[questionNumber].playerAnswer = readQuestionAnswer();
        correctTheQuestionAnswer(quiz, questionNumber);
    }

    //  Short way to assign the final result 
    quiz.isPass = (quiz.NumberOfCorrectAnswers >= quiz.NumberOfWrongAnswers);

    /*  Long way
        if(quiz.NumberOfCorrectAnswers >= quiz.NumberOfWrongAnswers)
            quiz.isPass = true;
        else
            quiz.isPass = false;
    */
}

// string function to get the final results 
string getFinalResultsText(bool pass) {
    if (pass)
        return "PASS :)";
    else
        return "FAIL :(";
}

// string function to return the choosen question level
string getQuestionLevelText(enQuestionsLevel questionLevel) {
    string arrQuestionLevelText[4] = { "Easy","Med","Hard","Mix" };
    return arrQuestionLevelText[questionLevel - 1];
}

// void procedure to print the final results
void printQuizResult(stQuiz quiz) {
    cout << "\n";
    cout << "-----------------------------\n\n";
    cout << "   Final Results is " << getFinalResultsText(quiz.isPass);
    cout << "\n-----------------------------\n\n";

    cout << "Number of questions : " << quiz.NumberOfQuestions << endl;
    cout << "Question level      : " << getQuestionLevelText(quiz.QuestionLevel) << endl;
    cout << "Operation type      : " << getOpTypeSymbol(quiz.OpType) << endl;
    cout << "Number of right answers : " << quiz.NumberOfCorrectAnswers << endl;
    cout << "Number of wrong answers : " << quiz.NumberOfWrongAnswers << endl;
    cout << "-------------------------------\n";

    // set the color after the final results
    setScreenColor(quiz.isPass);
}

// procedure to fill the quiz structure using the previous procedures & functions
void playMathGame() {
    stQuiz quiz;

    quiz.NumberOfQuestions = readHowManyQuestions();
    quiz.QuestionLevel = readQuestionsLevel();
    quiz.OpType = readOpType();

    generateQuizQuestions(quiz);
    askAndCorrectQuestionListAnswer(quiz);
    printQuizResult(quiz);
}

// procedure to rest the screen color and clear the console
void resetScreen(){
    system("cls");
    system("color 0F");
}

// void procedure to play the game as long the user is typing y/Y
void startGame() {
    char playAgain = 'Y';
    
    do {
        resetScreen();
        playMathGame();

        cout << "\nDo you want to play again (y/n) : ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
}

int main()
{
    // called once in main to randomise the numbers
    srand((unsigned)time(NULL));

    // calling only the procedure in the main function 
    startGame();

    return 0;
}
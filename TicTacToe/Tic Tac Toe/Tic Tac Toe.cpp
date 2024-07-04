#include <iostream>
#include <string>
#include <cstdlib>  // Include for rand() and srand()
#include <ctime>    // Include for time()

using namespace std;
const string msg ="It is a used space!!\nChoose another one : ";

 void userTurn();
 void displayTheArray();
 void botTurn();
 char winner();
 void player2();

 char ticTacToe[3][3];

int main()
{
    system("cls");
    int playAgain;
    do 
    {
        for (int row = 0; row < 3; ++row)
        {
            for (int column = 0; column < 3; ++column)
            {
                ticTacToe[row][column] = '#';
            }
        }

        cout << "If you want to play with a bot, press 1 \nIf you want to play with a friend, press 2 \nEnter a number: ";
        
        int choose;
        cin >> choose;
       
        while (choose != 1 && choose != 2) {
            system("cls");
            cout << "you have to choose 1 or 2!\n";
            cout << "If you want to play with a bot, press 1 \nIf you want to play with a friend, press 2 \nEnter a number: ";

            cin >> choose;
     }
       
        system("cls");

        switch (choose) 
        {
        case 1:
            cout << "1\t2\t3" << endl << endl << "4\t5\t6\t" << endl << endl << "7\t8\t9" << endl << endl;
            cout << "Hi, this is the bot!";

            for (int i = 1; i <= 5; ++i) 
            { // 10 times
                cout << "Choose where to play: ";
                userTurn();
                displayTheArray();
                if (winner() == 'X') 
                {
                    cout << "you won!\n";
                    break;
                }
                if (i == 5) 
                {
                    system("cls");
                    cout << "It is a tie!\n";
                    break;
                }

                botTurn();
                system("cls");
                if (winner() == 'O') 
                {
                    cout << "Hard luck! Try again later.\n";
                    break;
                }
                displayTheArray();
            }
            displayTheArray();
            break;

        case 2:
            cout << "1\t2\t3" << endl << endl << "4\t5\t6\t" << endl << endl << "7\t8\t9" << endl << endl;
            cout << "Hello friends\n";
            for (int i = 1; i <= 5; ++i) 
            {
                cout << "Player 1, choose a number to play in: ";
                userTurn();
                displayTheArray();
                if (winner() == 'X') 
                {
                    system("cls");
                    cout << "Player 1 WON!\n";
                    break;
                }
                if (i == 5) 
                {
                    system("cls");
                    cout << "It is a tie!\n";
                    break;
                }

                cout << "Player 2, choose a number to play in: ";
                player2();
                if (winner() == 'O') 
                {
                    system("cls");
                    cout << "Player 2 WON!\n";
                    break;
                }
                displayTheArray();
            }
            displayTheArray();
            break;
        }
        
        cout << "If you want to play again, press 1\nIf you want to exit, press any number or letter\nEnter a number: ";
        cin >> playAgain;
        system("cls");
    } while (playAgain == 1);


}

void displayTheArray() 
{
    for (int row = 0; row < 3; ++row)
    {
        for (int column = 0; column < 3; ++column)
        {
            cout << ticTacToe[row][column] << "\t";
        }
        cout << endl << endl;
    }
}
void userTurn()
{
    
    
    //  if the number is 0 continue in the while 
    // if the # is 1 go out of the while 

    int i;
    int play;
    do 
    {
        cin >> play;

        system("cls");

        switch (play) 
        {
        case 1:
            if (ticTacToe[0][0] == '#')
            {
                ticTacToe[0][0] = 'X';
                i = 0;
            }
            else 
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }

            break;
        case 2:
            if (ticTacToe[0][1] == '#')
            {
                ticTacToe[0][1] = 'X';
                i = 0;
            }
            else
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 3:
            if (ticTacToe[0][2] == '#')
            {
                ticTacToe[0][2] = 'X';
                i = 0;
            }
            else
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 4:
            if (ticTacToe[1][0] == '#') 
            {
                ticTacToe[1][0] = 'X';
                i = 0;
            }
            else 
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 5:
            if (ticTacToe[1][1] == '#') 
            {
                ticTacToe[1][1] = 'X';
                i = 0;
            }
            else 
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 6:
            if (ticTacToe[1][2] == '#')
            {
                ticTacToe[1][2] = 'X';
                i = 0;
            }
            else 
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 7:
            if (ticTacToe[2][0] == '#')
            {
                ticTacToe[2][0] = 'X';
                i = 0;
            }
            else
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 8:
            if (ticTacToe[2][1] == '#')
            {
                ticTacToe[2][1] = 'X';
                i = 0;
            }
            else 
            {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 9:
            if (ticTacToe[2][2] == '#'){
                ticTacToe[2][2] = 'X';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        default:
            cout << "it should be from 1 to 9! \nEnter another one: ";
            i = 1;
        }
    }
    while (i == 1);

    
}
void botTurn() {
    int i = 0;
        do {
            srand(static_cast<unsigned int>(time(0)));
            int randomNumber = rand() % 9 + 1;  // Generates a random number between 1 and 9

            switch (randomNumber) {

            case 1:
                if (ticTacToe[0][0] == '#') {
                    ticTacToe[0][0] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 2:
                if (ticTacToe[0][1] == '#') {
                    ticTacToe[0][1] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                    break;
            case 3:
                if (ticTacToe[0][2] == '#') {
                    ticTacToe[0][2] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 4:
                if (ticTacToe[1][0] == '#') {
                    ticTacToe[1][0] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 5:
                if (ticTacToe[1][1] == '#') {
                    ticTacToe[1][1] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 6:
                if (ticTacToe[1][2] == '#') {
                    ticTacToe[1][2] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 7:
                if (ticTacToe[2][0] == '#') {
                    ticTacToe[2][0] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 8:
                if (ticTacToe[2][1] == '#') {
                    ticTacToe[2][1] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            case 9:
                if (ticTacToe[2][2] == '#') {
                    ticTacToe[2][2] = 'O';
                    i = 0;
                }
                else
                    i = 1;
                break;
            default:
                i = 1;
            }

        } while (i == 1);





}
char winner() {
    /*
    123 -
    456 -
    789 -
    147 -
    258 -
    369 -
    159 -
    357 -
    */
    if ( (ticTacToe[0][0] == 'X' && ticTacToe[0][1] == 'X' && ticTacToe[0][2] == 'X') ||
         (ticTacToe[1][0] == 'X' && ticTacToe[1][1] == 'X' && ticTacToe[1][2] == 'X') ||
         (ticTacToe[2][0] == 'X' && ticTacToe[2][1] == 'X' && ticTacToe[2][2] == 'X' )||

         (ticTacToe[0][0] == 'X' && ticTacToe[1][0] == 'X' && ticTacToe[2][0] == 'X') ||
         (ticTacToe[0][1] == 'X' && ticTacToe[1][1] == 'X' && ticTacToe[2][1] == 'X' )||
         (ticTacToe[0][2] == 'X' && ticTacToe[1][2] == 'X' && ticTacToe[2][2] == 'X' )||

         (ticTacToe[0][0] == 'X' && ticTacToe[1][1] == 'X' && ticTacToe[2][2] == 'X') ||
         (ticTacToe[0][2] == 'X' && ticTacToe[1][1] == 'X' && ticTacToe[2][0] == 'X'))
    {
        return 'X';

    }

    else if ((ticTacToe[0][0] == 'O' && ticTacToe[0][1] == 'O' && ticTacToe[0][2] == 'O') ||
             (ticTacToe[1][0] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[1][2] == 'O') ||
             (ticTacToe[2][0] == 'O' && ticTacToe[2][1] == 'O' && ticTacToe[2][2] == 'O') ||

             (ticTacToe[0][0] == 'O' && ticTacToe[1][0] == 'O' && ticTacToe[2][0] == 'O') ||
             (ticTacToe[0][1] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[2][1] == 'O') ||
             (ticTacToe[0][2] == 'O' && ticTacToe[1][2] == 'O' && ticTacToe[2][2] == 'O') ||

             (ticTacToe[0][0] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[2][2] == 'O') ||
             (ticTacToe[0][2] == 'O' && ticTacToe[1][1] == 'O' && ticTacToe[2][0] == 'O')) 
        {
        return 'O';
        }
  
    else {
        return 'T';
    }


}
void player2() {
   
    int i;
    int play;
    do {
        cin >> play;

        system("cls");

        switch (play) {
        case 1:
            if (ticTacToe[0][0] == '#') {
                ticTacToe[0][0] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }

            break;
        case 2:
            if (ticTacToe[0][1] == '#') {
                ticTacToe[0][1] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 3:
            if (ticTacToe[0][2] == '#') {
                ticTacToe[0][2] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 4:
            if (ticTacToe[1][0] == '#') {
                ticTacToe[1][0] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 5:
            if (ticTacToe[1][1] == '#') {
                ticTacToe[1][1] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 6:
            if (ticTacToe[1][2] == '#') {
                ticTacToe[1][2] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 7:
            if (ticTacToe[2][0] == '#') {
                ticTacToe[2][0] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 8:
            if (ticTacToe[2][1] == '#') {
                ticTacToe[2][1] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        case 9:
            if (ticTacToe[2][2] == '#') {
                ticTacToe[2][2] = 'O';
                i = 0;
            }
            else {
                displayTheArray();
                cout << msg;
                i = 1;
            }
            break;
        default:
            cout << "it should be from 1 to 9! \nEnter another one: ";
            i = 1;
        }
    } while (i == 1);
}

#include <QCoreApplication>

#include<iostream>
#include<string>

#include <cstdlib>
#include <ctime>

using namespace std;




void win()
{
    cout << "You win!" << endl;
}
void tie()
{
    cout << " It's a tie!" << endl;

}
void computerWins()
{
    cout << "Computer wins! You're a loooooser" << endl;
}
string comp;
string user;
void game_Loop()
{
    cout << " Here is  Paper Rock Scissors game!" << endl;
restart:

    cout << " Your turn:" << " ";
    cin >> user;
    srand(time(NULL));
    int randomNumber = rand() % 3;
    switch (randomNumber)
    {
    case 1:
    {
        comp = "Rock";
        break;
    }
    case 2:
    {
        comp = "Paper";
        break;
    }
    case 3:
    {
        comp = "Sciccors";
        break;
    }
    }
    cout << "Computer: " << comp << endl << endl;


    if (user == "Rock")
    {
        if (comp == "Rock")
        {
            tie();
        }
        if (comp == "Paper")
        {
            computerWins();
        }
        if (comp == "Scissors")
        {
            win();
        }

    }
    else if (user == "Scissors")
    {
        if (comp == "Rock")
        {
            computerWins();
        }
        if (comp == "Paper")
        {
            win();
        }
        if (comp == "Scissors")
        {
            tie();
        }
    }
    else if (user == "Paper")
    {
        if (comp == "Rock")
        {
            win();
        }
        if (comp == "Paper")
        {
            tie();
        }
        if (comp == "Scissors")
        {
            computerWins();
        }
    }
    char playAgain='a';
    cout << "\nType 'y' to play again or 'n' to quit: ";
    cin >> playAgain;
    while (playAgain != 'n')
        goto restart;


}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    game_Loop();
    system("pause");


    return a.exec();
}








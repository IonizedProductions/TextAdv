#include <iostream>
#include <string>
#include <sstream>
#include <iosfwd>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <direct.h>
#include <windows.h>


using namespace std;

int main()

{
    system("COLOR 02");
    int choice;
    bool gameOn = true;
    while (gameOn != false)

    {
    label4:
        "Start";
        cout << "Alpha Version 0.0.12 Creative Common License 2017 \n";
        cout << "Last days of the Republic. \n";
        cout << "*******************************\n";

        cout << " 1 - Create character and start game.\n";
        cout << " 2 - Story.\n";
        cout << " 3 - Help.\n";
        cout << " 4 - Exit.\n";
        cout << " 5 - Credits.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice;
        ofstream myfile("Textsave.dat");
        switch (choice)
        {
            case 1:

                cout << "What is your name?\n";
                while (gameOn != true)
                    int charname;
                char firstname[50];
                char lastname[50];
                char gender[50];
                char age[50];

                if (myfile.is_open())
                {
                    myfile << "Race:Human \n";
                    cout << "Please enter your first name: ";
                    cin >> firstname;
                    cout << "Your first name is: " << firstname << endl;
                    myfile << firstname << endl;


                    cout << "Please enter your last name: \n";
                    cin >> lastname;
                    cout << "Your last name is:" << lastname << endl;
                    myfile << lastname << endl;

                    cout << "Please enter your gender:";
                    cin >> gender;
                    cout << "Your gender is:" << gender << endl;
                    myfile << gender << endl; //Saving functionality

                    cout << "Please enter your age: ";
                    std::cin >> age;
                    cout << "Your age is: " << age << endl;
                    myfile << age << endl;
                    myfile << "Equipment: Blaster rifle, Med bag \n";
                    myfile.close();
                    goto label;
                }
                break;
            case 2:
                cout << "Story so far....\n";
                cout << "**********************\n";
                cout << "The year is 21BBY. The Republic has fallen. and anew a Empire is born. The Grand Empire. \n";
                cout << "Our Republic has faced many challenges. From the Clone wars to the ";
                cout << "rise of Emperor Palpatine. We shall prevail again. And when we do. They ";
                cout << "will pay.\n";
                sleep(5);
                if (system("CLS"))
                    system("clear");
                goto label4;
                break;
            case 3:
                cout << "Some documented yet.\n";
                cout << "Basic save functionality. Once it saves your name and input it will close. \n";
                sleep(5);
                if (system("CLS"))
                    system("clear");
                goto label4;
                break;
            case 4:
                cout << "End of Program.\n";
                gameOn = false;
                break;
            case 5:
                cout << "Credit to Greto for helping with some of the coding issues. \n";
                cout << "Nick - Coder and designer of game. \n";
                sleep(5);
                if (system("CLS"))
                    system("clear");
                goto label4;
                break;
            default:
                cout << "Not a Valid Choice. \n";
                cout << "Choose again.\n";
                cin >> choice;
                break;
        }
    }
    return 0;

label:
    "basegame";
    if (system("CLS"))
        system("clear");
    cout << "Welcome to the main game! \n";
{
    cout << "\r3...";
    sleep(1);
    cout << "\r2...";
    sleep(1);
    cout << "\rSURPRISE MOTHERFUCKER!";
    sleep(1);
    system("cls");
    cout << "\r1...";
    sleep(1);
    goto label2;
}



label2:
    "basedata";
    if (system("CLS"))
        system("clear");
    cout << "You awaken in a dark room. Some light shines in from behind some metal bars. \n";
    cout << "You remember how you got here. In the last days of the republic you were arrested for";
    cout << " treason against the republic. \n";
    cout << "You are now required to make a choice. \n";
    int choice2;
    bool gameChoice = true;
    while (gameChoice = false)
        ;
    {
        cout << " 1 - Try to escape.\n";
        cout << " 2 - Stay here.\n";
        cout << " 3 - View character.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice2;
        switch (choice2)
        {
            case 1:
                cout << "You managed to escape since a guard left his keys in your food.\n";
                sleep(5);
                goto label3;
                system("PAUSE \n");
                break;

            case 2:

                cout << "You stay here and rot in prison for the rest of your days. \n";
                cout << "Please try again. \n";
                sleep(3);
                if (remove("Textsave.dat") != 0)
                    perror("Error deleting file");
                else
                    puts("Save removed.");
                if (system("CLS"))
                    system("clear");
                goto label4;
                break;

            case 3:
                string line;
                ifstream myfile("Textsave.dat");
                if (myfile.is_open())
                {
                    while (getline(myfile, line))
                    {
                        cout << line << '\n';
                    }
                    myfile.close();
                }

                else
                    cout << "Unable to open file";
                sleep(6);
                goto label2;
                break;
        }
    label3:
        "Next";
        if (system("CLS"))
            system("clear");
        cout << "As you walk along the corridor of the prison you hear a klaxon alarm sound. \n";
        cout << "they appear to be looking for you. \n";
        sleep(6);
        goto label5;
    label5:
        "Next2";
        int choice3;
        bool gameChoice = true;
        while (gameChoice = false)
            ;
        {
            cout << " 1 - Fire at the coming storm troopers.\n";
            cout << " 2 - Hide.\n";
            cout << " 3 - View character.\n";

            cout << " Enter your choice and press return: ";

            cin >> choice3;
            switch (choice3)
            {
                case 1:
                    cout << "You fire at two of the storm troopers and take them down. You hear "
                            "more coming.\n";
                    sleep(5);
                    goto label6;
                    system("PAUSE \n");
                    break;

                case 2:

                    cout << "You hide in a passage way as they pass.\n";
                    goto label6;
                    break;

                case 3:
                    string line;
                    ifstream myfile("Textsave.dat");
                    if (myfile.is_open())
                    {
                        while (getline(myfile, line))
                        {
                            cout << line << '\n';
                        }
                        myfile.close();
                    }

                    else
                        cout << "Unable to open file";
                    sleep(6);
                    if (system("CLS"))
                        system("clear");
                    goto label5;
                    break;
            }
        label6:
            "Newhope";
            cout << "You make it to the hanger bay. There is one Tie Fighter. \n";
            cout << "";
            system("PAUSE \n");
        }
    }
}

//
//  main.cpp
//  Simple_Game
//
//  Created by Tracey King on 3/2/14.
//  Copyright (c) 2014 Tracey King. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main(int argc, const char * argv[])
{

    int losses = 0, wins = 0, draws = 0, player, ai;
    
    
    cout << "Welcome to Rock, Paper, Scissors!\n";
    cout << "Press 4 to close the game.\n";
    
    do {
        cout << "_____________________________________________________\n";
        cout << "To play, type 1 for Rock, 2 for Paper, Or 3 for Scissors.\n";
        cin >> player ;
        ai = rand() % 3 + 1;
        
        if (player == 1){
			cout << "You chose Rock. \n";
            }
            else if (player == 2){
                cout << "You chose Paper. \n";
            }
        
            else if (player == 3){
                cout << "You chose Scissors. \n";
        }
        
        if (ai == 1){
			cout << "The computer chose Rock. \n";
            }
            else if (ai == 2){
                cout << "The computer chose Paper. \n";
            }
        
            else if (ai == 3){
                cout << "The computer chose Scissors. \n";
            }
        if ( player == ai){
            cout << "It's a draw. \n";
            draws++;
        }
            else if (player == 1 & ai == 2){
                cout << "Paper covers rock, you lose. \n";
                losses++;
        }
            else if (player == 1 & ai == 3){
                cout << "Rock beats scissors, you win. \n";
                wins++;
        }
            else if (player == 2 & ai == 1){
                cout << "Paper covers rock, you win. \n";
                wins++;
        }
            else if (player == 2 & ai == 3){
                cout << "Scissors cuts paper, you lose. \n";
                losses++;
        }
            else if (player == 3 & ai == 1){
                cout << "Rock beats scissors, you lose. \n";
                losses++;
        }
            else if (player == 3 & ai == 2){
                cout << "Scissors cuts paper, you win. \n";
                wins++;
        }


        cout << "Current wins: " << wins << "\nCurrent losses: " << losses << "\nCurrent draws: " << draws << "\n";
    } while (player != 4);

    
    return 0;
}


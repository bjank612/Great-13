#include <iostream>
#include <iostream>
#include <cctype>   // for toupper()
#include <cmath>
using namespace std;

char pA = '#';
char pB = '#';
char pC = '#';
char pD = '#';
char pE = '#';
char pF = '#';
char pH = '#';
char pI = '#';
char pJ = '#';
char pK = '#';
char pL = '#';
char pM = '#';
char pG = '.';

void displayInstructions()
{
    cout << "Class: CS 141             \n"
         << "Program: #2 Great 13      \n"
         << "  \n"
         << "Make a series of jumps until there is a single piece left in the   \n"
         << "middle. On each move you must jump an adjacent piece into an empty \n"
         << "square, jumping horizontally, vertically, or diagonally.           \n"
         << "Input of 'R' resets the board back to the beginning, and input of  \n"
         << "'X' exits the game.'   \n"
         << endl;
} //end displayInstructions()


void displayBoard()
{
    cout <<"\n "
         <<                 "    Board   " <<            " Position \n"
         <<"       "             << pA <<             "          A    \n"
         <<"     " <<      pB<<" "<<pC<<" "<<pD<<       "      B C D  \n"
         <<"   "<<pE<<" "<<pF<<" "<<pG<<" "<<pH<<" "<<pI<<"  E F G H I\n"
         <<"     " <<      pJ<<" "<<pK<<" "<<pL<<       "      J K L  \n"
         <<"       "             << pM <<             "          M    \n"
         << endl;
}

// Checks what the input "from" is equivalent to what characters on the board and if the piece is empty
// or has a piece in it, then returns true if from is empty

bool Empty(char from) {
    bool empty;

    if (from == 'A'){
        if (pA == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'B'){
        if (pB == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'C'){
        if (pC == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'D'){
        if (pD == '.'){
            empty = true;
        } else {
            empty =  false;
        }
    }

    if (from == 'E'){
        if (pE == '.'){
            empty = true;
        } else if (pE == '#'){
            empty = false;
        }
    }

    if (from == 'F'){
        if (pF == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'G'){
        if (pG == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'H'){
        if (pH == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'I'){
        if (pI == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'J'){
        if (pJ == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'K'){
        if (pK == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }


    if (from == 'L'){
        if (pL == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }

    if (from == 'M'){
        if (pM == '.'){
            empty = true;
        } else {
            empty = false;
        }
    }
    return empty;
}


// Checks each combination of adjacent characters, starting with what the source value is. Returns true if adjacent and
// false if not adjacent
bool Adjacent(char from, char jump, char to){

    bool nextTo;
    if (from =='A') {
        if (jump == 'C' && to == 'G') {
            nextTo = true;
        } else if (jump == 'B' && to == 'E') {
            nextTo = true;
        } else if (jump == 'D' && to == 'I') {
            nextTo = true;
        } else {
            nextTo = false;
        }
    }
    else if (from == 'B') {
        if (jump == 'C' && to == 'D') {
            nextTo = true;
        } else if (jump == 'G' && to == 'L') {
            nextTo = true;
        } else if (jump == 'F' && to == 'G') {
            nextTo = true;
        } else {
            nextTo = false;

        }
    }

    else if (from == 'C') {
        if (jump == 'G' && to == 'K') {
            nextTo = true;
        } else {
            nextTo = false;
        }
    }

    else if (from == 'D'){
        if (jump == 'H' && to == 'L') {
            nextTo = true;
        }
        else if (jump == 'G' && to == 'J') {
            nextTo = true;
        }
        else if (jump == 'C' && to == 'B') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'E'){
        if (jump == 'F' && to == 'G') {
            nextTo = true;
        }
        else if (jump == 'J' && to == 'M') {
            nextTo = true;
        }
        else if (jump == 'B' && to == 'A') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'F'){
        if (jump == 'G' && to == 'H') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'G'){
        if (jump == 'H' && to == 'I') {
            nextTo = true;
        }
        else if (jump == 'K' && to == 'M') {
            nextTo = true;
        }
        else if (jump == 'C' && to == 'A') {
            nextTo = true;
        }
        else if (jump == 'F' && to == 'E') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'H'){
        if (jump == 'G' && to == 'F') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'I'){
        if (jump == 'H' && to == 'G') {
            nextTo = true;
        }
        else if (jump == 'L' && to == 'M') {
            nextTo = true;
        }
        else if (jump == 'D' && to == 'A') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'J'){
        if (jump == 'K' && to == 'L') {
            nextTo = true;
        }
        else if (jump == 'G' && to == 'D') {
            nextTo = true;
        }
        else if (jump == 'F' && to == 'B') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'K'){
        if (jump == 'G' && to == 'C') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'L'){
        if (jump == 'H' && to == 'D') {
            nextTo = true;
        }
        else if (jump == 'G' && to == 'B') {
            nextTo = true;
        }
        else if (jump == 'K' && to == 'J') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    else if (from == 'M'){
        if (jump == 'K' && to == 'G') {
            nextTo = true;
        }
        else if (jump == 'L' && to == 'I') {
            nextTo = true;
        }
        else if (jump == 'J' && to == 'E') {
            nextTo = true;
        }
        else {
            nextTo = false;
        }

    }

    return nextTo;

}

// Makes the move to move the pieces and change them from '.' and '#' if all other conditions are valid.
// Uses & to directly modify the global variables when necessary, so the values update correctly
void MakeMove (char &from, char &jump, char &to){
    if (from == 'A'){
        pA = '.';
    } else if (from == 'B'){
        pB = '.';
    } else if (from == 'C'){
        pC = '.';
    } else if (from == 'D'){
        pD = '.';
    } else if (from == 'E'){
        pE = '.';
    } else if (from == 'F'){
        pF = '.';
    } else if (from == 'G'){
        pG = '.';
    } else if (from == 'H'){
        pH = '.';
    } else if (from == 'I'){
        pI = '.';
    } else if (from == 'J'){
        pJ = '.';
    } else if (from == 'K'){
        pK = '.';
    } else if (from == 'L'){
        pL = '.';
    } else if (from == 'M'){
        pM = '.';
    }

    if (jump == 'A'){
        pA = '.';
    } else if (jump == 'B'){
        pB = '.';
    } else if (jump == 'C'){
        pC = '.';
    } else if (jump == 'D'){
        pD = '.';
    } else if (jump == 'E'){
        pE = '.';
    } else if (jump == 'F'){
        pF = '.';
    } else if (jump == 'G'){
        pG = '.';
    } else if (jump == 'H'){
        pH = '.';
    } else if (jump == 'I'){
        pI = '.';
    } else if (jump == 'J'){
        pJ = '.';
    } else if (jump == 'K'){
        pK = '.';
    } else if (jump == 'L'){
        pL = '.';
    } else if (jump == 'M'){
        pM = '.';
    }

    // CHANGE TO PIECE
    if (to == 'A'){
        pA = '#';
    } else if (to == 'B'){
        pB = '#';
    } else if (to == 'C'){
        pC = '#';
    } else if (to == 'D'){
        pD = '#';
    } else if (to == 'E'){
        pE = '#';
    } else if (to == 'F'){
        pF = '#';
    } else if (to == 'G'){
        pG = '#';
    } else if (to == 'H'){
        pH = '#';
    } else if (to == 'I'){
        pI = '#';
    } else if (to == 'J'){
        pJ = '#';
    } else if (to == 'K'){
        pK = '#';
    } else if (to == 'L'){
        pL = '#';
    } else if (to == 'M'){
        pM = '#';
    }



}
// Called when the user enters R to reset all the pieces to their original values and reset the number of pieces back to
// it's original value
void ResetBoard(int &pieces){
    pA = '#';
    pB = '#';
    pC = '#';
    pD = '#';
    pE = '#';
    pF = '#';
    pH = '#';
    pI = '#';
    pJ = '#';
    pK = '#';
    pL = '#';
    pM = '#';
    pG = '.';

    pieces = 12;
}

int main() {
    char moveFrom, pieceToJump, moveTo;
    int numPieces = 12;
    displayInstructions();
    displayBoard();

    // Loops until exited or the player has won.
    while (numPieces > 1){
        cout << 13-(numPieces) << ". "
             << "Enter positions from, jump, and to (e.g. EFG): ";
        cin >> moveFrom;
        moveFrom = toupper(moveFrom);

        // Beginning if statements check if entries are invalid before attempting to make the move
        if (moveFrom == 'X'){
            cout << "Exiting" << endl << endl << "Better luck next time." << endl;
            break;
        } else if (moveFrom == 'R'){
            cout << endl << "   *** Restarting" << endl;
            ResetBoard(numPieces);
            displayBoard();
        }
        else if (Empty(moveFrom) == false){
            // run program now
            cin >> pieceToJump;
            cin >> moveTo;
            pieceToJump = toupper(pieceToJump);
            moveTo = toupper(moveTo);

            bool check = Adjacent(moveFrom, pieceToJump, moveTo);

            if (check == false){
                cout << endl << "   *** Pieces must be adjacent. Please retry" << endl << endl;
            }
            else  if (Empty(pieceToJump) == true) {
                cout << endl << "   *** Must jump a piece. Please retry" << endl << endl;
            }
            else  if (Empty(moveTo)== false) {
                cout << endl << "   *** Destination must be blank. Retry" << endl << endl;
            }

            // Plays the game, this is last because the program needs to check if all the other entries are valid
            // Uses MakeMove function to change the value of the pieces, then decrements numPieces so it is one step
            // to 1 when the program ends. Also displays board everytime a valid move is made.
            else if (Adjacent(moveFrom, pieceToJump, moveTo) == true){
                MakeMove(moveFrom, pieceToJump, moveTo);
                numPieces--;
                displayBoard();

            }

            // Since the "from" variable is checked first, this is outside the scope of the previous if statements.
            // In the event that the first piece is invalid, it uses cin >> to store the rest of that entry so that way
            // you may enter a new entry.
        } else if (Empty(moveFrom)){
            cout << endl << "   *** Source must have a piece. Please retry" << endl << endl;
            cin >> pieceToJump;
            cin >> moveTo;
        }

    // When the while loop no longer runs and numPieces decrements all the way to 1,
    // that means only 1 piece remained and the player won

    } if (numPieces == 1){
        cout << endl << "Congratulations, you did it!" << endl;
    }
    //end while( numberOfPieces > 1)
    cout << "Done." << endl;
    return 0;
}

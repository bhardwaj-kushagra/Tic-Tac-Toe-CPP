#include <iostream>

using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int currentPlayer = 1;
char mark;

void displayBoard() {
    system("clear"); // Use "cls" on Windows
    cout << "\n  Tic-Tac-Toe\n\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "  " << board[i][j] << "  ";
            if (j < 2) cout << "|";
        }
        cout << "\n";
        if (i < 2) cout << "----------------\n";
    }
    cout << "\n";
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
        }
    }
    return true;
}

void makeMove() {
    int choice;
    cout << "Player " << currentPlayer << "'s turn. Enter position (1-9): ";
    cin >> choice;
    
    if (choice < 1 || choice > 9) {
        cout << "Invalid input! Try again.\n";
        makeMove();
        return;
    }
    
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Position already taken! Try again.\n";
        makeMove();
        return;
    }
    
    board[row][col] = mark;
}

int main() {
    while (true) {
        displayBoard();
        mark = (currentPlayer == 1) ? 'X' : 'O';
        makeMove();
        
        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }
        
        if (isBoardFull()) {
            displayBoard();
            cout << "It's a draw!\n";
            break;
        }
        
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
    return 0;
}

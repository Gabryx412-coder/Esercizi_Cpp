#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char currentPlayer = 'X';

void stampaBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool vittoria() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
            return true;
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
            return true;
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
        return true;
    return false;
}

bool pareggio() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void cambioGiocatore() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int scelta;
    while (true) {
        stampaBoard();
        cout << "Giocatore " << currentPlayer << ", scegli una casella: ";
        cin >> scelta;

        bool valido = false;
        for (int i = 0; i < 3 && !valido; i++)
            for (int j = 0; j < 3 && !valido; j++)
                if (board[i][j] == (char)(scelta + '0')) {
                    board[i][j] = currentPlayer;
                    valido = true;
                }

        if (!valido) {
            cout << "Mossa non valida, riprova.\n";
            continue;
        }

        if (vittoria()) {
            stampaBoard();
            cout << "Giocatore " << currentPlayer << " ha vinto!\n";
            break;
        }

        if (pareggio()) {
            stampaBoard();
            cout << "Pareggio!\n";
            break;
        }

        cambioGiocatore();
    }

    return 0;
}

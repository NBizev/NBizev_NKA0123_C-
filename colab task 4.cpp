#include <iostream>
#include <vector>

using namespace std;

class ChessBoard {
public:
    void solveQueens(int size) {
        vector<string> board(size, string(size, '.'));
        placeQueens(board, 0, size);
    }

private:
    void placeQueens(vector<string> &board, int row, int size) {
        if (row == size) {
            printBoard(board);
            return;
        }

        for (int col = 0; col < size; ++col) {
            if (canPlace(board, row, col, size)) {
                board[row][col] = 'Q';
                placeQueens(board, row + 1, size);
                board[row][col] = '.';
            }
        }
    }

    bool canPlace(const vector<string> &board, int row, int col, int size) {
        for (int i = 0; i < row; ++i) {
            if (board[i][col] == 'Q') return false;
        }

        for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
            if (board[i][j] == 'Q') return false;
        }

        for (int i = row, j = col; i >= 0 && j < size; --i, ++j) {
            if (board[i][j] == 'Q') return false;
        }

        return true;
    }

    void printBoard(const vector<string> &board) {
        for (auto &row : board) {
            for (char c : row) {
                cout << c << ' ';
            }
            cout << '\n';
        }
        cout << "\n";
    }
};

int main() {
    ChessBoard game;

    int size;
    cout << "введите размер поля ";
    cin >> size;

    game.solveQueens(size);

    return 0;
}

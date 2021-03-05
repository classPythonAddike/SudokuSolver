#ifndef PBOARD_H
#define PBOARD_H
#include <iostream>

using namespace std;

void printBoard(int board[9][9]) {
	for (int i = 0; i < 9; i++) {
		cout << " ";
		for (int j = 0; j < 9; j++) {

			if (board[i][j] != 0) {
				cout << board[i][j] << " ";
			}
			else {
				cout << "  ";
			}

			if (j % 3 == 2 && floor(j / 3) < 2) {
				cout << "| ";
			}
		}

		if (i % 3 == 2 && floor(i / 3) < 2) {
			cout << endl << "-----------------------";
		}

		cout << endl;
	}
}

#endif
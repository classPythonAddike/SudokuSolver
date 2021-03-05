#ifndef CBOARD_H
#define CBOARD_H
#include <iostream>

using namespace std;

bool checkRow(int row[9]) {
	bool check[9] = { false, false, false, false, false, false, false, false, false };
	int i;
	bool j;

	for (int k = 0; k < 9; k++) {
		i = row[k];
		cout << "i: " << i << " k: " << k << endl;
		check[i] = true;
	}

	for (int p = 0; p < 9; p++) {
		j = check[p];
		if (j == false) {
			return false;
		}
	}

	return true;
}

bool isSolved(int board[9][9]) {

	int seq[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int column[9];

	for (int x = 0; x < 9; x++) {
		for (int y : board[x]) {
			if (y == 0) {
				return false;
			}
		}
	}

	for (int y = 0; y < 8; y++) {
		if (checkRow(board[y]) == false) {
			return false;
		}
		
		for (int i = 0; i < 9; i++) {
			column[i] = board[i][y];
		}

		if (checkRow(column)) {
			return false;
		}
	}
	return false;
}

#endif
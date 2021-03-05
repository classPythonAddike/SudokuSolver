#ifndef SOLVER_H
#define SOLVER_H
#include <iostream>

using namespace std;

int solveBoard(int board[9][9]) {

	int flat[81];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			flat[(i * 9) + j] = board[i][j];
		}
	}

	for (int i = 0; i < 81; i++) {
		
	}
	return 0;
}

#endif
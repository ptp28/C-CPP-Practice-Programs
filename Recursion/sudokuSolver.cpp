/* Given a 9x9 sudoku puzzle in form of a 2D array, write a program to solve the given sudoku puzzle using the backtracking method.
*/

#include<iostream>
using namespace std;

void printSudoku(int grid[][9]) {
    for(int i=0; i<9; i++) {
        if(i%3 == 0) {
            cout<<endl<<"+-----------------------------+";
        }
        cout<<endl;
        for(int j=0; j<9; j++) {
            if(j%3 == 0) {
                cout<<"|";
            }
            cout<<" "<<grid[i][j]<<" ";
            if(j==8) {
                cout<<"|";
            }
        }
        if(i==8) {
                cout<<endl<<"+-----------------------------+"<<endl;
            }
    }
}

int isValidMove(int grid[][9], int row, int col, int move) {
    //To check if the number duplicated in the row
    for(int j=0; j<9; j++) {
        if(grid[row][j] == move) {
            return 0;
        }
    }
    //To check if the number duplicated in the column
    for(int i=0; i<9; i++) {
        if(grid[i][col] == move) {
            return 0;
        }
    }
    //To check if the number is duplicated in that square
    row = row - row % 3;
    col = col - col % 3;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(grid[row+i][col+j] == move) {
                return 0;
            }
        }
    }
    return 1;
}

int solveSudoku(int grid[][9], int row, int col) {
    if (row == 8 && col == 9) {
        return 1;
    }

    if (col==9) {
            row++;
            col = 0;
        }
    
    if (grid[row][col]!= 0) {
        return solveSudoku(grid, row, col + 1);
    }

    for (int num=1; num<=9 ; num++) {
        if(isValidMove(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid, row, col + 1)) {
                return true;
            }
        }
        grid[row][col] = 0;
    }
    return 0;
}


int main() {
    int grid[9][9] = { 
        {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
        {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
        {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
        {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
        {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
        {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
        {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
        {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
        {0, 0, 5, 2, 0, 6, 3, 0, 0} 
    };
    cout<<"Sudoku solver"<<endl;
    printSudoku(grid);
    solveSudoku(grid, 0, 0);
    cout<<"After solver"<<endl;
    printSudoku(grid);
    return 0;
}
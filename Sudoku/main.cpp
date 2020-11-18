
#include<stdio.h>
#include <iostream>
using namespace std;

int blank_sudoku[9][9] = {
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0}
};
int sudoku_1[9][9] = {
    {5, 0, 0,  0, 0, 2,  0, 0, 0},
    {0, 0, 0,  0, 0, 0,  3, 9, 0},
    {2, 0, 8,  4, 0, 6,  0, 0, 0},
    
    {0, 9, 0,  5, 3, 0,  0, 0, 0},
    {0, 6, 5,  0, 0, 0,  0, 0, 8},
    {0, 8, 0,  0, 0, 0,  9, 0, 3},
    
    {6, 0, 4,  0, 0, 0,  7, 0, 0},
    {0, 0, 0,  0, 0, 0,  2, 1, 0},
    {0, 0, 0,  2, 7, 4,  0, 0, 0}
};
int sudoku_2[9][9] = {
    {0, 0, 5,  9, 0, 6,  0, 0, 1},
    {0, 0, 0,  0, 0, 3,  0, 0, 0},
    {0, 2, 0,  0, 0, 1,  0, 4, 0},
    
    {4, 0, 9,  0, 8, 0,  0, 3, 0},
    {0, 6, 0,  0, 0, 0,  5, 9, 0},
    {0, 0, 0,  2, 0, 9,  7, 6, 4},
    
    {0, 1, 0,  5, 0, 0,  0, 2, 0},
    {6, 0, 0,  0, 4, 2,  0, 0, 0},
    {0, 5, 4,  0, 0, 0,  6, 8, 0}
};
int sudoku_3[9][9] = {
    {0, 0, 8,  7, 0, 6,  3, 0, 4},
    {3, 0, 0,  0, 0, 0,  0, 0, 0},
    {4, 0, 5,  0, 0, 2,  8, 0, 0},
    
    {0, 0, 0,  3, 7, 8,  0, 0, 0},
    {0, 0, 0,  4, 0, 0,  0, 0, 7},
    {1, 0, 0,  0, 0, 0,  0, 0, 3},
    
    {0, 0, 0,  0, 5, 0,  2, 7, 0},
    {0, 3, 6,  0, 4, 0,  9, 0, 0},
    {0, 0, 0,  0, 0, 0,  0, 0, 0}
};
int sudoku_4[9][9] = {
    {0, 0, 8, 7, 0, 6, 3, 5, 4},
    {3, 6, 0, 5, 8, 4, 7, 0, 0},
    {4, 7, 5, 0, 3, 2, 8, 6, 0},
    {6, 5, 0, 3, 7, 8, 1, 0, 0},
    {0, 0, 3, 4, 0, 0, 0, 0, 7},
    {1, 0, 7, 0, 0, 0, 0, 0, 3},
    {0, 0, 0, 0, 5, 3, 2, 7, 6},
    {5, 3, 6, 2, 4, 7, 9, 1, 8},
    {7, 0, 0, 0, 0, 0, 4, 3, 5}
};
int sudoku_5[9][9] = {
    {0, 0, 0,  0, 0, 5,  0, 3, 8},
    {2, 0, 0,  0, 0, 1,  0, 0, 0},
    {0, 0, 0,  0, 0, 8,  1, 0, 0},
    
    {7, 0, 0,  0, 8, 0,  0, 0, 0},
    {3, 6, 0,  0, 9, 0,  5, 0, 1},
    {4, 0, 0,  0, 5, 0,  0, 0, 2},
    
    {5, 0, 3,  8, 0, 9,  0, 6, 0},
    {0, 4, 0,  0, 0, 0,  0, 0, 3},
    {6, 9, 0,  7, 0, 3,  0, 0, 0}
};

int current_sudoku_2[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

int current_sudoku[9][9] = {
    {0, 0, 0, 5, 4, 6, 0, 0, 9},
    {0, 2, 0, 0, 0, 0, 0, 0, 7},
    {0, 0, 3, 9, 0, 0, 0, 0, 4},
    {9, 0, 5, 0, 0, 0, 0, 7, 0},
    {7, 0, 0, 0, 0, 0, 0, 2, 0},
    {0, 0, 0, 0, 9, 3, 0, 0, 0},
    {0, 5, 6, 0, 0, 8, 0, 0, 0},
    {0, 1, 0, 0, 3, 9, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 8, 0, 6}
};

int sudoku[9][9] = {{}};
int matrix[9][9][10] = {{{}}};


void initialize_matrix(int [9][9]);
void deletion();
void advanced_deletion_1();
void advanced_deletion_2();
void advanced_deletion_3();
void assignation();
void assign_values();
int check_blanks();
int check_alternatives();
void solve_sudoku(int [9][9]);
void print_sudoku(int [9][9], int);
void scan_sudoku();


void initialize_matrix(int sudoku_0[9][9]){
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            sudoku[i][j] = sudoku_0[i][j];
        }
    }
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 1; k < 10; k++){
                matrix[i][j][k] = k;
            }
            if (sudoku[i][j]) matrix[i][j][0] = sudoku[i][j];
        }
    }
}

void deletion(){
    
    int box_num_i = 0;
    int box_num_j = 0;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            
            // If there's a blank space
            if(!sudoku[i][j]){
                
                // Go through posibilities
                for (int k = 1; k < 10; k++) {
                    
                    // Delete row posibilities
                    for (int jj = 0; jj < 9; jj++){
                        if(sudoku[i][jj] == k){
                            matrix[i][j][k] = 0;
                            break;
                        }
                    }
                    
                    if (matrix[i][j][k]){
                        
                        // Delete column posibilities
                        for (int ii = 0; ii < 9; ii++){
                            if(sudoku[ii][j] == k){
                                matrix[i][j][k] = 0;
                                break;
                            }
                        }
                        
                        if (matrix[i][j][k]){
                            
                            // Delete box posibilities
                            box_num_i = i/3;
                            box_num_j = j/3;
                            for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                                for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                                    if(sudoku[ii][jj] == k){
                                        matrix[i][j][k] = 0;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
}

void advanced_deletion_1(){
    
    int multiple_k_row[3] = {};
    int multiple_k_col[3] = {};
    
    for (int k = 1; k < 10; k++) {                                      // Go through num posibilities
        for (int iii = 0; iii < 3; iii++){                              // Go through sections
            for (int jjj = 0; jjj < 3; jjj++){
                
                for (int ii = (iii * 3); ii < (iii + 1) * 3; ii++){       // Go through components
                    for (int jj = (jjj * 3); jj < (jjj + 1) * 3; jj++){
                        
                        if (matrix[ii][jj][k] == k && sudoku[ii][jj] == 0 && !matrix[ii][jj][0]){
                            multiple_k_row[ii % 3] ++;
                            multiple_k_col[jj % 3] ++;
                        }
                    }
                }
                
                if (multiple_k_row[0] > 1 && multiple_k_row[1] < 1 && multiple_k_row[2] < 1){
                    
                    for (int j = 0; j < 9; j++){
                        if (!(j == jjj * 3 || j == (jjj * 3 + 1) || j == (jjj * 3 + 2)) && !matrix[iii * 3][j][0])
                            matrix[iii * 3][j][k] = 0;
                    }
                    
                } else if (multiple_k_row[1] > 1 && multiple_k_row[0] < 1 && multiple_k_row[2] < 1){
                    
                    for (int j = 0; j < 9; j++){
                        if (!(j == jjj * 3 || j == (jjj * 3 + 1) || j == (jjj * 3 + 2)) && !matrix[iii * 3 + 1][j][0])
                            matrix[iii * 3 + 1][j][k] = 0;
                    }
                } else if (multiple_k_row[2] > 1 && multiple_k_row[0] < 1 && multiple_k_row[1] < 1){
                    
                    for (int j = 0; j < 9; j++){
                        if (!(j == jjj * 3 || j == (jjj * 3 + 1) || j == (jjj * 3 + 2)) && !matrix[iii * 3 + 2][j][0])
                            matrix[iii * 3 + 2][j][k] = 0;
                    }
                }
                
                if (multiple_k_col[0] > 1 && multiple_k_col[1] < 1 && multiple_k_col[2] < 1){
                    
                    for (int i = 0; i < 9; i++){
                        if (!(i == iii * 3 || i == (iii * 3 + 1) || i == (iii * 3 + 2)) && !matrix[i][jjj * 3][0])
                            matrix[i][jjj * 3][k] = 0;
                    }
                } else if (multiple_k_col[1] > 1 && multiple_k_col[0] < 1 && multiple_k_col[2] < 1){
                    
                    for (int i = 0; i < 9; i++){
                        if (!(i == iii * 3 || i == (iii * 3 + 1) || i == (iii * 3 + 2)) && !matrix[i][jjj * 3 + 1][0])
                            matrix[i][jjj * 3 + 1][k] = 0;
                    }
                    
                } else if (multiple_k_col[2] > 1 && multiple_k_col[0] < 1 && multiple_k_col[1] < 1){
                    
                    for (int i = 0; i < 9; i++){
                        if (!(i == iii * 3 || i == (iii * 3 + 1) || i == (iii * 3 + 2)) && !matrix[i][jjj * 3 + 2][0])
                            matrix[i][jjj * 3 + 2][k] = 0;
                    }
                }
                
                for (int a = 0; a < 3; a++){
                    multiple_k_row[a] = 0;
                    multiple_k_col[a] = 0;
                }
            }
        }
    }
    
}

void advanced_deletion_2(){
    
    
    int only_k_region_row[3] = {};
    int only_k_region_col[3] = {};
    int box_num_i = 0;
    int box_num_j = 0;
    
    for (int k = 1; k < 10; k++) {
        
        // Rows
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                
                if (matrix[i][j][k] == k && !sudoku[i][j] && !matrix[i][j][0]){
                    only_k_region_row[j / 3] ++;
                }
            }
            box_num_i = i/3;
            
            if (only_k_region_row[0] > 1 && only_k_region_row[1] < 1 && only_k_region_row[2] < 1){
                
                box_num_j = 0;
                for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                    for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                        if(ii != i && !sudoku[ii][jj]){
                            matrix[ii][jj][k] = 0;
                        }
                    }
                }
            }else if (only_k_region_row[1] > 1 && only_k_region_row[0] < 1 && only_k_region_row[2] < 1){
                
                box_num_j = 1;
                for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                    for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                        if(ii != i && !sudoku[ii][jj]){
                            matrix[ii][jj][k] = 0;
                        }
                    }
                }
            }else if (only_k_region_row[2] > 1 && only_k_region_row[0] < 1 && only_k_region_row[1] < 1){
                
                box_num_j = 2;
                for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                    for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                        if(ii != i && !sudoku[ii][jj]){
                            matrix[ii][jj][k] = 0;
                        }
                    }
                }
            }
            for (int a = 0; a < 3; a++) only_k_region_row[a] = 0;
        }
        
        // Columns
        for (int j = 0; j < 9; j++){
            for (int i = 0; i < 9; i++){
                
                if (matrix[i][j][k] == k && !sudoku[i][j] && !matrix[i][j][0]){
                    only_k_region_col[i / 3] ++;
                }
            }
            box_num_j = j/3;
            
            if (only_k_region_col[0] > 1 && only_k_region_col[1] < 1 && only_k_region_col[2] < 1){
                
                box_num_i = 0;
                for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                    for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                        if(jj != j && !sudoku[ii][jj]){
                            matrix[ii][jj][k] = 0;
                        }
                    }
                }
            }else if (only_k_region_col[1] > 1 && only_k_region_col[0] < 1 && only_k_region_col[2] < 1){
                
                box_num_i = 1;
                for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                    for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                        if(jj != j && !sudoku[ii][jj]){
                            matrix[ii][jj][k] = 0;
                        }
                    }
                }
            }else if (only_k_region_col[2] > 1 && only_k_region_col[0] < 1 && only_k_region_col[1] < 1){
                
                box_num_i = 2;
                for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                    for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                        if(jj != j && !sudoku[ii][jj]){
                            matrix[ii][jj][k] = 0;
                        }
                    }
                }
            }
            for (int a = 0; a < 3; a++) only_k_region_col[a] = 0;
        }
    }
}

void advanced_deletion_3(){
    
}

void assignation(){
    
    int box_num_i = 0;
    int box_num_j = 0;
    int only_k = 0;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            
            // If there's a blank space
            if (!sudoku[i][j]){
                
                // Go through row posibilities
                for (int k = 1; k < 10; k++) {
                    for (int jj = 0; jj < 9; jj++){
                        
                        if (matrix[i][jj][k] == k && matrix[i][j][k] == k && !sudoku[i][jj])   only_k++;
                    }
                    
                    if (only_k == 1){
                        for(int a = 1; a < 10; a++) if(a != k) matrix[i][j][a] = 0;
                        matrix[i][j][0] = k;
                    }
                    only_k = 0;
                }
                
                // Go through column posibilities
                for (int k = 1; k < 10; k++) {
                    for (int ii = 0; ii < 9; ii++){
                        
                        if (matrix[ii][j][k] == k && matrix[i][j][k] == k && !sudoku[ii][j])   only_k++;
                    }
                    
                    if (only_k == 1){
                        for(int a = 1; a < 10; a++) if(a != k) matrix[i][j][a] = 0;
                        matrix[i][j][0] = k;
                    }
                    only_k = 0;
                }
                
                // Go through box posibilities
                for (int k = 1; k < 10; k++) {
                    
                    box_num_i = i/3;
                    box_num_j = j/3;
                    
                    for (int ii = box_num_i * 3; ii < (box_num_i + 1) * 3; ii++){
                        for (int jj = box_num_j * 3; jj < (box_num_j + 1) * 3; jj++){
                            
                            if(matrix[ii][jj][k] == k && matrix[i][j][k] == k && !sudoku[ii][jj])  only_k++;
                        }
                    }
                    if (only_k == 1){
                        for(int a = 1; a < 10; a++) if(a != k) matrix[i][j][a] = 0;
                        matrix[i][j][0] = k;
                    }
                    only_k = 0;
                }
            }
        }
    }
}

void assign_values(){
    
    int definitive = 0;
    int def_value = 0;
    
    // Assign values
    for (int i = 0; i < 9; i++){                    // Assign posibilities to matrix
        for (int j = 0; j < 9; j++){
            for (int kk = 1; kk < 10; kk++){
                if (matrix[i][j][kk]){
                    
                    definitive ++;
                    def_value = kk;
                    if (definitive > 1){
                        definitive = 0;
                        break;
                    }
                }
            }
            
            if(definitive == 1){
                matrix[i][j][0] = def_value;
                definitive = 0;
            }
        }
    }
    
    for (int i = 0; i < 9; i++){                    // Assign posibilities to sudoku
        for (int j = 0; j < 9; j++){
            if(matrix[i][j][0] && !sudoku[i][j]){
                
                sudoku[i][j] = matrix[i][j][0];
            }
        }
    }
}

int check_blanks(){
    
    int blank_num = 0;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if(!sudoku[i][j]) blank_num++;
        }
    }
    return blank_num;
}

int check_alternatives(){
    
    int alternatives = 0;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 1; k < 10; k++){
                if (!sudoku[i][j]){
                    if(matrix[i][j][k]) alternatives++;
                }
                else break;
            }
        }
    }
    return alternatives;
}

void check_solution(){
    
    int sol_ok = 0;
    int num_count[9] = {};
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 1; k < 10; k++){
                if (sudoku[i][j] == k) num_count[k - 1] ++;
            }
        }
    }
    for (int k = 0; k < 9; k++){
        
        if (num_count[k] == 9) sol_ok ++;
    }
    
    if (sol_ok == 9) cout << "Solution ok" << endl;
}


void solve_sudoku(int sudoku_0[9][9]){
    
    int blank_num_prev = 0;
    int blank_num = 0;
    
    initialize_matrix(sudoku_0);
    
    deletion();
    print_sudoku(sudoku, 9);
    
    do{
        assignation();
        assign_values();
        deletion();
        
        blank_num = check_blanks();
        if (blank_num != blank_num_prev) blank_num_prev = blank_num;
        else break;
    }while(1);
    
    do{
        advanced_deletion_1();
        assign_values();
        deletion();
        assignation();
        assign_values();
        deletion();
        
        blank_num = check_blanks();
        if (blank_num != blank_num_prev) blank_num_prev = blank_num;
        else break;
    }while(1);
    
    do{
        advanced_deletion_2();
        assign_values();
        deletion();
        assignation();
        assign_values();
        deletion();
        
        blank_num = check_blanks();
        if (blank_num != blank_num_prev) blank_num_prev = blank_num;
        else break;
    }while(1);
    
    do{
        advanced_deletion_3();
        assign_values();
        deletion();
        assignation();
        assign_values();
        deletion();
        
        blank_num = check_blanks();
        if (blank_num != blank_num_prev) blank_num_prev = blank_num;
        else break;
    }while(1);
    
    if(blank_num){
        cout << "\nNo possible solution under the current restrictions!"<< endl;
        cout << "Blank spaces left: " << check_blanks() << endl;
        cout << "Alternatives left: " << check_alternatives() << endl;
        cout <<"\n";
        print_sudoku(sudoku, 9);
    }
    else{
        blank_num_prev = check_blanks();
    }
    
    if (!blank_num){
        
        cout << "Solution: \n\n";
        print_sudoku(sudoku, 9);
        check_solution();
    }
}


void print_sudoku(int sudoku[9][9], int what){
    
    cout << "\n Sudoku:" << "\n\n";
    
    if (what == 9){
        for (int i = 0; i < 9; i++){
            
            cout << " " << " ";
            for (int j = 0; j < 9; j++){
                cout << sudoku[i][j]<< " ";
                if (!((j + 1) % 3) && j != 8) cout << "| ";
            }
            
            if (!((i + 1) % 3) && i != 8) cout << "\n "<<" ---------------------\n";
            else cout << "\n";
        }
        
        cout << "\n";
    }
    else if (what < 9){
        for (int i = 0; i < what + 1; i++){
            
            cout << " " << " ";
            for (int j = 0; j < 9; j++){
                cout << sudoku[i][j]<< " ";
                if (!((j + 1) % 3) && j != 8) cout << "| ";
            }
            
            if (!((i + 1) % 3) && i != 8) cout << "\n "<<" ---------------------\n";
            else cout << "\n";
        }
    }
}


void scan_sudoku(){
    
    int value;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> value;
            current_sudoku[i][j] = value;
        }
        print_sudoku(current_sudoku, i);
    }
}


int main(){
    
    //        char decision;
    //        int correct_input = 1;
    
    cout << "Welcome to sudoku solver!" << "\n\n";
    cout << " To begin simply input your sudoku. Input each number, one line at a time, set blanks to 0.\n\n";
    
    //    scan_sudoku();
    
    cout << "Your input was: \n";
    print_sudoku(sudoku_5, 9);
    solve_sudoku(sudoku_5);
    //        do{
    //            cout << "Is it correct? (Y/N)\n";
    //            cin >> decision;
    //            switch (decision) {
    //                case 'Y':
    //                    solve_sudoku(sudoku_1);
    //                    break;
    //                case 'N':
    //                    scan_sudoku();
    //                    break;
    //                default:
    //                    correct_input = 0;
    //                    break;
    //            }
    //        } while(!correct_input);
    
    return 0;
}

#pragma once


//const int maxrow = 20, maxcol = 60;    //  grid dimensions  

class Life {
public:
   
    void initialize();
    void print();
    void update();
    void setMaxRow(int maxrow);
    void setMaxCol(int maxcol);
    int getMaxRow();
    int getMaxCol();

private:
 
    int maxrow, maxcol;
    int** grid;
    //int grid[maxrow + 2][maxcol + 2];  //  allows for two extra rows and columns
    int neighbor_count(int row, int col);
};

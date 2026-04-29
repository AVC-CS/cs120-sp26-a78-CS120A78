#ifndef MAIN_HPP
#define MAIN_HPP

// Count cross-shapes in a 10x10 binary grid.
// A cross is centered at M[i][j]==1 with M[i-1][j], M[i+1][j],
// M[i][j-1], M[i][j+1] all equal to 1.

#include <iostream>
#include <iomanip>
using namespace std;

int findcross(int[][10]);
bool checkup(int[][10], int, int);
bool checkdown(int[][10], int, int);
bool checkleft(int[][10], int, int);
bool checkright(int[][10], int, int);
void printout(int[][10], int);

int findcross(int M[][10])
{
    // TODO: scan every cell. If M[i][j]==1 and all four orthogonal neighbors
    //       are also 1, count it as a cross. Return the total count.
    int cnt = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (M[i][j] == 1)
            {
                if (checkup(M, i, j) && checkdown(M, i, j) && checkleft(M, i, j) && checkright(M, i, j))
                {
                    cout << "Found cross center " << i << "," << j << endl;
                    M[i][j] = 8;
                    cnt++;
                }
            }
    return cnt;
}

bool checkup(int M[][10], int i, int j)
{
    if (i == 0) return false;
    return M[i - 1][j] == 1;
}

bool checkdown(int M[][10], int i, int j)
{
    if (i == 9) return false;
    return M[i + 1][j] == 1;
}

bool checkleft(int M[][10], int i, int j)
{
    if (j == 0) return false;
    return M[i][j - 1] == 1;
}

bool checkright(int M[][10], int i, int j)
{
    if (j == 9) return false;
    return M[i][j + 1] == 1;
}

void printout(int M[][10], int cnt)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << setw(5) << M[i][j];
        cout << endl;
    }
    cout << "Total found cross " << cnt << endl;
}

#endif

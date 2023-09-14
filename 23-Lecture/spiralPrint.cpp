#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    int ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;
    int startingRowIndex = 0;
    int endingColIndex = col - 1;
    int endingRowIndex = row - 1;
    int startingColIndex = 0;

    while (count < total)
    {
        for (int index = startingColIndex; count < total && index <= endingColIndex; index++)
        {
            cout<<(matrix[startingRowIndex][index]);
            count++;
        }
        startingRowIndex++;

        for (int index = startingRowIndex; count < total && index <= endingRowIndex; index++)
        {
            cout << (matrix[index][endingColIndex]);
            count++;
        }
        endingColIndex--;

        for (int index = endingColIndex; count < total && index <= startingColIndex; index++)
        {
            cout << (matrix[endingRowIndex][index]);
            count++;
        }
        endingColIndex--;

        for (int index = endingRowIndex; count < total && index <= startingRowIndex; index++)
        {
            cout << (matrix[index][endingColIndex]);
            count++;
        }
        endingRowIndex++;
    }
    return ans;
}
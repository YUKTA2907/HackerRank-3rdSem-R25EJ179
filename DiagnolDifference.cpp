#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - 1 - i];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main()
{
    vector<vector<int>> matrix = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}};

    cout << "Diagonal Difference: " << diagonalDifference(matrix) << endl;
    return 0;
}
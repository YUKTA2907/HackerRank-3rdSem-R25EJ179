#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    int aliceScore = 0;
    int bobScore = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            aliceScore++;
        }
        else if (a[i] < b[i])
        {
            bobScore++;
        }
    }

    return {aliceScore, bobScore};
}

int main()
{
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    vector<int> result = compareTriplets(a, b);

    cout << "Result: " << result[0] << " " << result[1] << endl;
    return 0;
}
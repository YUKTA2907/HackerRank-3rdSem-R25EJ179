#include <iostream>
#include <vector>

using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    vector<vector<int>> arr(n);
    vector<int> answers;
    int lastAnswer = 0;

    for (const auto &q : queries)
    {
        int type = q[0];
        int x = q[1];
        int y = q[2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1)
        {
            arr[idx].push_back(y);
        }
        else if (type == 2)
        {
            int elementIndex = y % arr[idx].size();
            lastAnswer = arr[idx][elementIndex];
            answers.push_back(lastAnswer);
        }
    }

    return answers;
}

int main()
{
    int n = 2;
    vector<vector<int>> queries = {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}};

    vector<int> ans = dynamicArray(n, queries);
    cout << "Dynamic Array Answers: ";
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
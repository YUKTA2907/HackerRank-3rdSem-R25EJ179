#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries)
{
    vector<int> results;

    for (const string &query : queries)
    {
        int count = 0;
        for (const string &str : stringList)
        {
            if (str == query)
            {
                count++;
            }
        }
        results.push_back(count);
    }

    return results;
}

int main()
{
    vector<string> strings = {"ab", "ab", "abc"};
    vector<string> queries = {"ab", "abc", "bc"};
    vector<int> res = matchingStrings(strings, queries);

    cout << "Matching counts: ";
    for (int val : res)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
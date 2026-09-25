#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s)
{
    string period = s.substr(8, 2);
    int hour = stoi(s.substr(0, 2));

    if (period == "AM")
    {
        if (hour == 12)
        {
            s.replace(0, 2, "00");
        }
    }
    else
    { // PM
        if (hour != 12)
        {
            hour += 12;
            s.replace(0, 2, to_string(hour));
        }
    }

    // Remove the AM/PM part
    return s.substr(0, 8);
}

int main()
{
    string s = "07:05:45PM";
    cout << "24-Hour Time: " << timeConversion(s) << endl;
    return 0;
}
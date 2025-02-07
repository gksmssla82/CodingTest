#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string dial;
    int time = 0;

    cin >> dial;

    for (int i = 0; i < dial.length(); ++i)
    {
        // 2
        if (65 <= dial[i] && dial[i] <= 67)
            time += 3;
        // 3
        else if (68 <= dial[i] && dial[i] <= 70)
            time += 4;
        // 4
        else if (71 <= dial[i] && dial[i] <= 73)
            time += 5;
        // 5
        else if (74 <= dial[i] && dial[i] <= 76)
            time += 6;
        // 6
        else if (77 <= dial[i] && dial[i] <= 79)
            time += 7;
        // 7
        else if (80 <= dial[i] && dial[i] <= 83)
            time += 8;
        // 8
        else if (84 <= dial[i] && dial[i] <= 86)
            time += 9;
        // 9
        else
            time += 10;
    }

    cout << time;

    return 0;
}
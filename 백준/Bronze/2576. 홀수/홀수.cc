#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input;
    int sum = 0;
    int min = 100;
    int cnt = 0;

    for (int i = 0; i < 7; ++i)
    {
        cin >> input;

        if (input % 2 != 0)
        {
            ++cnt;
            sum += input;

           if (input < min)
            {
                min = input;
            }
        }
    }


    if (cnt == 0)
        cout << "-1";
    else
    {
        cout << sum << '\n' << min;
    }
    

   
   
    return 0;
}



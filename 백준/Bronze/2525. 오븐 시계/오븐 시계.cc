#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int hour, min;
    int inputmin;
    int totalmin;
   
    cin >> hour >> min;
    cin >> inputmin;

    // 시간,분,입력된분을 모두 분단위로 바꾼다, 시간은 60분이니 60을 곱함
    totalmin = hour * 60 + min + inputmin;

    // 시간은 총 0 ~ 23시니 나머지 연산자로 체크해줌
    hour = (totalmin / 60) % 24;
    // 0 ~ 59 를 표현하기 위해 60을 나머지 연산자로 체크
    min = totalmin % 60;


    cout << hour << " " << min;
   
    return 0;
}

#include <bits/stdc++.h>

using namespace std;





// 인원수 = 매개변수 스테이지
// 해당 스테이지 실패자 / 해당 스테이지 도전자 = 실패율
// 

bool compare(pair<int, float>& a, pair<int, float> b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) 
{
    vector<int> answer;

    vector<float> Challanger(N + 2, 0.0);
    vector<float> FailChallanger(N + 2, 0.0);

    for (int i = 0; i < stages.size(); ++i)
    {
        for (int j = 1; j <= stages[i]; ++j)
             ++Challanger[j];

        
        ++FailChallanger[stages[i]];
    }

    vector<pair<int, float>> failratio(N);

    for (int i = 0; i < N; ++i)
    {
        failratio[i].first = i + 1;

        if (Challanger[i + 1] == 0)
            failratio[i].second = 0;
        else
            failratio[i].second = FailChallanger[i + 1] / Challanger[i + 1];
    }

    sort(failratio.begin(), failratio.end(), compare);

    for (int i = 0; i < N; ++i)
        answer.emplace_back(failratio[i].first);


    int a = 10;

    return answer;
}
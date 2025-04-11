#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answer)
{
	vector<int> patern1 = { 1,2,3,4,5 };
	vector<int> patern2 = { 2,1,2,3,2,4,2,5 };
	vector<int> patern3 = { 3,3,1,1,2,2,4,4,5,5 };

	vector<int> result;

	vector<int> answer_cnt(3,0);

	for (int i = 0; i < answer.size(); ++i)
	{
		if (answer[i] == patern1[i % patern1.size()])
			++answer_cnt[0];
		if (answer[i] == patern2[i % patern2.size()])
			++answer_cnt[1];
		if (answer[i] == patern3[i % patern3.size()])
			++answer_cnt[2];
	}

	int max_score = *max_element(answer_cnt.begin(), answer_cnt.end());

	for (int i = 0; i < 3; ++i)
	{
		if (max_score == answer_cnt[i])
			result.emplace_back(i + 1);
	}

	return result;
}
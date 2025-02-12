#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int arr[26] = {0};

	string word;

	cin >> word;

	// a ~ z, a에서 a뺴면 0번인덱스 증가 b에서 a빼면 1번인덱스 증가
	for (auto c : word)
		arr[c - 'a']++;

	for (int i = 0; i < 26; ++i)
		cout << arr[i] << ' ';
	
	return 0;
}




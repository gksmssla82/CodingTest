#include <bits/stdc++.h>

using namespace std;


void Hanoi_Top(int start_top, int end_top, int num)
{
	// n은1일떄 
	if (num == 1)
	{
		cout << start_top << ' ' << end_top << '\n';
		return;
	} 
	// n-1개의 원판을 기둥 1(a)에서 기둥 2(6- a- b)로 옮긴다.
	Hanoi_Top(start_top, 6 - start_top - end_top, num - 1);
	// n번 원판을 기둥 a에서 기둥 b로 옮긴다.
	cout <<  start_top << ' ' << end_top << '\n';
	// n-1개의 원판을 기둥 2(6-a-b)에서 기둥 3(b)로 옮긴다.
	Hanoi_Top(6 - start_top - end_top, end_top, num - 1);
}

int main()
{
	int k;
	cin >> k;

	// (1 << k) = 2^K = 8 
	cout << (1 << k) - 1 << '\n';

	Hanoi_Top(1, 3, k);

}
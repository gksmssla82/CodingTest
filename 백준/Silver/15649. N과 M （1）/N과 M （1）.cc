#include <bits/stdc++.h>

using namespace std;

//1. 아이디어
//- 백트레킹 재귀함수 안에서, for문 돌면서 숫자 선택(이떄 방문여부 확인)
//- 재귀 함수에서 m개를 선택할경우 출력
//- n은 사용할 숫자 갯수 m은 열

//2. 시간복잡도
//백트레킹은 중복이 가능할시 O(N^N), N = 8까지
//중복이 불가시 O(N!) N = 10까지
//중복 불가 조건 8까지

//3. 자료구조
//방문 여부 확인 bool[]
//선택값 입력 배열 int[]

#define MAX 10

int n, m;
int arr[MAX];
bool isused[MAX];

void func(int k) // 현재 K개까지 수를 택했음.
{
	if (k == m)  // M개를 모두 택했으면
	{
		for (int i = 0; i < m; ++i) 
			cout << arr[i] << ' '; // arr에 기록해둔 수를 출력

		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; ++i) // 1부터 N까지의 수에 대해
	{ 
		if (!isused[i]) // 아직 i가 선택되지 않았으면
		{
			arr[k] = i; // k번쨰 수를 i로 정함
			isused[i] = true; // i를 사용되었다고 표시
			func(k + 1);  // 다음 수를 정하러 한 단계 더 들어감
			isused[i] = false; // k번쨰 수를 i로 정한 모든 경우에 대해 다 확인했으니 i를 이제 사용되지않았다고 명시함.
		}
	}
}

int main()
{
	cin >> n >> m;

	func(0);

	return 0;
}
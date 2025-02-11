#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 9개에서 7개의합 100 찾아내고 출력
	int arr[9], result[7];
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> arr[i];
	}

	// 9명중 2명을 뺸 모든 조합 
	for (int a = 0; a < 8; a++)
	{
		int total = 0;

		for (int b = a + 1; b < 9; b++)
		{
			total = 0;

			for (int c = 0, i = 0; c < 9; c++)
			{
				if (c != a && c != b)
					result[i++] = arr[c];
			}

			for (int d = 0; d < 7; ++d)
				total += result[d];

			if (total == 100)
				break;
		}

		if (total == 100)
			break;
	}

	sort(result, result + 7);

	for (int i = 0; i < 7; ++i)
	{
		cout << result[i] << '\n';
	}

	return 0;
}


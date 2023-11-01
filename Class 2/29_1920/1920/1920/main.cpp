#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int n, m;

int Search(int num);

int main(void)
{
	int temp;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		printf("%d\n", Search(temp));
	}


	return 0;
}

int Search(int num)
{
	int left;
	int mid;
	int right;

	left = 0;
	right = n - 1;

	while (right >= left)
	{
		mid = (right + left) / 2;

		if (v[mid] == num)
			return 1;

		if (v[mid] < num)
		{
			left = mid + 1;
		}

		if (v[mid] > num)
		{
			right = mid - 1;
		}
	}

	return 0;
}
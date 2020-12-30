#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
#include <numeric>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <complex>
#include <memory.h>
#include <time.h>

using namespace std;

typedef long long LL;

char buf[4];
int G[3][3];
int A[3];

int main()
{
	for(int i = 0; i < 3; ++i)
	{
		scanf("%s", buf);
		cout<<G[buf[0]-'A'][buf[2]-'A']<<'\n';
		if (buf[1] == '>')
			G[buf[2] - 'A'][buf[0] - 'A'] = 1;
		else
			G[buf[0] - 'A'][buf[2] - 'A'] = 1;
	}
	for(int i = 0; i < 3; ++i)
		A[i] = i;
	do
	{
		bool ok = 1;
		for(int i = 0; i < 3; ++i)
			for(int j = i + 1; j < 3; ++j)
				ok &= G[A[i]][A[j]];
		if (ok)
		{
			for(int i = 0; i < 3; ++i)
				printf("%c", 'A' + A[i]);
			printf("\n");
			return 0;
		}
	}
	while (next_permutation(A, A + 3));
	printf("Impossible\n");
	*/
	return 0;
}

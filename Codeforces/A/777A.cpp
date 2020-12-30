#include <cstdio>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>


using namespace std;

int main() {
	int n, x;
	scanf("%d%d", &n, &x);
	n %= 6;
	cout<<"n: "<<n<<'\n';
	while (n--) {
            cout<<"new n: "<<n<<'\n';
		if (n & 1) {
                cout<<"odd n: "<<n<<'\n';
			if (x != 0) x = 3 - x;
			cout<<"x: "<<x<<'\n';
		}
		else {
		    cout<<"even n: "<<n<<'\n';
			if (x != 2) x = 1 - x;
			cout<<"x: "<<x<<'\n';
		}
	}
	printf("%d", x);
}

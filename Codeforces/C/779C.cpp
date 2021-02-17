#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
const int N = 1e6 + 50;


int a[N], b[N];
pair < int, int > d[N];

int main()
{
    ios::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        d[i] = make_pair(a[i] - b[i], i);
    }
    sort(d, d + n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i < k || d[i].first < 0) {
            sum += a[d[i].second];
        }
        else
            sum += b[d[i].second];
    }
    cout << sum;
    return 0;
}

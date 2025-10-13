#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> prefixSum(n + 1);

    a[0] = 1;
    prefixSum[0] = f(a[0]);

    for (int i = 1; i <= n; i++)
    {
        a[i] = prefixSum[i - 1];
        prefixSum[i] = prefixSum[i - 1] + f(a[i]);
    }

    cout << a[n] << "\n";
    
    return 0;

}

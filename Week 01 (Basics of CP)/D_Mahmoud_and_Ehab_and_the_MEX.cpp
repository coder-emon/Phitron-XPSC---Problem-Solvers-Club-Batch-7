//https://codeforces.com/problemset/problem/862/A

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0;i < n; i++)
        cin >> arr[i];

    int ops = 0;
    for(int i = 0; i < x; i++){
        if(find(arr.begin(),arr.end(),i) == arr.end())
            ops++;
    }
    if(find(arr.begin(),arr.end(),x) != arr.end())
        ops++;

    cout << ops;
    
    return 0;
}
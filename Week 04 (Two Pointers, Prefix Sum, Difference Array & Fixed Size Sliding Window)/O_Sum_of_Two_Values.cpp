#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int,int>> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(),a.end());

    bool flag = false;
    int pos_1 , pos_2;
    for(int i = 1, j = n; i < j;){
        if(a[i].first + a[j].first > x) j--;
        else if(a[i].first + a[j].first < x) i++;
        else{
            flag = true;
            pos_1 = a[i].second, pos_2 = a[j].second;
            break;
        }
    }

    if(flag)
        cout << pos_1 << " " << pos_2;
    else
        cout << "IMPOSSIBLE";
    
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> ms;

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }
    int i;
    int pos = 1 ;
    for(i = 1; i <= n; i++){
        auto it = ms.lower_bound(i);
        if(it == ms.end()){
            break; 
        }else{
            ms.erase(it);
            pos = i;
        }
    }
    cout << pos;
    return 0;
}
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
    deque<int> dq;

    int i;
    for( i = 0; i < n; i++){
        int x;
        cin >> x;
        if(i % 2 == 0){
            dq.push_front(x);
        }else{
            dq.push_back(x);
        }
    }

    if(i % 2 == 0){
        reverse(dq.begin(), dq.end());
    }
    
    for(int x : dq)cout << x << " ";
    return 0;
}
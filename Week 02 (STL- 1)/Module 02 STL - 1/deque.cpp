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
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        dq.push_back(x);
    }

    for(auto val : dq){
        cout << val << " ";
    }
    cout << nl;
    dq.push_front(1);       //O(N)
    dq.push_front(2);
    dq.push_back(15);

    for(auto val : dq){
        cout << val << " ";
    }

    cout << nl;
    dq.pop_front();     //O(N) 
    dq.pop_back();

    for(auto  val : dq){
        cout << val << " ";
    }

    cout << nl;
    cout << dq.front() << " " << dq.back() << nl;

    
    return 0;
}
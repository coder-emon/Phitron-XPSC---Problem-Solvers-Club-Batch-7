#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int>s;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        if(s.size()==1){
            cout << *(s.begin()) -1 << endl;
        }
        else if(s.size()>2){
            cout << *(s.rbegin()) -1 << endl;
        }
        else{
            int mn = *(s.begin());
            int mx = *(s.rbegin());
            for(int i=mx-1; i>=0; i--){
                if(i!=mn){
                    cout << i << endl;
                    break;
                }
            }
        }
        
    }
    
    return 0;
}
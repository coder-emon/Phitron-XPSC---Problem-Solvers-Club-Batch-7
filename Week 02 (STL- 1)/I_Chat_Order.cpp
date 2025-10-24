
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
    stack<string> st;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        st.push(s);
    }
    vector <string> res;
    set<string> exist;
    while(!st.empty()){
        string s = st.top();
        if(exist.find(s) == exist.end()){
            res.push_back(s);
        }
        exist.insert(s);
        st.pop();
    }
    
    
    for(auto s : res) cout << s << nl;
    return 0;
}
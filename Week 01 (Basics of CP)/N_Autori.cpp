//https://open.kattis.com/problems/autori

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string res;
    cin >> s;
    for(char c : s){
        if(c >= 'A' && c <= 'Z')
            res+= c;
    }
    cout << res;
    
    return 0;
}
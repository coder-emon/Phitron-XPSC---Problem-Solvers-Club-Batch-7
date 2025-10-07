//https://open.kattis.com/problems/hissingmicrophone

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    bool flag = false;
    for(int i = 1; i < n; i++){
        if(s[i-1] == s[i] && s[i] == 's')
            flag = true;
    }

    if(flag)
        cout << "hiss";
    else
        cout << "no hiss";
    
    return 0;
}
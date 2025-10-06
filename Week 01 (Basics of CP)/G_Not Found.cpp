//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

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
    int fre[26] ={0};

    for(int x : s){
        fre[x - 'a']++;
    }
    int  n = s.size();
    bool flag = false;
    for(int i = 0; i <26; i++){
        if(fre[i] == 0){
            cout << (char)(i + 'a');
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << "None";
    }
    
    return 0;
}
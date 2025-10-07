//https://open.kattis.com/problems/quadrant

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;
    if(x > 0 && y > 0 ){
        cout << "1";
    }else if(x < 0 && y > 0 ){
        cout << "2";
    }else if(x < 0 && y < 0 ){
        cout << "3";
    }else{
        cout << "4";
    }
    
    return 0;
}
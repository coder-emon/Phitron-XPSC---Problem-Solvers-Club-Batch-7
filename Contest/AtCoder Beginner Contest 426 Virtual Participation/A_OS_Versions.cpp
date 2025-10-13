#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string x,y;
    cin >> x >> y;
    if(x == y){
        cout << "Yes";
    }else if(x == "Lynx" && y == "Serval" || y == "Ocelot"){
        cout << "Yes";
    }else if(x == "Serval" && y == "Ocelot"){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    return 0;
}
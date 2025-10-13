#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // pair<string, int> p = {"Emon", 5};
    // pair<string, int> p = make_pair("Rahim", 9);

    // cin >> p.first >> p.second;
    // cout << p.first << " "  << p.second  << nl;
    // auto [name,roll] = p;
    // cout << name << " "  << roll << nl;

    // int n;
    // cin >> n;
    // pair<string,int> p[n];
    // for(int i = 0; i < n; i++){
    //     cin >> p[i].first >> p[i].second;
    // }

    // for(int i = 0; i < n; i++){
    //     cout << p[i].first << " " << p[i].second << nl;
    // }

    // for(int i = 0; i < n; i++){
    //     auto [name, roll] = p[i];
    //     cout << name << " " << roll << nl;
    // }

    // tuple <string, int, string> t = make_tuple("Emon", 7, "01798293884"); 

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);

    // auto [name, roll, num] = t;
    // cout << name << " " << roll << " " << num << nl;
    
    // int n;
    // cin >> n;
    // tuple<string,int,string> t[n];
    // for(int i = 0; i < n; i++){
    //     // cin >> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]);
    //     string name,num;
    //     int roll;
    //     cin >> name >> roll >> num;
    //     // t[i] = make_tuple(name,roll,num);
    //     t[i] = {name, roll, num};   
    // }

    // for(int i = 0; i < n; i++){
    //     // cout << get<0>(t[i]) << " " << get<1>(t[i]) << " " <<get<2>(t[i]) << nl;
    //     auto [name,roll,num] = t[i];
    //     cout << name << " " << roll << " " << num << nl;
    // }

    // pair<string,pair<int,string>> pp = {"Emon", {5,"03432"}};
    // cout << pp.first << " " << pp.second.first << " " << pp.second.second << nl;

    pair<string,pair<int,pair<int,string>>> pp = {"Emon", {5, {89,"0173298"}}};
    cout << pp.first << " " << pp.second.first << " " << pp.second.second.first << " " << pp.second.second.second << nl;


    return 0;
}
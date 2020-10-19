#include<bits/stdc++.h>
#define st string
#define ll long long int
#define endl '\n'
using namespace std;

void fun(){
    ll n;
    cin >> n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v.front()==v.back())
        cout << n << endl;
    else
        cout << "1" << endl;
}

int main(){
     ll t;
     cin >> t;
     while(t--){
        fun();
     }
     return 0;
}

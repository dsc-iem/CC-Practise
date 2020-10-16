#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ll n,d;
    cin >> n >> d;
    vector<ll>a;
    for(ll i=0;i<n;i++){
            ll x;
            cin >> x;
            a.push_back(x);
    }
    for(ll i=d;i<n;i++){
            cout << a[i] << " ";
    }
    for(ll i=0;i<d;i++){
            cout << a[i] << " ";
    }

    return 0;
}


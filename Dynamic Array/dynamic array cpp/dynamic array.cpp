#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){

    ll n,q;
    cin >> n >> q;
    vector<ll>seqList[n];
    ll lastAns = 0;
    for(ll i=0;i<q;i++) {
        ll ch,x,y;
        cin >> ch >> x >> y;
        ll pos = (x^lastAns)%n;
        if(ch==1) {
                seqList[pos].push_back(y);
            }
            else if(ch==2){
                ll index = y%((ll)seqList[pos].size());
                lastAns = seqList[pos][index];
                cout << lastAns << endl;
            }
    }
    return 0;
}


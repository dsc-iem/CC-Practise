#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int q;
    cin >> q;
    while(q--){
        ll a, b, c;
        cin >> a >> b >> c;
        ll result = abs(a-b) + abs(b-c) + abs(c-a);
        ll ca, cb, cc;
        for(ll i=-1 ; i<=1 ; i++){
            for(ll j=-1 ; j<=1 ; j++){
                for(ll k=-1 ; k<=1 ; k++){
                    ca = a + i;
                    cb = b + j;
                    cc = c + k;
                    result = min(abs(ca-cb) + abs(ca-cc) + abs(cb-cc), result);
                }
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
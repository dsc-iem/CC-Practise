#include<bits/stdc++.h>
 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define alla(a, n) a, a + n
#define debug1(x) cout<<x<<endl;
#define debug2(x,y) cout<<x<<" " << y<<endl;
#define debug3(x,y,z) cout<<x<<" " << y<<" " << z<<endl;
 
using namespace std;
 

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
 

template <typename T>
T modpow(T base, T exp, T modulus){  
    base %= modulus;  T result = 1;  
    while(exp > 0){    
        if(exp & 1) result = (result * base) % modulus;    
        base = (base * base) % modulus;    
        exp >>= 1;  
    }  
    return result;
}
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }
 
// Some contants
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans=0;
        
        //debug3(a,b,c);                  
        if(b==0)
        {
            cout<<0<<endl;
        }
        else if(a==0)
        {
            cout<<3*min(c/2,b)<<endl;
        }
        else if(c==0)
        {
            cout<<3*min(a,b/2)<<endl;
        }
        else
        {
            c=c/2;
            ans=ans+3*min(b,c);
            b=b-min(b,c);;
            ans=ans+3*min(a,b/2);        
            cout<<ans<<endl;
        }
        
        
    }
}
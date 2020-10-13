#include <bits/stdc++.h>



using namespace std;

/************************Pre processors & typedefs************************/

#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()

//loop
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
//for selecting all of a vector or something
#define all(v) v.begin(), v.end()

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))

//all array
#define alla(a, n) a, a + n

//ignore extra line while taking input
#define clrbuf cin.ignore(numeric_limits<streamsize>::max(),'\n');

//precision
#define preciset(x) cout<<setprecision(x)<<fixed;


// datatypes
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;


signed main()
{
	
    ll t;
    cin>>t;
	while(t--){
	ll a,b,c;
	cin>>a>>b>>c;
	ll ans=1e10;
	rep(3)
	{
		ll x=a+(i-1);
		repc(j,3)
		{
			ll y=b+(j-1);
			repc(k,3)
			{
				ll z=c+(k-1);
				ans=min(abs(x-y)+abs(x-z)+abs(z-y),ans);
				
			
			}
		}
	}
   cout<<ans<<endl;
}

	return 0;
}
 





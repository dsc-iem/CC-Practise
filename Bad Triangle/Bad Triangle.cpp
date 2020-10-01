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

// datatypes
typedef long long ll;


signed main()
{
	
    ll t;
    cin>>t;
	while(t--){
		
		ll n;
		cin>>n;
		ll a[n];
		rep(n)
		cin>>a[i];
		ll f=0;
		for(ll i=2;i<n;i++)
		{
			if((a[0]+a[1])<=a[i])
			{
				
				f=i;
				break;
			}
		}
		if(f)
			cout<<1<<" "<<2<<" "<<f+1<<endl;
		else
			cout<<"-1"<<endl;
	}

	return 0;
}






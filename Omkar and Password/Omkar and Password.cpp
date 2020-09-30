#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {

	int n; cin >> n;

	ll arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int count = 0;

	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) {
			cout << "1" << endl;
			return;
		}
	}

	cout << n << endl;

}

int main() {

	int t; cin >> t;
	while (t--) {
		solve();
	}
}
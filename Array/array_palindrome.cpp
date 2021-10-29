/* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/

#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define int long long
#define ld long double
#define endl "\n";

const int mod = 1000000007;
using namespace std;


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 1;
	//cin>>test;
	while (test--) {

		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int l = 0, r = n - 1;
		bool pal = true;
		while (l < r)
		{
			if (arr[l] == arr[r])
			{
				l++;
				r--;
			}
			else
			{	pal = false;
				cout << "false" << endl;
				break;
			}
		}

		if (pal == true)
		{
			cout << "true" << endl;
		}


	}
	return 0;
}
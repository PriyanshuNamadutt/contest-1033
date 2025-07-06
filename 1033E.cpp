#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll solve( ll &n, vector<ll> &a, ll &k ) {

    ll ans = 0;
    ll cnt1 = 0, cnt2 = 0;
    ll i = 0 , j = n-1;
    while ( i < j ) {
        while ( i < j && a[i] == a[i+1] ) i++;
        while ( i < j && a[j] == a[j-1] ) j--;

        if ( a[j] <= a[i]+1+k ) break;

        ans += a[j] - (a[i]+1+k);
        cnt1++ , cnt2++;

        if ( cnt1 == i+1 ) {
            a[i]++;
            cnt1 = 0;
        }
        if ( cnt2 == n-j ) {
            a[j]--;
            cnt2 = 0;
        }
    }
    return ans;
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll total = 0;
        for ( ll i = 0; i < n; i++ ) {
            cin >> a[i];
            total += (a[i])*(a[i]+1)/2;
        }

        sort( a.begin(), a.end() );

        total -= solve( n, a, k );
        cout << total << endl;
    }
    return 0;
}

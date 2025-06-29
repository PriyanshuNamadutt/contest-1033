#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        if ( m > n*(n+1)/2 && n > m ) cout << -1 << endl;
        else {

            vector<ll> a(n);
            m = n*(n+1)/2 - m;
            for ( ll i = 0; i < n; i++ ) {
                a[i] = i+1;
            }

            ll i = n-1;
            while ( m > 0 ) {
                if ( a[i] > m ) {
                    a[i] -= m;
                    m = 0;
                }
                else {
                    a[i] -= i;
                    m -= i;
                    i--;
                }
            }

            ll mx = *max_element( a.begin() , a.end() );
            cout << mx << endl;
            for ( ll i = 0; i < n; i++ ) {
                if ( i+1 == mx ) continue;
                if ( i+1 < mx ) cout << i+1 << " " << mx << endl;
                if ( i+1 > mx ) cout << a[i] << " " << i+1 << endl;
            }
        }
    }
    return 0;
}

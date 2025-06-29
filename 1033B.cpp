#include<iostream>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, s;
        cin >> n >> s;
        int cnt = 0;
        for ( int i = 0; i < n; i++ ) {
            int d1, d2, x, y;
            cin >> d1 >> d2 >> x >> y;

            if ( (d1 == 1 && d2 == 1) || (d1 == -1 && d2 == -1) ) {
                if ( x == y ) cnt++;
            }
            else {
                if ( x+y == s ) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

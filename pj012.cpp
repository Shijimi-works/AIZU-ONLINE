#include <bits/stdc++.h>
using namespace std;

void YAKUSU2 (int a, int b, int c)
{
    int p[10000];
    int cnt = 0;
    cin >> a >> b >> c;

    for ( int i = 0; i < (b - (a + 1)); i++ ) {
        p[i] = a + (i + 1);
        if ( c % p[i] == 0 ) {
            cnt++;
        }
    }
    if ( cnt != 0 ) {
    cout << cnt + 1 << endl;
    }
    else {
        cout << "約数なし" << endl;
    }
}

int main () {
    int x, y, z;

    YAKUSU2(x, y, z);

    return 0;
}
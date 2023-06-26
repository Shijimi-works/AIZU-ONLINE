#include <bits/stdc++.h>
using namespace std;

void ABMONDAI(int a, int b)
{
    int c = 0;
    long double d = 0;
    int e;
    cin >> a >> b;

    c = a / b;
    e = a % b;
    d = (float) a / b;

    cout << c << " " << e << " " << d << endl;
}

int main () {
    int x, y;

    ABMONDAI(x, y);

    return 0;
}
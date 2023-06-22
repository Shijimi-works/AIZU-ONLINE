#include <bits/stdc++.h>
using namespace std;

void Hani( int x, int y, int z )
{
    if ( x < y < z ) {
        cout << "YES!" << "\n";
    }
    else {
        cout << "NO!" << "\n";
    }
}

int main () 
{
    int a, b, c;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;

    cout << " a < b < c ですか？  :  " << "\n";
    Hani(a, b, c);

    return 0;
}
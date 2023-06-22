#include <bits/stdc++.h>
using namespace std;

void swap (int& x,int& y) {
     const int tmp = x;
     x = y;
     y = tmp;
}

void sort ( int& x,int& y )
{
    if ( x > y ) {
        swap(x, y);
    }
}

void sort ( int& x, int& y, int& z )
{
    sort( x, y );
    sort( y, z );
    sort( x, y );
}


int main () 
{
    int a, b, c;
    cout << "3つの整数を入力してください。\n";

    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;

    cout << "昇順に並べ替えると・・・" << "\n";
    sort( a, b, c );

    cout << a << " " << b << " " << c << "  になります。\n";

    return 0;
}
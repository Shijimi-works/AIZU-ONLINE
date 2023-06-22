#include <iostream>
using namespace std;

void Hikaku( int x, int y )
{
    if ( x < y ) {
        cout << " a < b " << "\n";
    }
    else if ( x > y ) {
        cout << " a > b " << "\n";
    }
    else {
        cout << " a = b " << "\n";
    }
}

int main ()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "\n";

    cout << "aとbの大小を比較します\n";

    Hikaku( a, b );

    return 0;
}
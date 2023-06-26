#include <bits/stdc++.h>
using namespace std;

void Circle2(int a)
{
    double Menseki, Enshu;
    const double PI = 3.141592653589793;
    cin >> a;

    Menseki = a * a * PI;
    Enshu = 2 * a * PI;

    cout.precision(6);cout << fixed << Menseki << " " << Enshu << endl;
}


int main ()
{
    int r;

    Circle2(r);

    return 0;
}
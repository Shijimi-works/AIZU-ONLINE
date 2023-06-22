#include <iostream>
using namespace std;

void Henkan(int x, int y, int z )
{
    z = x / 3600;
    y = ( x % 3600 )  / 60;
    x = x % 60;
    cout << "入力された秒数を変換すると " << z <<  " : " << y << " : " << x << "です\n" << endl;
}

int main () {
    int second, minute, hour;

    cout << "好きな秒数を入力してください  :";
    cin >> second;

    Henkan(second, minute, hour );

    return 0;
}
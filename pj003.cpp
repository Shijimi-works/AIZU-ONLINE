#include <iostream>
using namespace std;

void area ( int x, int y )
{
    int area = 0;
    area = x * y;
    cout << "入力された長方形の面積は" << area << endl;
}

void perimeter( int x, int y )
{
    int perimeter = 0;
    perimeter = (2 * x ) + ( 2 * y );
    cout << "入力された長方形の周囲の長さは" << perimeter << endl;

}

int main () {
    int a = 0;
    int b = 0;

    cout << "長方形の長さを入力してください入力してください\n";
    cout << "長さ :";
    cin >> a;
    cout << "幅　 :";
    cin >> b;

    area(a,b);
    perimeter(a,b);

    return 0;
}
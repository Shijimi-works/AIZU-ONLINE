#include <bits/stdc++.h>
using namespace std;

    void KOUKAN2( int a, int b)
    {
        int cnt = 3000;
        int c;

        for (int i = 0; i < cnt; i++ ) {
            cout << "整数を２つ入力してください" << "\n";
            cout << "１つ目　x ：　";
            cin >> a;
            cout << "２つ目　y　：　";
            cin >> b;

            if ( a !=  0 || b != 0 ) {
                if ( a > b ) {
                    c = a;
                    a = b;
                    b = a;
                    cout << "入れ替えた" << a << ' ' << b << '\n';
                }
                else {
                    cout << "入れ替えない" << a << ' ' << b << '\n';
                }
            }
            else break;
        }
    }

int main () {
    int x, y;

    KOUKAN2(x, y);

    return 0;
}
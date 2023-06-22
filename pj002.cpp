#include <iostream>
using namespace std;

void cubic (int x) {
    int i = 0;
    i = x * x * x;
    cout << i << endl;
}

int main () {
    int x;
    cout << "正の整数を入力してください　：";
    cin >> x;

    cubic (x);

    return 0;
}
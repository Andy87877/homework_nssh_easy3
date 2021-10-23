// https://replit.com/@andy8787main/homeworknssheasy39#main.cpp
#include <iostream>
#include <cmath> // 開根號
using namespace std;

int main() {
    float a, b, c, D; //ax^2+bx+c=0 D為判別式

    cout << "請輸入a,b,c: ";
    cin >> a >> b >> c;

    D = (b*b) - (4*a*c);

    if (D < 0) {
        cout << "無解";
    } else if (D == 0) {
        float ans; // 答案
        ans = (-1*b)/(2*a);

        cout << "重根數字為" << ans;
    } else {
        float ans1, ans2; // 兩個答案
        D = pow(D,0.5);// 先開根號
        ans1 = (-1*b+D)/(2*a);
        ans2 = (-1*b-D)/(2*a);

        cout << "相異實根為" << ans1 << "和" << ans2;
    }
}

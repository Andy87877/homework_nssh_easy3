// https://replit.com/@andy8787main/homeworknssheasy35#main.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c; //三邊長
    cout << "請輸入三邊邊長: ";
    cin >> a >> b >> c;
    if (a*b*c == 0) {//其中一邊為0
        cout << "毫無價值";
    } else {
        float s, ans;//海龍公式的s 答案

        s = (a+b+c)/2;
        ans = pow((s*(s-a)*(s-b)*(s-c)),0.5);//答案  pow是次方
        cout << "土地總價為" << ans << "百萬元\n";
    }
}

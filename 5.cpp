// https://replit.com/@andy8787main/homeworknssheasy35#main.cpp
#include <iostream>
using namespace std;

int main() {
    float a, b, c; //三邊長
    cout << "請輸入三邊邊長: ";
    cin >> a >> b >> c;
    if ((a*b*c == 0) || (a+b <= c) || (a+c <= b) || (b+c <= a)) {//其中一邊為0 兩邊長必大於第三邊
        cout << "毫無價值";
    } else {
        float s, ans;//海龍公式的s 答案

        s = (a+b+c)/2;
        ans = (s*(s-a)*(s-b)*(s-c));//平方面積 所以不用開根號
        cout << "土地總價為" << ans << "百萬元\n";
    }
}

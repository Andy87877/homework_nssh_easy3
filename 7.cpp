// https://replit.com/@andy8787main/homeworknssheasy37#main.cpp
#include <iostream>
using namespace std;

int main() {
    float a, b, c;// 三邊長
    cout << "請輸入三角形三邊的長度: ";
    cin >> a >> b >> c;


    if ((a*b*c == 0) || (a+b <= c) || (a+c <= b) || (b+c <= a)) {//其中一邊為0 兩邊長必大於第三邊
        cout << "不存在";
    } else if ((a*a) + (b*b) > (c*c)) {
        cout << "銳角三角形";
    } else if ((a*a) + (b*b) == (c*c)) {
        cout << "直角三角形";
    } else {
        cout << "鈍角三角形";
    }

}

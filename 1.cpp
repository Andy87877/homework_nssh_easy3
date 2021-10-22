// https://replit.com/@andy8787main/homeworknssheasy31#main.cpp
#include <iostream>
using namespace std;

int main() {
    float money; //錢
    cout << "請輸入購物金額";
    cin >> money;

    // 判斷
    if (money >= 150000) {
        money *= 0.8;
    } else if (money >= 100000) {
        money *= 0.85;
    } else if (money >= 50000) {
        money *= 0.9;
    } else if (money >= 100000) {
        money *= 0.95;
    } else {
        money *= 1;
    }
    
    cout << "你總共花費" << money << "元";
}

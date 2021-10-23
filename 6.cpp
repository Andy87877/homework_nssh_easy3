// https://replit.com/@andy8787main/homeworknssheasy36#main.cpp
#include <iostream>
using namespace std;

int main() {
    int n, total; // 題數 總分
    cout << "答對幾題: ";
    cin >> n;

    if (n >= 40){
        total = 100;
    } else if (n >= 21) {
        total = 80 + (n-20);
    } else if (n >= 11) {
        total = 60 + (n-10)*2;
    } else if (n == 0){
        total = 0;
    } else {
        total = n*6;
    }

    cout << total << "分";
}

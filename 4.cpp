// https://replit.com/@andy8787main/homeworknssheasy34#main.cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "請輸入你的分數: ";
    cin >> score;

    if (score >= 90) {
        cout << "優";
    } else if (score >= 80) {
        cout << "甲";
    } else if (score >= 70) {
        cout << "乙";
    } else if (score >= 60) {
        cout << "丙";
    } else {
        cout << "丁";
    }
}

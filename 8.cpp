// https://replit.com/@andy8787main/homeworknssheasy38#main.cpp
#include <iostream>
#include <cmath> //四捨五入要用
using namespace std;

int main() {
    int hours;// 工作時數
    float money;// 薪水

    cout << "工作時數為多少";
    cin >> hours;

    if (hours <= 60) {
        money = 155*hours;
    } else if (hours <= 75) {
        money = 155*60 + 155*1.25*(hours-60);
    } else {
        money = 155*60 + 155*1.25*15 + 155*1.75*(hours-75);
    }
    money = round(money); //四捨五入 

    cout << "每月月薪資為" << money;
}

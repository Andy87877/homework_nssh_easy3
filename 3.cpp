// https://replit.com/@andy8787main/homeworknssheasy33#main.cpp
#include <iostream>
using namespace std;

int main() {
    float cm, m, kg, BMI; // 公分 公尺 公斤 BMI
    cout << "請輸入身高(cm)";
    cin >> cm;
    m = cm/100; // 轉成公尺
    cout << "請輸入體重(kg)";
    cin >> kg;

    //計算BMI
    BMI = kg/(m*m);
    cout << "你的BMI是:" << BMI << endl; 

    //判斷
    if (BMI < 18.5) {
        cout << "過輕";
    } else if (BMI < 24) {
        cout << "正常範圍";
    } else if (BMI < 27) {
        cout << "過重";
    } else if (BMI < 30) {
        cout << "輕度肥胖";
    } else if (BMI < 35) {
        cout << "中度肥胖";
    } else {
        cout << "重度肥胖";
    }
}

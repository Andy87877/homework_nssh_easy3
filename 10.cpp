// https://replit.com/@andy8787main/homeworknssheasy310#main.cpp
#include <iostream>
using namespace std;

int main() {
    int temp = 16, num = 16; // temp為算暫時次數的 num為現在猜的數字
    for (int i = 0; i < 5; i++) {
        cout << "答案是不是" << num << endl;
        char answer = ' '; // 回答問題
        cout << "如果答案比想的高請輸入(Y)\n想的低請輸入(N)\n如果答對起輸入其他字母\n";
        cin >> answer;
        temp /= 2;
        if (answer == 'Y') {
            num -= temp;
        } else if (answer == 'N') {
            num += temp;
        } else {
            cout << "我猜對了!!\n";
            break;
        }
        cout << endl;
    }
}

/*
猜1 16->8->4->2->1
猜31 16->24->28->30-31
間隔 16 8 4 2 1 
*/

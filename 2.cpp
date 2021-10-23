// https://replit.com/@andy8787main/homeworknssheasy32#main.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    char str;
    cout << "請輸入'一個'字元: ";
    cin >> str;

    int ASCII;
    ASCII = int(str);
    
    if (97 <= ASCII && ASCII <= 122) {
        cout << "是小寫字母";
    } else if (65 <= ASCII && ASCII <= 90){
        cout << "是大寫字母";
    } else if (0 <= ASCII && ASCII <= 9) {
        cout << "是數字";
    } else {
        cout << "是特殊字元";
    }
}

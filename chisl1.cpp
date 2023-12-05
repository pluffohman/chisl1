#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main() {
    bool flag = false;
    string str;
    cin >> str;
    for (int i = size(str) - 1; i >= 0; i--) {
        int s = str[i] - '0';
        if (i == size(str) - 1) {
            if (s - 1 < 0) {
                str[i] = '9';
                flag = true;
            }
            else {
                char c = s - 1 + '0';
                str[i] = c;
            }
        }
        else {
            if (flag == true) {
                if (s - 1 < 0) {
                    str[i] = '9';
                }
                else {
                    char c = s - 1 + '0';
                    str[i] = c;
                    flag = false;
                }
            }
        }
    }
    if (size(str) > 1) {
        int a = 0;
        if (str[0] != '0') {
            cout << str << endl;
        }
        while (str[a] == '0') {
            ++a;
            if (str[a] != '0') {
                for (int i = a; i < size(str); ++i) cout << str[i];
            }
        }
    }
    else cout << str << endl;
}
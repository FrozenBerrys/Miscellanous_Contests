
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s, num1, num2, result;
    cin >> s;
    
    num1 = "00000" + s;
    num2 = "0" + s + "0000";
 
    int L = num1.length();
    result.resize(L, '0');
 
    for (int i = L - 1; i > 0; i--) {
        result[i] += num1[i] - '0' + num2[i] - '0';
        if (result[i] >= '2') {
            result[i] -= 2;
            result[i - 1] += 1;
        }
    }
 
    int i = 0;
    if (result[0] == '0') {
        i = 1;
    }
 
    while (i < L) {
        cout << result[i];
        i++;
    }
    cout << endl;
 
    return 0;
}
 

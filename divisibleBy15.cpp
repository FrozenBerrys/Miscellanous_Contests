#include <iostream>
using namespace std;
#include <string>
#include <cmath>
 
int main(){
    unsigned long long n=0, i, j, k, l, o, p;
    string s;
    cin >> s;
    k = s.size()-1;
    for( i = 0; i < s.size(); i++){
        n += int(s[i]-48) * pow(2, k);
        k--;
    }
    if( n%15 == 0 ){ cout << "Yes"; }
    else { cout << "No"; }
    
    return 0;
} 

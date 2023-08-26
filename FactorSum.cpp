using namespace std;
#include <iostream>
#include <string>
#include <cmath>
 
int main() {
    int n, i, j, k=3, l, m, o=0, arr[32], s=0;
    cin >> n;
    l = n;
    while ( n%2 == 0 ){ arr[o] = 2; o++; n /= 2; }
    
    while ( n > 1 ){
        while ( n%k == 0 ){ arr[o] = k; o++; n /= k; }
        k += 2;
    }
    
    if( o > 1 ){ 
        for( i = 0; i < o; i++){
            s += arr[i];
        }
    }
    else { s = l + 1; }
    cout << s;
    
 
    
    } 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <algorithm>
 
int main() {
    int n, i, j, k, l, m, o, p, s=0, max=0, temp;
    cin >> n;
    int arr[n], dp[n], gain[n];
    
    for( i = 0; i < n; i++){
     cin >> arr[i];
     s += arr[i];
     if( arr[i] == 1 ){ gain[i] = -1; }
     if( arr[i] == 0) { gain[i] = 1; }
     
    }
    if( s == n ){ cout << n-1; return 0; }
    if( s == 0 && n == 1 ){ cout << 1; return 0; }
    
    max = 0;
    temp = gain[0];
    if( temp < 0 ) { temp = 0; }
    for( i = 1; i < n; i++){
        temp += gain[i];
        if( temp > max ){ max = temp; }
        if( temp < 0 ) { temp = 0; }
    }
    cout << s + max;
    
    return 0;
} 

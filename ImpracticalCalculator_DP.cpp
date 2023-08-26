#include <iostream>
using namespace std;
#include <algorithm>
 
int main() {
    int n, m, count=0, i, j, k, l;
    cin >> n;
    int dp[n+1];
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    
    for( i = 5; i <= n; i++){
        if( i%6 == 0 ){ dp[i] = min(dp[i-1], min(dp[i/2], dp[i/3]))+1; }
        else if( i%2 == 0){ dp[i] = min(dp[i-1], dp[i/2])+1; }
        else if( i%3 == 0){ dp[i] = min(dp[i-1], dp[i/3])+1; }
        else { dp[i] = dp[i-1]+1; }
    }
    
    cout << dp[n];
    
    
    return 0;
} 

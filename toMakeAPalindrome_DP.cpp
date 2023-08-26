#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
 
int main() {
    int n, i, j, k, m;
    string s, l="";
    cin >> s;
    for( i = s.size()-1; i >= 0; i--){
        l += s[i];
    }
    m = s.size();
    int dp[m+1][m+1];
    for( i = 0; i <= m; i++){
        for( j = 0; j <= m; j++){
            if( j == 0 || i == 0){
                dp[i][j] = 0;
            } 
            else if( s[i-1] == l[j-1] ){
                dp[i][j] = dp[i-1][j-1]+1;
            } else { dp[i][j] = max( dp[i-1][j], dp[i][j-1]); }
        }
    }
    cout << m-dp[m][m];
    
    
    
    return 0;
} 

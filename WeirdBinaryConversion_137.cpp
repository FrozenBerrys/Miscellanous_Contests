#include <iostream>
using namespace std;
#include <vector>
 
int main() {
    long long n, i, j, k=0, l, m, o;
    vector<long long> v;
    cin >> n;
    
    while ( n > 0 ){
        m = n%3;
        if( m == 0 ){ m = 3; }
        n = (n-m)/3;
        if( m == 3 ){ v.push_back(7); }
        else if( m == 1 ){ v.push_back(1); }
        else if ( m == 2 ){ v.push_back(3); }
    }
    
    for( i = v.size()-1 ; i >= 0; i-- ){
        cout << v[i];
    }
    
    return 0;
} 

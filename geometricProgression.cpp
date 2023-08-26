#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>
 
int main() {
    unsigned long long n, i, j, k, l, o, p, a, b, count=0, num, og;
    cin >> n >> og >> k;
    cin >> a >> b;
    vector< unsigned long long > v;
    for( i = 0; i < n; i++){
        cin >> l;
        v.push_back(l);
    }
    vector<int> search;
    sort(v.begin(),v.end());
    for( i = a; i <= b; i++){
        search.push_back( og * pow(k, i-1) );
    }
    for( i = 0; i < search.size(); i++){
        if( binary_search(v.begin(),v.end(), search[i])){ count++; }
    }
    cout << count;
    return 0;
}  

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>
 
int main() {
    long long n, i, j, k, l, o , p, a, b, c, temp, tempp;
    cin >> n >> k;
    long long arr[n+1];
    vector< long long > v;
    for(i = 0; i < n; i++){
        cin >> l;
        v.push_back(l);
        arr[l] = i;
    }
    c = n;
    i = 0;
    for( j = 0; j < k; j++){
        if( v[i] == n ){ j--; i++;
        n--; if( n == 0 ){ break; } continue; }
        temp = v[i];
        tempp = arr[n];
        swap(v[arr[n]], v[i]);
        arr[n] = i;
        arr[temp] = tempp;
        if( n == 0 ){ break; }
    }
    for( i = 0; i < v.size(); i++ ){
        cout << v[i] << " ";
    }
    return 0;
}   

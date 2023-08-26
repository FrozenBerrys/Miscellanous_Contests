#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>
 
int main() {
    long n, i, j, l, m, o=0, p, count=0, less, more, prevsub;
    cin >> n;
    vector< long > save;
    save.push_back(n);
    while( 1 == 1 ){
        less = 0; more = 0;
        vector<int> v;
        count++;
        for( j = n; j > 0; j /= 10){
            v.push_back(j%10);
        }
        sort(v.begin(), v.end());
        
        m = v.size();
        for( i = 0; i < v.size(); i++){
            m--;
            less += pow(10 , m) * v[i];
            
        }
        for( i = 0; i < v.size(); i++){
            more += pow(10 , m) * v[i];
            m++;
        }
        //cout << less << " " << more << endl;
        n = more-less;
        sort(save.begin(), save.end());
        if(binary_search(save.begin(), save.end(), n )){ break; }
        save.push_back(n);
    }
    cout << count;
    return 0;
}  

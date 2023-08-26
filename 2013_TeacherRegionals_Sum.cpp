#include <bits/stdc++.h>
using namespace std;
 
int main() {
long n, i, j, baga, too, o=1, p;
cin >> n;
 
for( i = 1; i < n; i += o ){
    o++;
    if ( (n-i) % o == 0 ) { baga = (n-i) / o; too = o; }
}
cout << baga << " " << too;
 
return 0;
} 

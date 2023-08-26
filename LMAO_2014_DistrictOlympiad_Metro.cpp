#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    int i, j, k, l, o, p, a, b, d, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, 
n;
    cin >> n;
    c5 += n/60;
    n = n%60;
    
    if( n == 0 ){ c1 = 0; c2 = 0; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 1 ){ c1 = 1; c2 = 0; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 2 ){ c1 = 2; c2 = 0; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 3 ){ c1 = 3; c2 = 0; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 4 ){ c1 = 4; c2 = 0; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 5 ){ c1 = 0; c2 = 1; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 6 ){ c1 = 1; c2 = 1; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 7 ){ c1 = 2; c2 = 1; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 8 ){ c1 = 3; c2 = 1; c3 = 0; c4 = 0; c5 +=0; }
    else if( n == 9 ){ c1 = 0; c2 = 0; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 10 ){ c1 = 0; c2 = 0; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 11 ){ c1 = 1; c2 = 0; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 12 ){ c1 = 2; c2 = 0; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 13 ){ c1 = 3; c2 = 0; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 14 ){ c1 = 4; c2 = 0; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 15 ){ c1 = 0; c2 = 1; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 16 ){ c1 = 1; c2 = 1; c3 = 1; c4 = 0; c5 +=0; }  
    else if( n == 17 ){ c1 = 2; c2 = 1; c3 = 1; c4 = 0; c5 +=0; }
    else if( n == 18 ){ c1 = 0; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 19 ){ c1 = 0; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 20 ){ c1 = 0; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 21 ){ c1 = 1; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 22 ){ c1 = 2; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 23 ){ c1 = 3; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 24 ){ c1 = 4; c2 = 0; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 25 ){ c1 = 0; c2 = 1; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 26 ){ c1 = 1; c2 = 1; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 27 ){ c1 = 2; c2 = 1; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 28 ){ c1 = 3; c2 = 1; c3 = 0; c4 = 1; c5 +=0; }
    else if( n == 29 ){ c1 = 0; c2 = 0; c3 = 1; c4 = 1; c5 +=0; }
    else if( n == 30 ){ c1 = 0; c2 = 0; c3 = 1; c4 = 1; c5 +=0; }
    else if( n == 31 ){ c1 = 1; c2 = 0; c3 = 1; c4 = 1; c5 +=0; }  
    else if( n == 32 ){ c1 = 2; c2 = 0; c3 = 1; c4 = 1; c5 +=0; }
    else if( n == 33 ){ c1 = 3; c2 = 0; c3 = 1; c4 = 1; c5 +=0; }
    else if( n == 34 ){ c1 = 4; c2 = 0; c3 = 1; c4 = 1; c5 +=0; }
    else if( n == 35 ){ c1 = 0; c2 = 1; c3 = 1; c4 = 1; c5 +=0; }
    else { c5 += 1; }
    cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5;
    
    return 0;
} 

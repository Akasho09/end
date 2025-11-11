/*
A carpet manufacturing industry has newly ventured into the carpet installation business. All the carpets
manufactured are large squares in shape. To install, each carpet has to be cut into shapes of squares or
rectangles. The number of slits to be made is given as N.
The task is to find the maximum number of equal squares or rectangles that can be achieved using N slits.
*/
//



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 4;
    int x = n/2;
    cout <<  ((x + 1) * (n - x + 1)) <<" ";
    cout <<  (((n)*(n+1))/2 + 1);
}
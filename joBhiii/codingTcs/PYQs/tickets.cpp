#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
// EF, 56 and G,    
    string input ;
    cin >> input ;

    int ind = -1 , n = input.size();
    for(int i=0;i<n;i++){
        if(i<n-1 && input[i]=='E' && input[i+1]=='F'){i++;}
        else if(i<n-1 && input[i]=='5' && input[i+1]=='6'){i++;}
        else if(input[i]=='G'){}
        else {
        ind++;
        input[ind]=input[i];
        }
    }
    cout <<input.substr(0,ind+1) <<endl;
}
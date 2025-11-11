/*
Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit
assignment problems before the lecture. Today, he got one tricky question. The problem statement is “A
positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits
of it after the most significant bit including the most significant bit. Print the positive integer value after
toggling all bits”.
*/


#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;

    int ans = 0;
    int mult=1;
    while(n!=0){
        if((n&1)==0){
            ans^=mult;
        }
        n>>=1; mult<<=1;
    }

    cout <<ans;
}
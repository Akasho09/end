/*
Q2. Given an array Arr[] of size T, contains binary digits.
Where
0 represents a biker running to the north.
1 represents a biker running to the south.
The task is to count crossing bikers in such a way that each pair of crossing bikers (N, S), where 0<=N<S<T,
is passing when N is running to the north and S is running to the south.
*/

#include <iostream>
using namespace std;


int main (){
    int n ;
    cin >> n;

    vector<int>bikers(n);
    for(int i=0;i<n;i++){
        cin>>bikers[i];
    }

    int ans = 0 , curr = 0;
    
    for(int b : bikers){
        if(b==1) ans+=curr;
        else curr++;
    }

    cout <<ans ;


}
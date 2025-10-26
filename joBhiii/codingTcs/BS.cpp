// Q1) Given an array of integers where every element appears even number of times except one element which appears odd number of times, 
// write a program to find that odd occurring element in O(log n) time. The equal elements must appear in pairs in the array but there
//  cannot be more than two consecutive occurrences of an element. 

#include <iostream>
using namespace std;

int main () {
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int s =  1 ;
    int e = n-2 ;
    while(s<=e){
        int m = s+(e-s)/2;
        if(m%2==0){
            if(arr[m]!=arr[m-1] && arr[m]!=arr[m+1]){ s=m; break;}
            if(arr[m]==arr[m-1]) e=m-1;
            else s=m+1;
        } else {
            if(arr[m]==arr[m-1]) s=m+1;
            else e=m-1;
        }
    }
    if(arr[s]!=arr[s-1] && arr[s]!=arr[s+1]){
    cout << arr[s] <<endl;
    } else if(n>1 && arr[n-1]!=arr[n-1]){
    cout << arr[n-1] <<endl;
    }else{
    cout << arr[0] <<endl;
    }
}
// Q2) Given an array of integers and a sum, the task is to count all subsets of given array with sum equal to given sum. 
// Input :  

// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow.
//  Each test case contains an integer n denoting the size of the array. The next line contains n space separated integers 
//  forming the array. The last line contains the sum. 

#include <iostream>
#include <unordered_map>
using namespace std ;


int main () {
    int t ;
    cin >>t ;

    while(t>0){
        int n ;
        cin >>n ;
        int arr[n];
        for(int i=0;i<n;i++){
           cin >> arr[i];
        }
        int sum ;
        cin >>sum;
        unordered_map<int , int > mapp ;
        mapp[0]=1;
        int curr = 0 , ans = 0; 
        for(int i=0;i<n;i++){
            curr+=arr[i];
            int temp = curr-sum;
            if(mapp.find(temp)!=mapp.end()){
                ans+=mapp[temp];
            }
            mapp[curr]++;
        }
        cout << ans <<" ";
        t--;
    }

}
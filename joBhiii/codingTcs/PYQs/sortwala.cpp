/*
Airport security officials have confiscated several items of the passenger at the security checkpoint. All
the items have been dumped into a huge box(array). Each item possessed a certain amount of risk(0,1,2).
Here is the risk severity of the item representing an array[] of N number of integer values. The risk here is to
sort the item based on their level of risk values range from 0 to 2.
*/


#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0 , m=0 , h = nums.size()-1;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]); l++; m++;
            }else if(nums[m]==1) m++;
            else {
                swap(nums[h],nums[m]); h--;
            }
        }
    }
};


int main() {
    int n ;
    cin >> n ;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];

    int zeroes = 0 , ones = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zeroes++;
        else if(arr[i]==1) ones++;
    }

    for(int i=0;i<zeroes;i++) arr[i]=0;
    for(int i=0;i<ones;i++) arr[zeroes+i+1]=1;
    for(int i=zeroes+ones;i<n;i++) arr[i]=2;

    for(int i=0;i<n;i++) cout <<arr[i] <<" ";

}
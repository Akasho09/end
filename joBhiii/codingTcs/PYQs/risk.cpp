/*
Airport security officials have confiscated several item of the passengers at the security check point. All the items have been dumped into a huge box (array). Each item possesses a certain amount of risk[0,1,2]. Here, the risk severity of the items represent an array[] of N number of integer values. The task here is to sort the items based on their levels of risk in the array. The risk values range from 0 to 2.
*/



#include <iostream>
using namespace std;

int main (){

    int n ;
    cin >> n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]>2 || v[i]<0) {
            cout <<"vhup";
            return 0;
        }
    }

    int low = 0 , mid = 0 , high = n-1;

    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++; mid++;
        }else if(v[mid]==1) mid++;
        else {
            swap(v[high],v[mid]);
            high--;
        }
    }
    for(int i=0;i<n;i++) cout <<v[i] <<" ";
}
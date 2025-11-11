// /*
// Q1. Given a non-negative integer array Arr having size N. Each element of the array will carry a different
// value. This means no two elements can have the same values.The candidate has to do this with minimal
// changes in the original value of the elements, making every element as least as much value as it originally
// had.
// Find the minimum sum of all elements that can be set the array for:
// Example 1:
// Input
// 3 -> Value of N, represents size of Arr
// 2 -> Value of Arr[0]
// 2-> Value of Arr[1]
// 4-> Value of Arr[2]
// Output
// 9
// */

// /*
// The Input format for the testing
// First input line: Accept a single positive integer value for N representing the size of Arr[]
// Second input line: Accept N number of integer values separated by a new line, representing the original
// value assigned to each element.
// Output Format for testing:
// The output must be a non integer only (See the output format example).
// */

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main(){
//     int n ;
//     cin >> n;
//     vector<int>v; v.reserve(n);

//     for(int i=0;i<n;i++){
//         cin>> v[i];
//     }

//     int sum = 0 , ind = 1;
//     vector<bool>presence(n+1,false);
//     unordered_set<int>s;
//     for(int i=0;i<n;i++){
//         if(v[i]<=n) presence[n]=true;
//         if(s.find(v[i])!=s.end()){
//             while(ind<=n){
//                 if(!presence[ind]){
//                     sum+=ind;
//                     s.insert(ind);
//                     break;
//                 }
//                 ind++;
//             }
//         }else {
//             sum+=v[i];
//             s.insert(v[i]);
//         }
//     }

//     cout <<sum <<endl;
// }

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                arr[i] = arr[i] + 1;
            }
            if (arr[j] < 0)
                flag = 1;
        }
    }
    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    if (flag == 1)
        cout << "Wrong Input";
    else
        cout << sum;
}
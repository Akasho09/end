#include <iostream>
#include <sstream>
using namespace std;


int main(){
    // string line ;
    // getline(cin , line);
    // stringstream ss(line);
    // vector<int>input ;
    // int x;
    // while(ss >> x) input.push_back(x);

    // for(int i=0;i<input.size();i++) cout <<input[i] <<" ";


    // vector<int>v(5);
    // for(int i=0;i<5;i++){
    //     cin >> v[i];
    // }
    // for(int i=0;i<5;i++){
    //     cout << v[i];
    // }

    vector<int>v2;
    string arr ;
    getline(cin , arr);
    stringstream ss (arr);
    int x;
    while(ss >> x){
        v2.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout << v2[i];
    }
}
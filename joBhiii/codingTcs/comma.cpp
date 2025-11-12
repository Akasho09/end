#include <iostream>
#include <sstream>
using namespace std;


int main(){
    string line ;
    getline(cin , line);
    stringstream ss(line);
    vector<int>input ;
    string x;
    while(getline(ss , x , ',')) input.push_back(stoi(x));

    for(int i=0;i<input.size();i++) cout <<input[i] <<" ";


    
}
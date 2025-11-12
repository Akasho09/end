#include <iostream>
using namespace std;

int main(){

    vector<string> stops = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    vector<int> path = {800, 600, 750, 900, 1400, 1200, 1100, 1500};

    if(find(stops.begin() , stops.end() , "NI")!=stops.end()){
        cout <<"Present";
    }else{
        cout <<"Not Present";
    }
}
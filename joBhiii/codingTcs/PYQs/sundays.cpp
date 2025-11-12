/*
Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 

So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

Count the number of Sunday jack will get within n number of days.
*/

#include <iostream>
using namespace std;


int main () {
    string day ;
    cin >> day ;

    int days;
    cin >> days;

    if(day=="monday"){
        days-=6;
    }else if(day=="tuesday") days-=5;
    else if(day=="wednesday") days-=4;
    else if(day=="thursday") days-=3;
    else if(day=="friday") days-=2;
    else if(day=="saturday") days-=1;
    else if(day=="sunday") days-=1;
    else {
        cout <<"Inavlid start day";
    }

    int ans = 0;
    if(days>=0) {
        ans=1+(days/7);
    }

    cout <<ans;
}
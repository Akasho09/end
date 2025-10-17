// Q3) Before the outbreak of corona virus to the world, a meeting happened in a room in Wuhan. A person who attended that meeting had COVID-19 
// and no one in the room knew about it! So everyone started shaking hands with everyone else in the room as a gesture 
// of respect and after meeting unfortunately every one got infected! Given the fact that any two persons shake hand exactly once, 
// Can you tell the total count of handshakes happened in that meeting? 
// Input Format : 

// The first line contains the number of test cases T, T lines follow.  

// Each line then contains an integer N, the total number of people attended that meeting. 

// Output Format : 

// Print the number of handshakes for each test-case in a new line. 

// Constraints : 

// 1 <= T <= 1000  

// 0 < N < 106  



#include <iostream>

using namespace std;

int main()

{

    int mod = (int)1e7+7;

    long int n,a=0,b=1,c=2,d,i;

    cin >> n;

    if(n==1 || n==2)

        cout << (n-1);

    else{

        for(i=3 ; i<=n ; i++){

            d = (c * (a + b)) % mod ;
 
            a = b;

            b = d;

            c++;

        }

        cout << d;

    }

    return 0;

}
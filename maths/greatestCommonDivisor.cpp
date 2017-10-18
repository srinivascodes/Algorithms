/**
Author: Shubham Agrawal
email: <shubham.agrawal.8025@gmail.com>
*/

/*Greatest Common Divisor*/

#include<bits/stdc++.h>
using namespace std;

int calculateGCD(int a, int b){
if(b==0)
return a;
return calculateGCD(b,a%b);
}

int main(){

/*call gcd function*/
int gcd = calculateGCD(182,65);
cout<<gcd<<endl;
return 0;
}

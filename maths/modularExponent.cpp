/**
Author: Shubham Agrawal
email: <shubham.agrawal.8025@gmail.com>
*/

//#include<bits/stdc++.h>
#include<iostream>
#define lng long long
using namespace std;

lng int power(lng int a, lng int n){
if(n==0)
return 1;
lng int x = power(a,n/2);
if(n&1)
return x*x*a;
return x*x;
}

int main(){
lng int a,n;
cin>>a>>n;

cout<<power(a,n);

return 0;
}

/**
Author: Shubham Agrawal
email: <shubham.agrawal.8025@gmail.com>
*/

/*Z Algorithm */

#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100000;
int zArray[MAX_SIZE];

void fillZArray(string text, string pattern){
string zString = pattern + "$" + text;
int l = zString.length();
int L, R, K;
L=R=0;
for(int i=0;i<l;i++){
if(i>R){
L=R=i;
while(R<l && zString[R-L] == zString[R])
R++;
zArray[i]= R-L;
R--;
}
else{
K=i-L;

if(zArray[K]<R-i+1)
zArray[i] = zArray[K];

else{
L = i;
while(R<l && zString[R-L] == zString[R])
R++;
zArray[i]=R-L;
R--;
}
}
}
}

int main(){
string text, pattern;
cin>>text>>pattern;

int plen = pattern.length();
int len = text.length() + 1 + plen;
fillZArray(text,pattern);

for(int i=plen+1;i<len; i++){
if(zArray[i]==plen){
cout<<i-plen<<" ";
}
}
return 0;
}

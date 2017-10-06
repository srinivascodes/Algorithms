/**
Author: Shubham Agrawal
email: <shubham.agrawal.8025@gmail.com>
*/

/*Sieve of Eratosthenes*/

#include <bits/stdc++.h>
#define MAX_SIZE 1000005
using namespace std;

vector<int> primes; /*Stores the prime numbers*/
bool isComposite[MAX_SIZE];

void seiveOfEratosthenes(int maxSize){

	/*setting all the integers as primes*/
	memset(isComposite,false,sizeof(isComposite));

        for(long int i=2;i<maxSize;i++){
                if(!isComposite[i]){
                primes.push_back(i);
                        for(long int j=i*i;j<maxSize;j+=i)
                        isComposite[j]=true;
                }
        }
}

int main() {
	
/*populate primes vector*/
seiveOfEratosthenes(MAX_SIZE);
	
return 0;
}

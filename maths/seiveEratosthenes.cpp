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

int main() {
	/*setting all the integers as primes*/
	memset(isComposite,false,sizeof(isComposite));
	
	for(long int i=2;i<MAX_SIZE;i++){
		if(!isComposite[i]){
		primes.push_back(i);
			for(long int j=i*i;j<MAX_SIZE;j+=i)
			isComposite[j]=true;
		}
	}
	return 0;
}

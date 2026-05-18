// Five in One


using namespace std;
#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#include<math.h>
#include<vector>
 
bool isPalindrom(int n){
 
    int temp=n;
 
    int res=0;
 
    while(temp>0){
        res=res*10+temp%10;
        temp/=10;
     }
 
    return n==res;
 
}
 
bool isPrime(int n){
 
   if(n<=1) return false;
   if(n==2) return true;
   if(n%2==0) return false;
 
   for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
   }
 
   return true;
}
 
int numberOfDivideros(int n){
     int counter=0;
     for(int i=1;i*i<=n;i++){
        if(n%i==0){
            counter++;
            if(n/i!=i)
              counter++;
        }
     }
  return counter;
}
 
 
int main(){
 
   int n;
   cin>>n;
 
   int arry[n];
 
   for(int i=0;i<n;i++)
      cin>>arry[i];
 
   int max_val=arry[0];
   int min_val=arry[0];
 
   int palidromCounter=0,primeCounter=0;
   int max_dividerso=0,answer=0;
 
   for(int i=0;i<n;i++){
 
    max_val=max(arry[i],max_val);
    min_val=min(arry[i],min_val);
 
    palidromCounter+=isPalindrom(arry[i]);
    primeCounter+=isPrime(arry[i]);
 
    int counterDivideros=numberOfDivideros(arry[i]);
    if(counterDivideros==max_dividerso){
        answer=max(answer,arry[i]);
    }
    else if(counterDivideros>max_dividerso){
        answer=arry[i];
        max_dividerso=counterDivideros;
    }
   }
 
   cout<<"The maximum number : "<<max_val<<endl;
   cout<<"The minimum number : "<<min_val<<endl;
   cout<<"The number of prime numbers : "<<primeCounter<<endl;
   cout<<"The number of palindrome numbers : "<<palidromCounter<<endl;
   cout<<"The number that has the maximum number of divisors : "<<answer<<endl;
  return 0;
}
//TimeComplexity:O(n)
//SpaceComplexity:O(1)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

 int n;
 cin>>n;
 int i,a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 int l=0,r=n-1;
 while(l<r){
     if(a[l]<0 && a[r]>0){
     l++;
     r--;
     }
     else if(a[l]<0)
     l++;
     else if(a[r]>0)
     r--;
     else if(a[l]>0 && a[r]<0){
         swap(a[l],a[r]);
         l++;
         r--;
     }
 }
 for(i=0;i<n;i++)
 cout<<a[i]<<" ";
    
	return 0;
}

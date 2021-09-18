//TimeComplexity: worst:1+2*(n-1)comparisons , best:n comparisons
//SpaceComplexity: O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
int i,a[n];
for(i=0;i<n;i++)
cin>>a[i];
int maxx,minn;
if(n==1)
{
    maxx=a[0];
    minn=a[0];
}
else {
    if(a[0]>a[1]){
        maxx=a[0];
        minn=a[1];
    }
    else{
        maxx=a[1];
        minn=a[0]; 
    }
    for(i=2;i<n;i++){
      if(a[i]>maxx){
        maxx=a[i];
      }
    else if(a[i]<minn){
        minn=a[i];
     }
   }
}
cout<<maxx<<" "<<minn<<endl;
	return 0;
}

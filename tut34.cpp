#include <bits/stdc++.h>

using namespace std;
int main()
{
   int   q,n,i, r,j, s[1000],c=1;
   cin>>n;
   q=n;
       for(i=0;q!=1;i++){
           r=q%2;
           q=q/2;
           s[i]=r;
       }
       s[i]=1;
       for(j=i-1;s[j]!=0;j++){
           c++;
       }
       cout<<c; 
       
  
  
    return 0;
}

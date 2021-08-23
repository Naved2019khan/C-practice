
#include<iostream>
using namespace std;
int main()
{
   int   q, r, s=0,n,chk;
   cout<<"enter no: \n";

   cin>>n;
   q=n;
   if(n%2==0){
       for(int i=0;q!=1;i++){
           r=q%2;
           q=q/2;
           s=s*10+r;
       }
       s=s*10;
       cout<<s;
   }
   else{
        for(int i=0;q!=1;i++){ 
           r=q%2;  
           q=q/2;
           s=s*10+r;
       }
       s=s*10+1;
       cout<<s;
   }  
    return 0;
}
 
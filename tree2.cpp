//CODE 1

#include <bits/stdc++.h> 
using namespace std; 

main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long n;
    cin>>n;
    long long arr[n];

    for(long i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int len = sizeof(arr)/sizeof(arr[0]);

  //Sorting the array elements
   
    for (long i = 0; i < len; i++)
    {    
      for (long j = i+1; j < len; j++)
      {
        if (arr[i]>arr[j])
        {
          long long temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
       }
      }

      //checking for unique elements
   
   long long curr=0;
   long count=0;

   for(long i=0;i<len;i++)
   {
        if(arr[i]!=curr)
        {
          curr=arr[i];
           count++;
        }
   }
   for(long i=0;i<len;i++){
        cout<<arr[i];
   }

   cout<<"\n"<<count <<endl;
   }


}









//CODE 2
#include<bits/stdc++.h>
using namespace std;

int countDistinct(long long arr[], long n){

unordered_set<int>s;

int res = 0;
for (int i = 0;i< n; i++){


if (s.find(arr[i]) == s.end()) {
     s.insert(arr[i]);
     res++;
    }
}

return res;
     
}


int main(){
int t;
cin>>t;
while(t--)
{
     int flag=0;
     long int n;
     cin>>n;
     long long int a[n]; 
     for(long int i=0;i<n;i++)
     {     cin>>a[i];}
     
    for(int i=0;i<n;i++){
       if(a[i]==0){
           flag=1;}}

     if(flag==1)
          {cout<<countDistinct(a,n)-1<<"\n";}
     else
          {cout<<countDistinct(a,n)<<"\n";}
     
}
     return 0;
}


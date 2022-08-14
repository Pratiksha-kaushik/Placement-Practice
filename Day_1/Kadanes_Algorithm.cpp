//https://youtu.be/w_KEocd__20 -- refer for soltuion
// Kadane's Algorithm -- Maximum subarray Problem
#include<iostream>
using namespace std;

void kadanes_algo(int arr[],int n)
{
   int maxi=arr[0];
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum=sum+arr[i];
       maxi=max(sum,maxi);
       if(sum<0)
       {
           sum=0;
       }
   }
   cout<<"MAXIMUM SUM OF THE SUBARRAY IS : "<<maxi<<endl;
}
int main()
{
   int n;
   int arr[n];
   cout<<"Enter the size of Array : ";
   cin>>n;
   cout<<"Enter the elements of the array : "<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"Element "<<i+1<<" : ";
       cin>>arr[i];
   }
   kadanes_algo(arr,n);
 //  cout<<"MAXIMUM SUM OF THE SUBARRAY IS : "<<result;
}

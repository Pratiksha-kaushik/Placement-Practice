//https://youtu.be/32Ll35mhWg0 ---> refer 
//Find the duplicate in an array of N integers
#include<iostream>
using namespace std;

void duplicate_element(int arr[],int n,int freq_arr[])
{
    
      for(int i=0;i<n;i++)
      {
          if(freq_arr[arr[i]]==1)
          {
              cout<<"Duplicate Elements are : "<<arr[i]<<endl;
          }
          else
          {
              freq_arr[arr[i]]=1;
          }
      }

 }
int main()
{
   int n;
   int arr[n],freq_arr[n];

   cout<<"Enter the Size of array : ";
   cin>>n;
   cout<<"Enter array elements : "<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<"Element "<<i+1<<" : ";
      cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       freq_arr[i]=0;
   }
   duplicate_element(arr,n,freq_arr);
}
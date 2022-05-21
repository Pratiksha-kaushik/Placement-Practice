//https://youtu.be/OTkoJOP6m6w --refer
//Repeat and Missing Number
#include<iostream>
using namespace std;

void repAndMis(int arr[],int n)
{
    bool freq[n]={false};
    int Rno,Mno;
    for(int i=1;i<=n;i++)
    {
       if(freq[arr[i]]==true)
       {
           Rno=arr[i];
       }
       else
       {
       freq[arr[i]]=true;
       }
    }

    for(int i=1;i<=n;i++)
    {
        if(freq[i]==false)
        {
            Mno=i;
        }
    }

    cout<<"REPEATING VALUE IS : "<<Rno<<endl;
    cout<<"MISSING VALUE IS : "<<Mno<<endl;

}
int main()
{
   int n;
   int arr[n];
   bool freq[n]={false};
   cout<<"Enter the Size of array : ";
   cin>>n;
   cout<<"Enter array elements : "<<endl;
   for(int i=1;i<=n;i++)
   {
      cout<<"Element "<<i<<" : ";
      cin>>arr[i];
   }
   repAndMis(arr,n);
}
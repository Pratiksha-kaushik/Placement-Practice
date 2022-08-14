//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
#include<iostream>
using namespace std;

void Dutch_algo(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
       switch(arr[mid])
       {
           case 0: swap(arr[low],arr[mid]);
                   mid++;
                   low++;
                   break;
            case 1: mid++;
                    break;
            case 2: swap(arr[mid],arr[high]);
                    high--;
                    break;
       }
    }
    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<endl;
    }

}

int main()
{
    int n;
    int arr[n];

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter Array elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element"<<i+1<<" : ";
        cin>>arr[i];
    }
    Dutch_algo(arr,n);
}
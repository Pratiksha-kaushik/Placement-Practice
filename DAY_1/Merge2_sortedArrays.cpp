//https://youtu.be/hVl2b3bLzBw --refer for solution
//Merge two sorted Arrays without extra space

#include<iostream>
using namespace std;

void Merge_Two_Sorted_array(int ARR1[],int ARR2[],int M, int N)
{
    int k;
    for(int i=0;i<M;i++)
    {
        if(ARR1[i]>ARR2[0])
        {
            swap(ARR1[i],ARR2[0]);
        }
        int first = ARR2[0];
   
      for (k = 1; k < N && ARR2[k] < first; k++) 
      {
      ARR2[k - 1] = ARR2[k];
      }
    ARR2[k - 1] = first;
    }

    cout<<"Arrays after sorting are : "<<endl;
    cout<<"ARRAY 1 : ";
    for(int i=0;i<M;i++)
    {
        cout<<ARR1[i]<<" ";
    }
    cout<<endl<<"ARRAY 2 : ";
    for(int i=0;i<N;i++)
    {
        cout<<ARR2[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int M,N;
    cout<<"Enter the size of Array 1 : ";
    cin>>M;
    int ARR1[M];
    cout<<"Enter the Elements of Array 1 : "<<endl;
    for(int i=0;i<M;i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin>>ARR1[i];
    }
    cout<<"Enter the size of Array 2 : ";
    cin>>N;
    int ARR2[N];
    cout<<"Enter the Elements of Array 2 : "<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin>>ARR2[i];
    }
    
    Merge_Two_Sorted_array(ARR1,ARR2,M,N);
    return 0;

}
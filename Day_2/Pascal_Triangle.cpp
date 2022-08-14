//https://www.youtube.com/watch?v=6FLvhQjZqvM
//Pascal triangle
#include<iostream>
using namespace std;
 
 void pascal_triangle(int n)
 {
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            cout<<a[i][j];
        }
        cout<<"\n";
    }
  return;
 }
int main()
{
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    pascal_triangle(n);
    return 0;
}
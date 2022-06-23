#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>g1;
    for(int i=1;i<=10;i++)
    g1.push_back(i*10);

    cout<<"\nVector elements are : ";
    for(auto it=g1.begin();it!=g1.end();it++)
    cout<<*it<<" ";

    cout<<"\nReference operator (g) : g1[2] = "<<g1[2];
    cout<<"\nFront : g1.front() = "<<g1.front();
    cout<<"\nBack : g1.back() = "<<g1.back();

    int *pos=g1.data();
    cout<<"\nThe first element is : "<<*pos;
    cout<<endl;
    return 0;
}
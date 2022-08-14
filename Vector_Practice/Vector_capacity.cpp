#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>g1;
    for(int i=1;i<=5;i++)
    g1.push_back(i);

    cout<<"SIZE : "<<g1.size();
    cout<<"\nVector elements are : ";
    for(auto it=g1.begin();it!=g1.end();it++)
    cout<<*it<<" ";
    cout<<"\nCAPACITY : "<<g1.capacity();
    cout<<"\nMAX_SIZE : "<<g1.max_size();

    g1.resize(4);
    cout<<"\nAFTER RESIZE, SIZE : "<<g1.size();

    if(g1.empty()==false)
        cout<<"\nVector is not empty";
    else
    cout<<"\nVector is empty";

    g1.shrink_to_fit();

    cout<<"\nVector elements are : ";
    for(auto it=g1.begin();it!=g1.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    return 0;
}
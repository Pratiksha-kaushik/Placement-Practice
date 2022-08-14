//vector modifiers
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.assign(5,10);
    cout<<"The Vector elements are : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    //insert 15 to the last position

    v.push_back(15);
    cout<<"\nThe Vector elements are after inserting 15 at last : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    int n=v.size();
    cout<<"\nThe Last Element is : "<<v[n-1];

    //remove last element
    v.pop_back();

    //print the vector
    cout<<"\nThe Vector elements are after removing 15 from last : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    //insert 5 at the begining 
    v.insert(v.begin(),5);
    cout<<"\nThe Vector elements are after inserting 5 at the begining : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<"\nThe First element is : "<<v[0];

    //remove the first element
    v.erase(v.begin());
    cout<<"\nThe Vector elements are after removing 5 from the begining : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    cout<<"\nThe First element is : "<<v[0];

    //inserts at the begining
    v.emplace(v.begin(),5);
    cout<<"\nThe First element is after inserting 5 at begining : "<<v[0];

    //insert 20 at the end 
    v.emplace_back(20);
    cout<<"\nThe Vector elements are after inserting 20 at last : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    int s=v.size();
    cout<<"\nThe Last Element is : "<<v[s-1];

    //erase the vector
    v.clear();
    cout<<"\nThe vector Size after earse() : " <<v.size();

    //two vectors to perform swap
    vector<int> v1,v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout<<"\n\nVector 1 : ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    //Swap v1 and v2
    v1.swap(v2);
    cout<<"\n\nAFTER SWAP \nVector 1 : ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    
    vector<pair<int,int>>p1;
    int s1;
    cout<<"enter p1 size : ";
    cin>>s1;
    cout<<"enter the pairs : ";
    for(int i=0;i<s1;i++)
    {
            int x,y;
            cout<<"Pair "<<i+1<<" : ";
            cin>>x>>y;
            p1.push_back({x,y});
    }
    cout<<"Pairs are : "<<endl;
    for(int i=0;i<p1.size();i++)
    {
       cout<<p1[i].first<<" , ";
       cout<<p1[i].second<<endl;
    }
}
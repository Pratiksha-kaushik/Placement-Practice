//vector_iterators
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vect;
    for(int i=1;i<=5;i++)
    {
        vect.push_back(i);
    }
    cout<<"Output of Begin and End : ";
    for(auto i=vect.begin();i!=vect.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
             //rbegin and rend
    cout<<"Output of rBegin and rEnd : ";
    for(auto i=vect.rbegin();i!=vect.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
              //cBegin and cEnd
    cout<<"Output of cBegin and cEnd : ";
    for(auto i=vect.cbegin();i!=vect.cend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
             //crBegin and crEnd
    cout<<"Output of crBegin and crEnd : ";
    for(auto i=vect.crbegin();i!=vect.crend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    
}

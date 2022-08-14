cout<<"The Vector elements are : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    //insert 15 to the last position

    v.push_back(15);
    int n=v.size();
    cout<<"\nThe Last Element is : "<<v[n-1];

    //remove last element
    v.pop_back();

    //print the vector
    cout<<"\nThe Vector elements are : ";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    //insert 5 at the begining 
    v.insert(v.begin(),5);
    cout<<"\nThe First element is : "<<v[0];

    //remove the first element
    v.erase(v.begin());
    cout<<"The First element is : "<<v[0];

// Here we have a complete guid to STL.
// We'll add more to this.
// So, let's get started.

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// PAIRS
void stlPair(){

    pair<int, int> p = {1, 3};
    cout<<"\nPrinting general pairs: \n"<<p.first<<" "<<p.second<<endl;
    // // // prints  1 3

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
	cout <<"\nPrinting nested pairs: \n"<<"{"<<p1.first<<" "<<", {"<<p1.second.first<<" , "<<p1.second.second<<"}}"<<endl;
    // // prints 1 4 3

    cout<<"\nPrinting array of pairs\n";
    pair<int, int> arr[]={ {1,2}, {3,4}, {5,6}};
    for(int i=0; i<3; i++){
        cout<<"{"<<arr[i].first<<" , "<<arr[i].second<<"}"<<endl;
    }
    // prints 
    // 1 2
    // 3 4
    // 5 6
}

void stlVector(){

    vector<int> v;

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    
    auto x = v1.begin();
    // begin() will point to the first index.
    auto y = v1.rend()-1;
    // rend() will point to memory address before the first element.
    auto z = v1.rbegin();
    // rbegin() will point to the last index.
    auto a = v1.end() - 1;
    // end() will point to one position ahead of last element index.
    cout<<" \n begin()- will point to the first index. \nx = "<<*(x)<<"\n rend()- will point to memory address before the first element.  \ny = "<<*(y)<<"\n rbegin()- will point to the last index. \nz = "<<*(z)<<"\n end()- will point to one position ahead of last element index. \na = "<<*(a)<<"\n"<<endl;


    for(auto it=v1.begin(); it!=v1.end(); it++)
    {
        cout<<*(it)<<" "<<endl;
    }

    vector<int>::iterator i = v1.begin();

    cout<<"\nPrinting values of iterator"<<endl;
    cout<<*(i)<<endl;
    cout<<*(i+1)<<endl;
    cout<<*(i+2)<<endl;
    cout<<*(i+3)<<endl;
    
}

int main(){
    stlPair();
    stlVector();

    return 0;
}
// Here we have a complete guid to STL.
// We'll add more to this.
// So, let's get started.

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// PAIRS
void stlPair(){

    // pair<int, int> p = {1, 3};
    // cout<<p.first<<" "<<p.second<<endl;
    // // // prints  1 3

    // pair<int, pair<int, int>> p = {1, {3, 4}};
	// cout <<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    // // prints 1 4 3

    // pair<int, int> arr[]={ {1,2}, {3,4}, {5,6}};
    // for(int i=0; i<3; i++){
    //     cout<<arr[i].first<<"  "<<arr[i].second<<endl;
    // }
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
    cout<<*(x)<<" "<<*(y)<<" "<<*(z)<<" "<<*(a)<<" "<<endl;
    // for(auto it=v1.begin(); it!=v1.end(); it++)
    // {
    //     cout<<*(it)<<" "<<endl;
    // }
    
    
}

int main(){
    // stlPair();
    stlVector();

    return 0;
}
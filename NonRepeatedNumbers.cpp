// SET 1

#include<bits/stdc++.h>
using namespace std;

int main(){
  // initializing array
  int n=10;
  int arr[n]={2,5,3,2,4,5,3,6,7,3};

  
    
   //intialize a unordered_map 

    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        
        m[arr[i]]++;
    }
    for(auto i:m)
    {
        
        if(i.second==1)
        {
            //if the frequency of any element is equal to one that means it is not repeated in array

            cout<<i.first<<" ";

            //print the the element which is repeated once
        }
        
    }
    }



    

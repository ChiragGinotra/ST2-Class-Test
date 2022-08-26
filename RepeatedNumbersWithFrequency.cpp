// SET 1


#include<bits/stdc++.h>
using namespace std;


int main(){
   
   // initializing array
   int n=10;
    int arr[10]={2,5,3,2,4,5,3,6,7,3};
    unordered_map<int,int> m;

    //intialize a unordered_map 

    for(int i=0;i<n;i++)
    {
        //store the values of array in unordered_map
        m[arr[i]]++;
    }

    for(auto i:m)
    {
        
        if(i.second>1)
        {
            //if the frequency of any element is greater than one that means it is repeated in array
            cout<<i.first<<" "<<i.second;

            //print the number and and its frequency
        }
        cout<<endl;
    }

}
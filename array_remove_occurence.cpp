/**************************************************************************************************
   Remove all occurrences of any element for maximum array sum 
   Link: https://www.geeksforgeeks.org/remove-all-occurrences-of-any-element-for-maximum-array-sum/
   
    Input : arr = {1, 1, 3}
    Output : 3
    On removing 1 from array we get {3} total value is 3

    Input : arr = {1, 1, 3, 3, 2, 2, 1, 1, 1}
    Output : 11
    On removing 2 from array we get {1, 1, 3, 3, 1, 1, 1} total value is 11

****************************************************************************************************/


#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> l_vec = {1, 1, 3};
    
    std::map<int,int> l_map;
    
    for(auto i:l_vec)
        l_map[i]++;
    
    int min = INT_MAX;
    int sum = 0 ;
    //std::map<int,int> 
    for(auto &it:l_map)
    {
        int res = it.first*it.second;
        if(res < min)
            min = res;
        sum += res;
        //cout << it.first * it.second << endl;
    }    
    cout << sum - min << endl ;
    
    
    return 0;
}

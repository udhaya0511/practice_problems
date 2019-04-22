/****************************************************************************************
    Maximum absolute difference in an array
    Link: https://www.geeksforgeeks.org/maximum-absolute-difference-in-an-array/
    
    Input: arr[] = {2, 1, 5, 3}
    Output: 4
    |5 – 1| = 4

    Input: arr[] = {-10, 4, -9, -5}
    Output: 14

********************************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> l_vec = {-10, 4, -9, -5};
    
    sort(l_vec.begin(),l_vec.end());
    
    int size = l_vec.size();
    cout << l_vec[size-1] - l_vec[0] << endl;
    
    return 0;
}

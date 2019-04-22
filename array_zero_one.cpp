/******************************************************************************************************

    Move all zeros to start and ones to end in an Array of random integers
    Link : https://www.geeksforgeeks.org/move-all-zeros-to-start-and-ones-to-end-in-an-array-of-random-integers/
    
    Input: arr[] = {1, 2, 0, 4, 3, 0, 5, 0}
    Output: 0 0 0 2 4 3 5 1

    Input: arr[] = {1, 2, 0, 0, 0, 3, 6};
    Output: 0 0 0 2 3 6 1


*******************************************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> l_vec = {1, 2, 0, 0, 0, 3, 6};
    int zero = 0 ;
    int one = 0;
    
    vector<int> ll;
    
    for(auto &it:l_vec)
    {
        if(it ==0)
            zero++;
        else if(it == 1)
            one++;
        else
            ll.push_back(it);
    }

    std::vector<int> res;
    res.insert(res.begin(),zero,0);
    res.insert(res.begin()+zero,ll.begin(),ll.end());
    res.insert(res.begin()+zero+ll.size(),one,1);
    
    for(auto &it:res)
        cout << it ;
    cout << endl;

    
    return 0;
}

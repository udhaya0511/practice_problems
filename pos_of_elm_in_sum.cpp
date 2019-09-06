//Ref : https://www.geeksforgeeks.org/position-of-elements-which-are-equal-to-sum-of-all-preceding-elements/


#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
 
    vector<int> l_vec =  {1, 2, 3, 6, 3, 15, 5};
    
    int sum = l_vec[0] ;
    bool found = false;
    for(int i = 1 ; i < l_vec.size() ; i++)
    {
        if(l_vec[i] == sum)
        {
            found = true;
            cout << i+1 << endl;
        }
        sum += l_vec[i] ;
    }
    
    if(!found)
        cout << "-1" << endl;
    return 0;
}

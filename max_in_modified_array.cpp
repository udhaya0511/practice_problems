//Ref: https://www.geeksforgeeks.org/count-the-values-greater-than-x-in-the-modified-array/

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int> l_vec = {10, 5, 5, 4, 9};
    
    int val = 10;
    
    int incr = 0 ;
    int decr = 0 ; 
    int res = 0 ;
    
    for(int i = 0 ; i< l_vec.size() ; i++)
    {
        if((l_vec[i]+incr) >= val)
        {
            res++;
            incr--;
        }
        else
            incr++;
    }
    cout << res << endl ;
    return 0;
}

/*******************************************************************************************************
  Boost library to split the string based on the delimiter
  
 ********************************************************************************************************/


#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <string>

using namespace std;

int main()
{
    string str="102.168.2.201";
    vector<string> l_vec;
    
    boost::split(l_vec,str,boost::is_any_of("."));
    
    cout << l_vec.size() << endl;
    
    for(auto &it:l_vec)
        cout << it << endl ;
    return 0;
}

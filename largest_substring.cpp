//Ref: https://www.geeksforgeeks.org/largest-substring-of-str2-which-is-a-prefix-of-str1/

#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
 
    string str1 = "geeksfor";
    string str2 = "forgeeks" ;
    
    bool found = false;
    for(int i = 0; i < str2.length() ; i++)
    {
        string res = str2.substr(i,str2.length());
        
        std::size_t pos = str1.find(res);
        
        if(pos != std::string::npos)
        {
            found = true;
            cout << res << endl ;
            break;
        }
        
    }
    
    if(!found)
        cout <<"-1" << endl ; 
    return 0;
}

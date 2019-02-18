#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
        int temp =a ;
        a = b;
        b = temp ;
}


int main()
{
        int a[] = {1,2,3,4,5};

        int n = sizeof(a)/sizeof(a[0]) ;

        for(int  i = 0 ; i < n ; i++)
        {
                bool swapa = false;
                for(int j = 0; j < n ; j++)
                {
                        if(a[j] > a[j+1])
                        {
                                swap(a[j],a[j+1]) ;
                                swapa = true ;
                        }
                }
                cout << "iter " << endl ;
                if(!swapa)
                        break;
        }

        for(int  i = 0 ; i < n ; i++)
                cout << a[i] ;
        return 0 ;

}

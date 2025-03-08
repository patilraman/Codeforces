#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int tc,a1,a2,a3,a4,a5,fibness=1;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>a1;
        cin>>a2;
        cin>>a4;
        cin>>a5;
        if(a4 == (a1+a2+a2))
        {
            fibness++;
            if(a5 == (a1+a2+a4))
                fibness++;
        }
        
        cout<<fibness<<'\n';
    }
}
#include<iostream>
#include<vector>

using namespace std;

void test(vector<int> &t)
{
    size_t n = t.size();
    int cnt =0;

    //sort(t.begin(), t.end());
    int nxm = n-2;
    int fact1=1, fact2=nxm;
    bool bfact1=false, bfact2=false;


    for(int i=0;i<n;i++)
    {
        if(((i+1) * (nxm/(i+1))) != nxm) continue;
        else
        {
            fact1=(i+1), fact2=nxm/(i+1);
            bfact1=false;
            bfact2=false;
        }

        for(int j=0;j<n;j++)
        {
            if(fact1 == t[j]) bfact1 = true;
            if(fact2 == t[j]) bfact2 = true;

            if((bfact1 == true)&&(bfact2 == true))
            {
                cout<<fact1<<" "<<fact2<<endl;
                return;
            }
        }

    }

    return;
}
int main()
{
    int tc,k,score=0;
    cin>>tc;

    for(int i=0;i<tc;i++)
    {
        cin>>k;
        vector<int> a(k,0);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        test(a);
        a.clear();
    }
}
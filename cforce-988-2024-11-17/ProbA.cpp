#include<iostream>
#include<vector>

using namespace std;

int test(vector<int> &t)
{
    size_t n = t.size();
    int cnt =0;

    sort(t.begin(), t.end());

    for(int i=0;i<n-1;i++)
        if(t[i] == t[i+1])
        {
            cnt++;
            i = i+1;
        }
    return cnt;
}
int main()
{    
    int tc,n,score=0;
    cin>>tc;

    for(int i=0;i<tc;i++)
    {
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<test(a)<<'\n';
        a.clear();
    }
}
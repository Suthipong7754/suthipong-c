#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
map<int,int> ::iterator itr;
int main()
{
    int N,L,Maxxy=0;
    scanf("%d",&N);
    for(int i = 1;i <= N;i++)
    {
        scanf("%d",&L);
        m[L]++;
        if(m[L] > Maxxy)
        {
            Maxxy = m[L];
        }

    }
    for(itr = m.begin();itr != m.end();itr++)
    {
        if(itr->second == Maxxy) printf("%d ",itr->first);
    }
}

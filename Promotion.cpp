#include<bits/stdc++.h>
using namespace std;
int remaining[10000+1];
int main(){
    int N,M,INPUT,least_tables=0;
    cin>>N>>M;
    for(int i=0;i<M;i++){
       cin>>INPUT;
       if(INPUT==N){
            least_tables++;
       } else{
            remaining[INPUT]++;
       }
    }
    for(int i=1;i<=N/2;i++){
        if(i==N-i){
           least_tables+=remaining[i]/2;
           remaining[i]-=remaining[i]/2;
        }else{
            if(remaining[i]>0 && remaining[N-i]>0){
                int to_choose=min(remaining[i],remaining[N-i]);
                least_tables+=to_choose;
                 remaining[i]-=to_choose;
                 remaining[N-i]-=to_choose;
            }
        }
    }
    cout<<least_tables;

 return 0;
}
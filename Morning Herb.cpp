#include<bits/stdc++.h>
using namespace std;
int N,HERBS[51];
long long int DP[51][51];
long long int MH(int START,int END){
    if(START>END || START<0 || END>=N)return 0;
    if(DP[START][END]){
        return DP[START][END];
    }
    if(START==END){
        return DP[START][END] = (START-1<0?1:HERBS[START-1])*HERBS[START]*( END+1>=N?1:HERBS[END+1] );
    }
    long long int MIN=99999999999;
    for(int i=START;i<=END;i++){
            int res=(START-1<0?1:(HERBS[START-1]))*HERBS[i]*(END+1>=N?1:HERBS[END+1])
                +MH(START,i-1)
                +MH(i+1,END);
        if(res<MIN){
        MIN=res;
        }
    }
    return DP[START][END] =MIN;
}
int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>HERBS[i];
    }
    cout<<MH(0,N-1);
 return 0;
}
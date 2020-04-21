#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    long T,N,Q;
    long x,y;
    
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>Q;
        long prev=0;
        long answer=0;
        for(int j=0;j<Q;j++){
           cin>>x>>y;
           answer=answer+abs(prev-x) + abs(y-x);
           prev=y;

        }
        
        cout<<answer<<"\n";
    }
    return 0;
}

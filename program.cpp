#include<iostream.h>
int main() {
    int T;
    cin>>T;
    int N; 
    for(int m=0;m<T;m++){
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
         int bQueueOk = 1;
       for(int i=0;i<N;i++)
       { 
           int count=0;
          
          if(bQueueOk==0)
          {
              break;
          }

           if(a[i]==1){
               for(int j=i+1;j<N;j++){
                   if(a[j]==1){
                       
                       if(count<5)
                       {
                           bQueueOk = 0;
                           i=j+1;
                           break;
                        }
                        
                   } 
                   else
                    {
                        count++;
                    }
               }
        
           }
         
     }

           if(bQueueOk)
          {
              cout<<"YES\n";
          }
          else
          {
               cout<<"NO\n";
          }
 }
    
return 0;
}

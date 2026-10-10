#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=0;j<2*n-2*i;j++){
            
         cout<<" ";
    }
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    
         cout<<endl;
}
       

}
void print2(int n){
    for(int i=(n-1);i>=0;i--){
        for(char j='A';j<='A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }


}
void print3(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<char(j+i);
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-1-i;j++){
            cout<<" ";
        }
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        if(i>0){
                    for(char j='A'+i-1;j>='A';j--){
                cout<<j<<" ";
            }
        }
        
        cout<<endl;
    }
    }
void print5(int n){
    for(int i=0;i<2*n-1;i++){
        if(i<n){
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
            for(int j=n;j>i;j--){
                cout<<"*";
            }
        }
        else{
            for(int j=0;j<=i-n+1;j++){
                cout<<"*";
            }
            for(int j=0;j<2*(2*n-i-2);j++){
                cout<<" ";
            }
            for(int j=0;j<=i-n+1;j++){
                cout<<"*";
            }
        }        
        cout<<endl;
    }
}
void print6(int n){
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=n-1-i;j++){
            cout<<" ";
        }
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        if(i>0){
                    for(char j='A'+i-1;j>='A';j--){
                cout<<j<<" ";
            }
        }
        
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<2*n-1;i++){
        int space=abs(2*n-2*i);
        if(i<n){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<space-2;j++){
            
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
    }
        else{
            for(int j=0;j<2*n-i-1;j++){
                cout<<"*";
            }
            for(int j=0;j<space+2;j++){
                
                      cout<<" ";
            }
            for(int j=0;j<2*n-i-1;j++){
                cout<<"*";
            }
        }
        
        
        cout<<endl;
    }
    
}
 
int main(){
    int num;
    cin>>num;
    print7(num);
}

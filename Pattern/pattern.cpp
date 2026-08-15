#include <iostream>
using namespace std;
void pattern1(int n){
    for (int i = 0; i<n; i++)
    {
        for(int j=0 ;j<n;j++){
            cout<< "*";
        }
        cout<<"\n";
    }
}
void pattern2(int n){
    for (int i = 0; i<n; i++)
    {
        for(int j=0 ;j<i;j++){
            cout<< "*";
        }
        cout<<"\n";
    }
}
void pattern3(int n){
    for (int i = 0; i<=n; i++)
    {
        for(int j=1 ;j<=i;j++){
            cout<< j;
        }
        cout<<"\n";
    }
}
void pattern4(int n){
    for (int i = 1; i<=n; i++)
    {
        for(int j=n ;j<=i;j--){
            cout<< i;
        }
        cout<<"\n";
    }
}
void pattern5(int n){
    for (int i = 1; i<=n; i++)
    {
        for(int j=1 ;j<=(n-i+1);j++){
            cout<< "*";
        }
        cout<<"\n";
    }
}
void pattern6(int n){
    for (int i = 1; i<=n; i++)
    {
        for(int j=1 ;j<=(n-i+1);j++){
            cout<< j;
        }
        cout<<"\n";
    }
}
void pattern7(int n){
    for (int i = 0; i<n; i++)
    {
        for(int j=0 ;j<(n-i-1);j++){
            cout<< " ";
        }
        for(int j=0 ;j<(2*i+1);j++){
            cout<< "*";
        }
        for(int j=0 ;j<(n-i-1);j++){
            cout<< " ";
        }
    
        cout<<"\n";
    }
}
void pattern8(int n){
    for (int i = 0; i<n; i++)
    {
        for(int j=0 ;j<i;j++){
            cout<< " ";
        }
        for(int j=0 ;j<(2*n-2*i-1);j++){
            cout<< "*";
        }
        for(int j=0 ;j<i;j++){
            cout<< " ";
        }
    
        cout<<"\n";
    }
}
void pattern9 (int n){
    pattern7(n);
    pattern8(n);
}
void pattern10(int n){
    for (int i = 0; i<=(2*n-1); i++)
    {
            int star=i;
            if(i>n){
                    star = 2*n-i;
            }
            for(int j = 1 ; j<=star;j++){
                    cout<<"*";
            }
            
    
        cout<<"\n";
    }
}
void pattern11(int n){
    int start=1;
    for (int i = 0; i<=n; i++)
    {
        if(i%2==0) start =0;
        else start=1;
       for(int j=0;j<i;j++){
        cout<<start;
        start = 1-start;

       }
        cout<<"\n";
    }
}
void pattern12(int n){
    
    for (int i = 1; i<=n; i++)
    {
       //numbers
       for(int j=1;j<=i;j++){
        cout<<j;
       }
       //space
       for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
       }
       //numbers
       for(int j=i;j>=1;j--){
        cout<<j;
       }
        cout<<"\n";
    }
}
void pattern13(int n){
    int count=1;
    for (int i = 1; i<=n; i++)
    {
       //numbers
       for(int j=1;j<=i;j++){
        cout<<count <<" ";
        count++;
       }
      
        cout<<"\n";
    }
}
void pattern14(int n){
    for(int i = 0 ; i<n;i++){
        for(char ch = 'A'; ch <='A'+i;ch++){
            cout<< ch <<" ";
        }
        cout<<"\n";
    }
}
void pattern15(int n){
    for(int i = 1 ; i<=n;i++){
        for(char ch = 'A'; ch <='A'+n-i;ch++){
            cout<< ch <<" ";
        }
        cout<<"\n";
    }
}
void pattern16(int n){
    for(int i = 0 ; i<n;i++){
        char ch = 'A'+i;
        for (int j = 0; j <=i; j++)
        {
            cout<<ch;
        }
        
        cout<<"\n";
    }
}
void pattern17(int n){
    for(int i = 1 ; i<=n;i++){
        //space
        for(int j=1 ; j<=n-i;j++){
            cout<<" ";
        }
        //character
        char ch ='A';
        int breakpoint = (2*i-1)/2;
        for(int j=1 ; j<=2*i-1;j++){
            cout<<ch;
            if(j>breakpoint){
                ch--;
            }
            else{
                ch++;
            }

        }
        // for(char ch='A';ch<'A'+i;ch++){
        //     cout<<ch;
        // }
        // for(char ch='A'+i-2;ch>= 'A';ch--){
        //     cout<<ch;
        // }
        //space
        for(int j=1 ; j<=n-i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern18(int n){
    for(int i = 1;i<=n;i++){
        
        for(char ch= 'A'+n-i;ch<='A'+n-1;ch++){
            cout<<ch;  
        }
        cout<<endl;
    }
}
void pattern19(int n){
    int initS = 0;
    for(int i=0;i<n;i++){
        
        for(int j =1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<initS;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        initS+=2;
        cout<<endl;
    }
    initS = 2*n-2;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<initS;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        initS-=2;
        cout<<endl;
    }

}
void pattern20(int n){
    int nsp = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int nst = i;
        if(i>n) nst=2*n-i;
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<n) nsp-=2;
        else nsp+=2;
        
        cout<<endl;
    }
}
void pattern21(int n){
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern21(n);
        cout<<endl;
    }
    

}
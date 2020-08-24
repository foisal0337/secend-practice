#include<bits/stdc++.h>
using namespace std;

#define n 1000000

bool prime[n+1];
void seiv()
{
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j=j+i){
                prime[j]=false;
            }
        }
    }
    prime[2]=false; 
    // geting false 
}

int main()
{
    seiv();
    int a;
    while(cin>>a && a )
    {
        for(int i=3;i<=a;i++){
            if(prime[i]==true){
                int b = a-i;
                if(prime[b]==true){
                    cout << a << " = " << i << " + " << b << endl;
                    break;
                }
            }
        }

    }
}

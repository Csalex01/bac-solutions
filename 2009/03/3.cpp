#include <iostream>

using namespace std;

int main(){

    int x, n, a[100], k=1;

    while(cin>>x){
        if(x>99) a[k++]=x;
    }

    n=k-1;

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i], a[j]);

    if(n==0) cout<<"NU EXISTA";
    else for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=n; j>=1; j--)
            if(i==1) a[i][j]=n;
            else if(j==n) a[i][j]=n-i+1;
            else a[i][j]=a[i][j+1]+a[i-1][j];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}

//Wave Sort Method 2
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n ,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i=i+2){
        swap(a[i],a[i+1]);
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}

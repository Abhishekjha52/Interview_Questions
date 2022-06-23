//Median of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Merge(int a[],int b[],int c[],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];
    sort(a,a+n1);
    sort(b,b+n2);
    int c[n1+n2];
    Merge(a,b,c,n1,n2);
    float median;
    int n=n1+n2;
    int mid=n/2;
    if(n%2==0)
        median=(float)((float)c[mid]+(float)c[mid-1])/2;
    else
        median=(float)c[(n1+n2)/2];
    cout<<fixed<<setprecision(5)<<median<<"\n";
    return 0;
}
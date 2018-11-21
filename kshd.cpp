#include <iostream>
using namespace std;
int maxi(int a[],int size )
{
    int x;

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                a[j]=a[i];
                a[i]=x;
            }
        }
    }
    return a[0];

}
int mini(int b[],int size)
{
    int x;
    for(int i=0;i,size;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if(b[i]<b[j])
            {
                x=b[i];
                b[j]=b[i];
                b[i]=x;
            }
        }
    }
return b[0];
}
int main()
{
    int a[99];
    int size,k;
    cout<<"enter the size of the it"<<endl;
    cin>>size;
    cout<<"enter the adat"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"the data in ascending order is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<maxi(a,size)<<endl;
    }
    cout<<"the data in descending order"<<endl;
    for(int i=0;i<size;i++)
    {
    cout<<mini(a,size)<<endl;
    }
    return 0;
}

using namespace std;
#include<iostream>

int main()
{
    int a[50],siz,i,even=0,odd=0;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }


    cout<<"\n Even Numbers ="<<even<<"\n Odd numbers ="<<odd;
    return 0;
}



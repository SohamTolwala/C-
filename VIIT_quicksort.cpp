#include <iostream>

using namespace std;

int partition(int[],int,int);

int main()
{
    int a[10]{10,80,20,50,90,30,70,40,100,60};
    int low=0, high=9;
    int x;
    
    cout<<"\n The original data: \n";
    for(x=0;x<=9;x++)
    cout<<"\t"<<a[x];
    
    x=partition(a,low,high);
    cout<<"\n The index of pivot element = "<<x;
    
    cout<<"\n After partition = \n";
    for(x=0;x<=9;x++)
    cout<<"\t"<<a[x];
    
    return 0;
}

int partition(int a[],int low,int high)
{
    int i,j,pi,temp;
    
    i=low-1;
    j=low;
    pi=high;
    
    for(j=low;j<=pi-1;j++)
    {
        if(a[j]<a[pi])
        {
            i++;
            
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    
    temp=a[i+1];
    a[i+1]=a[pi];
    a[pi]=temp;
    
    return(i+1);
}
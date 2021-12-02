#include <iostream>
using namespace std;
int main()
{
    int m1[4][4]={1,2,3,0,5,0,7,0,9,0,11,0,13,14,0,16};
    int r,c;
    int count;
    int sparse[15][3];
    int x;
    cout<<"\n The original matrix is:\n\n";
    for(r=0;r<=3;r++)
    {
        for(c=0;c<=3;c++)
        {
            cout<<"\t"<<m1[r][c];
            
        }
        cout<<"\n";
    }
    count=0;
     for(r=0;r<=3;r++)
    {
        for(c=0;c<=3;c++)
        {
           if (m1[r][c]!=0)
           count++;
            
        }
    }
        cout<<"\n The non zero elements are "<<count;
    
    sparse [0][0]=4;
    sparse [0][1]=4;
    sparse [0][2]=count;
    
    
    x=1;
    for(r=0;r<=3;r++)
    {
        for(c=0;c<=3;c++)
        {
            if (m1[r][c]!=0)
            {
                sparse[x][0]=r;
                sparse[x][1]=c;
                sparse[x][2]=m1[r][c];
                x++;    
            }     
        }      
    }    
     cout<<"\n The sparse matrix is:\n\n";
    for(r=0;r<=3;r++)
    {
        for(c=0;c<=3;c++)
        {
            cout<<"\t"<<sparse[r][c];
            
        }
        cout<<"\n";
 
   }
     return 0;
}

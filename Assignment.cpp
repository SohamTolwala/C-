// #include <iostream>
// using namespace std;
// int main(){
    // char a[30], b[30];
    // int x;
    // int len=0;

    // cout << "\nEnter string:\n ";
    // cin >> a;

    // for (x = 0; a[x]!='\0'; x++){
    //     b[x] = a[x];
    // }

    // cout<<"\nCopied string: "<< b;
//     return 0;

// } 

// #include <iostream>
// using namespace std;

// int main(){
    // char s1[30];
    // int len = 0;
    // cout << "Enter a string\n";
    // cin >> s1;
    // for (int x = 0;s1[x]!='\0';x++){
    //     len++;
    // }
    // cout << "\nThe length of the string is " << len;
//     return 0;
// } 

//------------------------------------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
//     char s1[20], s2[20];
//     int x,y;
    
//     cout<<"\nEnter s1:";
//     cin>>s1;
    
//     cout<<"\nEnter s2:";
//     cin>>s2;
    
//     cout<<"\nInitially..... s1 = "<<s1<<"   s2 = "<<s2;
    
//     //concate s2 to s1 
    
//     for(x=0;s1[x]!='\0';x++);   //reach upto the null char in s1
    
    
//     cout<<"\n x="<<x;    // is not under the for loop
    
//     for(y=0;s2[y]!='\0';y++)  // traverse s2 string from 0 to null char
//     {
//         s1[x]


//----------------------------------------------------------------------------------


// #include <iostream>

// using namespace std;

// int main()
// {
//     char s1[20], s2[20];
//     int x,y;
//     cout<<"\nEnter s1:";
//     cin>>s1;
//     cout<<"\nEnter s2:";
//     cin>>s2;
//     cout<<"\nInitially..... s1 = "<<s1<<"   s2 = "<<s2;
//     //concate s2 to s1 
//     for(x=0;s1[x]!='\0';x++);   //reach upto the null char in s1
//         cout<<"\n x="<<x;    // is not under the for loop
//     for(y=0;s2[y]!='\0';y++)  // traverse s2 string from 0 to null char
//     {
//         s1[x]=s2[y];     //copy every char in s2 



//--------------------------------------------------------------------Concatenated string
// #include <iostream>
// using namespace std;

// int main(){
    // char a[30];
    // char b[30];
    // cout << "\nEnter the string a:\n ";
    // cin >> a;
    // cout << "\nEnter the string b:\n ";
    // cin >> b;
    // int x, y;
    // for (x = 0; a[x]!='\0'; x++);
    // for (y = 0; b[y]!='\0'; y++){
    //     a[x] = b[y];
    //     x++;

    // }

    // a[x] = '\0';
    // cout << "The Concatenated string is " << a;
//     return 0;
// }



//----------------------------------------------------------------------------Reverse string
// #include <iostream>
// using namespace std;

// int main()
// {
//     char s1[10], s2[10];
//     int x,y;
    
//     cout << "\nEnter string: ";
//     cin>>s1;
    
//     cout<<"\nThe string is "<<s1;
    
//     for(x=0; s1[x]!='\0'; x++);
//     cout << "\n x=" << x;
//     x--;
    
//     y=0;
//     while(x >= 0)
//     {
//         s2[y] = s1[x];
//         y++;
//         x--;
        
//     }
//     s2[y] = '\0';
//     cout << "\n The reversed string is= " << s2;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int choose;
//     cout << "\nSTRING OPERATIONS\nChoose for the following string operation: 1.Length of string\n2. Copy string\n3. Concatenate string\n4. Reverse string";
//     cin >> choose;
//     cout << choose;

//     switch (choose)
//     {
//     case 1:
//         char s1[30];
//         int len = 0;
//         cout << "Enter a string\n";
//         cin >> s1;
//         for (int x = 0;s1[x]!='\0';x++){
//             len++;
//         }
//         cout << "\nThe length of the string is " << len;
//         break;

//     case 2:
//         char a[30], b[30];
//         int x;
//         int len=0;

//         cout << "\nEnter string:\n ";
//         cin >> a;

//         for (x = 0; a[x]!='\0'; x++){
//             b[x] = a[x];
//         }

//         cout<<"\nCopied string: "<< b;
//         break;

//     case 3:
//         char a[30];
//         char b[30];
//         cout << "\nEnter the string a:\n ";
//         cin >> a;
//         cout << "\nEnter the string b:\n ";
//         cin >> b;
//         int x, y;
//         for (x = 0; a[x]!='\0'; x++);
//         for (y = 0; b[y]!='\0'; y++){
//             a[x] = b[y];
//             x++;

//         }

//         a[x] = '\0';
//         cout << "The Concatenated string is " << a;
//         break;

//     case 4:
//         char s1[10], s2[10];
//         int x,y;
        
//         cout << "\nEnter string: ";
//         cin>>s1;
        
//         cout<<"\nThe string is "<<s1;
        
//         for(x=0; s1[x]!='\0'; x++);
//         cout << "\n x=" << x;
//         x--;
        
//         y=0;
//         while(x >= 0)
//         {
//             s2[y] = s1[x];
//             y++;
//             x--;
            
//         }
//         s2[y] = '\0';
//         cout << "\n The reversed string is= " << s2;
//         break;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    int choose;
    
    // char s1[30];           // case 1
    int len = 0;
    
    // char a[30], b[30];     // case2
    // int x;
    // int len=0;
    
    char a[30];           // case 3
    char b[30];
    
    char s1[10], s2[10];    // case 4
    int x,y;
    cout << "\nSTRING OPERATIONS\nChoose for the following string operation: \n1. Length of string\n2. Copy string\n3. Concatenate string\n4. Reverse string\n";
    cin >> choose;

    switch (choose)
    {
    case 1:
        
        cout << "Enter a string\n";
        cin >> s1;
        for (int x = 0;s1[x]!='\0';x++){
            len++;
        }
        cout << "\nThe length of the string is " << len;
        break;

    case 2:

        cout << "\nEnter string:\n ";
        cin >> a;

        for (x = 0; a[x]!='\0'; x++){
            b[x] = a[x];
        }

        cout<<"\nCopied string: "<< b << endl;
        break;

    case 3:
        
        cout << "\nEnter the string a:\n ";
        cin >> a;
        cout << "\nEnter the string b:\n ";
        cin >> b;
        int x, y;
        for (x = 0; a[x]!='\0'; x++);
        for (y = 0; b[y]!='\0'; y++){
            a[x] = b[y];
            x++;

        }

        a[x] = '\0';
        cout << "The Concatenated string is " << a;
        break;

    case 4:
        
        cout << "\nEnter string: ";
        cin>>s1;
        
        cout<<"\nThe string is "<<s1;
        
        for(x=0; s1[x]!='\0'; x++);
        cout << "\n x=" << x;
        x--;
        
        y=0;
        while(x >= 0)
        {
            s2[y] = s1[x];
            y++;
            x--;
            
        }
        s2[y] = '\0';
        cout << "\n The reversed string is " << s2;
        break;
    }
    return 0;
}

// #include <iostream>

// using namespace std;

// struct node            //global declaration of structure for node in LL
// {  
//     int data;  
//     struct node *next;   
// };  
// struct node *head=NULL;    // global declaration for pointer to head of LL
//                 // Dont forget to initialise it to NULL
  
// void beginInsert ();   
// void lastInsert ();  
// void randomInsert();  
// void display();  


// int main()
// {
//     int choice, n;
    
//     while(1)
//     {
        
//         cout<<"\n-------------------------";
//         cout<<"\n1. Insert at Beginning\n2. Insert at Last \n3. Insert at Random Place \n4. Display \n 5. Exit";
//         cout<<"\n Enter your choice:";
//         cin>>choice;
        
//         switch(choice)
//         {
//             case 1:  
//             beginInsert();      
//             break;  
//             case 2:  
//             lastInsert();         
//             break;  
//             case 3:  
//             randomInsert();       
//             break;  
//             case 4:  
//             display();       
//             break;  
//             case 5:  
//             exit(0);        
//             break; 
//             default:  
//             cout<<"Enter appropriate choice.";
//         }
//     }
// }

// void beginInsert ()
// {
//     cout<<"\n-------------------------";
//     cout<<"\nInsert at beginning";
//     struct node *ptr;
//     int item;

//     int arr[10];

//     ptr = (struct node *)malloc(sizeof(struct node *));
//     if(ptr == NULL){
//         cout << "\nMemory is not allocated.";
//     }
//     else{       // memory is allocated 
//         cout << "\nEnter data to be attached to linked list.";
//         cin >> item;
//         ptr -> data = item;
//         ptr -> next = NULL;
    

//     if(head == NULL){   // if LL is empty
//         head = ptr;  // new node will become  starting node of LL
//     }

//     else{        // LL is not empty
//         ptr -> next = head;        //inst 1
//         head = ptr;                //inst 2
//     }
    

//     cout << "\nNew node is added  at the beginnng.";
//     }
// }


// void lastInsert ()
// {
//     cout<<"\n-------------------------";
//     cout<<"\nInsert at last";

//     struct node *ptr, *temp;
//     int item;

//     int arr[10];

//     ptr = (struct node *)malloc(sizeof(struct node *));
//     if(ptr == NULL){
//         cout << "\nMemory is not allocated.";
//     }
//     else{       // memory is allocated 
//         cout << "\nEnter data to be attached at the beginning.";
//         cin >> item;
//         ptr -> data = item;
//         ptr -> next = NULL;

//         if(ptr == NULL){      // LL is empty
//             head = ptr;      // new node is the first 
//         }

//         else{          //thre are some nodes in LL
//             temp = head;      //x=0
//             while(temp->next!=NULL){     //reach upto the last node 
//                 temp = temp->next;
//             }
//             temp->next=ptr;    //attach new node to the last node
//         }

//         cout << " \n Node is inserted at the end.";
// }

// void randomInsert(){
//     cout<<"\n-------------------------";
//     cout<<"\nInsert at random";
// }

// void display()
// {
    
//     cout<<"\n-------------------------";
//     cout<<"\nDisplay ";
    
//     struct node *ptr;
//     ptr = head;

//     if(ptr == NULL){
//         cout << "\n The LL is empty.";
//     }
//     else{
//         temp = head;        //x=0
//         while(ptr!=NULL){
//             cout << "\n"<<ptr<<"\t"<<ptr->data<<"\t"<<ptr->next<<"  ->  ";
//             ptr = ptr->next;     // x++
//         }
//     }
// }


#include <iostream>

using namespace std;

struct node            //global declaration of structure for node in LL
{  
    int data;  
    struct node *next;   
};  
struct node *head=NULL;    // global declaration for pointer to head of LL
                // Dont forget to initialise it to NULL
  
void beginInsert ();   
void lastInsert ();  
void randomInsert();  
void display();  


int main()
{
    int choice, n;
    
    while(1)
    {
        
        cout<<"\n-------------------------";
        cout<<"\n1. Insert at Beginning\n2. Insert at Last \n3. Insert at Random Place \n4. Display \n 5. Exit";
        cout<<"\n Enter your choice:";
        cin>>choice;
        
        switch(choice)
        {
            case 1:  
            beginInsert();      
            break;  
            case 2:  
            lastInsert();         
            break;  
            case 3:  
            randomInsert();       
            break;  
            case 4:  
            display();       
            break;  
            case 5:  
            exit(0);        
            break; 
            default:  
            cout<<"Enter appropriate choice.";
        }
    }
}

void beginInsert ()
{
    cout<<"\n-------------------------";
    cout<<"\nInsert at beginning";
    struct node *ptr;
    int item;

    int arr[10];

    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        cout << "\nMemory is not allocated.";
    }
    else{       // memory is allocated 
        cout << "\nEnter data to be attached to linked list.";
        cin >> item;
        ptr -> data = item;
        ptr -> next = NULL;
    

    if(head == NULL){   // if LL is empty
        head = ptr;  // new node will become  starting node of LL
    }

    else{        // LL is not empty
        ptr -> next = head;        //inst 1
        head = ptr;                //inst 2
    }
    

    cout << "\nNew node is added  at the beginnng.";
    }
}


void lastInsert ()
{
    cout<<"\n-------------------------";
    cout<<"\nInsert at last";
    
    struct node *ptr,*temp;
    int item;
    
    ptr=(struct node *) malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        cout<<"\n Memory Not Available";
    }
    else
    {
        cout<<"\nEnter the Value to be inserted at the end:";
        cin>>item;
        ptr->data=item;
        ptr->next=NULL;
        
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
        }
        cout<<"\n Node is inserted at the end";
    }
}
void randomInsert()
{
    cout<<"\n-------------------------";
    cout<<"\nInsert at random";
}
void display()
{
    
    cout<<"\n-------------------------";
    cout<<"\nDisplay";
    
    struct node *ptr;
    ptr=head;

    if(ptr == NULL){
        cout << "\n The LL is empty.";
    }
    else{
        
        while(ptr!=NULL){
            cout << "\n"<<ptr<<"\t"<<ptr->data<<"\t"<<ptr->next<<"  ->  ";
            ptr=ptr->next;
        }
    }
}
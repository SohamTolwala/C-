#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class BOOK
{
    public:
	int BOOKNO;
    string bookTitle, author;
	char BOOKTITLE[20];
    bool movieCreated;
	double PRICE;
    double D_PRICE;
    double total_PRICE;

    double calcDiscount(){
        D_PRICE = PRICE - PRICE * 0.2;
        return D_PRICE;
    }

    void INPUT(){
        cout << "Enter Book number: ";
        cin >> BOOKNO;
        cout << "Enter book title: ";
        cin >> bookTitle;
        cout << "Enter book author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> PRICE;
    }

    void PURCHASE(){
        total_PRICE = D_PRICE;
        cout << "You have to pay Rs."<< total_PRICE;
    }

    
};
 
int main()
{
    BOOK obj;
    obj.INPUT();
    obj.calcDiscount();
    obj.PURCHASE();
	
	
	
}
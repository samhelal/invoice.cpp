/*3.10 ( Invoice Class) Create a class called
Invoice that a hardware store might use to represent an invoice for an item
sold at the store. An Invoice should include four data members —a part number (type
string ), a part description (type a quantity of the item being purchased (type int )
string ), and a priceper item (type int ). Your class should have a constructor that
initializes the four data members. Provide a set and a get function for each data member.
 In addition, provide a member function named getInvoiceAmount that calculates the invoice
amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not
positive, it should be set to 0 . If the price per item is not positive, it should be set to 0 . Write a test program that
demonstrates class Invoice ’s capabilities.(c++ how to program)*/
// invoice demonstrating capabilities .
#include <iostream>
#include <string>
using namespace std ;
#include "invoice-class.h"

int main () {
    invoice redCars ("6" , "red" , -100,-500) ;
    invoice blueCars ("6" , "blue" , 100,500) ;

    cout <<" The part number is : "<< redCars.getPartNumber() << endl ;
    cout <<" The part description is :" <<redCars.partDescription() << endl ;
    cout <<" The item quantity is : " <<redCars.getItemQuantity() << endl ;
    cout <<" The item Price per one is : " <<  redCars.getItemprice() << endl<<endl ;
    string partNum ; 
    cout << " Enter new part number for red cars :" ;
    cin >> partNum ;
    int quantity(0);
    cout<< " Enter new quantity for blue cars :" ;
    cin >> quantity ;
    blueCars.setItemQuantity(quantity) ; 
    redCars.setPartNumber(partNum) ;
    cout <<"\n The new part number is : "<< redCars.getPartNumber() << endl ;
    cout << "\n The total amount for red cars is : "<< redCars.getInvoiceAmount() << endl ;
    cout << " The total amount for blude cars is : "<< blueCars.getInvoiceAmount() << endl ;


}
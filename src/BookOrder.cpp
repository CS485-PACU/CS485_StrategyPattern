//***************************************************************************
// File name:  BookOrder.cpp
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#include "BookOrder.h"
#include "Discount.h"
//***************************************************************************
// Constructor: BookOrder
//
// Description: Initialized the object
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
BookOrder::BookOrder()
{}

//***************************************************************************
// Function:    addBook
//
// Description: Add a book to the order
//
// Parameters:  rcBook - the book to add
//
// Returned:    None
//***************************************************************************
void BookOrder::addBook(const Book &rcBook) 
{
  mcBooks.push_back(rcBook);
}

//***************************************************************************
// Function:    addDiscount
//
// Description: Add a discount to the order
//
// Parameters:  pcDiscount - the discount to apply
//
// Returned:    None
//***************************************************************************
void BookOrder::addDiscount(Discount *pcDiscount)
{
  mpDiscount = pcDiscount;
}

//***************************************************************************
// Function:    getTotalPrice
//
// Description: Get total price of the order
//
// Parameters:  None
//
// Returned:    the total price
//***************************************************************************
double BookOrder::getTotalPrice() const
{
  double totalPrice = 0.0;

  for (auto &rcBook : mcBooks)
  {
    if ( nullptr != mpDiscount)
    {
      totalPrice += mpDiscount->applyDiscount(rcBook);
    }
    else
    {
      totalPrice += rcBook.getPrice();
    }
  }
  return totalPrice;
}


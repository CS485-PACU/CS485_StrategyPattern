//***************************************************************************
// File name:  UsedBookDiscount.cpp
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#include "UsedBookDiscount.h"

//***************************************************************************
// Constructor: UsedBookDiscount
//
// Description: Initialized the object, set the discount
//
// Parameters:  percentOff - the discount
//
// Returned:    None
//***************************************************************************
UsedBookDiscount::UsedBookDiscount (double percentOff) : mDiscount(percentOff)
{

}


//***************************************************************************
// Function:    applyDiscount
//
// Description: apply discount to price 
//
// Parameters:  rcBook - the book to discount
//
// Returned:    the discounted price
//***************************************************************************
double UsedBookDiscount::applyDiscount(const Book &rcBook)
{
  double price = rcBook.getPrice();
  if (rcBook.isUsed() )
  {
    price *= (1-mDiscount);
  }
  return price;
}

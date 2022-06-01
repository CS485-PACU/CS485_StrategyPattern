//***************************************************************************
// File name:  EmployeeDiscount.cpp
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#include "EmployeeDiscount.h"

//***************************************************************************
// Function:    applyDiscount
//
// Description: apply discount to price 
//
// Parameters:  rcBook - the book to discount
//
// Returned:    the discounted price
//***************************************************************************
double EmployeeDiscount::applyDiscount(const Book &rcBook)
{
  // 20% discount
  return rcBook.getPrice() * .9;
}

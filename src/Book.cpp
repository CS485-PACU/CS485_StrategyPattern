//***************************************************************************
// File name:  Book.cpp
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#include "Book.h"

//***************************************************************************
// Constructor: Book
//
// Description: Initialized the object
//
// Parameters:  rcTitle - the book's title
//              price - the book's price
//              bUsed - if the book is used
//
// Returned:    None
//***************************************************************************

Book::Book(std::string rcTitle, double price, bool bUsed) : 
  mTitle(rcTitle), mPrice(price), mbUsed(bUsed)
{}

//***************************************************************************
// Function:    getPrice
//
// Description: Return the book's price
//
// Parameters:  None
//
// Returned:    the price
//***************************************************************************
double Book::getPrice() const
{
  return mPrice;
}

//***************************************************************************
// Function:    getTitle
//
// Description: Return the book's Title
//
// Parameters:  None
//
// Returned:    the Title
//***************************************************************************
std::string Book::getTitle() const
{
  return mTitle;
}

//***************************************************************************
// Function:    isUsed
//
// Description: Return if the book is used
//
// Parameters:  None
//
// Returned:    true if used, false otherwise
//***************************************************************************
bool Book::isUsed() const
{
  return mbUsed;
}
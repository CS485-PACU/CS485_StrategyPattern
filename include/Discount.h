//***************************************************************************
// File name:  Discount.h
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#pragma once
#include "Book.h"
class Discount
{
  public:
    virtual double applyDiscount(const Book &rcBook) = 0;
};
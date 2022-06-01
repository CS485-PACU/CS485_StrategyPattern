//***************************************************************************
// File name:  UsedBookDiscount.h
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#pragma once
#include "Discount.h"

class UsedBookDiscount : public Discount
{
  public:
    UsedBookDiscount(double percentOff);
    virtual double applyDiscount(const Book &rcBook);

  private:
    double mDiscount;
};
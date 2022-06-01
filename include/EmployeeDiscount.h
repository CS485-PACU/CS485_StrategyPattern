//***************************************************************************
// File name:  EmployeeDiscount.h
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#pragma once
#include "Discount.h"

class EmployeeDiscount : public Discount
{
  public:
    virtual double applyDiscount(const Book &rcBook);
};
//***************************************************************************
// File name:  BookOrder.h
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#pragma once
#include <vector>
#include "Book.h"

class Discount;

class BookOrder
{
  public:
    BookOrder();

    void addBook(const Book &rcBook);
    double getTotalPrice() const;
    void addDiscount(Discount *pcDiscount);

  private:

    std::vector<Book> mcBooks;
    Discount *mpDiscount = nullptr;
};
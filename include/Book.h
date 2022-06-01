//***************************************************************************
// File name:  Book.h
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#pragma once
#include <string>

class Book
{
  public:
    Book(std::string rcTitle, double price, bool bUsed);
    double getPrice() const;
    std::string getTitle() const;
    bool isUsed() const;

  private:
    std::string mTitle;
    double mPrice;
    bool mbUsed;
};
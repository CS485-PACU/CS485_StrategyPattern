//***************************************************************************
// File name:  main.cpp
// Author:     Chadd Williams
// Date:       5/31/2022
// Class:      CS485
// Assignment: Examples
// Purpose:    Demonstrate Strategy Pattern
//***************************************************************************
#include <iostream>
#include <string>
#include "Book.h"
#include "BookOrder.h"
#include "EmployeeDiscount.h"
#include "UsedBookDiscount.h"

//***************************************************************************
// Function:    main
//
// Description: Demonstrate Strategy Pattern
//
// Parameters:  None
//
// Returned:    int - EXIT_SUCCESS
//***************************************************************************
int main()
{
    BookOrder cOrder;
    UsedBookDiscount cUsedBookDiscount(0.5);
    EmployeeDiscount cEmpDiscount;

    cOrder.addBook( {"Data Structues", 100.0, false});
    cOrder.addBook( {"Data Bases", 130.0, true});
    cOrder.addBook( {"Data Mining", 200.0, false});

    std::cout << "Total Price: " << cOrder.getTotalPrice() << std::endl;

    cOrder.addDiscount(&cUsedBookDiscount);
    std::cout << "Total Price (Used Book Discount): " << cOrder.getTotalPrice() << std::endl;

    cOrder.addDiscount(&cEmpDiscount);
    std::cout << "Total Price (Employee Discount): " << cOrder.getTotalPrice() << std::endl;

    return EXIT_SUCCESS;
}

// Name: Peter Choi
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    // Declare variables.
    std::string trip_location;
    int total_days;
    double hotel_expenses,
      meal_expenses,
      total_expenses;
    
    // Request inputs from user.
    std::cout << "Business Trip Tracker for MINHEE71 Corp.\n";
    std::cout << "Where was the location of the trip? ";
    std::cin >> trip_location;
    std::cout << "Total days you spent on the trip? ";
    std::cin >> total_days;
    std::cout << "How much were your hotel expenses? $";
    std::cin >> hotel_expenses;
    std::cout << "How much were your meal expenses? $";
    std::cin >> meal_expenses;

    //Calculations for total of hotel and meal meal_expenses.
    total_expenses = hotel_expenses + meal_expenses;

    // Display results for user.
    std::cout << "Here is a summary of your expenses for your business trip.\n";

    // Header row.
    std::cout << std::setw(15) << "Location" << std::setw(15) << "Totals Days"
    << std::setw(20) << "Hotel Expenses" << std::setw(20) << "Meal Expenses"
    << std::setw(20) << "Total Expenses\n";

    std::cout << std::setw(15) << "--------" << std::setw(15) << "-----------"
    << std::setw(20) << "--------------" << std::setw(20) << "-------------"
    << std::setw(20) << "--------------\n";
    // Data output row. $ sign not included per Prof. Shea's approval.
    std::cout << std::setw(15) << trip_location << std::setw(15) << total_days
    << std::setw(20) << hotel_expenses << std::setw(20) << meal_expenses
    << std::setw(20) << std::fixed << std::setprecision(2) << total_expenses
    << std::endl << std::endl;

  return 0;
}

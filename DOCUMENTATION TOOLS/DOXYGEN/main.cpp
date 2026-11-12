/**
 * \file main.cpp
 * \brief Demonstrates basic Doxygen comments in C++.
 * \author Ibrahim Attarwala
 * \version 1.0
 */

#include <iostream>
using namespace std;

/**
 * \brief Adds two integers.
 *
 * \param a First integer.
 * \param b Second integer.
 * \return The sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * \brief Main function.
 *
 * Calls add() and displays the result.
 * \return 0 when the program finishes successfully.
 */
int main()
{
    int x = 10, y = 20;

    cout << "Sum = " << add(x, y) << endl;

    return 0;
}
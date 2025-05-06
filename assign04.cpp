// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: April 30, 2025
// This program catches erroneous input,
// and writes a program that generates the
// tan table for each degree(0 to 360).

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main() {
    // Declare variables
    std::string startString;
    std::string endString;
    int endInteger;
    int startInteger;
    int angle;

    // Display greeting card
    std::cout
        << "************************************" << std::endl;
    std::cout << "************************************" << std::endl;
    std::cout << "*            Hello user !          *" << std::endl;
    std::cout << "************************************" << std::endl;
    std::cout << "************************************\n"
              << std::endl;
    std::cout << "\n"
              << std::endl;

    // Using a while true loop to repeat
    // question until valid input is received from user
    while (true) {
        // Get the user's starting angle and assign it to a string
        std::cout << "Enter the starting angle: ";
        std::cin >> startString;
        // CAST it to an integer
        try {
                startInteger = std::stoi(startString);
                try {
                    // Get the user;s ending angle as a string
                    // and CAST it to an integer
                    std::cout << "Enter the ending angle: ";
                    std::cin >> endString;
                    endInteger = std::stoi(endString);
                    // Check if the angles are in the right range
                    if (startInteger >= 0 && endInteger <= 360) {
                        // Leave the loop when correct range is entered
                        break;
        } else {
            // Displays when the user's input is not valid
            std::cout << "Angles should be in the range of 0 and 360.\n";
            std::cout << "Starting angle must be smaller than ending angle.\n";
                    }
        // Catches erroneous input for the starting angle
        } catch (std::invalid_argument) {
        std::cout << endString << " is not a valid input" << std::endl;
                }
                // Catches erroneous input for the ending angle
        } catch (std::invalid_argument) {
            std::cout << startString << " is not a valid input" << std::endl;
        }
        }
    // Displays the table's header/title
    std::cout << "Angle\t\tTan\n";
    std::cout << "---------------------------\n";
    // This loop prints out the angles on the table in steps of 10 angles
    for (angle = startInteger; angle <= endInteger; angle += 10) {
        // Checks where the angle is undefined (90 and 270)
        if (angle % 180 == 90) {
            std::cout << angle << " \t\tUndefined" << std::endl;
        } else {
            // Converts the degrees to radians
            float radians = angle * (M_PI / 180);
            // Calculates the tangent of the angle
            float tanNumber = tan(radians);
            // Prints the tangent of the
            std::cout << angle << "\t\t" << std::fixed
            << std::setprecision(5) << tanNumber << std::endl;
        }
    }
}

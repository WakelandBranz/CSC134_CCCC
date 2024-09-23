/*
C5_IE4 Assignment
By Wakeland Branz
*/

/*

Assignment description:

    Write a program that asks the user for his or her name, then asks the user to enter a sentence that describes himself or herself. Here is an 
    example of the program’s screen:

    Enter your name: Julie Taylor [Enter]     Describe yourself: I am a computer science major, a member of the Jazz club, 
    and I hope to work as a mobile app developer after I graduate. [Enter]

    Once the user has entered the requested input, the program should create an HTML file, containing the input, for a simple webpage. Here is an 
    example of the HTML content, using the sample input previously shown (in the assignment there is an image but I can't put that in a c++ file for
    obvious reasons)

*/

#include <iostream>
#include <fstream>
#include <string>

int personalWebpageGenerator() {
    std::string name, description;

    // Get user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Describe yourself: ";
    std::getline(std::cin, description);

    // Create and open an HTML file
    std::ofstream htmlFile("personal_webpage.html");

    if (htmlFile.is_open()) {
        // Write HTML content
        htmlFile << "<html>\n";
        htmlFile << "<head>\n";
        htmlFile << "<title>" << name << "'s Personal Page</title>\n";
        htmlFile << "</head>\n";
        htmlFile << "<body>\n";
        htmlFile << "<center>\n";
        htmlFile << "<h1>" << name << "</h1>\n";
        htmlFile << "</center>\n";
        htmlFile << "<hr />\n";
        htmlFile << description << "\n";
        htmlFile << "<hr />\n";
        htmlFile << "</body>\n";
        htmlFile << "</html>\n";

        htmlFile.close();
        std::cout << "HTML file 'personal_webpage.html' has been created successfully.\n";
    }
    else {
        std::cout << "Unable to create HTML file.\n";
        return 1;
    }

    return 0;
}

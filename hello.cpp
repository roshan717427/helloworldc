#include <iostream>
#include <fstream>

int main() {
    // Create and open an HTML file
    std::ofstream htmlFile("hello.html");
    
    if (!htmlFile.is_open()) {
        std::cerr << "Error: Could not create hello.html file" << std::endl;
        return 1;
    }
    
    // Write HTML content to the file
    htmlFile << "<!DOCTYPE html>\n";
    htmlFile << "<html lang=\"en\">\n";
    htmlFile << "<head>\n";
    htmlFile << "    <meta charset=\"UTF-8\">\n";
    htmlFile << "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
    htmlFile << "    <title>Hello World!</title>\n";
    htmlFile << "    <style>\n";
    htmlFile << "        body {\n";
    htmlFile << "            font-family: Arial, sans-serif;\n";
    htmlFile << "            display: flex;\n";
    htmlFile << "            justify-content: center;\n";
    htmlFile << "            align-items: center;\n";
    htmlFile << "            height: 100vh;\n";
    htmlFile << "            margin: 0;\n";
    htmlFile << "            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);\n";
    htmlFile << "        }\n";
    htmlFile << "        h1 {\n";
    htmlFile << "            color: white;\n";
    htmlFile << "            font-size: 3em;\n";
    htmlFile << "            text-shadow: 2px 2px 4px rgba(0,0,0,0.3);\n";
    htmlFile << "        }\n";
    htmlFile << "    </style>\n";
    htmlFile << "</head>\n";
    htmlFile << "<body>\n";
    htmlFile << "    <h1>Hello World!</h1>\n";
    htmlFile << "</body>\n";
    htmlFile << "</html>\n";
    
    // Close the file
    htmlFile.close();
    
    std::cout << "Webpage created successfully! Open hello.html in your browser." << std::endl;
    
    return 0;
}


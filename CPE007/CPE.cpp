#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() { 
    // Writing to a file 
    ofstream outFile("sample.txt"); 
    outFile << "Hello, this is a sample file." << endl; 
    outFile << "C++ file handling using streams."; 
    outFile.close();  // Close file after writing 
 
    // Reading from a file 
    ifstream inFile("sample.txt"); 
    string line; 
    cout << "Reading from file:" << endl; 
    while (getline(inFile, line)) { 
        cout << line << endl; 
    } 
    inFile.close();  // Close file after reading 
 
    return 0; 
} 

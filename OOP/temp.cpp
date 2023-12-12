#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream outputfile("data.txt");

    if (!outputfile.is_open()){
        cerr <<"Error Opening The File\n";
        return 1;
    }

    outputfile << "Name: John Doe\n";
    outputfile << "Age: 25\n";
    outputfile << "Occupation: Programmer\n";

    outputfile.close();

    ifstream inputfile("data.txt");
    string line;
    while(getline(inputfile,line)){
        cout << line << "\n";
    }

    inputfile.close();
    
}
#include <iostream>
#include <string.h>
#include <string>
#include <array>
#include <vector>

using namespace std;


int add(int a, int b){
    return a + b;
}


int sub(int a, int b){
    return a - b;
}

int divv(int a, int b){
    return a / b;
}

int mul(int a, int b){
    return a * b;
}

string getWordCommand(string command){
string wordCommand = "";
    for(int i = 0; i < sizeof(command); i++){
        if(isalpha(command[i])){
            printf("LETTER:%c\n", command[i]);
            wordCommand +=command[i];
        }
    }
    return wordCommand;
}

vector<string> split(string command, char delimeter){
    vector<string> splits;
    string substr = "";
    for(int i = 0; i< command.length(); i++){
        // std::cout << command[i] << "<<" << std::endl;
        substr+=command[i];
        if(command[i+1] == delimeter){
                splits.push_back(substr);
                substr = "";
        }

        if(i== command.length() - 1){
            splits.push_back(substr);
            substr = "";
        }
        
    }
    
    
    return splits;
}

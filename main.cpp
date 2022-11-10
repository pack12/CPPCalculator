#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;
int add(int a, int b);
int sub(int a, int b);
int divv(int a, int b);
int mul(int a, int b);
vector<string> split(string command, char delimeter);
string getWordCommand(string wordCommand);


int main(){

    
    int a, b;
    string command;
    printf("Enter Command: \n");
    char *command_msg = "COMMANDS:\n1.add\n2.sub\n3.mul\n4.div\n";
    char *example_cmd = "EXAMPLE:add 1 1\nANSWER:2";
    printf("%s\n", command_msg);
    printf("%s\n", example_cmd);
    getline(cin>>ws, command);
    
    while(command!="quit"){
    string wordCommand = getWordCommand(command);
    std::cout << "Command: " << wordCommand << std::endl;
    printf("newline\n");
    
    vector<string> splits = split(command, ' ');   
   

    a = stoi(splits[1]);
    b = stoi(splits[2]);

    if(splits[0] == "add"){
        printf("\nANSWER: %d\n", add(a,b));
    }else if(splits[0] == "sub"){
        printf("\nANSWER: %d\n", sub(a, b));
    }else if(splits[0] == "mul"){
        printf("\nANSWER: %d\n", mul(a,b));
    }else if(splits[0] == "div"){
        printf("\nANSWER: %d\n", divv(a,b));
    }

    printf("Enter Command: \n");
    char *command_msg = "COMMANDS:\n1.add\n2.sub\n3.mul\n4.div";
    printf("%s\n", command_msg);
    getline(cin>>ws, command);
    }    
    printf("Have a great day!");

    return 0;
}
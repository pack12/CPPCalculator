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
    char *command_msg = "COMMANDS:\n1.add\n2.sub\n3.mul\n4.div";
    getline(cin>>ws, command);
    
    // while(command!="quit"){

    // }
    
    int numArray[2];
    int numCount = 0;
    

    printf("\n5 + 5 = %i\n", add(5,5));
    
    string wordCommand = getWordCommand(command);
    std::cout << "Command: " << wordCommand << std::endl;
    printf("newline\n");
    
    vector<string> splits = split(command, ' ');   
   

    std::cout << "1st element (0)" << splits[0] << "2nd elemnt(1):" << splits[1]<< std::endl;

    a = stoi(splits[1]);
    b = stoi(splits[2]);

    if(splits[0] == "add"){
        printf("%d", add(a,b));
    }else if(splits[0] == "sub"){
        printf("%d", sub(a, b));
    }else if(splits[0] == "mul"){
        printf("%d", mul(a,b));
    }else if(splits[0] == "div"){
        printf("%d", divv(a,b));
    }
    

    return 0;
}
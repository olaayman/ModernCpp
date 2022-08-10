#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    cout << "Got " << argc << " params\n";
    cout << "Program: " << argv [0] << endl;
    if (argc != 3){
        cerr << "Must input 3 file names!";
        return 1;
    }



    for (int i = 1; i < argc; ++i) { // from 1 on
        cout << "Param: " << argv[i] << endl;
    }
    stringstream filename{"00205.txt"};
    stringstream filename1{argv[1]};
    stringstream filename2{argv[2]};

    int num = 0;
    int num1;
    int num2;
    string ext;
    string ext1;
    string ext2;
    float result;

    filename >> num >> ext;
    filename1 >> num1 >> ext1;
    filename2 >> num2 >> ext2;

    // if (ext1 != ".png" ||ext1 != ".txt" ||ext2 != ".png" ||ext2 != ".txt"){
    //     cerr << "file ext must be txt or png!";
    //     return 1;
    // }

    if (ext1 ==  ".txt" && ext2 == ".txt"){
        result = (num1 + num2) / (float) 2;
    } else if (ext1 ==  ".png" && ext2 == ".png"){
        result = num1 + num2;
    } else if (ext1 ==  ".txt" && ext2 == ".png"){
        if (num2 == 0){
            cerr << "devision by zero!";
            return 1;
        } 
        result = num1 % num2;
    }else {
        cerr << "wrong file extensions!!";
        return 1;
    }

    
    cout << "result is: " << result << endl;
    //cout << "Extension is: " << ext << endl;

    return 0;
}
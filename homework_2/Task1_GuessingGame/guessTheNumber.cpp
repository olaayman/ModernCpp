#include <iostream>
#include <random>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(){
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> randNum(0, 99);
    int guessedNum;
    int targetNum = randNum(gen);
    while (true){
        cout << "please guess a number between 0-99 "<< endl;
        cin >> guessedNum ;
        if (cin.fail()){
            cerr << "Error encountered, exiting...";
            return 1;
        }
        if (guessedNum < 0 || guessedNum > 99){
            cerr << "[WARNING] : Number must be between 0 and 99";
            continue;
        }
        if (guessedNum == targetNum){
            cout << "congratulations!! you won" << endl;
            cout << "the random number is " << guessedNum << endl;
            return 0;
        }else if (guessedNum > targetNum){
            cout << "the traget number is smaller!" <<endl ;
            continue;
        }else{
            cout << "the traget number is larger!" <<endl ;
            continue;
        }
    }
    cout << "the random number is " << guessedNum << endl;
    return 0;
}
#include <iostream>
#include <tuple>
#include <any>

using namespace std;

auto foo(){
	return make_tuple("Super Variable",5);
}
int main() {
	std::any a;
	a = true; // bool
    cout << "hey" << std :: boolalpha << any_cast<bool>(a) << endl;
    cout << any_cast<bool>(a) << endl;

	// auto [name,value]= foo();
	// cout << name << "has value: "<< value<< endl; 
	return 0;
}
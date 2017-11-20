#include <iostream>
using namespace std;

int main() {
	bool flag = true;
	for(int i = 1; i<=100; i++){
		if(i%3==0){
			cout << "Fizz";
			flag = false;
		}
		if(i%5==0){
			cout << "Buzz";
			flag = false;
		}
		if(flag){
			cout << i;
		}
		cout << ", ";
		flag = true;
	}
	return 0;
}
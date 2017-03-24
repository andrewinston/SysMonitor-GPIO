#include <iostream>
#include <string.h>
#define MB 1024*1024
using namespace std;
int main(){
	char op;
	cout << "alocar 128mb?\n";
	while(cin >> op && op=='s'){
		void *block = (void*)malloc(128*MB);
		memset(block, 1, 128*MB);
		cout << "alocar mais 128mb? (s/n)\n";
	}
}

#include <iostream>
#include <string.h>

using namespace std;

int main () {
	char str[50], temp;
	int i, j;
	cout << "===Word=Reverser===\n\n";
	cout << "Enter your word (MAX 50 Characters)\n--> ";
	cin >> str;
	j = strlen(str) - 1;
	
	for (i = 0; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	
	cout << "Reversed word: \n" << str;
	return 0;	
}
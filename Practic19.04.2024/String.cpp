#include "String.h"

String::String(int s) : sizeArray{ s } {
	str = new char[s];
}

String::String() : String(sizeArray) {}

String::String(const char* word) : String(strlen(word)) {
	strcpy_s(str, sizeArray +1, word);
}

void String::initString(){
	//if (str) 
		//delete str;
	char* temp = new char[CHAR_MAX];
	cin.getline(temp, CHAR_MAX);

	str = new char[strlen(temp)];
	strcpy_s(str, strlen(temp) + 1, temp);
	//delete temp;
}
void String::printString(){
	cout << str << endl;
}

String::~String() {
	//delete[] str;
}
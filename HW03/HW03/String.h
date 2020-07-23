#pragma once
#include<iostream>
using namespace std;

class MyString
{
private:
	char* string_;
	int length_;
public:
	int length() const;
	int KCharLength(const char* str);
	const char* insert(int pos, const char* newStr);
	const char* erase(int pos, int num);
	const char* replace(int pos, int num, const char* str);
	bool find(int pos, const char* str);
	const char* subString(int pos, int num);
	const char* operator+(const MyString& other);
	friend istream& operator >> (istream& input, MyString& str);
	friend ostream& operator <<(ostream& output, const MyString& str);
};



#include "String.h"
#include<iostream>
using namespace std;
int MyString::length() const
{
	return length_;
}
int MyString::KCharLength(const char* str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
const char* MyString::insert(int pos, const char* newStr)
{
	int j = KCharLength(newStr);
	int new_length = length_ + j;
	char* str = new char[new_length + 1];
	int i = 0;
	int prelength;
	for (i; i < pos; i++)
	{
		str[i] = string_[i];
		prelength = i;
	}
	prelength++;
	for (int k = 0; k < j; k++)
	{
		str[i] = newStr[k];
		i++;
	}
	for (i; i < new_length; i++)
	{
		str[i] = string_[prelength];
		prelength++;
	}
	str[new_length] = '\0';
	return str;
}
const char* MyString::MyString::erase(int pos, int num)
{
	int new_length = length_ - num + 1;
	char* str = new char[new_length];
	int i = 0;
	for (i; i < pos; i++)
	{
		str[i] = string_[i];
	}
	int u = pos + num;
	for (u; u < new_length + 1; u++)
	{
		str[i] = string_[u];
		i++;
	}
	str[i] = '\0';
	return str;
}
const char* MyString::replace(int pos, int num, const char* str)
{
	int length_str = KCharLength(str);
	int length_replacestr = length_ - num + length_str;
	char* replacestr = new char[length_replacestr];
	int i = 0;
	for (i; i < pos; i++)
	{
		replacestr[i] = string_[i];
	}
	for (int j = 0; j < length_str; j++)
	{
		replacestr[i] = str[j];
		i++;
	}
	for (int k = pos + num; k < length_replacestr; k++)
	{
		replacestr[i] = string_[k];
		i++;
	}
	replacestr[length_replacestr] = '\0';
	return replacestr;
}
bool MyString::find(int pos, const char* str)
{
	int length_str = KCharLength(str);
	for (int i = 0; i < length_str; i++)
	{
		if (string_[pos] != str[i])
		{
			return false;
		}
		pos++;
	}
	return true;
}
const char* MyString::subString(int pos, int num)
{
	char* subStr = new char[num + 1];
	int i = 0;
	while (i != num)
	{
		subStr[i] = string_[pos];
		i++;
		pos++;
	}
	subStr[num] = '\0';
	return subStr;
}
const char* MyString::operator+(const MyString& other)
{
	int new_length = length_ + other.length();
	char* str = new char[new_length + 1];
	int i;
	for (i = 0; i < length(); i++)
	{
		str[i] = string_[i];

	}
	for (i = 0; i < other.length(); i++)
		str[i + length_] = other.string_[i];
	str[new_length] = '\0';
	return str;
}

istream& operator >> (istream& input, MyString& str)
{
	cout << "Enter the length of the string: ";
	input >> str.length_;
	str.string_ = new char[str.length_ + 1];
	cout << "Enter the string: ";
	input.ignore();
	input.getline(str.string_, str.length_ + 1);
	return input;
}
ostream& operator <<(ostream& output, const MyString& str)
{
	return output << str.string_;
}
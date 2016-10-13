#include"stdafx.h"
#include<iostream>
#include"string.h"
#include <conio.h>

using namespace std;


String::String()
{
	cout << "Вызов конструктора по умолчанию." << endl;
	stroka = "";
}

String::String(char *s)
{
	cout << "Вызов коструктора с одним параметром." << endl;
	int LEN = strlen(s) + 1;
	stroka = new char[LEN];
	strcpy_s(stroka, LEN, s);
}

String::String(const String& s)
{
	cout << "Вызов коструктора копирования." << endl;
	stroka = new char[strlen(stroka) + 1];
	strcpy_s(stroka, strlen(stroka) + 1, s.stroka);
}

String::~String()
{

	cout << "Строка успешно удалена." << endl;
}

void String::print()
{
	cout << stroka << "\" длиной " << strlen(stroka) << endl;
}

void String::setstr(char* str)
{
	stroka = new char[strlen(str) + 1];
	strcpy_s(stroka, strlen(stroka) + 1, str);
}


int String::search(char str)
{
	cout << "Введенная строка: " << stroka << endl;
	for (int i = 0; i < strlen(stroka) + 1; i++)
	{
		if (stroka[i] == str)    
		{
			return i;
		}
	}
	return -1;
}

void String::change(char s, char s1)
{
	cout << "Неизмененная строка: " << stroka << endl;
	for (int i = 0; i<strlen(stroka) + 1; i++)
	{
		if (stroka[i] == s)  
			stroka[i] = s1;
	}
	cout << "Измененная строка: " << stroka << endl;
}

bool String::strln(int s)
{
	return (strlen(stroka) == s);
}

int String::list(char* str1)
{
	string *str = new string(this->stroka);
	int result = str->find(str1);
	return result;
}

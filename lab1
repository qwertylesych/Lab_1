#include"stdafx.h"
#include"string.h"
#include<iostream>


using namespace std;


int main()
{
	const int SIZE = 5;
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	String s("Просто строка.");
	s.print();

	char str;
	cout << "Введите символ для проверки: ";
	cin >> str;
	int i = s.search(str);
	if (i == -1) cout << "Символ не найден" << endl;
	else cout << "Найден символ \"" << str << "\" в позиции " << i + 1 << endl;


	char b, c;
	cout << "Введите символ, который необходимо заменить: " << endl;
	cin >> b;
	cout << "Введите символ на который нужно заменить: ";
	cin >> c;
	s.change(b, c);

	String *string = new String[SIZE];


	string[0] = String("oop");
	string[1] = String("ХОЗЯИН");
	string[2] = String("hello");
	string[3] = String("people");
	string[4] = String("world");

	for (int i = 0; i < SIZE; i++)
	{
		cout << "-------------------------------------" << endl;
		cout << "Напечатана строка \"";
		string[i].print();
	}

	cout << endl;

	int ss;
	cout << "Введите длину строки: ";
	cin >> ss;
	cout << endl;
	cout << "Строки длиной " << ss << ": " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (string[i].strln(ss)) string[i].print();

	}


	cout << "-------------------------------------" << endl;

	char str1[100] = "";
	cout << "Введите искомое слово: ";
	cin >> str1;

	for (int i = 0; i < SIZE; i++)
	{
		int k = string[i].list(str1);
		if (k != -1)
		{
			cout << "Слово \"" << str1 << "\" найдено в позиции " << k << " строки \"";
			string[i].print();
			cout << "\"" << endl;
		}
	}
	return 0;
}

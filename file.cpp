#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;
	
int main()
{
	setlocale(0, "");
	srand(time(NULL));

	const char* path = "C:\\Users\\tekat\\source\\repos\\ConsoleApplication3\\ConsoleApplication3\\one.txt";
	int c;
	int len = 0, count = 0;
	FILE* in;
	cout << "Задание 1\n";
	cout << "Введите символ который будет считаться:\n";
	char A;
	cin >> A;
	if (fopen_s(&in, path, "r") != NULL) {
		cout << "Ошибка." << endl;
	}
	else {

		while (!feof(in)) {

			c = fgetc(in);

			if (c == A) {
				count++;
			}

		}

	}
	cout << "Этот символ встречался " << count << " раз.";

	cout << "\n\nЗадание 2\n";
	/*const char* bin_one = "C:\\Users\\tekat\\source\\repos\\ConsoleApplication3\\ConsoleApplication3\\bin_one.txt";
	FILE* in_A;
	const char* bin_two = "C:\\Users\\tekat\\source\\repos\\ConsoleApplication3\\ConsoleApplication3\\bin_one.txt";
	FILE* in_B;
	char C;
	if (fopen_s(&in_A, bin_one, "r") != NULL) {
		cout << "Ошибка." << endl;
	}
	else {

		while (!feof(in_A)) {
			C = fgetc(in_A);
			if (C == '1') {
				fprintf(in_B,bin_two,'0');
			}
		}

	}*/
	cout << "\n\nЗадание 4\n";
	const char* tortik = "C:\\Users\\tekat\\source\\repos\\ConsoleApplication3\\ConsoleApplication3\\ffcount.txt";
	FILE* Tot;
	count = 0;
	int k = 0;
	if (fopen_s(&Tot, tortik, "r") != NULL) {
		cout << "Ошибка." << endl;
	}
	else {
		while (!feof(Tot)) {
			k = fgetc(Tot);
			if (k != '\0') {
				count++;
			}
		}
	}
	cout << "Кол-во символов: " << count - 1 << endl;


	cout << "\n\nЗадание 5\n";
	const char* S = "C:\\Users\\tekat\\source\\repos\\ConsoleApplication3\\ConsoleApplication3\\fstrcount.txt";
	FILE* stor;
	count = 0;
	int j = 0;
	if (fopen_s(&stor, S, "r") != NULL) {
		cout << "Ошибка." << endl;
	}
	else {
		while (!feof(stor)) {
			j = fgetc(stor);
			if (j == '\n' || j == '\0') {
				count++;
			}
		}
	}
	cout << "Кол-во строк: " << count << endl;
}

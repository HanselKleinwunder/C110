//#define _CRT_SECURE_NO_WARNINGS
#include "other.h"
#include <limits.h>
#include <ctime>
#include <iostream>
#include <cstdarg>


///////////////////////////////////////////////////
//Подсказка-заготовка для задания 5а
//Без использования макросов
///////////////////////////////////////////////////
void VarArgs(int arg1, ...)
{
	int number = 0;	//счетчик элементов
	//Объявите указатель на int и инициализируйте его адресом
	//первого аргумента
	int* pAr = &arg1;
	//Пока не достигнут конец списка:
	// а) печать значения очередного аргумента
	// б) модификация указателя (он должен указывать на
	//следующий аргумент списка)
	// в) увеличить счетчик элементов
	while (*pAr != 0) {
		std::cout << *pAr << " ";
		pAr++;
		number++;
	}
	//Печать числа элементов
	std::cout << "[" << number << "]" << std::endl;
}
void VarArgsMacros(int arg1, ...)
{
	int number = 0;	//счетчик элементов
	//Пока не достигнут конец списка:
	// а) печать значения очередного аргумента
	// б) модификация указателя (он должен указывать на
	//следующий аргумент списка)
	// в) увеличить счетчик элементов
	if (arg1 != 0) {
		std::cout << arg1 << " ";
		number++;

		va_list list;
		va_start(list, arg1);
		while (true) {
			int currentVar = va_arg(list, int);
			if (currentVar == 0) {
				break;
			}
			std::cout << currentVar << " ";
			number++;
		}
		va_end(list);
		std::cout << "[" << number << "]" << std::endl;
	}
}

void Sort(char* pcFirst, int nNumber, int size,
	void(*Swap)(void*, void*), int(*Compare)(void*, void*))
{
	int i;
	for (i = 1; i < nNumber; i++)
		for (int j = nNumber - 1; j >= i; j--)
		{
			char* pCurrent = pcFirst + j * size;
			char* pPrevious = pcFirst + (j - 1) * size;
			if ((*Compare)(pPrevious, pCurrent) > 0)//требуется
												//переставить
				(*Swap)(pPrevious, pCurrent);
		}
}
//-----------------------------------------------------------------------
void SwapInt(void* p1, void* p2)
{
	int* x = static_cast<int*>(p1);
	int* y = static_cast<int*>(p2);
	int temp = *x;
	*x = *y;
	*y = temp;
}
//-----------------------------------------------------------------------
int CmpInt(void* p1, void* p2)
{
	int nResult;
	nResult = *static_cast<int*>(p1) - *static_cast<int*>(p2);

	if (nResult > 0)
		return 1;
	if (nResult < 0)
		return -1;
	return 0;

}

void SwapDouble(void* p1, void* p2)
{
	double* x = static_cast<double*>(p1);
	double* y = static_cast<double*>(p2);
	double temp = *x;
	*x = *y;
	*y = temp;
}
//-----------------------------------------------------------------------
double CmpDouble(void* p1, void* p2)
{
	double nResult;
	nResult = *static_cast<double*>(p1) - *static_cast<double*>(p2);

	if (nResult > 0)
		return 1;
	if (nResult < 0)
		return -1;
	return 0;

}
//-----------------------------------------------------------------------
const char* GetString1()
{
	return "Hello";
}
//-----------------------------------------------------------------------
const char* GetString2()
{
	return "Book";
	/*char* str = "Book";
	return str;*/
}
//-----------------------------------------------------------------------
const char* GetString3()
{
	static char str[] = "Little";
	return str;
}
//-----------------------------------------------------------------------
const char* GetString4()
{
	static char str[] = "world";
	return str;
}
//-----------------------------------------------------------------------
const char* GetString5()
{
	char* str = new char[strlen("time") + 1];
	strcpy(str, "time");
	return str;
}
void PrintArray(int** arr, int n, int m) {

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void PrinArray(int arr[][M], int N) {
	
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++)
		{
			std::cout << arr[i][j] << " ";
		}
	}
}
bool isLeapYear(int year) {
	return (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
}
int DayOfYear(int day, int month, int year, int arr[][12]) {
	int N = 0;
	int dayCount = 0;

	if ((month > 12 || month < 1) || (day < 1 || day > 31) || year > 2123) {
		return -1;
	}
	N = isLeapYear(year);
	for (size_t i = 0; i < month - 1; i++)
	{
		dayCount += arr[N][i];
	}

	return dayCount + day;

	//if (isLeapYear(year)) {
	//	for (size_t i = 1; i < month; i++)
	//	{
	//		dayCount += arr[N][i];
	//	}

	//	return dayCount + day;
	//}
	//else {
	//	N = 1;
	//	for (int i = 1; i < month; i++) {
	//		dayCount += arr[N][i];
	//	}
	//	return dayCount + day;
	//}
}
int DayOfMonth(int day, int year, int arr[][12]) {
	int dayOfMonth = day;

	if (isLeapYear(year)) {
		int month = 0;
		while (dayOfMonth >= 31) {
			dayOfMonth -= arr[0][month];
			month++;
		}

		return dayOfMonth;
	}
	else {
		int month = 0;
		while (dayOfMonth > 31) {
			dayOfMonth -= arr[1][month];
			month++;
		}
		return dayOfMonth;
	}
}
const char* DefineMonth(int day) {
	switch (day) {
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	default:
		break;
	}
}
double sum(double x, double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
}

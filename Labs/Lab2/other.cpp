#include "other.h"
<<<<<<< HEAD
#include <iostream>
=======
#include <limits.h>
#include <ctime>
#include <iostream>
#include <cstdarg>

>>>>>>> ec376debb4b10a3905f2d8d961e53cd5d3ac657e

///////////////////////////////////////////////////

//Подсказка-заготовка для задания 5а
//Без использования макросов

void VarArgs(int arg1,...)
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

///////////////////////////////////////////////////

<<<<<<< HEAD
#if 0

=======
>>>>>>> ec376debb4b10a3905f2d8d961e53cd5d3ac657e
void Sort(char* pcFirst, int nNumber, int size,
	void(*Swap)(void*, void*), int(*Compare)(void*, void*))
{
	int i;
	for (i = 1; i < nNumber; i++)
		for (int j = nNumber - 1; j >= i; j--)
		{
			char* pCurrent = pcFirst + j * size;
			char* pPrevious = pcFirst + (j - 1)*size;
			if ((*Compare)(pPrevious, pCurrent) > 0)//требуется
												//переставить
				(*Swap)(pPrevious, pCurrent);
		}
}
//-----------------------------------------------------------------------
void SwapInt(void* p1, void* p2)
{


}
//-----------------------------------------------------------------------
//int CmpInt(void* p1, void* p2)
//{
//	int nResult;
//
//
//
//
//	return nResult;
//}
//-----------------------------------------------------------------------
const char* GetString1()
{
	return "Hello";
}
//-----------------------------------------------------------------------
const char* GetString2()
{
	/*char* str = "Book";
	return str;*/
}
//-----------------------------------------------------------------------
const char* GetString3()
{
	char str[] = "Little";
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
	char* str = new char[strlen("time")+1];
	return str;
}
<<<<<<< HEAD
#endif
//const int PrintArray(int** arr, int N, int M) {
//
//	std::cout << std::endl;
//	for (size_t i = 0; i < N; i++)
//	{
//		for (size_t j = 0; j < M; j++)
//		{
//			std::cout << arr[i][j] << " ";
//		}
//	}
//}

//const int N = 3, M = 4;
=======
const int PrintArray(int** arr, int N, int M) {

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++)
		{
			std::cout << arr[i][j] << " ";
		}
	}
	return **arr;
}
bool isLeapYear(int year) {
	return (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
}
int DayOfYear(int day, int month, int year, int nDayTab[][12]) {
	int N = 0;
	int dayCount = 0;

	if ((month > 12 || month < 1) || (day < 1 || day > 31) || year > 2123) {
		return -1;
	}
	if (isLeapYear(year)) {
		for (size_t i = 0; i < month; i++)
		{
			dayCount += nDayTab[N][i];
		}

		return dayCount + day;
	}
	else {
		N = 1;
		for (int i = 1; i < month; i++) {
			dayCount += nDayTab[N][i];
		}
		return dayCount + day;
	}
}
int DayOfMonth(int day, int year, int nDayTab[][12]) {
	int dayOfMonth = day;

	return 0;
}
>>>>>>> ec376debb4b10a3905f2d8d961e53cd5d3ac657e

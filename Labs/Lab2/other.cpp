#include "other.h"
#include <limits.h>
#include <ctime>
#include <iostream>
#include <cstdarg>


///////////////////////////////////////////////////
//���������-��������� ��� ������� 5�
//��� ������������� ��������
///////////////////////////////////////////////////
void VarArgs(int arg1, ...)
{
	int number = 0;	//������� ���������
	//�������� ��������� �� int � ��������������� ��� �������
	//������� ���������
	int* pAr = &arg1;
	//���� �� ��������� ����� ������:
	// �) ������ �������� ���������� ���������
	// �) ����������� ��������� (�� ������ ��������� ��
	//��������� �������� ������)
	// �) ��������� ������� ���������
	while (*pAr != 0) {
		std::cout << *pAr << " ";
		pAr++;
		number++;
	}
	//������ ����� ���������
	std::cout << "[" << number << "]" << std::endl;
}
void VarArgsMacros(int arg1, ...)
{
	int number = 0;	//������� ���������
	//���� �� ��������� ����� ������:
	// �) ������ �������� ���������� ���������
	// �) ����������� ��������� (�� ������ ��������� ��
	//��������� �������� ������)
	// �) ��������� ������� ���������
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
			if ((*Compare)(pPrevious, pCurrent) > 0)//���������
												//�����������
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
//const char* GetString1()
//{
//	return "Hello";
//}
////-----------------------------------------------------------------------
//const char* GetString2()
//{
//	/*char* str = "Book";
//	return str;*/
//}
////-----------------------------------------------------------------------
//const char* GetString3()
//{
//	char str[] = "Little";
//	return str;
//}
////-----------------------------------------------------------------------
//const char* GetString4()
//{
//	static char str[] = "world";
//	return str;
//}
////-----------------------------------------------------------------------
//const char* GetString5()
//{
//	char* str = new char[strlen("time") + 1];
//	return str;
//}
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

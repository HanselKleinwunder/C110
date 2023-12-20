#pragma once
//Прототипы функций, используемых в данном задании :
//void VarArgs(int arg1, ...);

void Sort(char* pcFirst, int nNumber, int size,
void(*Swap)(void*, void*), int(*Compare)(void*, void*));
void SwapInt(void* p1, void* p2);
int CmpInt(void* p1, void* p2);

const char* GetString1();
const char* GetString2();
const char* GetString3();
const char* GetString4();
const char* GetString5();
void VarArgs(int arg1, ...);
void VarArgsMacros(int arg1, ...);
bool isLeapYear(int year);
int DayOfYear(int day, int month, int year, int nDayTab[][12]);
int DayOfMonth(int day, int year, int nDayTab[][12]);
const char* DefineMonth(int day);
double sum(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
const int N = 5, M = 10;
void PrintArray(int arr[][M], int N);
void PrintArray(int** arr, int N, int M);

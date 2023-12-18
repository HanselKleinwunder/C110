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
extern void VarArgs(int arg1, ...);
extern void VarArgsMacros(int arg1, ...);
const int PrintArray(int** arr, int N, int M);
extern bool isLeapYear(int year);
extern int DayOfYear(int day, int month, int year, int nDayTab[][12]);
extern int DayOfMonth(int day, int year, int nDayTab[][12]);


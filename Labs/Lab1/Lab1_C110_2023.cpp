/*************************************************************
	������������ ������� 1. ���������� ����������� �������.
							������������ ��������� ������.
							���������� ��������� ���������� � ������.
							������� ���������.
							������.
*************************************************************/

#define	  stop __asm nop

#include <iostream>
#include <string.h>
#include <cstdlib>

int main()
{
#if 0
/////////////////////////////////////////////////////////////////
//			����������  ����������� �������                   //
///////////////////////////////////////////////////////////////
//������� 1.
//A
	{
		//�������� ���������� N*M*K ������ � ����������� ���������
		//�������� ��������� ��������� �������:
		//(������������������ ������ ��� �����������)
		// 
		//						  |------------|
		//  					/ |	5  5  5  5 |
		//					   |------------|5 |
		//  				 / | 4  4  4  4 |5 |
		//				    |------------|4 |__|
		//			      / | 3  3  3  3 |4 |/
		//    			 |------------|3 |__|
		//			   / | 2  2  2  2 |3 | /
		//			  |------------|2 |__|
		//			  | 1  1  1  1 |2 | /
		//			  | 1  1  1  1 |__|
		//			  | 1  1  1  1 | /
		//			  |____________|

		const int N = 5, M = 3, K = 4;
		int arr[N][M][K] = 
		{ 
			{ {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1} },
			{ {2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2} },
			{ {3, 3, 3, 3}, {3, 3, 3, 3}, {3, 3, 3, 3} },
			{ {4, 4, 4, 4}, {4, 4, 4, 4}, {4, 4, 4, 4} },
			{ {5, 5, 5, 5}, {5, 5, 5, 5}, {5, 5, 5, 5} }
		};
	}
//�
	{
		//�������� ���������� N*M*K �������������������� ������, 
		// ��������� �������� ��������� � ������� ����
		// 
		//						  |------------|
		//  					/ |	5  5  5  5 |
		//					   |------------|5 |
		//  				 / | 4  4  4  4 |5 |
		//				    |------------|4 |__|
		//			      / | 3  3  3  3 |4 |/
		//    			 |------------|3 |__|
		//			   / | 2  2  2  2 |3 | /
		//			  |------------|2 |__|
		//			  | 1  1  1  1 |2 | /
		//			  | 1  1  1  1 |__|
		//			  | 1  1  1  1 | /
		//			  |____________|

		//������������: � �������� ������������ ������� ����� ������� N, M, K,
		//� �� �������� �� ������.

		//���������� ��������� ��������� ������������ ������ �������.

		//��� �������� ���������� ������� �� ������.
		//������ �������� ��������� ������ ����  ������� �
		//����� ������� ���� ���������� ������ ��� ����, ����� �������� ���� ���� �� �������

		const int N = 5, M = 3, K = 4;
		int arr[N][M][K];
		int count = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				for (int s = 0; s < K; s++)
				{
					arr[i][j][s] = i + 1;
				}
			}
			count++;
		}
	}
//�
	{
		//������� ����� ��������� �������, ������������ � ������ �) 
		//���������, ��� ��� ������� ����������.

		const int N = 5, M = 3, K = 4;
		int arr[N][M][K];
		int sum = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				for (int s = 0; s < K; s++)
				{
					sum += arr[i][j][s];
				}
			}
		}
		std::cout << "Sum: " << sum << std::endl;
	}
//�
	{
		//�������� ���������� N*M*K ������ � ������������������ ��� ��� �����������:
		//				     |--------|
		//			       / |3  0  0 |
		//      		 |---------|0 |
		//    		   / | 2  0  0 |0 |
		//			  |---------|0 |__|
		//			  | 1  0  0 |0 | /
		//			  | 0  0  0 |__|
		//			  | 0  0  0 | /
		//			  |_________|

		const int N = 3, M = 3, K = 3;
		int arr[N][M][K] =
		{
			{{1}},
			{{2}},
			{{3}}
		};
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				for (int s = 0; s < K; s++)
				{
					std::cout << arr[i][j][s] << ' ';
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	stop
//�
	{
		//������������� �������� ���������� ����������:
		//�������� � ������������������ ���������� ���������� ��� �������:
		//��������� ������ �������� � ���������� ������ ���������� �� char. 
		//�������� ������� � ������������� ��������� ����� ��������.

		const int N = 2, K = 7;
		char arr_str[N][K] = { { "qwerty" }, { "hansel" } };
		const char* arr_p[] = { { "qwerty" }, { "hansel" } }; //�� ����� �������� ��������, �.�. ��. �� �����.��������
		arr_str[1][1] = 'W';
		char tmp = arr_str[1][1];
		tmp = arr_p[1][2];
		//arr_p[1][2] = 'W';
	}
#endif
/////////////////////////////////////////////////////////////////////
//������� 2.
#if 0
	//� ������� ������ ��������� �������� ���������,�������:
	//������ ������ � ���������� � ������� cin>>...
	//� ����������� ���� ���������� ���������� ������ 10*80 ��������� ���� char;
	//��������� ����� ����� �������� ������ * (�� ���� ������ - "*") ���
	//���������� ����� ������� (������ ��������� ����� ���);

	//�� ����:
		//a) ����� ��������� ���� ������ ��������� (�� �������� ����������, ������� ��������� � �������)
		//�) ����� ��������� ������ ��������, �� ��� ���, ���� ������������ �� ���� ������ "*".
		//��������:������ ������ (������ � ��������� �� ��������, �.�. ������� �������� �������������):
		//"Hello"
		//"Ok"
		//"*"
	//��������� ���������� ����� � ���������� �������. 
	// 
	//���������: ������ �� ������������� ��� ���������� ������� �������� ���������
	//���������� �� � ������ ( � ����� ������ ���������� (����������) ������)
	//������� ����������� ������� ������ ���������� �� ��������������� ������ 
	//� ���������� ������ ��������� �� ������ ����� (�������� ��������).
	//������: ��� ����� ������� ��� �����  �������������?

	//���������: ��� ������������������� ��������� ����� �����������
	//�������� ����������� ���������� strcmp(...), ������������ ���� <string.h>.

	//int strcmp(char const* _Str1, char const* _Str2);

	// ����� ��� ������������ ��������, ������ ��������, �� ������� ������ ������.
	{

		//���������� ����������� �������� ��� ���������
		//STOP_STRING  -  "*"	//������� "���������� ����"
		//M  -  80	//������������ ������ ����� ������
		//N  -  10	//������������ ���������� ����� � �������
		const char* STOP_STRING = "*";
		const int N = 10, M = 80;


		//�������� ���������� ������ � ������ cBuffer ���� char �
		// ������������ N*M
		char cBuffer[N][M];

		//�������� ������ (� ������ cPointers) ���������� �� ������
		//������������ N
		char* cPointers[N];

		//���� ����� �����:
		//�) �������� ����������� ��� �����
		//�) ���� �� ������� ������ STOP_STRING ��� �� �������� ���� ������
		//���� ������ � ������ cBuffer:
		//���� ������� ������ - ������� ���������, �� ����� �� �����

		int counter = 0;

		for (int i = 0; i < N; i++)
		{
			std::cout << "Enter the string: ";
			std::cin >> cBuffer[i];
			if (strcmp(cBuffer[i], STOP_STRING) == 0) {
				break;
			}
			counter++;
		}

		for (int i = 0; i < counter; i++)
		{
			std::cout << cBuffer[i] << ' ';
		}
		std::cout << std::endl;

		//��������� �������� ������� cPointers � �������� nIndex
		//��������� �� ������ � ������� nIndex � ������� cBuffer
		int pCounter = 0;
		for (int i = 0; i < N; i++)
		{
			if (strcmp(cBuffer[i], STOP_STRING) != '\0') {
				cPointers[pCounter] = cBuffer[i];
				std::cout << cPointers[pCounter];
				pCounter++;
			}
		}
		//������ ����������� � ���, ��� ����� ����� ��������.

		//������������ ���������� �������

		//������ ��������� ������:

	//���� ���������� ����� �� ������ "������������ ��������" �
	//������� ����������� ���� ������� �������

	//������������ ���������� ������� ����� ����������

	}
#endif
	stop
/////////////////////////////////////////////////////////////////////
//������� 3*. ���������� � ������������� ���������� �� ����������� �������.
#if 0
	//������������������ ���������� ������
	const int N = 4, M = 3, K = 4;
	double dArray[N][M][K]; //���, ��� �������� �� ������� � �������� ��������
//  ����, ������� ������ ������� �������� ��������� ������ � �������� �����:
//
//	����:
// 
//					    |-----------|
//  				  / |4  4  4  4 |
//				     |-----------|4 |
//			       / |3  3  3  3 |4 |
//    			 |------------|3 |__|
//			   / | 2  2  2  2 |3 | /
//			  |------------|2 |__|
//			  | 1  1  1  1 |2 | /
//			  | 1  1  1  1 |__|
//			  | 1  1  1  1 | /
//			  |____________|

//	�����:	

//					   |------------|
//  				  /| 3  3  3  3 |
//				     |-----------|3 |
//			       / |4  4  4  4 |3 |
//    			 |------------|4 |__|
//			   / | 1  1  1  1 |4 | /
//			  |------------|1 |__|
//			  | 2  2  2  2 |1 | /
//			  | 2  2  2  2 |__|
//			  | 2  2  2  2 | /
//			  |____________|

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int s = 0; s < K; s++)
			{
				dArray[i][j][s] = i + 1;
			}
		}
		count++;
	}

//for (int i = 0; i < ...; ...)
//{
//	//���������: �� ����� �������������� ��������� ������ �� ����� ���������!!!
//	... = dArray[i];
//	... = dArray[i + 1];
//	//���������:
//	//1) ����� �� ����� ��������� ���� ���������� ��� ������� ���������.
//	//��� ��� ������ ��������� "�����" �����, �.�. ��������� ��������, ��
//	// �������� ��������� ����� ��������� �������� ������������� ��� ����� ���������� �������.
//
//	//2)������, ���������������� ����� �����������, ������������ ������� �������� i-���� � i+1-��� �����
//
//
//}
#endif	
///////////////////////////////////////////////////////////////////////////
//������� 4
#if 1
	{
		//�) �������� ���������� ���������� ������ ��������� ���� char.
		const int N = 5, M = 5;
		char arr[N][M];
		//����������� �������� ��������� ������� � ������� ���������� ���������
		//����� ����� �������, ����� � ������� ���� ������ ������� '_' � '*'

		//��������� 1: ��� ��������� ��������� ����� ����������� �������
		//����������� ���������� - rand() (<cstdlib>)
		//����� � ������� ���������� ��������� �����  � ��������� % �������� �������� 0 � 1,
		// � � ������ �������� �������������� '_' � '*'.

		//��������� 2: �� ����� ���� �� ��������, ������� ��������� ����������� ���������
		//����� �������� "����������������", �� ���� ��� ���� ���������������� ��������
		//���������� �� ��������� ��� ���������� ������������������ ��������.
		//��� ���� ����� ������������ "���������" �������� ���� ������� ��� ������
		//������� ���������� ����������� ������� ����������� ���������� srand() (<cstdlib>)
		//� time() (<ctime>).
		//������� srand() ������������ "��������" ������ ��������� � ���������� � �������� ��������� ��������.
		//������� time() ������ ��� ����� �������, �������� ������� �����
		//srand( time( 0 ) );

		//���������: � ��������� ��������� ������� srand()  ���������� ���� ���

		srand(time(0));

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				int temp = rand() % 2;

				if (temp == 0) {
					arr[i][j] = '*';
				}
				else if (temp == 1) {
					arr[i][j] = '_';
				}

				std::cout << arr[i][j];
			}
		}

		//� ������ ������ "�������� ���������" � ������ ������, ��������:
		//���� - '*' '_' '_' '*' '*' '_' '*' '_' '*' '_'
		//�����: '*' '*' '*' '*' '*' '_' '_' '_' '_' '_'
		//� ������������ ������ �� ������� - "��������� �������������"

		for (int i = 0; i < N; i++)
		{
			int count = 0;

			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] == '*') {
					++count;
				}
			}
			for (int s = 0; s < M; s++)
			{
				if (s < count) {
					arr[i][s] = '*';
				}
				else {
					arr[i][s] = '_';
				}
			}
		}
		
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				std::cout << arr[i][j];
			}
			std::cout << std::endl;
		}
	}
	{
		// �) ������������� ���������� ������� ��������� ��������:
		//����� ���������� ������� � ������� ���������� ��������� �����
		//"��������" ��������� �� �������� ���� � ������������ ����������
		//"�������������"
	}
#endif	
/////////////////////////////////////////////////////////////////
//			������������ ��������� ������                     //
///////////////////////////////////////////////////////////////
//������� 5.
#if 0
	{
		////������� 5�.�������� ������������ ���������� ������ � �������������,
		//������������ � �������� ���������� ��������� - N*M.
		//������� �������� ��������� ������� ���������� ��������� �����.
	}
	{
		//������� 5�. � �������������� ������� ������������ ������ ������ ��
		//�������� ��������. ����������� ���������� "�������"
	}
	{
		//������� 5�. �������� ���������� ������ ������������ N.
		//����������� �������� i-��� �������� ����������� �������  
		//������ �������� �������� ��������� i-�� ������
		//����������� �������


		//��������� - �� �������� ���������� ������!
	}
#endif
/////////////////////////////////////////////////////////////////////////////
//������� 6.
#if 0
		//���������� ������� 2, ��������� �� ����������, � ������������ ������� (������?).
		// �����! 
		//��� ��� ������ ����� ���� ������ �����, /����������� �������� ���� �� 
		//�������� ��� ������ ������ ����� ������� ������, ������� ��������� ��� �� ��������.
		//��� ����, ����� ���������� ����� ��������� ������ ����� ��������������� 
		//�������� strlen 
		//size_t strlen(char const* _Str);

		//��� ���� �������� ���������� ����� ����������� � ������� ������ �����
	int nStringNumber;


	//���� ����� �����:

	// ��� ����� ������ ����� ������������ ����� "������������" �������. 
	// � �������� ������ ������ ������ ������������ ���������� ������.
	// ��� ����, ����� ��������� ������  ����������� �� ������ � ������  �����,
	// ����� ��������������� �������� strcpy
	//char* strcpy(	char* _Dest,  char const* _Source);
	//  ���
	// 
	//errno_t strcpy_s(char* _Dest, size_t  _SizeInBytes, char const* _Source); 
	//��� _SizeInBytes - ������ "���������" ������ _Dest

	//���������: 
	//������ �����,���� �� ����������� strcpy, �� ��� ���������� �� �������� ��������� ������:
	//Severity	Code	Description	Project	File	Line	Suppression State
	//	Error	C4996	'strcpy': This function or variable may be unsafe.
	//Consider using strcpy_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.

	//��� ���������� ������, ��� ������� strcpy ��������� ������������.

	//��� ����, ����� ������������ �������� strcpy, � �� strcpy_s, �����
	//  - ���� �������� ������ #define _CRT_SECURE_NO_WARNINGS   (����������� �� ���� #include !!!!!)
	//- ���� ���������� ����� ��� ���. �������� �� ������������ Properties->C/C++ ->General->SDL checs -> No


	//���� ���������� ����� �� ������ "������������ ��������" �
	//������� ����������� ���� ������� �������





	//������������ ������� ������:
#endif
//*********************   �������������� �������   ****************************************************
//������� 7 (*)  
// ��������� ������� 7 �� �������� ������ 
// �������� ������� ��������� � ����� "������� (���� ������)_7 (��������� ���������� ������ ����)_3.docx" 
//*****************************************************************************************************


	return 0;
}


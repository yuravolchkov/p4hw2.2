#include <iostream>
#include "Fib_func.h"

int main() 
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����
	
	// ��������������� ��������� ����� fib_for
	const int fib_for = 40;
	int fib_array[fib_for] = {0};
	fib_array_filling(fib_for, fib_array);
	
	int n;
	std::cout << "������� ����� ������������ ����: ";
	std::cin >> n;
	// ���������� ����� ����������� �������
		std::cout << "\n����� ��������� ����� ����������� �������: "; 
		for (int i = 0; i < n; i++) 
		{
			if (fib_array[i] >= 0 && fib_for > i)
			{
				std::cout << fib_array[i] << "! "; //! ��������, ��� �������� ���� �������������� ���������
			}
			else
			{
				std::cout << fibanachi(i) << " ";
			}
		}
	return 0;
}
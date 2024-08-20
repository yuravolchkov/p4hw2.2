#include <iostream>
#include "Fib_func.h"

int main() 
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран
	
	// предварительная генерация чисел fib_for
	const int fib_for = 40;
	int fib_array[fib_for] = {0};
	fib_array_filling(fib_for, fib_array);
	
	int n;
	std::cout << "Введите число отображаемых цифр: ";
	std::cin >> n;
	// реализация через рекурсивную функцию
		std::cout << "\nЧисла Фибоначчи через рекурсивную функцию: "; 
		for (int i = 0; i < n; i++) 
		{
			if (fib_array[i] >= 0 && fib_for > i)
			{
				std::cout << fib_array[i] << "! "; //! означает, что значение было предварительно вычислено
			}
			else
			{
				std::cout << fibanachi(i) << " ";
			}
		}
	return 0;
}
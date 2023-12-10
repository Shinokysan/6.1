#include <iostream>
#include<clocale>
using namespace std;
/*Вариант 11. Дана матрица размера M × N.Вывести ее элементы в следующем
порядке : первая строка слева направо, вторая строка справа налево, третья
строка слева направо, четвертая строка справа налево и т.д.*/

int main()
{
	setlocale(LC_ALL, "ru");

	int M, N;
	cout << "Введите количество строк" << endl;
	cin >> M;
	cout << "Введите количество столбцов" << endl;
	cin >> N;
	int** arr = new int* [M];
	//Объявление массива
	for (int i = 0; i < M; i++)
	{
		arr[i] = new int[N];
	}
	//Заполнение массива
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}
	//Вывод массива
	for (int i = 0; i < M; ++i) {
		if (i % 2 == 0)
			for (int j = 0; j < N; ++j)
				cout << arr[i][j] << " ";
		else
			for (int j = N - 1; j >= 0; --j)
				cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;

}


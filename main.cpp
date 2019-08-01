#include<iostream>
///////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
///////////////////////////////////////////
void fill_array(int * arr, int size);
void show_array(const int * arr, int size);
void selection_sort(int * arr, int size);
///////////////////////////////////////////
int main()
{
	const int ArSize = 5;
	int arr[ArSize];
	fill_array(arr, ArSize);
	show_array(arr, ArSize);
	cout << endl;
	selection_sort(arr, ArSize);
	cout << "After sorting. " << endl;
	show_array(arr, ArSize);
	system("pause");
	return 0;
}
///////////////////////////////////////////
void fill_array(int * arr, int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter value #" << i + 1;
		cout << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input. Input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		arr[i] = temp;
	}
}
///////////////////////////////////////////
void show_array(const int * arr, int size)
{
	cout << "\tYour array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
///////////////////////////////////////////
void selection_sort(int * arr, int size)
{
	int k;
	int x;
	for (int i = 0; i < size; i++)
	{
		k = i;
		x = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < x)
			{
				k = j;
				x = arr[j];
			}
		}
		arr[k] = arr[i];
		arr[i] = x;
	}
}
//#include<iostream>
//using namespace std;
//int** allocatememory(int& rows, int& cols)
//{
//	int** m = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		m[i] = new int[cols];
//	}
//	return m;
//}
//void initializematrix(int** m, const int& rows, const int& cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			*(*(m+i)+j) = 0;
//		}
//	}
//}
//void displaymatrix(int** m, const int& rows, const int& cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout<<*(*(m+i)+j) << "  ";
//		}
//		cout << endl;
//	}
//}
//void deallocatememory(int** m, const int& rows, int& cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		delete[]m[i];
//	}
//	delete[]m;
//}
//int main()
//{
//	int rows, cols;
//	cout << "enter number of rows: " << endl;
//	cin >> rows;
//	cout << "enter number of cols: " << endl;
//	cin >> cols;
//	int** a = allocatememory(rows, cols);
//	initializematrix(a, rows, cols);
//	displaymatrix(a, rows, cols);
//	deallocatememory(a, rows, cols);
//}
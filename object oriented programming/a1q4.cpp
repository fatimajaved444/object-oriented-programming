//#include<iostream>
//using namespace std;
//int* allocate(int& s)
//{
//	int* matrix = new int[s];
//	return matrix;
//}
//void input(int* matrix, const int s)
//{
//	for (int i = 0; i < s; i++)
//	{
//		cin >> *(matrix+i);
//	}
//}
//void merge(int* a, int* b, const int& m, const int& n,int *c)
//{
//	int i = 0, j = n-1, k = 0;
//	while (i < m && j>=0)
//	{
//		if (*(a+i) <= *(b+j))
//		{
//			*(c+k) = *(a+i);
//			k++;
//			i++;
//		}
//		else 
//		{
//			*(c+k) = *(b+j);
//			k++;
//			j--;
//		}
//	}
//	while (i < m)
//	{
//		*(c + k) = *(a + i);
//		k++;
//		i++;
//	}
//	while (j >= 0)
//	{
//		*(c + k) = *(b + j);
//		k++;
//		j--;
//	}
//}
//void output(int* c, int &s)
//{
//	cout << "merged array is: " << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout << *(c + i) << "  ";
//	}
//}
//void deletememory(int *matrix,int& s)
//{
//	delete[]matrix;
//}
//int main()
//{
//	int* c;
//	int m, n; 
//	cout << "enter size of array 1: " << endl;
//	cin >> m;
//	cout << "enter size of array 2: " << endl;
//	cin >> n;
//
//	int l = m + n;
//	int* a, * b;
//	a=allocate(m);
//	b=allocate(n);
//	c = allocate(l);
//
//	cout << "enter the elements of array 1: " << endl;
//	input(a, m);
//	cout << "enter the elements of array 2: " << endl;
//	input(b, n);
// 
//	merge(a, b, m, n, c);
//	output(c, l);
//	
//	deletememory(a, m);
//	deletememory(b, n);
//	deletememory(c, l);
//
//	return 0;
//}
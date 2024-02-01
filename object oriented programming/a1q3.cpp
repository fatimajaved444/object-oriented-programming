//#include<iostream>
//using namespace std;
//int* allocate(int& s)
//{
//	int* matrix = new int[s];
//	return matrix;
//}
//void input(int* m,int&s)
//{
//	for (int i = 0; i < s; i++)
//	{
//		cin >> *(m + i);
//	}
//}
//int intersection(int* a, int* b, int& m, int& n, int* k)
//{
//	int l = 0;
//	for (int i = 0; i < m; i++)
//	{
//		bool p = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (*(a + i) == *(a + j))
//			{
//				p=1;
//				break;
//			}
//		}
//		if (p)
//		{
//			continue;
//		}
//
//		for (int j = 0; j < n; j++)
//		{
//			if (*(a+i)==*(b+j))
//			{
//				*(k+l) = *(a+i);
//				l++;
//				break;
//			}
//		}
//	}
//	return l;
//}
//void output(int* m, int& s)
//{
//	for (int i = 0; i < s; i++)
//	{
//		cout << *(m + i)<< "  ";
//	}
//}
//void deletememory(int* matrix)
//{
//	delete[]matrix;
//}
//int main()
//{
//	int* a, * b, * c;
//	int m, n, p;
//	cout << "enter size of a1: " << endl;
//	cin >> m;
//	cout << "enter size of a2: " << endl;
//	cin >> n;
//	p = m + n;
//	a=allocate(m);
//	b=allocate(n);
//	c=allocate(p);
//	cout << "enter elements of array 1: " << endl;
//	input(a, m);
//	cout << "enter elements of array 2: " << endl;
//	input(b, n);
//
//	int r = intersection(a, b, m, n, c);
//	cout << "the resut is: " << endl;
//	output(c, r);
//
//	deletememory(a);
//	deletememory(b);
//	deletememory(c);
//	return 0;
//}
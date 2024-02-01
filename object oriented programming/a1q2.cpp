//#include<iostream>
//using namespace std;
//int* allocate(int& s)
//{
//	int *matrix = new int[s];
//	return matrix;
//}
//void input(int* matrix, int &s)
//{
//	for (int i = 0; i < s; i++)
//	{
//
//		cout << "enter the"<<" "<<i+1<< " element: " << endl;
//		cin >> *(matrix + i);
//	}
//}
//int compressed(int* matrix, int& s)
//{
//	int l = 1;
//	for (int i = 1; i < s; i++)
//	{
//		if (*(matrix + i) != *(matrix + i-1))
//		{
//			*(matrix + l) = *(matrix + i);
//			l++;
//		}
//	}
//	return l;
//}
//void output(int* matrix, int& s)
//{
//	cout << "the compressed array: " << endl;
//	for (int i = 0; i < s; i++)
//	{
//		cout<< *(matrix + i)<<"  ";
//	}
//}
//void deletememory(int *matrix)
//{
//	delete[]matrix;
//}
//int main()
//{
//	int size;
//	cout << "enter the size: " << endl;
//	cin >> size;
//	int* a;
//	a=allocate(size);
//	input(a,size);
//	int p= compressed(a, size);
//	output(a, p);
//	deletememory(a);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int** allocate(int& r, int& c)
//{
//    int** m = new int* [r];
//    for (int i = 0; i < r; i++)
//    {
//        *(m + i) = new int[c];
//    }
//    return m;
//}
//
//int* allocate1(int& s)
//{
//    int* p;
//    p = new int[s];
//    return p;
//}
//
//void fillarray(int** m, int& r, int* c)
//{
//    for (int i = 0; i < r; i++)
//    {
//        cout << "enter the number of columns for row " << i + 1 << ": ";
//        cin >> *(c + i);
//        if (*(c + i) <= 0)
//        {
//            cout << "col should be positive enter positive num" << endl;
//            i--;
//            continue;
//        }
//        *(m + i) = allocate1(*(c + i));
//        for (int j = 0; j < *(c + i); j++)
//        {
//            cout << "enter element [" << i << "][" << j + 1 << "]: ";
//            cin >> *(*(m + i) + j);
//            if (*(*(m + i) + j) < 0)
//            {
//                cout << "col should be positive enter positive num" << endl;
//                j--;
//            }
//        }
//    }
//}
//int* twodimtoonedim(int** m, int& r, int* c, int& s)
//{
//    s = 0;
//    for (int i = 0; i < r; i++)
//    {
//        s = s + *(c + i);
//    }
//    int* one = allocate1(s);
//    int k = 0;
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < *(c + i); j++)
//        {
//            *(one + k) = *(*(m + i) + j);
//            k++;
//        }
//    }
//    return one;
//}
//void sort(int* m, int& s)
//{
//    for (int i = 0; i < s - 1; i++)
//    {
//        for (int j = 0; j < s - i - 1; j++)
//        {
//            if (*(m + j) > *(m + j + 1)) {
//                swap(*(m + j), *(m + j + 1));
//            }
//        }
//    }
//}
//void show(int* mat, int& s)
//{
//    cout << "sorted 1d array: ";
//    for (int i = 0; i < s; i++)
//    {
//        cout << *(mat + i) << " ";
//    }
//    cout << endl;
//}
//void deallocate(int** m1, const int& r)
//{
//    for (int i = 0; i < r; i++)
//    {
//        delete[] * (m1 + i);
//    }
//    delete[]m1;
//}
//void deallocate1(int* matrix)
//{
//    delete[]matrix;
//}
//int main()
//{
//    int r;
//    cout << "enter the number of rows: " << endl;
//    cin >> r;
//
//    int** arr = new int* [r];
//    int* cols = allocate1(r);
//    fillarray(arr, r, cols);
//    int size;
//    int* onedim = twodimtoonedim(arr, r, cols, size);
//    sort(onedim, size);
//    show(onedim, size);
//    deallocate(arr, r);
//    deallocate1(cols);
//    deallocate1(onedim);
//    return 0;
//}
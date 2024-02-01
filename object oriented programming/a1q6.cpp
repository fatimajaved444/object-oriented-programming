//#include<iostream>
//using namespace std;
//
//int** allocate(int r, int c)
//{
//    int** m = new int* [r];
//    for (int i = 0; i < r; i++)
//    {
//        m[i] = new int[c];
//    }
//    return m;
//}
//
//void input(int** m, int r, int c)
//{
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            cout << "enter the element [" << i << "]" << "[" << j << "]: ";
//            cin >> *(*(m+i)+j);
//        }
//    }
//}
//
//int** nonzero(int** m, int& r, int& c,int**b)
//{
//
//    int** result = allocate(r, c);
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//           * (*(b+ i) + j) = 0;
//        }
//    }
//    for (int i = 0; i < r; i++)
//    {
//        int k = 0;
//        for (int j = 0; j < c; j++)
//        {
//            if (*(*(m+i)+j) != 0)
//            {
//                *(*(b + i) + k) =*(*(m + i) + j);
//                k++;
//              
//            }
//        }
//
//    }
//    return result;
//}
//
//void output(int** m, int& r, int& c)
//{
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            if (*(*(m + i) + j) != 0)
//            {
//                cout << *(*(m+i)+j) << " ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//void deallocate(int** m, int r)
//{
//    for (int i = 0; i < r; i++)
//    {
//        delete[] m[i];
//    }
//    delete[] m;
//}
//
//int main()
//{
//    int r, c;
//    cout << "Enter the number of rows: " << endl;
//    cin >> r;
//    cout << "Enter the number of cols: " << endl;
//    cin >> c;
//
//    int** a = allocate(r, c);
//    cout << "enter the array: " << endl;
//    input(a, r, c);
//    int** b = allocate(r, c);
//
//    nonzero(a, r, c,b);
//    cout << "the output: " << endl;
//    output(b,r,c );
//    deallocate(a, r);
//    deallocate(b, r);
//  
//    return 0;
//}
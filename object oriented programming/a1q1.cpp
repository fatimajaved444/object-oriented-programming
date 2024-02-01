//#include <iostream>
//using namespace std;
//int* allocate(int& size)
//{
//    int* arr = new int[size];
//    return arr;
//}
//
//void input(int* &arr, int& size, int& count) 
//{
//    int a;
//    cout << "enter numbers: " << endl;
//    while (true) 
//    {
//        cin >> a;
//        if (a == -1) {
//            break; 
//        }
//        *(arr + count) = a; 
//        count++;
//        if (count == size) 
//        {
//            int* temp = new int[size * 2];
//            for (int i = 0; i < size; i++) 
//            {
//                *(temp + i) = *(arr + i); 
//            }
//            delete[] arr;  
//            arr = temp;    
//            size =size*2;     
//        }
//    }
//}
//void reverse(int* arr, int count)
//{
//    cout << "the ouput is: " << endl;
//    for (int i = count - 1; i >= 0; i--) 
//    {
//        cout << *(arr + i) << " "; 
//    }
//    cout << endl;
//}
//void deallocate(int* arr, int& size) {
//    delete[] arr;
//}
//
//int main() {
//
//    int size = 5;
//    int count = 0; 
//    int* arr = allocate(size);
//    input(arr, size, count);
//    reverse(arr, count);
//    deallocate(arr, size);
//    return 0;
//}
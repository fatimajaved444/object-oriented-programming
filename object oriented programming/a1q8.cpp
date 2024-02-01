//#include <iostream>
//#include <string>
//using namespace std;
//
//void input(string& str)
//{
//    cout << "Enter a string: ";
//    getline(cin, str);
//}
//int* allocate()
//{
//    return new int[26] {};
//}
//int* countfrequency(const string& str) {
//    int* frequencies = new int[26] {};
//    int i = 0;
//
//    while (i < str.length()) {
//        char ch = str[i];
//
//        if (isalpha(ch))
//        {
//            int index = tolower(ch) - 'a';
//            frequencies[index]++;
//        }
//        i++;
//    }
//    return frequencies;
//}
//void output(const int* freq)
//{
//    cout << "letter frequency" << endl;
//    for (int i = 0; i < 26; i++)
//    {
//        if (*(freq + i) > 0)
//        {
//            char letter = 'a' + i;
//            cout << letter << " " << *(freq + i) << endl;
//        }
//    }
//}
//void deallocate(int* freq)
//{
//    delete[] freq;
//}
//
//int main()
//{
//    string a;
//    input(a);
//
//    allocate();
//    int* freq = countfrequency(a);
//    output(freq);
//    deallocate(freq);
//    return 0;
//}
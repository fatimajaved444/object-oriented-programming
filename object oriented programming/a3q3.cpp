//#include <iostream>
//#include<string>
//using namespace std;
//
//class Singleton {
//private:   
//    string name, loves;
//    static Singleton* instancePtr;
//    Singleton() {}
//public:
//    Singleton(const Singleton& obj) = delete;
//    static Singleton* getInstance() {
//       
//        if (instancePtr == NULL) {
//            instancePtr = new Singleton();
//            return instancePtr;
//        }
//        else {
//            return instancePtr;
//        }
//    }
//    void setValues(string name, string loves) {
//        this->name = name;
//        this->loves = loves;
//    }
//    void print() {
//        cout << name << " loves " << loves << "." << endl;
//    }
//};
//
//Singleton* Singleton::instancePtr = NULL;
//
//int main() {
//    Singleton* ptr = Singleton::getInstance();
//    ptr->setValues("fatima", "coding");
//    ptr->print();
//    cout << "Address of pointer: " << ptr << endl;
//   
//
//    Singleton* ptr1 = Singleton::getInstance();
//    ptr1->setValues("simal", "coding");
//    ptr1->print();
//    cout << "Address of ptr1: " << ptr1<< endl;
//
//    return 0;
//}
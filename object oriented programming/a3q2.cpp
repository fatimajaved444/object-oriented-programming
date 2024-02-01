//#include<iostream>
//#include<string>
//using namespace std;
//class employee {
//protected:
//	int id;
//	string name;
//	double salary;
//public:
//
//	employee(int id1, const string& name1, double salary1=0)
//	{
//		id = id1;
//		name = name1;
//		salary = salary1;
//	}
//	virtual void calculatepayroll()
//	{
//		cout << "employee id: " << id << endl;
//		cout << "name: " << name << endl;
//		cout << "salary: " << salary << endl;
//	}
//};
//
//class salaryemployee :public employee {
//public:
//	salaryemployee(int id1, const string& name1, double salary1=0) 
//		:employee(id1, name1, salary1){}
//	
//
//	void calculatepayroll()override
//	{
//		cout << "calculating payroll for salary employee: " << endl;
//		employee::calculatepayroll();
//	}
//
//
//};
//
//class hourlyemployee :public employee {
//public:
//	hourlyemployee(int id1, const string& name1, double salary1=0) 
//		:employee(id1, name1, salary1){}
//	
//
//	void calculatepayroll()override
//	{
//		cout << "calculating payroll for hourly employee: " << endl;
//		employee::calculatepayroll();
//	}	
//};
//
//class commisionemployee :public employee {
//public:
//	commisionemployee(int id1, const string& name1, double salary1=0)
//		:employee(id1, name1, salary1) {}
//
//	void calculatepayroll()override
//	{
//		cout << "calculating payroll for commision employee: " << endl;
//		employee::calculatepayroll();
//	}
//
//};
//
//
//
//int main()
//{
//	salaryemployee a(1, "abc", 200);
//	hourlyemployee b(2, "pqr", 400);
//	commisionemployee c(3, "xyz", 600);
//
//	a.calculatepayroll();
//	cout << "---------------------" << endl;
//	b.calculatepayroll();
//	cout << "---------------------" << endl;
//	c.calculatepayroll();
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class person {
//public:
//	string name;
//	int age;
//	char gender;
//};
//class adult :public person {
//public:
//	string occupation;
//	string qualification;
//	string cnic;
//};
//class kid :public person
//{
//public:
//	string bform;
//};
//class bogie {
//
//public:
//	int bogieid;
//	bogie* next;
//	adult* aduobj;
//	kid* kidobj;
//	string familyname;
//	bogie(int id)
//	{
//		bogieid = id;
//		next = nullptr;
//		aduobj = nullptr;
//		kidobj = nullptr;
//		familyname = "";
//	}
//	bool addpassengers()
//	{
//		if (aduobj || kidobj)
//		{
//			cout << "bogie number " << bogieid << " is filled. " << endl;
//			return false;
//		}
//		aduobj = new adult[4];
//		kidobj = new kid[6];
//		for (int i = 0; i < 4; i++)
//		{
//			cout << endl;
//			cout << "---------------Enter the info of adult " << i + 1 << "----------------" << endl;
//			cout << "adult info: " << endl;
//			cout << "name: ";
//			cin >> aduobj[i].name;
//			cout << "age: ";
//			cin >> aduobj[i].age;
//			cout << "gender: ";
//			cin >> aduobj[i].gender;
//			cout << "occupation: ";
//			cin >> aduobj[i].occupation;
//			cout << "qualification: ";
//			cin >> aduobj[i].qualification;
//			cout << "cnic: ";
//			cin >> aduobj[i].cnic;
//
//		}
//		for (int i = 0; i < 6; i++)
//		{
//			cout << endl;
//			cout << "---------------------Enter the info of kid " << i + 1 << "--------------------" << endl;
//			cout << "child info: " << endl;
//			cout << "name: ";
//			cin >> kidobj[i].name;
//			cout << "age: ";
//			cin >> kidobj[i].age;
//			cout << "gender: ";
//			cin >> kidobj[i].gender;
//			cout << "bform: ";
//			cin >> kidobj[i].bform;
//
//		}
//		cout << "Enter Family Name: ";
//		cin >> familyname;
//		return true;
//	}
//	void print()
//	{
//		cout << "bogieid: " << bogieid << endl;
//		cout << "family name: " << familyname << endl;
//		cout << "for adults: " << endl;
//		for (int i = 0; i < 4; i++)
//		{
//			cout << endl;
//			cout << "----------------for adult " << i + 1 << " ---------------------" << endl;
//			cout << "name: " << aduobj[i].name << endl;
//			cout << "age: " << aduobj[i].age << endl;
//			cout << "gender: " << aduobj[i].gender << endl;
//			cout << "occupation: " << aduobj[i].occupation << endl;
//			cout << "qualification: " << aduobj[i].qualification << endl;
//			cout << "cnic: " << aduobj[i].cnic << endl;
//		}
//		cout << "for kids: " << endl;
//		for (int i = 0; i < 6; i++)
//		{
//			cout << endl;
//			cout << "----------------for kid " << i + 1 << " ---------------------" << endl;
//			cout << "name: " << kidobj[i].name << endl;
//			cout << "age: " << kidobj[i].age << endl;
//			cout << "gender: " << kidobj[i].gender << endl;
//			cout << "b-form number: " << kidobj[i].bform << endl;
//		}
//	}
//
//	~bogie()
//	{
//		if (aduobj) delete[] aduobj;
//		if (kidobj) delete[] kidobj;
//	}
//
//};
//
//class train {
//
//public:
//	bogie* engine;
//	train()
//	{
//		engine = nullptr;
//	}
//	void addbogie(int id)
//	{
//		bogie* newbogie = new bogie(id);
//		if (!engine)
//		{
//			engine = newbogie;
//		}
//		else
//		{
//			bogie* current = engine;
//			while (current->next)
//			{
//				current = current->next;
//			}
//			current->next = newbogie;
//		}
//	}
//	bool removebogie(int id)
//	{
//		if (!engine)
//		{
//			cout << "the train is empty. no bogie is to be removed." << endl;
//			return false;
//		}
//		if (engine->bogieid == id)
//		{
//			bogie* remove = engine;
//			engine = engine->next;
//			delete remove;
//			cout << "bogie: " << id << "  has removed " << endl;
//		}
//		bogie* current = engine;
//		while (current->next) {
//			if (current->next->bogieid == id) {
//				bogie* toRemove = current->next;
//				current->next = current->next->next;
//				delete toRemove;
//				cout << "Bogie " << id << " has been removed." << endl;
//				return true;
//			}
//			current = current->next;
//		}
//		cout << "Bogie " << id << " not found in the train." << endl;
//		return false;
//	}
//
//	void printtrain() {
//		bogie* current = engine;
//		while (current) {
//			cout << "Bogie ID: " << current->bogieid << endl;
//			current = current->next;
//		}
//	}
//
//	bool searchbogie(int id) {
//		bogie* current = engine;
//		while (current) {
//			if (current->bogieid == id) {
//				cout << "Bogie " << id << " found in the train." << endl;
//				return true;
//			}
//			current = current->next;
//		}
//
//		cout << "Bogie " << id << " not found in the train." << endl;
//		return false;
//	}
//
//	~train() {
//		while (engine) {
//			bogie* toRemove = engine;
//			engine = engine->next;
//			delete toRemove;
//		}
//	}
//};
//int main()
//{
//	train myTrain;
//	int key = 0;
//
//	while (key != 7)
//	{
//		cout << "----------Train Management System----------" << endl;
//		cout << "1. Add a Bogie" << endl;
//		cout << "2. Remove a Bogie" << endl;
//		cout << "3. Print Train Info" << endl;
//		cout << "4. Search for a Bogie" << endl;
//		cout << "5. Add Passengers to a Bogie" << endl;
//		cout << "6. Print Bogie Info" << endl;
//		cout << "7. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> key;
//
//		if (key == 1)
//		{
//			int bogieId;
//			cout << "Enter Bogie ID: ";
//			cin >> bogieId;
//			myTrain.addbogie(bogieId);
//			cout << "Bogie " << bogieId << " added to the train." << endl;
//		}
//		else if (key == 2)
//		{
//			int bogieId;
//			cout << "Enter Bogie ID to remove: ";
//			cin >> bogieId;
//			myTrain.removebogie(bogieId);
//		}
//		else if (key == 3)
//		{
//			myTrain.printtrain();
//		}
//		else if (key == 4)
//		{
//			int bogieId;
//			cout << "Enter Bogie ID to search: ";
//			cin >> bogieId;
//			myTrain.searchbogie(bogieId);
//		}
//		else if (key == 5)
//		{
//			int bogieId;
//			cout << "Enter Bogie ID to add passengers: ";
//			cin >> bogieId;
//			bogie* current = myTrain.engine;
//			while (current)
//			{
//				if (current->bogieid == bogieId)
//				{
//					if (current->addpassengers())
//						cout << "Passengers added to Bogie " << bogieId << endl;
//					//return 0;
//				}
//				current = current->next;
//			}
//			cout << "Bogie " << bogieId << " not found in the train." << endl;
//		}
//		else if (key == 6)
//		{
//			int bogieId;
//			cout << "Enter Bogie ID to print info: ";
//			cin >> bogieId;
//			bogie* current = myTrain.engine;
//			while (current)
//			{
//				if (current->bogieid == bogieId)
//				{
//					current->print();
//					//return 0;
//				}
//				current = current->next;
//			}
//			cout << "Bogie " << bogieId << " not found in the train." << endl;
//		}
//		else if (key == 7)
//		{
//			cout << "Exiting the program." << endl;
//		}
//		else
//		{
//			cout << "Invalid choice. Please try again." << endl;
//		}
//	}
//
//	return 0;
//}
//
//

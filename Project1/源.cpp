//#include<iostream>
//using namespace std;
//class Student {
//
//private:
//	int id;//学号
//	int score; //成绩
//	static int  maxscore;//最高分数
//	static int maxid;//最高分数学生学号
//public:
//
//	Student(int ti = 0, int ts = 0) {
//		this->id = ti;this->score = ts;
//	}
//
//
//
//	static void findMax() {
//		cout << maxid << "--" << maxscore;
//	}; //寻找最高成绩和学号
//
//	static int getMaxScore() {
//		return maxscore;
//	} //返回最高成绩
//
//	static int getMaxID() {
//		return maxid;
//	}//返回最高成绩的学号
//	 void renew() {
//		 maxscore = maxscore >= score ? maxscore : score;
//		 maxid = maxid > id ? maxid : id;
//	}
//
//};
//
//int main() {
//	int t;cin >> t;
//	while (t--) {
//		int ti;int ts;
//		cin >> ti >> ts;
//		Student s(ti, ts);
//		s.renew();
//		s.findMax();
//	}
//}
//#include<iostream>
//using namespace std;
//class complex {
//public:
//	complex() {}
//	complex(double r, double i) {
//		real = r;imag = i;
//	}
//	friend void addCom(complex* c1, complex* c2);
//	friend void coutCom(complex c);
//	friend void minuCom(complex* c1, complex* c2);
//private:
//	double real;
//	double imag;
//};
//void addCom(complex* c1,complex* c2) {
//	c1->real = c1->real + c2->real;
//	c1->imag = c1->imag + c2->imag;
//}
//void minuCom(complex* c1,complex* c2) {
//	c1->real = c1->real - c2->real;
//	c1->imag = c1->imag - c2->imag;
//}
//void coutCom(complex c) {
//	cout << "(" << c.real << "," << c.imag << ")" << endl;
//}
//int main() {
//	double a, b;cin >> a >> b;
//	complex com(a, b);
//	int n;cin >> n;
//	while (n--) {
//		char c;cin >> c;
//		int e, f;
//		cin >> e >> f;
//		complex co(e, f);
//		if (c == '+')
//		{
//			addCom(&com, &co);
//		}
//		else minuCom(&com, &co);
//		coutCom(com);
//	}
//
//}
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Customer {
//public:
//	Customer(char* name) {
//		for (int i = 0;i < strlen(name);i++) {
//			CustName[i] = name[i];
//		}
//		Rent = Rent + 150;
//		TotalCustNum++;
//	}
//	~Customer();
//	static void changeYear(int r) {
//		Year = r;
//	}
//	void Display() {
//		cout << CustName << " ";
//		printf("%d%04d ", Year, CustID);
//		cout << TotalCustNum << "" << CustID << " " << Rent << endl;
//	}
//private:
//	static int TotalCustNum;
//	static int Rent;
//	static int Year;
//	int CustID;
//	char* CustName;
//};
//int Customer::Rent = 0;
//int Customer::TotalCustNum = 0;
//int Customer::Year = 0;
//
//int main() {
//	int n;cin >> n;
//	while (n--) {
//		char arr[100] = "eie";
//		Customer sss(arr);
//		int year;cin >> year;
//		Customer::changeYear(year);
//		char s[199]="eisei";
//		cin >> s;
//		while (strcmp(s,"0") == 0) {
//			Customer cus(s);
//			cus.Display();
//		}
//
//	}
//}
#include<iostream>
#include<cstring>
#include<iomanip>
#pragma warning(disable:4996)
//using namespace std;
//class Customer
//{
//public:
//	Customer(char* name);
//	~Customer();
//	static void changeYear(int r);
//	void Display();
//private:
//	static int TotalCustomer;
//	static int Rent;
//	static int Year;
//	int CustID;
//	char* CustName;
//};
//int Customer::TotalCustomer = 0;
//int Customer::Rent = 150;
//int Customer::Year = 2000;
//Customer::Customer(char* name) {
//	TotalCustomer++;
//	CustID = TotalCustomer;
//	CustName = new char[10];
//	strcpy(CustName, name);
//}
//Customer::~Customer() {
//	Rent += 150;
//}
//void Customer::Display() {
//	cout << CustName << " " << Year << setfill('0') << setw(4) << CustID << " " << TotalCustomer << " " << Rent << endl;
//}
//void Customer::changeYear(int r) {
//	Year = r;
//}
//int main() {
//	char name[10];
//	int year, t;
//	cin >> t;
//	while (t--) {
//		cin >> year;
//		while (1) {
//			cin >> name;
//			if (strcmp(name, "0") == 0) break;
//			Customer customer(name);
//			customer.changeYear(year);
//			customer.Display();
//		}
//	}
//}
//#include<iostream>
//using namespace std;
//class CPoint {
//public:
//	CPoint() {
//	}
//	CPoint(double xx,double yy) {
//		this->x = xx, this->y = yy;
//	}
//	double x,y;
//
//};
//class CCircle:public CPoint{
//public:
//	CCircle(){}
//	CCircle(double xx,double yy,double rr) {
//		x = xx;y = yy;r = rr;
//	}
//	double r;
//	double count() {
//		double res = 3.14 * r * r;
//		return res;
//	}
//	void print() {
//		cout << "Circle:(" << x << "," << y << ")," << r << endl;
//		cout << "Area:" << count() << endl;
//	}
//};
//class CCylinder :public CCircle {
//public:
//	CCylinder() {}
//	CCylinder(double xx,double yy,double rr,double hh) {
//		x = xx;y = yy;r = rr;h = hh;
//	}
//	double h;
//	double count1() {
//		double res = 3.14 * r * r * h;
//		return res;
//	}
//	void print1() {
//		cout << "Cylinder:" << "(" << x << "," << y << ")," << r << "," << h << endl;
//		cout << "Volume:" << count1() << endl;
//	}
//};
//int main() {
//	double x, y, r,h;
//	cin >> x >> y >> r;
//	CCircle cir(x, y, r);
//	cir.print();
//	cin >> x >> y >> r >> h;
//	CCylinder cyl(x, y, r, h);
//	cyl.print1();
//
//}
#include<iostream>
using namespace std;
class Document{
public:
	Document(){
		cout << "Create Document Class" << endl;
	}
	string name;
	Document(string name) {
		this->name = name;
		cout << "Create Document Class" << endl;
		
	}
	void print() {
		
	}
	~Document() {
		cout << "Delete Document Class" << endl;
	}
};
class Book :public Document{
public:
	int pageCount;
	Book(){}
	Book(int page,string n) {
		cout << "Create Book Class" << endl;
		pageCount = page;name = n;
		
	}
	void print() {
		cout << "Document Name is " << name << endl;
		cout << "PageCount is " << pageCount << endl;
	}
	~Book() {
		cout << "Delete Book Class" << endl;
	}
};
int main() {
	string str;
	int a;
	cin >> str >> a;
	//Document doc(str);
	
	Book bo(a,str);
	//doc.print();
	bo.print();
}



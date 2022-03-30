#include <iostream>
using namespace std;





// -----------------------------------------------------------------

// Task #1 : x,y fieldleri olsun ve her bir field uchun getter setterler yazilsin,
// constructor parametric, default
// ShowData method yazilsin



//class Point {
//private:
//	int data = 0;
//	int data2 = 0;
//public:
//	Point()
//	{
//		data = 0;
//		data2 = 0;
//	}
//	Point(int x, int y)
//	{
//		SetData(x);
//		SetData2(y);
//	}
//	int getData() {
//		return data;
//	}
//	int getData2() {
//		return data2;
//	}
//	void SetData(int x) {
//		if (x > 0) {
//			data = x;
//		}
//		else {
//			data = 0;
//			cout << endl;
//			cout << "  Wrong Input. X must be greater than 0." << endl;
//		}
//	}
//	void SetData2(int y) {
//		if (y > 0) {
//			data2 = y;
//		}
//		else {
//			data2 = 0;
//			cout << endl;
//			cout << "  Wrong Input. Y must be greater than 0." << endl;
//		}
//	}
//	void ShowDatas() {
//		cout << endl;
//		cout << endl;
//		cout << "  X --> " << data << endl;
//		cout << "  Y --> " << data2 << endl;
//	}
//};
//
//
//void main() {
//	Point p(10, 23);
//	p.ShowDatas();
//}


// -----------------------------------------------------------------



// Task #3: Tələbələr qrupunu əks etdirən sinif təyin edin.
// Student name, surname, age, group_no, speciality, city
// Tələbə həmçinin uyğun sinif vasitəsilə reallaşdırılır.


//class Student {
//private:
//	char name[30]{};
//	char surname[30]{};
//	int age = 0;
//	int group_no = 0;
//	char speciality[30]{};
//	char city[30]{};
//public:
//	Student()
//	{
//		strcpy_s(name, "no name");
//		strcpy_s(surname, "no surname");
//		age = 0;
//		group_no = 0;
//		strcpy_s(speciality, "no speciality");
//		strcpy_s(city, "no city");
//	}
//	Student(const char*n,const char*s,int a,int g,const char*sp,const char*c)
//	{
//		SetName(n);
//		SetSurName(s);
//		SetAge(a);
//		SetGroupNo(g);
//		SetSpeciality(sp);
//		SetCity(c);
//	}
//	char* getName() {
//		return name;
//	}
//	char* getSurname() {
//		return surname;
//	}
//	int  getAge() {
//		return age;
//	}
//	int getGroupNo() {
//		return group_no;
//	}
//	char* getSpeciality() {
//		return speciality;
//	}
//	char* getCity() {
//		return city;
//	}
//	void SetName(const char* n) {
//		if (strlen(n) >= 3) {
//			strcpy_s(name, n);
//		}
//		else {
//			cout << endl;
//			cout << endl;
//			cout << "  Name length should be more than 3." << endl;
//		}
//	}
//	void SetSurName(const char* s) {
//		if (strlen(s) >= 3) {
//			strcpy_s(surname, s);
//		}
//		else {
//			cout << endl;
//			cout << endl;
//			cout << "  SurName length should be more than 3." << endl;
//		}
//	}
//	void SetAge(int a) {
//		if (a>0) {
//			age = a;
//		}
//		else {
//			cout << endl;
//			cout << endl;
//			cout << "  Wrong Age Input." << endl;
//		}
//	}
//	void SetGroupNo(int g) {
//		if (g > 0) {
//			group_no = g;
//		}
//		else {
//			cout << endl;
//			cout << endl;
//			cout << "  Wrong Group_NO Input." << endl;
//		}
//	}
//	void SetSpeciality(const char* sp) {
//		if (strlen(sp) > 0) {
//			strcpy_s(speciality, sp);
//		}
//		else {
//			cout << endl;
//			cout << endl;
//			cout << "  You Must Type your speciality" << endl;
//		}
//	}
//	void SetCity(const char* c) {
//		if (strlen(c) > 0) {
//			strcpy_s(city, c);
//		}
//		else {
//			cout << endl;
//			cout << endl;
//			cout << "  You Must Type your city" << endl;
//		}
//	}
//	void ShowStudent() {
//		cout << endl;
//		cout << endl;
//		cout<<"  Student Info:"<<endl;
//		cout << endl;
//		cout << "  Name: " << name << endl;
//		cout << "  Surname: " << surname << endl;
//		cout << "  Age: " << age << endl;
//		cout << "  Group NO: " << group_no << endl;
//		cout << "  Speciality: " << speciality << endl;
//		cout << "  City: " << city << endl;
//	}
//
//};
//
//
//void main() {
//	Student s("John", "Doe", 23, 1, "Programmer", "Baku");
//	s.ShowStudent();
//}


// -----------------------------------------------------------------


// Task #2 : Rəqəmsal sayğac məhdud diapazonlu dəyişəndir. Onun tam qiyməti təyin edilmiş maksimum qiymət həddinə
// (məsələn, k 0 - 100 diapazonunda qiymət alır) çatdığı zaman sıfırlanır.
// Bu cür sayğacın parametri kimi rəqəmsal saatı, kilometrölçən sayğacı nümunə göstərmək olar.
// Bu cür sayğac üçün sinfi təyin edin.Maksimal və minimal qiymətlərin verilməsini,
// sayğacın qiymətinin 1 vahid artırılmasını, cari qiymətin qaytarılmasını təmin edin.


//class Counter {
//private:
//	int minimum = 0;
//	int maximum = 0;
//	int counter = minimum;
//public:
//	Counter()
//	{
//		minimum = 0;
//		minimum = 0;
//		counter = minimum;
//	}
//	Counter(int min,int max,int count)
//	{
//		SetMin(min);
//		SetMax(max);
//		SetCounter(count);
//	}
//	int getMin() {
//		return minimum;
//	}
//	int getMax() {
//		return maximum;
//	}
//	int getCounter() {
//		return counter;
//	}
//	void SetMin(int min){
//		if (min > 0) {
//			minimum = min;
//		}
//		else {
//			cout << "  Minimum should be greater than [0]." << endl;
//		}
//	}
//	void SetMax(int max) {
//		if (max > minimum) {
//			maximum = max;
//		}
//		else {
//			cout << "  Maximum should be greater than [minimum]." << endl;
//		}
//	}
//	void SetCounter(int count) {
//		if (count<maximum) {
//			counter = count;
//		}
//		else if (count == 100) {
//			counter = 0;
//		}
//		else {
//			cout << "  Wrong Input." << endl;
//		}
//	}
//	void Increment() {
//		counter++;
//	}
//	void GetCurrent() {
//		cout << endl;
//		cout << "  Current: " << counter << endl;
//		cout << endl;
//	}
//};
//
//
//void main() {
//	Counter c(1, 100, 1);
//	c.Increment();
//	c.GetCurrent();
//	c.Increment();
//	c.GetCurrent();
//	c.Increment();
//	c.GetCurrent();
//	c.Increment();
//	c.GetCurrent();
//	c.Increment();
//	c.GetCurrent();
//	c.Increment();
//	c.GetCurrent();
//
//}


// -----------------------------------------------------------------
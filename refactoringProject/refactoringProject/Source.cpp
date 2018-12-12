#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Human {
private:
	string name;
	string status;
public:
	string getName() {
		return name;
	}	
	string getStatus() {
		return status;
	}
};

class Universety {
private:
	Human director;
	vector<Human> students;
public:
	void showDirectorInfo() {
		universityInfo();
		cout << director.getName() << endl;
		cout << director.getStatus() << endl;
	}
	void showStudentsInfo() {
		universityInfo();
		cout << "Список студентов: ";
		for (size_t i = 0; i < students.size(); i++) {
			cout << students[i].getName() << endl;
			cout << students[i].getStatus() << endl;
		}
	}
	void universityInfo() {
		cout << "ДонНУ 2018" << endl
			<< "Физико-Технический факультет" << endl;
	}
	void testStudentCount() {
		if (students.size() > 100)
			cout << "Кол-во студентов обычное" << endl;
		else
			cout << "Слишком мало студентов" << endl;
	}
	bool numberOfStudentsMoreThanZero() {
		return students.size() > 0;
	}
};

class Building {
private:
	size_t height;
	size_t width;
public:
	size_t getHeight() {
		return height;
	}
	size_t getWidth() {
		return width;
	}
	size_t Square() {
		return  getHeight() * getWidth();
	}
	size_t showCharacteristic() {
		return 3 * Square();
	}
};
class School: public Building {
private:
	string name;
	vector<Human> students;
public:
	void showDistrictInfo() {
		cout << "Район: Ворошиловский" << endl;
	}
	void showSchoolInfo() {
		showDistrictInfo();
		cout << "Студенты: " << endl;
		for (size_t i; i < students.size(); i++)
			cout << students[i].getName() << endl;
	}
	void showBuldingCharacteristic() {
		cout << name << endl;
		showDistrictInfo();
	}
};

void printLine(char ch) {
	for (size_t i = 0; i < 20; i++)
		cout << ch;
	cout << endl;
}

int main() {

	return 0;
}
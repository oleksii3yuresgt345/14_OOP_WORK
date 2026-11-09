#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int studyYears;
    float averageMark;
public:
    Student():name("no name"),studyYears(0),averageMark(0){}
    Student(string n, int y, float m):name(n),studyYears(y),averageMark(m){}

    void Print()const
    {
        cout << "Name : " << name << endl;
        cout << "Studied years : " << studyYears << endl;
        cout << "Average mark : " << averageMark << endl;
    }
    void Study()const
    {
        if (studyYears >= 10)
            cout << "I study a long time" << endl;
        else if (studyYears < 10 && studyYears >= 5)
            cout << "I study ok time" << endl;
        else
            cout << "I study not a long time" << endl;
    }
    void Lection()const
    {
        cout << "im going to lections" << endl;
    }
};

class Aspirant : public Student
{
    string workName;
    int pages;
public:
    Aspirant():workName("no name"),pages(0),Student(){}
    Aspirant(string wn, int p, string n, int y, float m):workName(wn),pages(p),Student(n,y,m){}

    void Print()
    {
        cout << "My work's name is " << workName << endl;
        cout << "My work has " << pages << " pages" << endl;
        Student::Print();
    }
    void WritePages(int p)
    {
        cout << "I will write " << p << " more pages" << endl;
        pages += p;
    }
    void Disertation()
    {
        if (pages > 100)
            cout << "I defended my work" << endl;
        else
            cout << "I didn't defend my work" << endl;
    }
};

class Passport
{
protected:
    struct ExDate
    {
        int day;
        int month;
        int year;
    };
    string name;
    int id;
    ExDate exDate;
public:
    Passport():name("no name"),id(0),exDate({0,0,0}){}
    void Print()
    {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Expiration date : " << exDate.day << "." << exDate.month << "." << exDate.year << endl;
    }
};

int main()
{
    Aspirant aspirant("GoodWork", 70, "Toluk", 14, 11.2);
    aspirant.Print();
    aspirant.Study();
    aspirant.Disertation();
    aspirant.WritePages(110);
    aspirant.Disertation();

    Passport p;
    p.Print();
}

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age, roll_number;
    string grade;

    // function getter and setter
public:
    void setName(string s)
    {
        name = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setRoll(int r)
    {
        roll_number = r;
    }
    void setGrade(string g)
    {
    grade:
        g;
    }

    void getName() {
        cout << name <<endl ;
    }
      void getAge() {
        cout << age <<endl ;
    }  void getRoll() {
        cout << roll_number<<endl ;
    }  void getGrade() {
        cout << grade<<endl ;
    }
};

int main()
{
    Student s1;
    s1.setName("pradeep");
    s1.setAge(21);
    s1.setRoll(233);
    s1.setGrade("A");

    s1.getName();
}
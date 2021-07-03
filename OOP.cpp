#include <iostream>
using namespace std;

class AbstractEmployee{//Abstraction.
    virtual void AskforPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
    int Salary;
protected:
    string Name;
public: 
    void setsalary(int s){//Setter
        if(s>0)   
        Salary = s;
    }

    int getsalary(){//Getter
        return Salary;
    }
    
    void setname(string name){
        Name = name;
    }
 
    string getname(){
        return Name;
    }

    void IntoduceYourself(){
        cout << "Name is " << Name << "\n";
        cout << "Company is " << Company << "\n";
        cout << "Age is " << Age << "\n";
    }
    Employee(string name,string company,int age){//Constructor

        Name = name;
        Company = company;
        Age = age;
    }
    void AskforPromotion(){

        if(Age>30)
          cout << Name << " You Got Promoted" << "\n";
        else
          cout << Name << " Sorry You are not Promoted" << "\n";
    }
    virtual void Work(){/*the virtual keyword checks if there is any implementation of this 
    function in derived classes & execute that instead.*/
        cout << Name << " is performing tasks,checking emails,task backlog.." << "\n";
    }
};

class Developer: public Employee{
public:
    string FavProgramminglanguage;
    Developer(string name,string company,int age,string favProgramminglanguage)
      :Employee(name,company,age)
    {
        FavProgramminglanguage=favProgramminglanguage;
    }
    void Fixbug(){
        cout << Name << " fixed bug using " << FavProgramminglanguage << "\n"; 
    }
    void Work(){
        cout << Name << " is writing code in " << FavProgramminglanguage << "\n";
    }
};

class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << "\n";
    }
    Teacher(string name,string company,int age,string subject)
      :Employee(name,company,age)
    {
        Subject = subject;
    }
    void Work(){
        cout << Name << " is Teaching " << Subject << "\n";
    }
};

int main(){
    Employee employee1 = Employee("Saldina","Amazon",25);
    employee1.IntoduceYourself();
    employee1.setsalary(50000);
    cout << "My Salary is " << employee1.getsalary() << "\n";
    employee1.AskforPromotion();

    Employee employee2 = Employee("John","Intuit",35);
    employee2.IntoduceYourself();
    employee2.setsalary(70000);
    cout << "My Salary is " << employee2.getsalary() << "\n";
    employee2.AskforPromotion();

    Developer employee3=Developer("Atharva","Uber",18,"C++");
    employee3.IntoduceYourself();
    employee3.Fixbug();
    employee3.setsalary(20000);
    cout << "My Salary is " << employee3.getsalary() << "\n";
    employee3.AskforPromotion();

    Teacher employee4=Teacher("Jack","Unacademy",47,"Maths");
    employee4.IntoduceYourself();
    employee4.PrepareLesson();
    employee4.setsalary(40000);
    cout << "My Salary is " << employee4.getsalary() << "\n";
    employee4.AskforPromotion();

    Employee* e1=&employee3;//base class pointer can hold reference to derived class object.
    Employee* e2=&employee4;

    e1->Work();
    e2->Work();

    return 0;
}
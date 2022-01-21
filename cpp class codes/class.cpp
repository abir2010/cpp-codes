#include<bits/stdc++.h>
using namespace std;

class student{
  public:
    int id, semester;
    string name;

    void set_student(int ID, string Name, int sem){
      id = ID;
      name = Name;
      semester = sem;
    };

    void show_student(){
      cout << "Student info :-" << endl << id << endl << name << endl << semester << endl;
    };
};

int main() {
  student st1,st2;

  st1.set_student(211118,"abir",2);
  st2.set_student(213018,"Kabir",2);

  st1.show_student();
  st2.show_student();

  return 0;
}
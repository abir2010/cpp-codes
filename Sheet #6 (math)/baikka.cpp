#include<bits/stdc++.h>
using namespace std;

class student{
  int id;
  string name;
  bool isStudent;
  public: 

    student(int ID, string naam, bool isStud){
      id = ID;
      name = naam;
      isStudent = isStud;
    }

    void show(){
      cout << id << endl << name << endl << isStudent;
    }
};

int main(){
  student ob(10, "abir", true);
  ob.show();

  return 0;
}
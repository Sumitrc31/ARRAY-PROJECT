/*#include <bits/stdc++.h>
using namespace std;
struct student{
    char name[30];
    int id ;
    float cg;
};
void display(student s1){
    cout<<"Name : "<<s1.name<<endl;
     cout<<"Id : "<<s1.id<<endl;
      cout<<"CGPA : "<<s1.cg<<endl;
}



int main() {
    student s1;
	cout<<"Enter your name: ";
	cin.get(s1.name,30);
	cout<<"Enter your ID :";
	cin>>s1.id;
	cout<<"Enter your CGPA : ";
	cin>>s1.cg;
	cout<<endl;
	display(s1);

}*/
/*
#include <bits/stdc++.h>
using namespace std;

struct student {
    char name[30];
    int id;
    float cg;
};

void display(student s) {
    cout << "Name : " << s.name << endl;
    cout << "Id : " << s.id << endl;
    cout << "CGPA : " << s.cg << endl;
    cout << "-------------------" << endl;
}

int main() {
    int n;
    cout << "Enter how many students: ";
    cin >> n;
    cin.ignore();

    student s[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter info of student " << i + 1 << ":\n";

        cout << "Enter name: ";
        cin.getline(s[i].name, 30);

        cout << "Enter ID (Last 4 digits): ";
        cin >> s[i].id;

        cout << "Enter CGPA: ";
        cin >> s[i].cg;

        cin.ignore();

        cout << endl;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        display(s[i]);
    }

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
struct student{
    string name;
    int id;
    float cg;
};
void display(student s){

    cout<<"Name :"<<s.name<<endl;
    cout<<"ID   :"<<s.id<<endl;
    cout<<"CGPA :"<<s.cg<<endl;

    cout<<"-----------------------------------------------"<<endl;
}
int main(){
    int n;
    cout<<"Enter the student number :";
    cin>>n;
    cin.ignore();

    student s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter info of student "<<i+1<<endl;

        cout<<"ENter student name :";
        getline(cin,s[i].name);
        cout<<"ENter student ID :";
        cin>>s[i].id;
        cout<<"ENter student CGPA";
        cin>>s[i].cg;

        cin.ignore();

    }
    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(s[j].cg < s[j+1].cg){
                    swap(s[j],s[j+1]);
                }
            }
        }
    cout<<"Sorted List :"<<endl;
     for(int i=0;i<n;i++){
          cout<<"Roll No "<<i+1<<endl;
        display(s[i]);
     }



}
*/

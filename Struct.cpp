#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string.h>


using namespace std;

struct structtest
{
    char name[50];
    int age;
    string addr;
    double height;
    float salary;
};

int main ()
{
    struct structtest variable1;
    struct structtest variable2;

    strcpy(variable1.name,"rimon");
    cout<<variable1.name<<endl;
    variable1.age=22;
    cout<<variable1.age<<endl;
    variable1.addr="itavara, keranigonj, dhaka";
    cout<<variable1.addr<<endl;
    variable1.height=5.5;
    cout<<variable1.height<<endl;
    variable1.salary = 120000;
    cout<<variable1.salary<<endl;

}

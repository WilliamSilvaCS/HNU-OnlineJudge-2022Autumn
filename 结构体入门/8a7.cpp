#include  <iostream>
using  namespace  std;

struct  Student
{
    string  name;
    Student*  next;
};

void  addStudent(Student*  head,  Student*  s)
{
    //  编写函数实现题目所描述的功能
    Student* phead=head;Student* p=head->next;
    while(p)
    {
        if(p->name=="jone")
        {
            s->next=p;
            phead->next=s;
            return;
        }
        p=p->next;
        phead=phead->next;
    }
    phead->next=s;
    return;



}

int  main()
{
    Student*  head  =  new  Student;
    head->next  =  nullptr;
    head->name  =  "";
    Student*  pre  =  head;
    for  (int  i  =  0;  i  <  5;  i++)
    {
        Student* p=new Student;
        string t;
        cin>>t;
        p->name=t;
        p->next=nullptr;
        pre->next=p;
        pre=pre->next;
    }

    string  name;
    cin  >>  name;
    Student*  s  =  new  Student;
    s->name  =  name;
    s->next  =  nullptr;
    addStudent(head,s);

    for(Student*  p  =  head->next;  p;  p  =  p->next)             //    循环输出
    {
        cout<<  p->name  <<  "  ";
    }

    return  0;
}

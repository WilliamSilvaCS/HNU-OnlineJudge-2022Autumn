#include  <iostream>
#include  <cstring>
using  namespace  std;
struct  student
{
    int  no;
    char  name[20];
    char  sex;
    float  score;
    student  *next;
};


student* head;
//����ͷָ�붨��

void  create(int  No,  char  *Name,  char  Sex,  float  Score);
void  show();
int  main()
{
    int  No;
    char  Sex,  Name[20];
    float  Score;
    while(cin>>No>>Name>>Sex>>Score)
    {
        create(No,  Name,  Sex,  Score);
    }
    show();
    return  0;
}

void  create(int  No,  char  *Name,  char  Sex,  float  Score)
{
    student  *newNode;


    newNode=new student;
    newNode->no=No;
    strcpy(newNode->name,Name);
    newNode->sex=Sex;
    newNode->score=Score;
    newNode->next=nullptr;
    //  �����½ڵ�
    if  (!head)
    {
        head=newNode;
        return ;
    }

    student* p=head;
    while(p->next)
    {
        p=p->next;
    }
    p->next=newNode;

    //�½ڵ��������
}

void  show()
{

    for(student* p=head; p; p=p->next)
    {
        cout<<p->no<<" "<<p->name<<" "<<((p->sex=='m')?"Boy":"Girl")<<" "<<p->score<<endl;
    }
    //  ���

}

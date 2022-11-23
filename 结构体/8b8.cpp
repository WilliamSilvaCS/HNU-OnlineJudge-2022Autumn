#include  <iostream>
using  namespace  std;

typedef  struct  LNode*  PtrToLNode;
struct  LNode
{
    int  data;
    PtrToLNode  next;
};

PtrToLNode  mergeList(PtrToLNode  head1,  PtrToLNode  head2)
{

    PtrToLNode head=new LNode,p;
    if(head1->next->data>head2->next->data)
    {
        head->next=head2->next;
        head2->next=head2->next->next;
        p=head->next;
    }
    else
    {
        head->next=head1->next;
        head1->next=head1->next->next;
        p=head->next;
    }
    while(head1->next&&head2->next)
    {
        if(head1->next->data>head2->next->data)
        {
            p->next=head2->next;
            head2->next=head2->next->next;
            p=p->next;
        }
        else
        {
            p->next=head1->next;
            head1->next=head1->next->next;
            p=p->next;
        }
    }
    if(head1->next==nullptr)
    {
        p->next=head2->next;
    }
    else
    {
        p->next=head1->next;
    }
    return head;
}
void  printList(PtrToLNode  head)
{
    PtrToLNode p=head->next;
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<endl;

}

int  main()
{
    int  data[2][8]  =  {{-484,  0,  10,  45,  371,  425,  895,  908},{0,  3,  12,  50,  900,  999,  1024,  2048}};
    int  arrSize  =  sizeof(data[0])/sizeof(data[0][0]);
    //  将数组  data  创建带头结点的为一个单向链表
    PtrToLNode  head1,  head2,  p,  tail;
    head1  =  tail  =  new  struct  LNode;
    for(int  i  =  0;  i  <  arrSize; i++)
    {
        p  =  new  struct  LNode;
        p->data  =  data[0][i];
        p->next  =  NULL;
        tail->next  =  p;
        tail  =  p;
    }
    //
    head2=new LNode;
    tail=head2;
    for(int i=0; i<arrSize; i++)
    {
        p=new LNode;
        p->data=data[1][i];
        p->next=nullptr;
        tail->next=p;
        tail=tail->next;
    }








    //  合并有序链表
    PtrToLNode  head  =  mergeList(head1,  head2);
    //  顺序打印输出单向链表中各个节点的data数据
    printList(head);
    //  释放链表空间
    while(head->next)
    {
        p=head->next;
        head->next=p->next;
        delete p;
    }
    delete head;


    return  0;
}

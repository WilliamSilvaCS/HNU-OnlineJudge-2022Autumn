#include  <iostream>
//测试结果:0  -484  425  908  371  895  45  10
using  namespace  std;

typedef  struct  LNode*  PtrToLNode;
struct  LNode
{
    long  data;
    PtrToLNode  next;
};

//  逆转单向链表函数
void  reverseList(PtrToLNode  head)
{
    PtrToLNode pright=head->next;
    PtrToLNode pleft=nullptr;
    while(pright->next!=nullptr)
    {
        PtrToLNode tmp=pleft;
        pleft=pright;
        pright=pright->next;
        pleft->next=tmp;
    }
    pright->next=pleft;
    head->next=pright;


}

void  printList(PtrToLNode  head)
{
    PtrToLNode  p  =  head->next;
    while(p)
    {
        cout  <<  p->data  <<  "  ";
        p  =  p->next;
    }
    cout  <<  endl;
}

int  main()
{
    long  data[8]  =  {10,  45,  895,  371,  908,  425,  -484,  0};
    int  arrSize  =  sizeof(data)/sizeof(data[0]);
    //  将数组  data  创建带头结点的为一个单向链表
    PtrToLNode  head,p,tail;
    head  =  tail  =  new  struct  LNode;                   ///
    for(int  i  =  0;  i  <  arrSize; i++)
    {
        p  =  new LNode;
        p->data  =  data[i];
        p->next  =  NULL;
        tail->next  =  p;
        tail  =  p;
    }                                                       ///
    //  逆置单向链表
    reverseList(head);
    //  顺序打印输出单向链表中各个节点的data数据
    printList(head);
    //  释放链表空间
    while(head->next!=NULL)     ///
    {
        p  =  head->next;
        head->next  =  p->next;
        delete  p;
    }
    delete  head;///
    return  0;
}

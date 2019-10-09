typedef struct DNode{
    Elemtype Data;
    struct DNode *prior,*next; 
}DNode,*DLinklist;
/**
双链表可以简单理解为两个单链表的融合
从头到尾：一个带有头结点的单链表
从未到头：一个不带头结点的单链表
所以：插入时双链表头和中部插入一致，尾部插入要判断有没有后继节点。
**/
//插入（a,a+1中间插入s,指针指向a）  O(1)
{
    s->next = p->next;
    p->next->prior = s;
    s->prior = p;
    p->next = s;
}

//删除操作(a-1)[q]<--->(a)[p]<--->(a+1)     O(1)
//同样注意表尾删除有差异
{
    p->next = q->next;
    q->next->prior = p;
    free(q);
}


//循环链表
/**
循环单链表：将最后一个节点的尾指针指向头节点。
仅设尾指针操作效率会更高。
判空：L->next == L;


循环双链表：1.将最后一个节点的尾指针指向头节点。2.头节点的头指针指向尾节点。
有两个环，一个所有后继(尾)指针形成的环，一个所有前驱（头）指针形成的环。
判空：L->next == L;L->prior == L;
**/


//静态链表(用数组实现)
#define MaxSize 50
typedef struct DNode{
    Elemtype data;
    int next;//存放后继节点的游标
}SLinkList[MaxSize];//用结构体数组


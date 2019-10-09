typedef struct LNode{
    Elemtype Data;
    struct LNode *next; 
}LNode,*LinkList;

//头插法建立单链表  O(n)
LinkList List_headInsert(LinkList &L){
    LNode *s;int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d",&x);
    while(x != 9999){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scaf("%d"，&x);
    }
    return L;
}

//尾插法建立单链表 O(n)
LinkList List_TailInsert(LinkList &L){
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s,*r = L;//s新节点,r：标记尾节点
    scanf("%d"，&x);
    while(x!=9999){
        s = (LNode*)malloc(sizeof(LNode));
        s-next = x;
        r->next = s;
        r = s;//尾指针标记
        scanf("%d"，&x);    
    }
    r-next = NULL;
    return L;
}

//按序号查找  O(n)

LNode *GetElem(LinkList L,int i){
    int j = 1;
    LNode *p = L->next;
    if(i==0){
        return L;
    }
    if(i<1){
        return NULL;
    }
    while(p&j<i){
        p = p->next;
        j++;
    }
    return p;
}

//按值查找 O(n)
LNode *GetElem(LinkList L,Elemtype e){
    LNode *p = L->next;
    while(p!=NULL && p->data!=e){
        p = p->next;
    }
    return p;
}

//插入节点操作
//1.前插法(伪代码)
{
    p  =GetElem(L,i-1)//得到第i-1个节点
    s->next = p->next;//新节点的Next指向第i个节点位置
    p->next = s;
    //顺序不能变
}
//1.前插法(伪代码)  O(n)
{
    p  =GetElem(L,i-1)//得到第i-1个节点
    s->next = p->next;//新节点的Next指向第i个节点位置
    p->next = s;
    //顺序不能变
}
//2.后插法在给定节点位置的情况下省去GetElem操作，时间复杂度为O(1)
/**
后插法转换为前插法方法。
1.后插法完成后链表的形状为：(a-1)--->(a)--->(s)--->(a+1)
2.交换(a)(s)的位置
这样时间复杂度为O(1)。不需要前插法一样遍历得到(a-1)的位置
**/

//删除操作   O(n)
{
    p = GetElem(L，i-1);
    q = P->next;//用p保存删除的节点信息
    p->next = q->next;//去除要删除位置的关联信息。
    free(q);
}
/**
若知道要删除节点信息(*p)的优先操作
1.先交换第i和i+1号元素的数据元素;
2.再删除i+1号元素  O(1)
**/
//求表长(不算头结点)
{
    int count  = 0;
    p = head;
    while(p->next!NULL){
        count ++;
        p = p->next;
    }
}
//判空
//1.有头结点:
{
    head->next = NUll;
}
//1.没有头结点:
{
    head == NUll;
}







































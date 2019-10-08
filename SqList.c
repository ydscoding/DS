#define MaxSize 50
typedef struct{
    ElemType data*;
    int length;
}SqList;
/**
    顺序表
**/
//前插法
bool ListInsert(SqList &L,int i,ElemType e){
    //i:顺序表的标号，而非数据下标
    if(i<1||i>L.length+1){//顺序存储
        return false;
    }
    if(L.length>=MaxSise){
        return false;
    }
    for(int j = L.length;j>=i;j--){
        L.data[j] = L.data[j-1];//顺序后移
    }  
    L.data[i-1] = e;
    L.length++;
    return true;
}
//best:O(1);agv:O(n);worst:O(n)

//删除操作
bool ListDelete(SqList &L,int i,ElemType &e){
    if(i<1 || i>L.length){//范围合法
        return false;
    }
    e = L.data[i-1];
    for(int j = i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}
//best:O(1);agv:O(n);worst:O(n)




































































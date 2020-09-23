//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
//#include"common.h"
//#define ElemType int
//#define SEQLIST_SIZE  8
////定义顺序表的结构
//typedef struct Seqlist
//{
//	ElemType *base;
//	size_t capacity;
//	size_t size;
//}SeqList;
//void menu();
//void SeqListInit(Seqlist* plist);
//void SeqListDestroy(Seqlist* plist);
//void SeqListpush_back(Seqlist* plist, ElemType x);
//void SeqListpush_front(Seqlist* plist, ElemType x);
//void SeqListpop_back(Seqlist* plist);
//void SeqListpop_front(Seqlist* plist);
//bool SeqListInsert_pos(Seqlist* plist, size_t size, ElemType x);
//void showlist(Seqlist* plist);
//void Sortlist(Seqlist* plist);
//bool IsFull(Seqlist* list);
//bool IsEmpty(Seqlist* plist);
//size_t SeqListlength(Seqlist* plist);
//void SeqListclear(Seqlist* plist);
//bool SeqListinsert_val(Seqlist* plist, ElemType x);
//size_t SeqListcapacity(SeqList* plist);
//bool SeqListerase_pos(SeqList* plist, size_t pos);
//bool SeqListerase_val(SeqList* plist, ElemType x);
//int SeqListfind_val(SeqList* plist, ElemType x);
//void SeqListreverse(SeqList* plist);
//bool Inc(SeqList *plist,size_t new_capacity); //扩容
//size_t SeqListbinary_find(SeqList* plist, ElemType key);
//size_t SeqListgetheap(SeqList* plist);
//size_t SeqListgetback(SeqList* plist);
//void SeqListearse_all(SeqList* plist, ElemType key);
//
//
//
//void SeqListearse_all(SeqList* plist, ElemType key)//删除重复元素
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("表为空，没有重复元素!");
//	}
//	Sortlist(plist);
//	int count = 0;
//	for (int i = 0; i < plist->size; i++)
//	{
//		if (plist->base[i] == key)
//		{
//			count++;
//		}
//	}
//	for (int j = count - 1; j < plist->size; j++)
//	{
//		if (j + count < plist->size)
//		{
//			plist->base[j] = plist->base[j + count];
//		}
//	}
//	plist->size = plist->size - count;
//}
//size_t SeqListgetheap(SeqList* plist)//获取头部元素
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空，不能取表头数据!");
//		return 0;
//	}
//	return plist->base[0];
//}
//size_t SeqListgetback(SeqList* plist)//获取尾部数据
//{
//	assert(plist != NULL);
//	if (IsFull(plist))
//	{
//		printf("顺序表已满，不能取表尾数据!");
//		return 0;
//	}
//	return plist->base[plist->size - 1];
//}
//size_t SeqListbinary_find(SeqList* plist, ElemType key)//二分查找
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		return -1;
//	}
//	int start = 0;
//	int end = plist->size - 1;
//	Sortlist(plist);
//	while (start <= end)
//	{
//		int  mid = (start + end) / 2;
//		if (key < plist->base[mid]) //左半
//		{
//			end = mid -1 ;
//		}
//		else if ( key > plist->base[mid]) //右半
//		{
//			start = mid+1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//bool Inc(SeqList* plist, size_t new_capacity)//扩容
//{
//	assert(plist != NULL&&new_capacity>plist->capacity);
//	ElemType* new_base = (ElemType*)malloc(sizeof(ElemType) * new_capacity);
//	if (new_base == NULL)
//	{
//		return false;  //扩容失败，返回假
//	}
//	memcpy(new_base, plist->base, sizeof(ElemType) * (new_capacity)); //把老空间数据拷贝到新空间
//	free(plist->base);//释放原来的空间，以免造成内存泄漏
//	plist->base = new_base; //更改指向。指向新的空间位置
//	plist->capacity = new_capacity; //容量更改为新的容量
//		//ElemType* new_base = (ElemType*)realloc(plist->base,sizeof(ElemType) * new_capacity);
//		//if (new_base == NULL)
//		//{
//		//	return false;  //扩容失败，返回假
//		//}
//		//plist->base = new_base; //重新指向新的空间
//		//plist->capacity = new_capacity; //容量更改为新的容量 //元素个数不变 
//		return true;
//}
//void SeqListreverse(SeqList* plist) //转置顺序表
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//判空
//	{
//		printf("顺序表已空，不能转置！");
//		return ;
//	}
//	if (plist->size == 1)
//	{
//		return;
//	}
//	int start = 0, end = plist->size - 1;
//	while (start < end)
//	{
//		size_t temp = plist->base[start];
//		plist->base[start] = plist->base[end];
//		plist->base[end] = temp;
//		start++, end--;
//	}
//}
//int SeqListfind_val(SeqList* plist, ElemType key) //按值查找
//{
//	assert(plist != NULL);
//	int pos = 0;
//	while (pos < plist->size && key != plist->base[pos])
//	{
//		pos++;
//		if (pos == plist->size)
//		{
//			pos = -1;
//		}
//		
//	}
//	return pos;
//}
//bool SeqListerase_val(SeqList* plist, ElemType x)//按值删除
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//判空
//	{
//		printf("顺序表已空，不能按值删除！");
//		return false;
//	}
//	Sortlist(plist);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		if (x == plist->base[i])
//		{
//			for (size_t j = i; j < plist->size; j++)
//			{
//				plist->base[j] = plist->base[j+1];
//			}
//			break;
//		}
//	}
//	plist->size--;
//	return true;
//
//}
//bool SeqListerase_pos(SeqList* plist, size_t pos)//按下标删除
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//判空
//	{
//		printf("顺序表已空，不能按下标删除！");
//		return false;
//	}
//	if (pos < 0 || pos >= plist->size)
//	{
//		printf("要删除的[%d]位置非法,不能删除!\n",pos);
//	}
//	for (size_t i = pos; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//	return true;
//}
//bool SeqListinsert_val(Seqlist* plist, ElemType x)//按 值插入
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !Inc(plist, plist->capacity * 2))
//	{
//		printf("顺序表已满，%d不能插入\n", x);
//		return false;
//	}
//	  Sortlist(plist);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		if (x < plist->base[i])
//		{
//			for (size_t j = plist->size; j > i; j--)
//			{
//				plist->base[j] = plist->base[j - 1];
//			}
//			plist->base[i] = x;
//			break;
//		}
//	}
//	plist->size++;
//	return true;
//}
//void SeqListclear(Seqlist* plist)//清除顺序表
//{
//	assert(plist!=NULL);
//	plist->size = 0;
//}
//size_t SeqListcapacity(SeqList* plist)
//{
//	assert(plist != NULL);
//	return plist->capacity;
//}
//bool SeqListInsert_pos(Seqlist* plist, size_t pos, ElemType x)//根据下标插入
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !Inc(plist, plist->capacity * 2))
//	{
//		printf("顺序表已满，%d不能在%d进行插入\n", x,pos);
//		return false;
//	}
//	if (pos < 0 || pos > plist->size)
//	{
//		printf("要插入的[%d]位置非法，%d不能插入!\n", pos, x);
//	}
//	for (size_t i = plist->size; i > pos; i--)
//	{
//		plist->base[i] = plist->base[i - 1];
//	}
//	plist->base[pos] = x;
//	plist->size++;
//	return true;
//}
//size_t SeqListlength(Seqlist* plist) //长度
//{
//	assert(plist != NULL);
//	return plist->size;
//}
//void SeqListDestroy(Seqlist* plist)//摧毁顺序表
//{
//	assert(plist != NULL);
//	free(plist->base);
//	plist->base = NULL;
//	plist->capacity = plist->size = 0;
//}
//void Sortlist(Seqlist* plist)//排序 默认升序
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size - 1; i++)
//	{
//		for (size_t j = 0; j < plist->size - i - 1; j++)
//		{
//			if (plist->base[j] > plist->base[j + 1])
//			{
//				    size_t temp = plist->base[j];
//					plist->base[j] = plist->base[j + 1];
//					plist->base[j + 1] = temp;
//			}
//		}
//	}
//}
//void SeqListpop_back(Seqlist* plist)//尾删
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//判空
//	{
//		printf("顺序表已空，不能尾删！");
//		return;
//	}
//	plist->size--;
//}
//void SeqListpop_front(Seqlist* plist)//头删
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//判空
//	{
//		printf("顺序表已空，不能头删！");
//		return;
//	}
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//void SeqListInit(Seqlist* plist)//初始化
//{
//	assert(plist != NULL);
//	plist->capacity = SEQLIST_SIZE;
//	plist->base = (ElemType *)malloc(sizeof(ElemType)*plist->capacity);
//	plist->size = 0;
//}
//bool IsFull(Seqlist* plist)//判断表是否已满
//{
//	assert(plist != NULL);
//
//	return plist->size>=plist->capacity;//当表中元素大于或等于容量，为表已满
//}
//bool IsEmpty(Seqlist* plist)//判断表是否为空
//{
//	assert(plist != NULL);
//	return plist->size == 0;//判断表中元素个数是否为0，为0则表为空
//}
//void showlist(Seqlist* plist)//显示表list
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		printf("%d ", plist->base[i]);
//	}
//	printf("\n");
//}
//void SeqListpush_back(Seqlist* plist, ElemType x)//对表进行尾插
//{
//	assert(plist!=NULL);
//	if (IsFull(plist)&&!Inc(plist,plist->capacity*2)) //扩容失败表已满
//	{
//		printf("表已满，%d不能进行尾插\n",x);
//		return;
//	}
//	//扩容成功继续插入
//	plist->base[plist->size] = x;
//	plist->size++;
//
//}
//void SeqListpush_front(Seqlist* plist, ElemType x)//对表进行头插
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !Inc(plist, plist->capacity * 2))
//	{
//		printf("表已满，%d不能进行头插\n", x);
//		return;
//	}
//	for (size_t i = plist->size; i >0; i--)
//	{
//		plist->base[i] = plist->base[i-1];
//	}
//	plist->base[0] = x;
//	plist->size++;
//
//}
//#endif
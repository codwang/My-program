//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
//#include"common.h"
//#define ElemType int
//#define SEQLIST_SIZE  8
////����˳���Ľṹ
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
//bool Inc(SeqList *plist,size_t new_capacity); //����
//size_t SeqListbinary_find(SeqList* plist, ElemType key);
//size_t SeqListgetheap(SeqList* plist);
//size_t SeqListgetback(SeqList* plist);
//void SeqListearse_all(SeqList* plist, ElemType key);
//
//
//
//void SeqListearse_all(SeqList* plist, ElemType key)//ɾ���ظ�Ԫ��
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("��Ϊ�գ�û���ظ�Ԫ��!");
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
//size_t SeqListgetheap(SeqList* plist)//��ȡͷ��Ԫ��
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("˳����ѿգ�����ȡ��ͷ����!");
//		return 0;
//	}
//	return plist->base[0];
//}
//size_t SeqListgetback(SeqList* plist)//��ȡβ������
//{
//	assert(plist != NULL);
//	if (IsFull(plist))
//	{
//		printf("˳�������������ȡ��β����!");
//		return 0;
//	}
//	return plist->base[plist->size - 1];
//}
//size_t SeqListbinary_find(SeqList* plist, ElemType key)//���ֲ���
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
//		if (key < plist->base[mid]) //���
//		{
//			end = mid -1 ;
//		}
//		else if ( key > plist->base[mid]) //�Ұ�
//		{
//			start = mid+1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//bool Inc(SeqList* plist, size_t new_capacity)//����
//{
//	assert(plist != NULL&&new_capacity>plist->capacity);
//	ElemType* new_base = (ElemType*)malloc(sizeof(ElemType) * new_capacity);
//	if (new_base == NULL)
//	{
//		return false;  //����ʧ�ܣ����ؼ�
//	}
//	memcpy(new_base, plist->base, sizeof(ElemType) * (new_capacity)); //���Ͽռ����ݿ������¿ռ�
//	free(plist->base);//�ͷ�ԭ���Ŀռ䣬��������ڴ�й©
//	plist->base = new_base; //����ָ��ָ���µĿռ�λ��
//	plist->capacity = new_capacity; //��������Ϊ�µ�����
//		//ElemType* new_base = (ElemType*)realloc(plist->base,sizeof(ElemType) * new_capacity);
//		//if (new_base == NULL)
//		//{
//		//	return false;  //����ʧ�ܣ����ؼ�
//		//}
//		//plist->base = new_base; //����ָ���µĿռ�
//		//plist->capacity = new_capacity; //��������Ϊ�µ����� //Ԫ�ظ������� 
//		return true;
//}
//void SeqListreverse(SeqList* plist) //ת��˳���
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//�п�
//	{
//		printf("˳����ѿգ�����ת�ã�");
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
//int SeqListfind_val(SeqList* plist, ElemType key) //��ֵ����
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
//bool SeqListerase_val(SeqList* plist, ElemType x)//��ֵɾ��
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//�п�
//	{
//		printf("˳����ѿգ����ܰ�ֵɾ����");
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
//bool SeqListerase_pos(SeqList* plist, size_t pos)//���±�ɾ��
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//�п�
//	{
//		printf("˳����ѿգ����ܰ��±�ɾ����");
//		return false;
//	}
//	if (pos < 0 || pos >= plist->size)
//	{
//		printf("Ҫɾ����[%d]λ�÷Ƿ�,����ɾ��!\n",pos);
//	}
//	for (size_t i = pos; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//	return true;
//}
//bool SeqListinsert_val(Seqlist* plist, ElemType x)//�� ֵ����
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !Inc(plist, plist->capacity * 2))
//	{
//		printf("˳���������%d���ܲ���\n", x);
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
//void SeqListclear(Seqlist* plist)//���˳���
//{
//	assert(plist!=NULL);
//	plist->size = 0;
//}
//size_t SeqListcapacity(SeqList* plist)
//{
//	assert(plist != NULL);
//	return plist->capacity;
//}
//bool SeqListInsert_pos(Seqlist* plist, size_t pos, ElemType x)//�����±����
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !Inc(plist, plist->capacity * 2))
//	{
//		printf("˳���������%d������%d���в���\n", x,pos);
//		return false;
//	}
//	if (pos < 0 || pos > plist->size)
//	{
//		printf("Ҫ�����[%d]λ�÷Ƿ���%d���ܲ���!\n", pos, x);
//	}
//	for (size_t i = plist->size; i > pos; i--)
//	{
//		plist->base[i] = plist->base[i - 1];
//	}
//	plist->base[pos] = x;
//	plist->size++;
//	return true;
//}
//size_t SeqListlength(Seqlist* plist) //����
//{
//	assert(plist != NULL);
//	return plist->size;
//}
//void SeqListDestroy(Seqlist* plist)//�ݻ�˳���
//{
//	assert(plist != NULL);
//	free(plist->base);
//	plist->base = NULL;
//	plist->capacity = plist->size = 0;
//}
//void Sortlist(Seqlist* plist)//���� Ĭ������
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
//void SeqListpop_back(Seqlist* plist)//βɾ
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//�п�
//	{
//		printf("˳����ѿգ�����βɾ��");
//		return;
//	}
//	plist->size--;
//}
//void SeqListpop_front(Seqlist* plist)//ͷɾ
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//�п�
//	{
//		printf("˳����ѿգ�����ͷɾ��");
//		return;
//	}
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//void SeqListInit(Seqlist* plist)//��ʼ��
//{
//	assert(plist != NULL);
//	plist->capacity = SEQLIST_SIZE;
//	plist->base = (ElemType *)malloc(sizeof(ElemType)*plist->capacity);
//	plist->size = 0;
//}
//bool IsFull(Seqlist* plist)//�жϱ��Ƿ�����
//{
//	assert(plist != NULL);
//
//	return plist->size>=plist->capacity;//������Ԫ�ش��ڻ����������Ϊ������
//}
//bool IsEmpty(Seqlist* plist)//�жϱ��Ƿ�Ϊ��
//{
//	assert(plist != NULL);
//	return plist->size == 0;//�жϱ���Ԫ�ظ����Ƿ�Ϊ0��Ϊ0���Ϊ��
//}
//void showlist(Seqlist* plist)//��ʾ��list
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		printf("%d ", plist->base[i]);
//	}
//	printf("\n");
//}
//void SeqListpush_back(Seqlist* plist, ElemType x)//�Ա����β��
//{
//	assert(plist!=NULL);
//	if (IsFull(plist)&&!Inc(plist,plist->capacity*2)) //����ʧ�ܱ�����
//	{
//		printf("��������%d���ܽ���β��\n",x);
//		return;
//	}
//	//���ݳɹ���������
//	plist->base[plist->size] = x;
//	plist->size++;
//
//}
//void SeqListpush_front(Seqlist* plist, ElemType x)//�Ա����ͷ��
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !Inc(plist, plist->capacity * 2))
//	{
//		printf("��������%d���ܽ���ͷ��\n", x);
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
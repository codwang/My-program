//#include"slist.h"
////������
//void menu()
//{
//	printf("******************************\n");
//	printf("**[1]push_back [2]push_front**\n");//push����
//	printf("**[3]showlist  [4]sortlist  **\n");//����
//	printf("**[5]insert_pos [6]pop_back **\n");//popɾ�� ���±����
//	printf("**[7]pop_front [8]insert_val**\n");//��ֵ����
//	printf("**[9]erase_pos [10]erase_val**\n");//���±�ɾ�� ��ֵɾ��
//	printf("**[11]find_val [12]length   **\n");//��ֵ���ҷ����±�  ���س���
//	printf("**[13]reverse  [14]claer    **\n");//ת�á������  �ݻٱ�
//	printf("**[15]capacity [0]exit      **\n");//�������
//	printf("**[16]binary_find[17]getheap**\n");//���ֲ���    //��ȡͷ��Ԫ��
//	printf("**[18]erase_all [19]getback **\n"); //ɾ���ظ����� erase_all
//	printf("******************************\n");
//	printf("��ѡ��->\n");						
//}
//int main()
//{
//	 List mylist;//��ͬ��ListNode *mylist
//	 ListInit(&mylist);
//	 ListNode* p = NULL;
//	ElemType item;
//	ElemType pos;
//	// bool flag;
//	int select = 0;
//	do
//	{
//		menu();
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 0:
//			printf("���˳���\n");
//			break;
//		case 1:
//			printf("������Ҫ���������<��-1����>��\n");
//			while (scanf("%d", &item) && item != -1)
//			{
//				ListNodepush_back(&mylist, item);
//			}
//			printf("����β��ɹ���\n");
//			break;
//		case 2:
//			printf("������Ҫ���������<��-1����>��\n");
//			while (scanf("%d", &item) && item != -1)
//			{
//				ListNodepush_front(&mylist, item);
//			}
//			printf("����ͷ��ɹ���\n");
//			break;
//		case 3:
//			ListShow(mylist);
//			break;
//		case 4:
//			ListNodeSort(&mylist);//����
//			printf("����ɹ���\n");
//			break;
//		case 5:
//			printf("������Ҫ�����λ��:>\n");
//			scanf("%d", &pos);
//			printf("������Ҫ�����Ԫ��:>\n");
//			scanf("%d", &item);
//			//flag = SeqListInsert_pos(&list, pos, item);// �����±��������
//			/*if (flag)
//			{
//				printf("�������ݳɹ���������\n");
//			}
//			else {
//				printf("��������ʧ�ܣ�\n");
//			}*/
//			break;
//		case 6:
//			ListNodepop_back(&mylist);//βɾ
//			printf("βɾ���ɹ���\n");
//			break;
//		case 7:
//			ListNodepop_front(&mylist);//ͷɾ
//			printf("ͷɾ���ɹ���\n");
//			break;
//		case 8:
//			printf("������Ҫ�����Ԫ��:>\n");
//			scanf("%d", &item);
//			ListNodeSort(&mylist);
//			ListNodeinsert_val(&mylist, item);//��ֵ����
//			printf("�������ݳɹ�!");
//			break;
//		case 9:
//			printf("������Ҫɾ����λ��:>\n");
//			scanf("%d", &pos);
//		//	flag = SeqListerase_pos(&list, pos);//���±�ɾ��
//			/*if (flag)
//			{
//				printf("ɾ�����ݳɹ���\n");
//			}
//			else {
//				printf("ɾ������ʧ�ܣ�\n");
//			}*/
//			break;
//		case 10:
//			printf("������Ҫɾ����Ԫ��:>\n");
//			scanf("%d", &item);
//			ListNodeerase_val(&mylist, item);//��ֵɾ��
//			printf("ɾ�����ݳɹ���\n");
//		/*	if (flag)
//			{
//				printf("ɾ�����ݳɹ���\n");
//			}
//			else {
//				printf("ɾ������ʧ�ܣ�\n");
//			}*/
//			break;
//		case 11:
//			printf("������Ҫ���ҵ�Ԫ��:>\n");
//			scanf("%d", &item);
//			p = ListNodeFind_val(mylist, item);
//			if (p == NULL)
//			{
//				printf("���ݲ���ʧ��!\n");
//			}
//			else {
//				printf("���ݲ��ҳɹ�\n");//��ֵ����
//			}
//			break;
//		case 12:
//			printf("ListNode length = %d\n", ListLength(mylist));//����
//			break;
//		case 13:
//			ListNodereverse(&mylist);//ת������
//			printf("ת�óɹ���\n");
//			break;
//		case 14:
//			ListNodeClear(&mylist);
//			printf("����գ�\n");
//			break;
//		case 15:
//		//	printf("����Ϊ:%d\n", SeqListcapacity(&list));
//			break;
//		case 16:
//			printf("������Ҫ���ҵ�Ԫ��:>\n");
//			scanf("%d", &item);
//		//	pos = SeqListfind_val(&list, item);
//			if (pos == -1)
//			{
//				printf("���ݲ���ʧ��!\n");
//			}
//			else {
//				printf("Ԫ����[%d]��\n", pos);// ���ֲ���
//			}
//			break;
//		case 17:
//			printf("��ͷ��Ԫ��Ϊ��%d\n", ListNodegethead(mylist)); //��ȡͷ������
//			break;
//		case 18:
//			printf("������Ҫɾ�����ظ�Ԫ��:\n");
//			scanf("%d", &item);
//		//	SeqListearse_all(&list, item);
//			printf("ɾ���ɹ�!\n");
//			break;
//		case 19:
//			printf("��β����Ϊ:%d\n", ListNodegetback(mylist));
//			break;
//		default:
//			printf("���������������������룡\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	} while (select != 0);
//	ListNodeDestroy(&mylist);//�ݻ�����
//
//	return 0;
//}

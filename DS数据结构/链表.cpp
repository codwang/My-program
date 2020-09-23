//#include"slist.h"
////单链表
//void menu()
//{
//	printf("******************************\n");
//	printf("**[1]push_back [2]push_front**\n");//push插入
//	printf("**[3]showlist  [4]sortlist  **\n");//排序
//	printf("**[5]insert_pos [6]pop_back **\n");//pop删除 按下标插入
//	printf("**[7]pop_front [8]insert_val**\n");//按值插入
//	printf("**[9]erase_pos [10]erase_val**\n");//按下标删除 按值删除
//	printf("**[11]find_val [12]length   **\n");//按值查找返回下标  返回长度
//	printf("**[13]reverse  [14]claer    **\n");//转置、逆序表  摧毁表
//	printf("**[15]capacity [0]exit      **\n");//表的容量
//	printf("**[16]binary_find[17]getheap**\n");//二分查找    //获取头部元素
//	printf("**[18]erase_all [19]getback **\n"); //删除重复数据 erase_all
//	printf("******************************\n");
//	printf("请选择->\n");						
//}
//int main()
//{
//	 List mylist;//等同于ListNode *mylist
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
//			printf("已退出！\n");
//			break;
//		case 1:
//			printf("请输入要插入的数据<以-1结束>：\n");
//			while (scanf("%d", &item) && item != -1)
//			{
//				ListNodepush_back(&mylist, item);
//			}
//			printf("数据尾插成功！\n");
//			break;
//		case 2:
//			printf("请输入要插入的数据<以-1结束>：\n");
//			while (scanf("%d", &item) && item != -1)
//			{
//				ListNodepush_front(&mylist, item);
//			}
//			printf("数据头插成功！\n");
//			break;
//		case 3:
//			ListShow(mylist);
//			break;
//		case 4:
//			ListNodeSort(&mylist);//排序
//			printf("排序成功！\n");
//			break;
//		case 5:
//			printf("请输入要插入的位置:>\n");
//			scanf("%d", &pos);
//			printf("请输入要插入的元素:>\n");
//			scanf("%d", &item);
//			//flag = SeqListInsert_pos(&list, pos, item);// 根据下标插入数据
//			/*if (flag)
//			{
//				printf("插入数据成功····\n");
//			}
//			else {
//				printf("插入数据失败！\n");
//			}*/
//			break;
//		case 6:
//			ListNodepop_back(&mylist);//尾删
//			printf("尾删除成功！\n");
//			break;
//		case 7:
//			ListNodepop_front(&mylist);//头删
//			printf("头删除成功！\n");
//			break;
//		case 8:
//			printf("请输入要插入的元素:>\n");
//			scanf("%d", &item);
//			ListNodeSort(&mylist);
//			ListNodeinsert_val(&mylist, item);//按值插入
//			printf("插入数据成功!");
//			break;
//		case 9:
//			printf("请输入要删除的位置:>\n");
//			scanf("%d", &pos);
//		//	flag = SeqListerase_pos(&list, pos);//按下标删除
//			/*if (flag)
//			{
//				printf("删除数据成功！\n");
//			}
//			else {
//				printf("删除数据失败！\n");
//			}*/
//			break;
//		case 10:
//			printf("请输入要删除的元素:>\n");
//			scanf("%d", &item);
//			ListNodeerase_val(&mylist, item);//按值删除
//			printf("删除数据成功！\n");
//		/*	if (flag)
//			{
//				printf("删除数据成功！\n");
//			}
//			else {
//				printf("删除数据失败！\n");
//			}*/
//			break;
//		case 11:
//			printf("请输入要查找的元素:>\n");
//			scanf("%d", &item);
//			p = ListNodeFind_val(mylist, item);
//			if (p == NULL)
//			{
//				printf("数据查找失败!\n");
//			}
//			else {
//				printf("数据查找成功\n");//按值查找
//			}
//			break;
//		case 12:
//			printf("ListNode length = %d\n", ListLength(mylist));//长度
//			break;
//		case 13:
//			ListNodereverse(&mylist);//转置链表
//			printf("转置成功！\n");
//			break;
//		case 14:
//			ListNodeClear(&mylist);
//			printf("已清空！\n");
//			break;
//		case 15:
//		//	printf("容量为:%d\n", SeqListcapacity(&list));
//			break;
//		case 16:
//			printf("请输入要查找的元素:>\n");
//			scanf("%d", &item);
//		//	pos = SeqListfind_val(&list, item);
//			if (pos == -1)
//			{
//				printf("数据查找失败!\n");
//			}
//			else {
//				printf("元素在[%d]处\n", pos);// 二分查找
//			}
//			break;
//		case 17:
//			printf("表头部元素为：%d\n", ListNodegethead(mylist)); //获取头部数据
//			break;
//		case 18:
//			printf("请输入要删除的重复元素:\n");
//			scanf("%d", &item);
//		//	SeqListearse_all(&list, item);
//			printf("删除成功!\n");
//			break;
//		case 19:
//			printf("表尾数据为:%d\n", ListNodegetback(mylist));
//			break;
//		default:
//			printf("您的输入有误，请重新输入！\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	} while (select != 0);
//	ListNodeDestroy(&mylist);//摧毁链表
//
//	return 0;
//}

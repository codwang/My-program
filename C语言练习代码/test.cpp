#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<assert.h>
#pragma warning(disable:4996)
//void rotate(int* nums, int numsSize, int k)
//{
//	while (k > 0)
//	{
//		int temp=nums[numsSize-1];
//		for (int i=numsSize-1;i>0;i--)
//		{
//			nums[i] = nums[i - 1];
//		}
//		nums[0] = temp;
//		k--;
//	}
//
//}
#define BUFFER_SIZE 256
void GetMemory(char** ppszBuf)
{
	if (NULL == ppszBuf)
	{
		assert(0);
		return;
	}
	*(ppszBuf) = (char*)malloc(BUFFER_SIZE);
	return;
}
 const char* GetStr( const char** p)
{
	  *p= "hello world";
	
	  return *p;
}
 void VarInit(unsigned char* pucArg)
 {
	 *pucArg = 1;
	 return;
 }
 void AddFunc(unsigned int a, unsigned int b, unsigned int* c)
 {
	 *c = a + b;
 }
#define ID_LEN   32
 struct STR_A
 {
	 char aucID[ID_LEN];
	 int iA;
 };
 struct STR_B
 {
	 char* paucID;
	 int iB;
 };
 void funcA(struct STR_A *stA, struct STR_B* pstB)
 {
		pstB->paucID= stA->aucID;
 }
#define MAX_PRAM_LENGTH   10000
 typedef struct
 {
	 unsigned char ucCommand;
	 unsigned short usLength;
	 unsigned char Para[MAX_PRAM_LENGTH];
 }DEBUG_MSG;
 void PrintDebufMsg(DEBUG_MSG *DebugMessage)
 {
	 int i;
	 printf("\nCommand = %d", DebugMessage->ucCommand);
	 for (i = 0; i < DebugMessage->usLength && i < MAX_PRAM_LENGTH; i++)
	 {
		 printf("\nPara[% d] = 0x%x", i, DebugMessage->Para[i]);
	 }
 }
//int main()
//{
//	DEBUG_MSG DebugMessage = { 0 };
//	PrintDebufMsg(&DebugMessage);
//	/*STR_A stA = { 0 };
//	STR_B stB ;
//
//	strcpy(stA.aucID, "12345");
//	funcA(&stA, &stB);
//	printf("%s\n", stB.paucID);*/
//	/*unsigned char e = 200;
//	unsigned char f = 100;
//	unsigned char g = 0;
//	AddFunc(e, f, (unsigned int*)&g);
//	printf("%d", g);*/
//	/*unsigned long ulGlobal;
//	VarInit((unsigned char*)&ulGlobal);
//	printf("%lu", ulGlobal);*/
//	//const char* str = NULL;
//	//if (NULL != GetStr(&str))
//	//{
//	//	printf("\r\n str = % s", str);
//	// }
//
//	//char* pszBuf = NULL;
//	//GetMemory(&pszBuf);
//	//strcpy(pszBuf, "hello world\r\n");
//	//printf("%s\n",pszBuf);
//	//free(pszBuf);
//	//char  pc[10]="";
//	//strncpy(pc, "hello", 5);
//	//printf("%s\n", pc);
//	
//
////	int *nums=(int *)malloc(sizeof(int)*10);
////	assert(*nums!=0);
////	int numSize=0;
////	int item;
////	printf("请输入数组内容:\n");
////	while (scanf("%d",&item)&&item!=0)
////	{
////		nums[numSize++] = item;
////	}
////	int K = 0;
////	printf("请输入K的值:\n");
////	scanf("%d", &K);
////	rotate(nums,numSize,K);
////	for (int i = 0; i < numSize; i++)
////	{
////		printf("%d ", nums[i]);
////	}
////	
//	system("pause");
//	return 0;
//}
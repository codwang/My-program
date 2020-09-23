#include"common.h"
void Show(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Swap1(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
void Sort_1(int* arr, int left,int right)//直接插入排序
{
	
	for (int i = left + 1; i < right; i++)
	{
		int end = i;
		while (end > left && arr[end] < arr[end-1])
		{
			Swap1(&arr[end],&arr[end-1]);
			end--;
		}
	}
}
void Sort_2(int* arr, int left, int right)//直接插入排序
{

	for (int i = left + 1; i < right; i++)
	{
		int end = i;
		int temp = arr[i]; //临时变量
		while (end > left && temp<arr[end-1] )
		{
			arr[end] = arr[end - 1];
			end--;
		}
		arr[end] = temp;
	}
}
//哨兵位直接插入排序
void Sort_3(int* arr, int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		arr[0] = arr[i];//待排序的值放到哨兵位
		int end = i;
		while (arr[0] < arr[end-1])
		{
			arr[end] = arr[end - 1];
			end--;
		}
		arr[end] = arr[0];
	}
}
//折半插入排序
void Sort_4(int *arr,int left,int right)
{
	for (int i = left + 1; i < right; i++)
	{
		int temp = arr[i];
		int low = left;
		int high = i - 1;
		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (temp < arr[mid])
			{
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
			for ( int j = i-1; j >= high + 1; j--)
			{
				arr[j+1] = arr[j];
			}
			arr[high + 1] = temp;
	}
}
//二路插入排序
void TwoWayInsertSort(int* arr, int left, int right)
{
	int n = right - left;
	int* temp = (int*)malloc(sizeof(int) * n);
	assert(temp != NULL);
	temp[0] = arr[left];
	int first=0, finish = 0;

	for (int i = left + 1; i < right; ++i)
	{
		if (arr[i] < temp[first])
		{
			first = (first - 1 + n) % n;
		}
		else if (arr[i] > temp[finish])
		{
			temp[++finish] = arr[i];
		}
		else {
			int end = finish;
			while (arr[i] < temp[end])
			{
				temp[end + 1] = temp[end];
				end = (end - 1+n)%n;
			}
			temp[(end + 1) % n] = arr[i];
			finish++;
		}
	}
	int k = 0;
	for (int i = first; k < n;++k)
	{
		arr[k] = temp[i];
		i = (i + 1) % n;
	}
	free(temp);
	temp = NULL;
}
//希尔排序1
void ShellInsert_1(int* arr, int n, int dk)
{
	for (int i = dk; i < n; i++)
	{
		if (arr[i] < arr[i - dk])
		{
			int temp = arr[i];
			arr[i] = arr[i - dk];
			arr[i - dk] = temp;
		}
	}
}
void ShellSort_1(int* arr, int n, int dtal[], int t)
{
	for (int i = 0; i < t; i++)
	{
		ShellInsert_1(arr, n, dtal[i]);
	}
	
}
//希尔排序2
void ShellInsert_2(int* arr, int left,int right, int dk)
{
	for (int i = left+dk; i < right; i++)
	{
		if (arr[i] < arr[i - dk])
		{
			int temp = arr[i];
			int end = i - dk;
			while (end >= left && temp < arr[end])
			{
				arr[end + dk] = arr[end];
				end -= dk;
			}
			arr[end+dk] = temp;
		}
	}
}
int dtal[] = { 5,3,2,1 };
void ShellSort_2(int* arr, int left, int right)
{
	int t = sizeof(dtal) / sizeof(dtal[0]);
	for (int i = 0; i < t; i++)
	{
		ShellInsert_2(arr, left,right,dtal[i]);
	}

}
//改良版希尔排序
void ShellSort(int* arr, int left, int right)
{
	int dk = right - left;
	while (dk > 1)
	{
		dk = dk / 3 + 1;
		for (int i = left + dk; i < right; i++)
		{
			if (arr[i] < arr[i - dk])
			{
				int temp = arr[i];
				int end = i - dk;
				while (end >= left && temp < arr[end])
				{
					arr[end + dk] = arr[end];
					end -= dk;
				}
				arr[end + dk] = temp;
			}
		}
	}
}
//直接选择排序
void SelectSort(int* arr, int n)
{
	int i = 0, j = 0;
	int key=0;
	for ( i = 0; i < n-1; i++)
	{
		int min = arr[i];
		for (j =i+1; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				key = j;
			}
		}
		if (key != i)
		{
			Swap1(&arr[i], &arr[key]);
		}
	}
}
//直接选择排序
int GetMinIndex(int* arr, int left,int right)
{
	int index = left;
	int min_val = arr[left];
	for (int i = left+1; i < right; i++)
	{
			if (min_val > arr[i])
			{
				min_val = arr[i];
				index = i;
			}
	}
	return index;
}
void SelectSort(int* arr, int left, int right)
{
	
	for (int i = left; i < right-1; i++)
	{
		int index = GetMinIndex(arr,i,right);
		if (index != i)
		{
			Swap1(&arr[i], &arr[index]);
		}
	}
}
//堆排序
void ShiftDown(int* arr, int left,int right, int curpos)
{
	int i = curpos;
	int j = 2 * i + 1+left;
	int n = right - left;
	while (j < n)
	{
		if (j + 1 < n && arr[j] < arr[j + 1])
		{
			j++;
		}
		if (arr[i] < arr[j])
		{
			Swap1(&arr[i], &arr[j]);
			i = j;
			j = 2 * i + 1;
		}
		else {
			break;
		}
	}
}
void HeapSort(int* arr, int left, int right)
{
	//创建大堆
	int n = right - left;
	int cur = n / 2 - 1 + left;
	while (cur >=0)
	{
		ShiftDown(arr, left,right, cur);
		cur--;
	}
	//排序
	int end = right - 1;
	while (end > left)
	{
		Swap1(&arr[left], &arr[end]);
		end--;
		ShiftDown(arr, left, end, left);
	}
}
void ShiftDown_1(int* arr, int left, int right, int curpos)
{
	int i = curpos;
	int j = 2 * i + 1 + left;
	int n = right - left;
	int temp =arr[i];
	while (j < n)
	{
		if (j + 1 < n && arr[j] < arr[j + 1])
		{
			j++;
		}
		 
		if (temp < arr[j])
		{
			arr[i] = arr[j];
			i = j;
			j = 2 * i + 1;
		}
		else {
			break;
		}
	}
	arr[i] = temp;
}
void HeapSort_1(int* arr, int left, int right)
{
	//创建大堆
	int n = right - left;
	int cur = n / 2 - 1 + left;
	while (cur >= 0)
	{
		ShiftDown_1(arr, left, right, cur);
		cur--;
	}
	//排序
	int end = right - 1;
	while (end > left)
	{
		Swap1(&arr[left], &arr[end]);
		end--;
		ShiftDown_1(arr, left, end, left);
	}
}
//冒泡排序
void BubbleSort(int* arr, int left, int right)
{
	int n = right - left;
	for (int i = left;i < n; i++)
	{
		for (int j = left; j < n - i - 1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				Swap1(&arr[j],&arr[j+1]);
			}
		}
	}
}
//冒泡排序改进方法
void BubbleSort_1(int* arr, int left, int right)
{
	int n = right - left;
	bool flag = false;//用于标记此趟排序是否有交换，如有则说明数据整体未必有序，如没有则说明数据已经有序，直接退出
	for (int i = left; i < n; i++)
	{
		for (int j = left; j< n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap1(&arr[j], &arr[j + 1]);
				flag = true;
			}
		}
		if (!flag)
		{
			break;
		}
		else {
			flag = false;
		}
	}
}
//快速排序
//hoare版本
int Partition_1(int* arr, int left, int right)
{
	int key = arr[left];
	while (left < right)
	{
		while (left < right && arr[right] >= key)
		{
			right--;
		}
		Swap1(&arr[left], &arr[right]);
		while (left < right && arr[left] < key)
		{
			left++;
		}
		Swap1(&arr[left],&arr[right]);
	}
	return left;
}
void QuickSort(int* arr, int left, int right)
{
	if (left >= right - 1)
	{
		return;
	}
	int  pos = Partition_1(arr, left, right-1);//用于分割
	QuickSort(arr, left, pos);
	QuickSort(arr, pos+1, right );

}
//挖坑法
//void 
int main()
{
	//int arr[] = {0,49,38,65,97,76,13,27,49};
	int arr[] = {49,38,65,97,76,13,27,49 };
	//int arr[] = { 2,1,5,4,13,8,10,21,58,15};
	int num = sizeof(arr) / sizeof(arr[0]);
	int dtal[] = { 5,3,2,1};
	int t = sizeof(dtal) / sizeof(dtal[0]);
	Show(arr, num);
	//Sort_1(arr,0,num);
	//Sort_2(arr, 0, num);
	//Sort_3(arr, 1, num);
	//Sort_4(arr, 0, num);
	//ShellSort(arr, num, dtal, t);
	//TwoWayInsertSort(arr,0,num);
	//SelectSort(arr, num);
	//SelectSort(arr,0,num);
	//HeapSort(arr, 0, num);
	//HeapSort_1(arr, 0, num);
	//BubbleSort(arr, 0, num);
	//BubbleSort_1(arr, 0, num);
	//ShellSort(arr, 0, num);
	ShellSort_2(arr, 0,num);
	Show(arr, num);
	system("pause");
	return 0;
}
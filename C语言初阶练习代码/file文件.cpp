//#include<stdio.h>
//#include<windows.h>
//#pragma warning (disable:4996)
//int main()
//{
//
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
	//FILE* fp = fopen("头像.jpg ","rb");
	//if (fp == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//printf("begin:%d\n", ftell(fp));
	//fputs("hello world,hello bit",fp);
	//printf("end:%d\n", ftell(fp));
	//fseek(fp,0,SEEK_SET);
	//printf("%d\n", ftell(fp));
	//fputs("1234", fp);
	//printf("%d\n", ftell(fp));
	//fseek(fp, -4, SEEK_END);
	//fputs("1234", fp);
	//printf("%d\n", ftell(fp));
	/*char c = 0;
	printf("%d\n", ftell(fp));
	while ((c = fgetc(fp)) != EOF)
	{
		printf("%d\n", ftell(fp));
	}*/
	/*FILE* fp1 = fopen("中国_copy.jpg", "wb");
	if (fp1 == NULL)
	{
		perror("fopen");
		return 2;
	}
	char buf[1024];
	int n = 0;
	while ((n = fread(buf, 1, 1024, fp)) > 0)
	{
		fwrite(buf, 1, n, fp1);
	}
	if (feof(fp))
	{
		printf("end");
	}*/
	//char buf[1024*260];
	//fread(buf, 1, sizeof(buf), fp);
	//fwrite(buf,1,sizeof(buf),fp1);
	//int a;
	//char b[64];
	//double c = 3.14;
	//fscanf(fp, "%d", &a);
	//printf("%d\n", a);
	//fscanf(fp, "%s", b);
	//fgets(b, 64, fp);
	//printf("%s\n", b);
	//fprintf(fp  ,"a:%d,b:%d,c:%f\n",a,b,c);

	//char arr[1024];
	//char* ret = NULL;
	//do
	//{
	//	ret=fgets(arr, 1024, stdin);
	//	if (ret == NULL)
	//	{
	//		break;
	//	}
	//	fputs(arr, fp);
	//} while (1);
	//char c;
	//while ((c = fgetc(stdin)) != EOF)
	//{
	//	fputc(c, fp);
	//}
	//printf("%c", fgetc(fp));
	/*while ((c = fgetc(fp))!=EOF)
	{
		printf("read:%c\n", c);
	}*/
	//for (; c <= 'Z'; c++)
	//{
	//	fputc(c, fp);
	//	//fputc(c, stdout);
	//}
	
	//fputs("hello world!\n", stdout);//非格式化
	//fprintf(fp,"a=%d b=%d\n",a,b);//将内容打印到文件中
	//fscanf("");
	/*fclose(fp);
	fclose(fp1);*/
//	system("pause");
//	return 0;
//}
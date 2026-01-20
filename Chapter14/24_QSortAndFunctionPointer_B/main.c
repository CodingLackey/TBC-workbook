#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char name[100];
	int height;
}kid;

struct kid1 {
	char name[100];
	int height;
};
//TODO: try increasing/decreasing order
int compare(const void* first, const void* second);

int main()
{
	 kid my_friends[] = {
		"Jack Jack", 40, "Geenie", 300, "Aladdin", 170, "Piona", 150
	};

	 struct kid1 my_friends1[] = {
	"Jack Jack", 40, "Geenie", 300, "Aladdin", 170, "Piona", 150
	 }; 

	const int n = sizeof(my_friends) / sizeof( kid);

	const int n = sizeof(my_friends1) / sizeof(struct kid1);
	//for (int i = 0; i < n; i++)
	//	printf("%s     \t%d\n", my_friends[i].name, my_friends[i].height);



	qsort(my_friends, n, sizeof(kid), compare);
	qsort(my_friends1, n, sizeof(struct kid1), compare);

	for (int i = 0; i < n; i++)
		printf("%s     \t%d\n", my_friends[i].name, my_friends[i].height);

	for (int i = 0; i < n; i++)
		printf("%s     \t%d\n", my_friends1[i].name, my_friends1[i].height);

	return 0;
}

int compare1(const void* first, const void* second) 
{
	if (((struct kid1*)first)->height > ((struct kid1*)second)->height)
		return 1;
	if (((struct kid1*)first)->height < ((struct kid1*)second)->height)
		return -1;
	else
		return 0;
}

int compare(const void* first, const void* second)
{
	 kid* A = (kid*)first;
	 kid* B = (kid*)second;
	if (A->height> B->height)
		return 1;
	else if (A->height < B->height)
		return -1;
	else
		return 0;
}
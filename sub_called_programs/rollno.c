#include <stdio.h>
#include "list_1.h"
int rollno()
{
	int rollno,branch;
	printf("Enter your branch\n1. it\n2. cse");
	printf("\nEnter your choice(1,2)\n");
	scanf("%d",&branch);
	if (branch >= 3)
	{
		return(0);
	}
	printf("Enter your rollno:\n");
	scanf("%d",&rollno);
	if(branch==2)
	{
		rollno=rollno;
	}
	else
	{
		rollno=rollno+124;
	}
		list_1(rollno);
	return 0;
}
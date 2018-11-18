#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Enter your marks\n");
	float marks,class,totalmarks=10,totalclass=30,t,m1,c1;
	scanf("%f",&marks);
	printf("Enter how many class have you attended: ");
	scanf("%f",&class);
	if(class>=22)	/*check if attendence is more than 75%*/
	{
	//prediction algo
	m1=marks/totalmarks;
	c1=class/totalclass;
	t=(m1+c1)/2;
	t=t*10;
	printf("prediction for 2nd sessional:%.0f\n",t);
	}
	else
	{
		printf("your will not be allowed to give second sessional\n");
	}
	return 0;
}
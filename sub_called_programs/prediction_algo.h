#include <stdio.h>
int prediction_algo(float marks, float attendence)
{
	float mark=marks,classes=attendence,totalmarks=10,totalclass=30,t;
	{
	//prediction algo
	mark=mark/totalmarks;
	classes=classes/totalclass;
	t=(mark+classes)/2;
	t=t*10;
	}
	printf("prediction for 2nd sessional:%.0f\n",t);
	return 0;
}

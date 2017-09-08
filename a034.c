//a034

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	float x1,x2,y1,y2,length,width,res;

	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

	width=abs(x2-x1);
	length=abs(y2-y1);

	printf("%.3f\n",sqrt(width*width+length*length) );



	return 0;
}
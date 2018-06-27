#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
printf("Enter number!\n");
scanf("%d",&i);

switch (i){
	case 0:
	printf("zero\n");
	break;
	case 1:
	 printf("one\n");
	break;
default:
 if (i>100) {
printf("Many!!!\n");
} else {
printf("%d\n",i);
}
break;

}
    // write the control structure as described in the exercise
    // and run the code with different values for i

    return 0;
}

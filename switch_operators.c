#include<stdio.h>
void main()
{
	int main_choice,sub_choice;
	int a,b;
	printf("enter  two numbers");
	scanf("%d%d",&a,&b);
	printf("enter your choice:\n1.Arithematic operators\n2.Relational operators\n3.Bitwise operators");
	scanf("%d",&main_choice);
	switch(main_choice)
	{
		case 1:
			printf("choose one of the following arithematic operators\n1. +\n2. -\n3. *\n4. /\n5.%%");
            scanf("%d",&sub_choice);
            switch(sub_choice)
            {
            	case 1:
            		printf("%d + %d = %d",a,b,a+b);
            		break;
            	case 2:
				    printf("%d - %d = %d",a,b,a-b);
				    break;
				case 3:
				    printf("%d * %d = %d",a,b,a*b);
				    break;
				case 4:
				    printf("%d / %d = %d",a,b,a/b);
				    break;
				case 5:
				    printf("%d %% %d = %d",a,b,a%b);
					break;				
			}
	}
	
}

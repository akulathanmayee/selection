#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number= ");
	scanf("%d",&a);
	switch(a) {
		case 1:printf("Food item-pizza\nPrice-Rs239");
		break;
        case 2:printf("Food item-Burger\nPrice-Rs129");
        break;
        case 3:printf("Food item-pasta\nPrice-Rs179");
        break;
        case 4:printf("Food item-cheesefries\nPrice-Rs99");
        break;   
		case 5:printf("Food item-chickennuggets\nPrice-Rs220");
        break;
	    default: printf("use the default case");
	}
return 0 ;
}

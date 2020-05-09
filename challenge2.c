#include<stdio.h>
#include<conio.h>
int main()
{
  int month,year;
  scanf("%d",&month);
  scanf("%d",&year);
  switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            printf("31 days");
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            printf("30 days");
            break;
    case 2: if(year%2!=0)
              printf("28 days");
            else
               printf("29 days");
            break;
  default : printf("invalid choice");
}
return 0;
}

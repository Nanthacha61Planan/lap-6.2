#include <stdio.h>
int  main(void)
{
	char name[100];
	int i;
	printf("Enter your name :");
	scanf("%s", name );
	printf("Hello  %s ",name );
  {
  int num[10];
  int i,j,max,min;
  for (i=0;i<=10;i++)
  {
    printf("\nEnter Number today :");
    scanf("%d",&num[i]);
  }
  min=num[0];
  for  (j=0;j<=10;j++)
  {
    if (min>num[j])
    min=num[j];
    else if (min<num[j])
    max=num[j];
    else {}

  }
  printf("The maximum is %d maximum is %d",min,max);
  return 0;
}
}



   
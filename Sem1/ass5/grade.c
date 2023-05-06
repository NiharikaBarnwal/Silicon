#include<stdio.h>
int main()
{
	        int m1,m2,m3,m4,m5,x;
		        char g;
			        printf("Enter the marks:");
				        scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
					        x=(m1+m2+m3+m4+m5)/5;
						        if(x>=80)
								                printf("A");
							        else if(80>x&&x>=60)
									                printf("B");
								        else if(60>x&x>=45)
										                printf("C");
									        else
											                printf("D");


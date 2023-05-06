#include<stdio.h>
int main()
{
	        int a,b,c,x;
		        printf("enter the three sides:");
			        scanf("%d%d%d",&a,&b,&c);
				        x=a>b?(a>c?a:c):(b>c?b:c);
					        if (a+b+c-x>x)
							        {
									                printf("Valid triangle\n");
											                if (a==b||a==c||b==c)
														                        printf("Isocseles triangle");
													                else if(a==b&&b==c)
																                        printf("Equilateral triangle");
															                else if(a*a+b*b+c*c-x*x==x*x)
																		                        printf("Right angled triangle");
																	                else
																				                        printf("scalars");
																			        }
						        else
								                printf("Invalid triangle");
}


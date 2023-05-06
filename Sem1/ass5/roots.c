#include<stdio.h>
#include<math.h>
int main()
{
	        float a,b,c,d,r1,r2;
		        printf("Enter a,b,c:");
			        scanf("%f%f%f",&a,&b,&c);
				        d=b*b-4*a*c;
					        if(a==0&b==0)
							                printf("no solution");
						        else if(d<0)
								                printf("no real roots");
							        else if(a==0)
									                printf("only one root");
								        else
										        {
												                r1=-b+sqrt(d)/(2*a);
														                r2=-b-sqrt(d)/(2*a);
																                printf("Real roots are %f and %f",r1,r2);
																		        }
}


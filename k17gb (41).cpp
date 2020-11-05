#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,age,contact;
	char s1,ch[100],email;
	printf("\n******************WELCOME TO*******************\n");
	
	printf("\n*******  PAVAN REAL ESTATE ADVISIOR  *************\n");
	printf("\nENTER YOUR CHOICE\n");
	
	printf("1. TO BUY PROPERTY\n");
	printf("2. TO SELL PROPERTY\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("ENTER YOUR CHOICE:\n");
			printf("1.  SINGLE \n");
			printf("2.  BANGLO \n");
			printf("3.  FLAT \n");
			printf("4.  DUPLEX \n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("1)\n *************Rhythm homes************* \n SINGLE - Rs:13.9 Lac\n AREA- 990 sqft \n Contact no. - 9451562654 \n");
					printf("2)\n *************Happy Homes************** \n SINGLE - Rs:12.5 Lac \n AREA-900 sqft \n Contact no. - 8954611662 \n");
					printf("3)\n *************Imperial homes*********** \n SINGLE - Rs:10 Lac \n AREA-800 sqft \n Contact no. - 9261546654 \n");
					printf("*********thank u********");
					break;
					case 2:
						printf("1) ************A&T golden************* \n BANGLO - Rs:20.9 Lac \n area-1800sqft \n Contact no. - 9451562654 \n");
					printf("2) *************Ashoka Heights************ \n BANGLO - Rs:25.5 Lac \n area-1900sqft \n Contact no. - 9789562654 \n");
					printf("3) *************Palm Meadows**************** \n BANGLO - Rs:22 Lac \n area-1850sqft \n Contact no. - 7584621556 \n");
					printf("*********thank u*********");
					break;
					case 3:
						printf("1) ************Connaught Residency************ \n FLAT - Rs:30 Lac \n area-2000sqft \n Contact no. - 9451562654 \n");
					printf("2) **************Amayra Greens************** \n FLAT - Rs:32.5 Lac \n area-2100sqft \n Contact no. - 9451562654 \n");
					printf("3) **************NH & hn***************** \n FLAT - Rs:35 Lac \n area-2200sqft \n Contact no. - 7584621556 \n");
					printf("*********thank u**********");
					break;
					case 4:
						printf("1) *****************ATS**************  \n DUPLEX - Rs:41.5 Lac \n area-3000sqft \n Contact no. - 9451562654 \n");
					printf("2) *****************Galaxy***************  \n DUPLEX - Rs:45 Lac \n area-3100sqft \n Contact no. - 9651564558 \n");
					printf("3) ****************Luxury******************  \n DUPLEX - Rs:49 Lac \n area-3200sqft \n Contact no. - 7584621556 \n");
					printf("*********thank u**********");
					break;
				
			}
			break;
						
			case 2:
				printf("ENTER YOUR NAME: ");
				scanf("%s",&s1);
				printf("ENTER YOUR AGE: ");
				scanf("%d",&age);
				printf("ENTER YOUR CONTACT NUMBER:\n ");
				scanf("%d",&contact);
				printf("ENTER YOUR EMAIL:\n ");
				scanf("%s",&email);
				printf("Enter Details and Discription of your property: \n ");
				scanf("%s",&ch);
				printf("\nWe will Contact you shortly \n");
				printf("************************************THANK U********************************* \n");
				
				break;
				
	}
getch ();
return 0;
}

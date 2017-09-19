// calendar.app : ÍòÄêÀú
// OnClouds'OS
// 082974 ÕÔÆôÔÆ

#include "type.h"
#include "stdio.h"
#include "string.h"

int f(int year,int month)
{
	if(month<3) return year-1;
	else return year;
}

int g(int month)
{
	if(month<3) return month+13;
	else return month+1;
}

int n(int year,int month,int day)
{
	return 1461L*f(year,month)/4+153L*g(month)/5+day;
}

int w(int year,int month,int day)
{
	return(int)((n(year,month,day)%7-621049L%7+7)%7);
}

int date[12][6][7];
int day_tbl[ ][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
		    {31,29,31,30,31,30,31,31,30,31,30,31}};

int main(int argc, char* argv[])
{
	int sw,leap,i,j,k,wd,day;
	int year;
	char title[]="SUN MON TUE WED THU FRI SAT";
	if (argc == 1)
	{
		printf("|================Please input year + 0(Month1~6) or 1(Month7~12)===============|\n");
		return 0;
	}
	else
	{
		year = (argv[1][0] - '0') * 1000 + (argv[1][1] - '0') * 100 + (argv[1][2] - '0') * 10 + (argv[1][3] - '0') ;
	}

	sw=w(year,1,1);
	leap=year%4==0&&year%100||year%400==0;
	for(i=0;i<12;i++)
		for(j=0;j<6;j++)
			for(k=0;k<7;k++)
				date[i][j][k]=0;
	for(i=0;i<12;i++)
	{
		for(wd=0,day=1;day<=day_tbl[leap][i];day++)
		{
			date[i][wd][sw]=day;
			sw=++sw%7;
			if(sw==0) wd++;
		}
	}
	if(strcmp(argv[2],"0")==0)
	{
		printf("|====================The Calendar of Year %d Month 1-6=======================|\n",year);
		for(i=0;i<3;i++)
		{
			for(wd=0,k=0;k<7;k++)
				wd+=date[2*i][5][k]+date[2*i+1][5][k];
			wd=wd?6:5;
			printf("%2d  %s  %2d  %s |\n",2*i+1,title,2*i+2,title);
			for(j=0;j<wd;j++)
			{
				printf("   ");
				for(k=0;k<7;k++)
					if(date[2*i][j][k])
						printf("%4d",date[2*i][j][k]);
					else printf("    ");
					printf("     ");
					for(k=0;k<7;k++)
						if(date[2*i+1][j][k])
							printf("%4d",date[2*i+1][j][k]);
						else printf("    ");
						printf(" |\n");
			}
		}
	}
	else if(strcmp(argv[2],"1")==0)
	{
		printf("|====================The Calendar of Year %d Month 7-12======================|\n",year);
		for(i=3;i<6;i++)
		{
			for(wd=0,k=0;k<7;k++)
				wd+=date[2*i][5][k]+date[2*i+1][5][k];
			wd=wd?6:5;
			printf("%2d  %s  %2d  %s |\n",2*i+1,title,2*i+2,title);
			for(j=0;j<wd;j++)
			{
				printf("   ");
				for(k=0;k<7;k++)
					if(date[2*i][j][k])
						printf("%4d",date[2*i][j][k]);
					else printf("    ");
					printf("     ");
					for(k=0;k<7;k++)
						if(date[2*i+1][j][k])
							printf("%4d",date[2*i+1][j][k]);
						else printf("    ");
						printf(" |\n");
			}
		}
	}
	else
	{
		printf("|=========================Invalid input(not 0 or 1)============================|\n");
	}
	printf("|==============================================================================|\n");
	return 0;
}

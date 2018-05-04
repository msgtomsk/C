#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isleap(int year){
	if(year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0){
				return 1;
			}else{
				return 0;
			}
		}else{
			return 1;
		}
	}else{
		 return 0;
	}
}
int main(){
	int start_date=0,start_mon=0,start_year=0,end_date=0,end_mon=0,
	end_year=0,no_of_days=0,no_of_days_com=0,
	year_days=0,i,sum_of_days = 0;		
	scanf("%d/%d/%d",&start_date,&start_mon,&start_year);		
	scanf("%d/%d/%d",&end_date,&end_mon,&end_year);	
	switch(start_mon){
		case 1:no_of_days += 31;
		case 2:no_of_days += 28 + isleap(start_year);
		case 3:no_of_days += 31;
		case 4:no_of_days += 30;
		case 5:no_of_days += 31;
		case 6:no_of_days += 30;
		case 7:no_of_days += 31;
		case 8:no_of_days += 31;
		case 9:no_of_days += 30;
		case 10:no_of_days += 31;
		case 11:no_of_days += 30;
		case 12:no_of_days += 31;

	}
	switch(end_mon-1){
		case 12:no_of_days_com+= 31;
		case 11:no_of_days_com += 30;
		case 10:no_of_days_com += 31;
		case 9:no_of_days_com += 30;
		case 8:no_of_days_com += 31;
		case 7:no_of_days_com += 31;
		case 6:no_of_days_com += 30;
		case 5:no_of_days_com += 31;
		case 4:no_of_days_com += 30;
		case 3:no_of_days_com += 31;
		case 2:no_of_days_com += 28+isleap(end_year);
		case 1:no_of_days_com += 31;
	}
	for(i = start_year+1 ; i < end_year ; i ++){
		year_days += 365+isleap(i);
	}
	no_of_days = no_of_days-start_date+1;	
	no_of_days_com = no_of_days_com + end_date;		
	sum_of_days = no_of_days + no_of_days_com +year_days;
	printf("%d\n",sum_of_days-1);	
	return 0;
}

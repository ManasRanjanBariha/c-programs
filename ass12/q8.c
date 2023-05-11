#include<stdio.h>
struct time
{
	int hour;
	int minute;
	int second;
};
struct time subtract(struct time ,struct time);
struct time add(struct time t1,struct time t2);
main()
{
	struct time m1,m2,sub,sum;
	printf("Enter the hour and minutes and seconds of first structure");
	scanf("%d%d%d",&m1.hour,&m1.minute,&m1.second);
	printf("Enter the hour and minutes and seconds of second structure");
        scanf("%d%d%d",&m2.hour,&m2.minute,&m2.second);
	sub=subtract( m1,m2);
	sum=add(m1,m2);
	printf("The differeance between these two time is %dhours%dminutes%dseconds",sub.hour,sub.minute,sub.second);
        printf("\nThe additon between these two time is %dhours%dminutes%dseconds",sum.hour,sum.minute,sum.second);

}

struct time subtract(struct time t1,struct time t2)
{
	struct time res;
	int sec,sec1,sec2;
	sec1=t1.second+(60*t1.minute)+(3600*t1.hour);
        sec2=t2.second+(60*t2.minute)+(3600*t2.hour);
	sec=sec1-sec2;
	res.hour=sec/3600;
	sec=sec%3600;
	res.minute=sec/60;
	sec=sec%60;
	res.second=sec;
	return res;
}
struct time add(struct time t1,struct time t2)
{
	struct time res;
	int sec,sec1,sec2;
	sec1=t1.second+(60*t1.minute)+(3600*t1.hour);
        sec2=t2.second+(60*t2.minute)+(3600*t2.hour);
	sec=sec1+sec2;
	res.hour=sec/3600;
	sec=sec%3600;
	res.minute=sec/60;
	sec=sec%60;
	res.second=sec;
	return res;
}

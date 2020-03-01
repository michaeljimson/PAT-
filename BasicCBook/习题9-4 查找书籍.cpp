#include<stdio.h>
#include<string.h>

typedef struct book{
	char name[50];
	double price;
}Book; 

int main(void)
{
	int n;
	scanf("%d", &n);
	Book book[n];
	for(int i=0;i<n;i++){
		scanf("\n");
		gets(book[i].name);
		scanf("%lf", &book[i].price);
	}
	Book *max, *min;
	max=min=book;
	for(int i=1;i<n;i++){
		if(book[i].price>max->price){
			max=&book[i];
		}
		if(book[i].price<min->price){
			min=&book[i];
		}
	}
	printf("%.2f, %s\n",max->price, max->name);
	printf("%.2f, %s\n",min->price, min->name);
	
	return 0;
}

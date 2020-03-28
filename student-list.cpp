#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
	int data;
	char isim[20];
	struct node *next;
};

struct node *head;

void create()
{
	struct node *temp=head;
	
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		printf("\nVeriyi giriniz:");
		scanf("%s",head->isim);
		scanf("%d",&head->data);
		
		head->next=NULL;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=(struct node*)malloc(sizeof(struct node));
		temp=temp->next;
		printf("\nVeriyi giriniz:");	
		scanf("%s",temp->isim);
		scanf("%d",&temp->data);
		
		temp->next=NULL;
		
	}
	
}


void liste()
{
	struct node *temp=head;
	
	while(temp!=NULL)
	{
		printf("\nCreated:%s\t%d\n",temp->isim,temp->data);
		temp=temp->next;
	}
	
}

void ek()
{
	struct node *temp=head,*yeni,*temp2=head;
	int x,a;
	printf("\nKacinci siraya olusturulsun:");
	scanf("%d",&x);
	a=x;
	
	if(x==1)
	{
		yeni=(struct node*)malloc(sizeof(struct node));
		printf("\nVeriyi giriniz:");
	    scanf("%s",yeni->isim);
		scanf("%d",&yeni->data);
	    
		yeni->next=head;
		head=yeni;
	}
	else
	{
	
	while(x!=1)
	{
		temp=temp->next;
		x--;
	}
	while(a!=2)
	{
		temp2=temp2->next;
		a--;
	}
	yeni=(struct node*)malloc(sizeof(struct node));
	printf("\nVeriyi giriniz:");
	scanf("%s",yeni->isim);
	scanf("%d",&yeni->data);
	
	yeni->next=temp;
	temp2->next=yeni;
}
}

void sil()
{
	int x;
struct node *temp,*sil,*temp2;
temp=head;
printf("\nKacinciyi siliceksin:");
scanf("%d",&x);
if(x==1)
{
	head=temp->next;
	free(temp);
	
}
else{

for(int i=2;i<x;i++)
{

	
temp=temp->next;	
	
}


temp2=temp->next;
temp->next=temp2->next;

}
}

void find()
{
	struct node *temp=head;
	char a[20];
	int x;
	printf("Aradiginiz ismi giriniz:");
	scanf("%s",a);
	while(temp!=NULL)
	{
		x=strcmp(temp->isim,a);
		if(x==0)
		{
			printf("\n%s\t%d\n",temp->isim,temp->data);
		}
		temp=temp->next;
	}
}

void gecti()
{
	struct node *temp=head;
	int x=0,a=0;
	
	while(temp!=NULL)
	{
		if(temp->data>59)
		{
			printf("\n%s\t%d Passed.\n",temp->isim,temp->data);
		x++;	
		}
		a++;
		temp=temp->next;
	}
	a=a-x;
	if(x==0)
	{
		printf("\nAll students failed.\n");
	}
	else
	{
		printf("\n%d student passed.\n",x);
		printf("%d student failed.\n",a);
	}
}

void degis()
{
	int x,y,z=19,q=19;
	char a[20],b[20];
	struct node *temp=head,*temp2=head,*yeni,*yeni2;
	printf("Yeri degistirilmek istenilen isimi giriniz.\n");
	scanf("%s",a);
	printf("Ikinci ismi giriniz.\n");
	scanf("%s",b);
	x=strcmp(temp->isim,a);
	while(x!=0)
	{
		x=strcmp(temp->isim,a);
		if(x!=0);
		{
		temp=temp->next;}
	}
	y=strcmp(temp2->isim,b);
	while(y!=0)
	{
		y=strcmp(temp2->isim,b);
		if(y!=0)
		{
		temp2=temp2->next;}
	}
	yeni=(struct node*)malloc(sizeof(struct node));
	yeni2=(struct node*)malloc(sizeof(struct node));
	yeni->data=temp->data;
	while(z!=-1)
	{
		yeni->isim[z]=temp->isim[z];
		z--;
	}
	yeni2->data=temp2->data;
	while(q!=-1)
	{
		yeni2->isim[q]=temp2->isim[q];
		q--;
	}
	q=19;
	z=19;
		while(z!=-1)
	{
		temp2->isim[z]=yeni->isim[z];
		z--;
	}
	yeni2->data=temp2->data;
	while(q!=-1)
	{
		temp->isim[q]=yeni2->isim[q];
		q--;
	}
	temp->data=yeni2->data;
	temp2->data=yeni->data;
	

	
}

void sirala()
{
	struct node *temp=head,*temp2=head,*yeni,*yeni2;
	int x;
	while(temp2!=NULL)
	{
	
	while(temp!=NULL)
	{
		x=strcmp(temp2->isim,temp->isim);
		
		if(x>0)
		{
		yeni=(struct node*)malloc(sizeof(struct node));
	yeni2=(struct node*)malloc(sizeof(struct node));
	yeni->data=temp->data;
	strcpy(yeni->isim,temp->isim);
	yeni2->data=temp2->data;
	strcpy(yeni2->isim,temp2->isim);
	strcpy(temp2->isim,yeni->isim);
	yeni2->data=temp2->data;
	strcpy(temp->isim,yeni2->isim);
	temp->data=yeni2->data;
	temp2->data=yeni->data;
			
		}
		
		
		
		temp=temp->next;
	}
	temp2=temp2->next;
}
	
}



main()
{
	int x;
	while(1)
	{
	
	printf("\n1:Create\n2:Show\n3:Add\n4:Delete\n5.Find\n6.Show passed the exam\n7.Exchange\n8.Sirala\n9:EXIT\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1 :create();break;
		case 2 :liste();break;
		case 3 :ek();break;
		case 4 :sil();break;
		case 5 :find(); break;
		case 6 :gecti(); break;
		case 7:degis(); break;
		case 8:sirala(); break;
		case 9 :exit(0);
		
	}
	
	
}}

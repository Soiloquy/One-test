#include<stdio.h>
#include<stdlib.h>
struct student
{
    long int num;
    double score;
    struct student *next;
};
int n;
int main()
{
    struct student *head;
    struct student *creat(void);
    head=creat();
    int del;
    printf("����Ҫɾ����ѧ��:");
    scanf("%d",&del);
    struct student *delete (struct student *head,int del);
    head=delete(head,del);
    struct student *ins;
    ins=(struct student*)
           malloc(sizeof(struct student));
    do
	{
	printf("����Ҫ�����ѧ��:");
    scanf("%ld%lf",&ins->num,&ins->score);
    struct student *insert (struct student *head,struct student *ins);
    head=insert (head,ins);
	}
	while(ins->num!=0);
	void print (struct student *head);
    print (head);
}
struct student *creat(void)
{
    n=0;
    int a=1;
    struct student *p1,*p2,*head;
    head=NULL;
    p1=p2=(struct student*)
    malloc(sizeof(struct student));
    printf("ע:ѧ�Ų��ܳ���9λ\n");
    printf("����ѧ��ѧ�źͳɼ�:\n");
    printf("��%dΪѧ����ѧ�źͳɼ�:",a);
    scanf("%ld%lf",&p1->num,&p1->score);
    while (p1->num!=0)
    {

        n+=1;
        if(n==1)
        {
            head=p1;
        }
        else
        {
            p2->next=p1;
        }
        p2=p1;
        p1=(struct student*)
           malloc(sizeof(struct student));
        a++;
        printf("��%dΪѧ����ѧ�źͳɼ�:",a);
        scanf("%ld%lf",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return(head);
}
void print (struct student *head)
{
    struct student *p;
    printf("����ѧ����Ϣ����:\n");
    p=head;
    int a;
    if(head!=NULL)
    {
#if(0)
        for(a=0; n>0,p!=NULL; n--,p=p->next)
        {
            a++;
            printf("��%dλ��ѧ������Ϣ:\nѧ��:%ld\t�ɼ�:%.2lf\n",a,p->num,p->score);
        }
#endif
#if(1)
        a=0;
        do
        {
            a++;
            printf("��%d��ѧ������Ϣ:\nѧ��:%ld\t�ɼ�:%.2lf\n",a,p->num,p->score);
            p=p->next;
        }
        while(p!=NULL);
#endif
    }
}
struct student *delete (struct student *head,int del)
{
    struct student *p1,*p2;
    if (head==NULL)
    {
        printf("�˱�Ϊ�ձ�\n");
        goto END;
    }
    p1=head;
    while(del!=p1->num&&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(del==p1->num)
    {
        if (p1==head)
        {
            head=p1->next;
        }
        else
        {
            p2->next=p1->next;
        }
    }
    else
    {
        printf("\n�Ҳ�����Ϣ\n\n");
    }
    END :return head;
}
struct student *insert (struct student *head,struct student *ins)
{
    struct student *p2,*p1,*p0;
    p1=head;
    p0=ins;
    if(head==NULL)
    {
        head=p0;
    }
    else 
    {
        while(p0->num>p1->num&&p1->next!=NULL)
        {
            p2=p1;
            p1=p1->next;
        }
        if(p0->num<=p1->num)
        {
            if(p1==head)
            {
                head=p0;
                p0->next=p1;
            }
            else
            {
                p2->next=p0;
                p0->next=p1;
            }
        }
        else
        {
            p1->next=p0;
            p0->next=NULL;
        }
    }
    n+=1;
    return head;
    system("pause");
}

#include<stdio.h>
#include<string.h>
#include<process.h>
char cid[20], cname[20], ac_no[20];
float balance;
void get_input(char cust_id[], char cnm[], char account_no[], float bamt)
{
    strcpy(cid,cust_id);
    strcpy(cname,cnm);
    strcpy(ac_no,account_no);
    balance=bamt;
}
void debit()
{
    int amt;
    printf("how much amount to be debited ?\n");
    scanf("%d",&amt);
    if(amt<=balance)
    {
    if(balance-amt<1000)
    {
    	printf("please maintain the minimum balance, unless charge will be applied\n");
    }
	    balance=balance-amt;
	}
    else
        printf("Insufficient Fund\n");
}
void credit()
{
    int amt;
    printf("how much amount to be credit ?\n");
    scanf("%d",&amt);
    balance=balance+amt;
}
void get_statement()
{
    printf("current status of account\n");
    printf("********************************\n");
    printf("customer ID=%s\n customer name=%s\n account no=%s\n current balance=%f\n thanks\n",cid,cname,ac_no,balance);
}
void main()
{
    int choice;
    char cust_id[20], cnm[20], account_no[20];
    float bamt;
    printf("enter your customer id, name, account no and balance\n");
    scanf("%s%s%s%f",cust_id,cnm,account_no,&bamt);
    //gets(cnm);
    get_input(cust_id,cnm,account_no,bamt);
    do
    {
    	printf("********************************\n");
        printf("enter choice\n press 1 for debit\n press 2 for credit\n press 3 for get statement\n press 4 for exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            debit();
            break;
        case 2:
            credit();
            break;
        case 3:
            get_statement();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice\n");
        }
    }
    while(choice>=1&&choice<=4);
    
}


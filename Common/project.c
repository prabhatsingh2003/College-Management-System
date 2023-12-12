
void diposite();
void withdraw();
void transfer();
void checkdetail();
void last();

int totalamount=1000,amount,amo,tr;

int totaldiposite=0,totalwithdraw=0,totaltr=0;

int acc;

char n[40];
int age;
int Mnumber;
char a[100];

void main()

{	
    
	int ch;
	
	printf("\n Enter  Costumer name:");
	gets(n);		                                         
	
	printf("\n Enter your account number=");
	scanf("%d",&acc);
	
	printf("\n Enter your age=");
	scanf("%d",&age);
	
	printf("\n Enter your Mo. number=");
	scanf("%d",&Mnumber);
	 
	printf("\n Address of Costumer:");
	gets(a);
	



	while(1)
	{
	 
	 
	 printf("\n 1. Diopsite Ammount");
	 
	 printf("\n 2. withdraw  Ammount");
	 
	 printf("\n 3. transfer Ammount");
     
	 printf("\n 4. Check datial ");
	
	 printf("\n 5.Exit");
	
	 printf("\n Enter the your choice\n");
	 scanf("%d",&ch);
	

	    
    switch(ch)
    {
    	case 1:
		    
			diposite();
		    totaldiposite+=amount;
    		break;
    	
		case 2:
		     
			 withdraw();
			
			 if(amo<=totalamount)
			{
			totalwithdraw+=amo;
			}
			break;
		case 3:
		      
			  transfer();
			  
			  if(tr<=totaltr)
			  {
			  	totaltr+=tr;
			  }
			  break;
		
		case 4:
			
			checkdetail();

			break;
		
		case 5:
			
			last();
			getch();
			exit(0);
			  
		default:
		       
			   printf("\n wrong choice");	  
		       	   			
    		
	}
  }

}


void diposite()
{
	printf("\n Enter the amount you want in diposite");
	scanf("%d",&amount);
	
	totalamount +=amount;
	
	printf("%d",totalamount);
}


void withdraw()
{
	printf("\n Enter the amount you which to with draw");
	scanf("%d",&amo);
	
	if (amo<=totalamount)
	{
		totalamount-=amo;
	}
	
	else
	{
		printf("\n Less amount withdrow is notpossible");
	}
}


void transfer()
{
	printf("\n Enter the amount you want in transfer ");
	scanf("%d",&tr);
	
	if(amo<=totalamount)
	{
		totalamount-=tr;
    }
	
	else
	{
	printf("\n Less amount transfer is not possible");
	}
}



void checkdetail()
{
  	
	printf("\n total Amount =%d",totalamount);
	
	printf("\n total diposite amount=%d",totaldiposite);
	
	printf("\n total withdraw amount=%d",totalwithdraw);
	
	printf("\n total transfred amount=%d",totaltr);
}

void last()

{   
   
    printf("\n***************************");
   
    printf("\n Your name  =%s",n);
   
    printf("\n Account number =%d",acc);
   
    printf("\n your age= %d",age);
   
    printf("\n your Mo. number=%d",Mnumber);
   
    printf("\n your Address: %s",a);
   
    printf("\n total Amount =%d",totalamount);

	printf("\n total diposite amount=%d",totaldiposite);

	printf("\n total withdraw amount=%d",totalwithdraw);
	
	printf("\n total transfred amount=%d",totaltr);
   
    printf("\n*********THANKS********");

}
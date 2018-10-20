#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
#define ENTER 13
#define BKSPC 8
void screendisplay();
void Intro();
void information();
void reservation();
void printticket(char [],char [],int,char,int,float);
void schedule();
void seat_avaliblity(char,int);
void seat_check();
void information_specfic(int);
int  amount_per_person(char,int,int);
void cancellation();
void delay (unsigned int mseconds);
void load();

void distance();

void loop_load();

void airport_detail();
main(){
	screendisplay();
	  
	  Intro();
	  information();
	  
	 
}
void screendisplay(void){
	printf("                                                                   ------DATABASE MANAGEMENT SYSTEM OF AIRPORT-----\n\n\n                                                                            GROUP MEMBERS: Ibad Shaikh\n                                                                                           Saif ur Rehman\n                                                                                           Ahmed Imran.\n                                                                        ");
	printf("    \n\n                                                                            Subject Teacher: SIR Wasemullah.\n\n                                                                            Department: BCIT");
	    delay(10000);
		system("cls");
		delay(300);
//       printf("\n\t\t\t\t                       :::::::::::::::::::::::::::::::::::::");
        printf("\n\t\t\t\t                                         \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	   delay(300);
   printf("\n\t\t\t\t                                         \xDB                                 \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @@@@@@@@@@@@@@@@@@@@@@@     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @                     @     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @      WELCOME TO     @     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @  AIRPORT MANAGEMENT @     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @        PORTAL       @     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @                     @     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB     @@@@@@@@@@@@@@@@@@@@@@@     \xDB");
   delay(300);
   printf("\n\t\t\t\t                                         \xDB                                 \xDB");
   delay(300);
//   printf("\n\t\t\t\t                       :::::::::::::::::::::::::::::::::::::\n\n");
   printf("\n\t\t\t\t                                         \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
//       loop_load();   
loop_load();
}

void Intro(){
	delay(500);
   printf("\n\n\t\t\t                                             Welcome To Pakistan International Airlines!");
	delay(500);
	printf("\n\t\t         \n\t\t\t\t\t\t                  Address : Jinnah International Airport, Karachi.");
   delay(500);
   printf("\n\n \t\t\t\t                                       Landmarks : Jinnah International Airport \n\n\t\t\t\t\t\t\t\t                  City : Karachi.");
   delay(500);
   printf("\n\n\t\t\t   \t \t                                  Phone : +92-21-34572011, 34573721.");
   delay(500);
   printf("\n\n\t\t\t \t                                               PABX : +92-21-99040000\n");
   delay(500);
   printf("\n\t\t\t\t\t                                 For Reservations : +92-21-111786786.\n");
   delay(500);
   loop_load();
//   printf("\n====================================================================================================================================================");
//      printf("\n=");
//      delay(10000);
//      printf("=");
}

void information(){
	
	      user:	    
	  	char ch,pass[10];
	char Pkr[10],choice;
	  int i=0,j,n=1;

	  char Name[30]="i", UName[20] ;
	  
//	  printf("Enter Your Login ID:");
	  	printf("\n\n Enter User Name = ");
    	scanf("%s",&UName);
    	
         if(strcmp(Name,UName)==0)
	        {
			
	      }
                    else{
					

                  	  printf("\n\n Invalid Username!");
                  	  goto user;
//                  	  exit(0);
                     }
                     
           
//		   psd:
 printf("\n Enter Password = ");
    while(1)
 {
  ch = getch();
  pass[i] = ch;
  if(ch==BKSPC)
        {
        	continue; 
		}
	    	 if (ch==ENTER)
		    {
			   break;
		    }
		printf("*");
		i++;
 }
 pass[i] = '\0';
		   
		if(strcmp("i",pass)==0){
		system("cls");
		delay(500);
			printf("\n\t\t\t\t\t\t\t                            Access Granted!");
				delay(1000);
		printf("\n\t\t\t\t                                      DEAR CUSTOMER, WELCOME TO AIRPORT MANGEMENT PORTAL!\n\t\t\t\t\t\t                               How May I Help You SIR? \n\t\t\t\t\t                                      PLEASE TELL WHAT YOU WANT TO KNOW :\n");
	    		delay(1500);
	    		delay(1500);
	    			    		system("cls");
		    		printf("\n\t\t\t\t\t\t              ****************LOADING PLEASE WAIT******************");
	    			    		delay(1000);
//	    			    		load();
	    			    		printf("\n\n\n");
//	    			    		load();
loop_load();
	    		system("cls");
	    	start:
	    		ret:
		printf("\n\n\t\t\t\t\t\t                       ++++++++++++++++MAIN MENU+++++++++++++++++");
	    
		printf("\n\n\t\t\t\t\t\t                       1.Reserve a Ticket:");
	printf("\n\n\t\t\t\t\t\t                       2.View  Planes Details & Fares:");
	printf("\n\n\t\t\t\t\t\t                       3.Cancel Reservation:");
	printf("\n\n\t\t\t\t\t\t                       4.Seat Availiblity:");
	printf("\n\n\t\t\t\t\t\t                       5.Distance Details:");
	printf("\n\n\t\t\t\t\t\t                       6.Airport Details:");
	printf("\n\n\t\t\t\t\t\t                       7.Exit\n\n\t\t\t\t\t\t                       Enter Your Choice :");
	scanf(" %c",&choice);
		switch(choice){
		case '1':
			reservation();
			 system("cls");
			goto start;
		case '2':
			schedule();
			char p;
			printf("\n\n Back to Main Menu(y/n) :");
			scanf(" %c",&p);
			if(p=='y'){
								system("cls");
				goto start;
			}
			else if(p == 'n')
			break;
		case '3':
			cancellation();
			printf("\n\n Press any Key to return to Main Menu :");
			getch();
			system("cls");
			goto start;
			case '4':
				seat_check();
				system("cls");
				printf("\n\n Press any Key to Return to Main Menu :");
				getch();
								system("cls");
				goto start;
			break;
			
			case '5':
			
				system("cls");
                  distance();
                system("cls");
				printf("\n\n Press any Key to Return to Main Menu :");
				getch();
				system("cls");
				goto start;
				
                
				  break;
				  
				  case '6':
				  	
				system("cls");
                airport_detail();
                system("cls");
				printf("\n\n Press any Key to Return to Main Menu :");
				getch();
				system("cls");
				goto start;

				  	break;
				  
			case '7':
				system("cls");
				printf("\n\n\t\t\t   \t \t              Thankyou! :)\n\n\t\t\t   \t \t              For Visiting our Portal");
				return;
		default:
			printf("\n\nInvalid Choice ! \n\nPlease try Again!");
			goto start;
			break;
	}
	}
	else{

		printf("\n\nAccess Denied!!!\n");
//		goto psd;
		
	}
}

void reservation(){
	char phn_num[15],name[50],CNIC[100],planee_code[100];
	int seat_num,fares;
		FILE *fp;
	fp=fopen("information.txt","a");
	system("cls");
		printf("\nENTER CUSTOMER'S PERSONAL DETAILS :");
		printf("\n\nENTER YOUR NAME :");
		fflush(stdin);
		gets(name);
		printf("\n\nCNIC NUMBER # :");
		fflush(stdin);
		gets(CNIC);
		printf("\n\nMOBILE NUMBER :");
		fflush(stdin);
		gets(phn_num);
		start2:
		schedule();
		start1:
		printf("\n\nENTER YOUR PLANE CODE :");
		scanf("%s",&planee_code);
		int plane_code = atoi(planee_code);
		
		if(plane_code >= 1001 && plane_code <=1020){
//			printf("\nEnter number of Seat you want to avail:");
//			scanf("%d",&seat_num);
             char opt;
             printf("\n\nPress 1 for Business Class Details \n\nPress 2 for Economy Class Details :\n");
             scanf(" %c",&opt);
			int seats;
			printf("\n\nEnter Number of seats want to Book :");
			scanf("%d",&seats);
			seat_avaliblity(opt,seats);
			if(seats==0){
				printf("\n\nPress any key to check  flights Schedule:");
				getch();
				goto start2;
			
			}
			int fares;
			fares=amount_per_person(opt,plane_code,seats);
			printticket(name,CNIC,plane_code,opt,seats,fares);
			}else{
			printf("\n\nSORRY SIR!\n\nYour Plane Code is Invalid\n\nPLEASE TRY AGAIN :) :");
			goto start1;
		} 
			printf("\n\nTo Confirm Your Ticket Press 1 \n\nTo Cancel Your Ticket Press 2 :");
	start3:
		char confirm;
	scanf(" %c",&confirm);
	if(confirm == '1')
	{
		fprintf(fp,"%s\t\t\t%d\t\t%d\n",name,plane_code,fares);
		printf("\n\nReservation Done Successfully! :)\n\nBack to MAIN MENU,Press ENTER :");
	}
	else
	{
		if(confirm=='2'){
			printf("\n\n YOUR RESERVATION HAS BEED CANCELLED!\n\nBack to MAIN MENU,Press ENTER :");
		}
		else
		{
			printf("\n\n Invalid Choice!\n\nTRY AGAIN! ");
			goto start3;
		}
	}
	fclose(fp);
	getch();
}
void schedule(){
	int n,opt;
	printf("\n1.Domestic Timings & Fares Details \n\n2.International Timings & Fares Details ");
	input:
		
    printf("\n\nEnter Your Choice :");
	scanf("%d",&n);
	switch(n){
		case 1:
			system("cls");
			printf("\n\t\tASSALM O ALIKUM!\n\t\t****************Welcome To Domestic Booking*******************\n");
			start3:
			printf("\n1.Business Class Details\n\n2.Economy Class Details\n:");
			scanf("%d",&opt);
			if(opt == 1){
					system("cls");
					printf("\n\t\t==========BUSINESS CLASS DETAILS==============");	
	printf("\nPlane.Code\t\t\tDestinations\t\tFares\tDeparture Time\n");
	printf("\nPK-1001\t\tKarachi to Islamabad\t\t\tRs6000\t\t08:00");
	printf("\nPK-1002\t\tIslamabad To Karachi\t\t\tRs6000\t\t09:15");
	printf("\nPK-1003\t\tKarachi To Lahore\t\t\tRs5500\t\t09:55");
	printf("\nPK-1004\t\tLahore To Karachi\t\t\tRs5500\t\t11:00");
	printf("\nPK-1005\t\tKarachi To Multan\t\t\tRs5000\t\t13:00");
	printf("\nPK-1006\t\tMultan To Karachi\t\t\tRs5000\t\t15:00");
    printf("\nPK-1007\t\tKarachi To Faisalabad\t\t\tRs4500\t\t18:00");	
    printf("\nPK-1008\t\tFaisalabad To Karachi\t\t\tRs4500\t\t19:45");
    printf("\nPK-1009\t\tKarachi To Peshawar\t\t\tRs7000\t\t22:45");
    printf("\nPK-1010\t\tPeshawar To Karachi\t\t\tRs7000\t\t00:15\n");
			}else if(opt == 2){
			system("cls");	
			       printf("\n\t\t=============ECONOMY CLASS======================");	
	printf("\nPlane.Code\t\t\tDestinations\t\tFares\tDeparture Time\n");
	printf("\nPK-1001\t\tKarachi to Islamabad\t\t\tRs5000\t\t08:00");
	printf("\nPK-1002\t\tIslamabad To Karachi\t\t\tRs5000\t\t09:15");
	printf("\nPK-1003\t\tKarachi To Lahore\t\t\tRs4500\t\t09:55");
	printf("\nPK-1004\t\tLahore To Karachi\t\t\tRs4500\t\t11:00");
	printf("\nPK-1005\t\tKarachi To Multan\t\t\tRs4000\t\t13:00");
	printf("\nPK-1006\t\tMultan To Karachi\t\t\tRs4000\t\t15:00");
    printf("\nPK-1007\t\tKarachi To Faisalabad\t\t\tRs3500\t\t18:00");	
    printf("\nPK-1008\t\tFaisalabad To Karachi\t\t\tRs3500\t\t19:45");
    printf("\nPK-1009\t\tKarachi To Peshawar\t\t\tRs6000\t\t22:45");
    printf("\nPK-1010\t\tPeshawar To Karachi\t\t\tRs6000\t\t00:15\n");	
			}else{
			 system("cls");
				printf("\nInvalid Option\n");
				goto start3;
			}
			break;
			case 2:
					printf("\n\t\t\t\t***********************Welcome To International Booking System**********************\n");
				start2:
			printf("\n1.Business Class\n\n2.Economy Class\n:");
					printf("\nEnter Your Choice :");
			scanf("%d",&opt);
			if(opt== 1){
					system("cls");
						printf("\t\t==============BUSINESS CLASS DETAILS============");	
	printf("\nPlane.Code\t\t\tDestinations\t\tFares\tDeparture Time\n");
	printf("\nPK-1011\t\tKarachi to Dubai\t\t\tRs18000\t\t08:20");
	printf("\nPK-1012\t\tDubai To Karachi\t\t\tRs18000\t\t09:30");
	printf("\nPK-1013\t\tKarachi To Muscat\t\t\tRs13000\t\t10:00");
	printf("\nPK-1014\t\tMuscat To Karachi\t\t\tRs13000\t\t11:10");
	printf("\nPK-1015\t\tKarachi To London\t\t\tRs46000\t\t13:40");
	printf("\nPK-1016\t\tLondon To Karachi\t\t\tRs46000\t\t15:15");
    printf("\nPK-1017\t\tKarachi To Toronto\t\t\tRs66000\t\t17:50");	
    printf("\nPK-1018\t\tToronto To Karachi\t\t\tRs66000\t\t19:55");
    printf("\nPK-1019\t\tKarachi To Newyork\t\t\tRs72000\t\t23:05");
    printf("\nPK-1020\t\tNewyork To Karachi\t\t\tRs72000\t\t00:30\n");
			}else if(opt== 2){
					system("cls");
						printf("\t\t===============ECONOMY CLASS====================");	
	printf("\nPlane.Code\t\t\tDestinations\t\tFares\tDeparture Time\n");
	printf("\nEK-1011\t\tKarachi to Dubai\t\t\tRs17000\t\t08:20");
	printf("\nEK-1012\t\tDubai To Karachi\t\t\tRs16000\t\t09:30");
	printf("\nEK-1013\t\tKarachi To Muscat\t\t\tRs12000t\t10:00");
	printf("\nEK-1014\t\tMuscat To Karachi\t\t\tRs12000\t\t11:10");
	printf("\nEK-1015\t\tKarachi To London\t\t\tRs45000\t\t13:40");
	printf("\nEK-1016\t\tLondon To Karachi\t\t\tRs45000\t\t15:15");
    printf("\nEK-1017\t\tKarachi To Toronto\t\t\tRs65000\t\t17:50");	
    printf("\nEK-1018\t\tToronto To Karachi\t\t\tRs65000\t\t19:55");
    printf("\nEK-1019\t\tKarachi To Newyork\t\t\tRs70000\t\t23:05");
    printf("\nEK-1020\t\tNewyork To Karachi\t\t\tRs70000\t\t00:30\n");
			}else{
				system("cls");
				printf("\nInvalid Option\n");
				goto start2;
			}
				break;
				default:
					printf("\nYOUR CHOICE IS INVALID!");
					goto input;
	}
}
int amount_per_person(char decision,int plane_code,int seat_num){
	
//	printf("\ny.Business Class\nn.Economy Class\n:");
//	scanf("%c",&decision);
	switch(decision){
		case '1':
		if (plane_code==1001)
	{
		return(6000*seat_num);
	}
	if (plane_code==1002)
	{
		return(6000*seat_num);
	}
	if (plane_code==1003)
	{
		return(5500*seat_num);
	}
	if (plane_code==1004)
	{
		return(5500*seat_num);
	}
	if (plane_code==1005)
	{
		return(5000*seat_num);
	}
	if (plane_code==1006)
	{
		return(5000*seat_num);
	}
	if (plane_code==1007)
	{
		return(4500*seat_num);
	}
	if (plane_code==1008)
	{
		return(4500*seat_num);
	}
	if (plane_code==1009)
	{
		return(7000*seat_num);
	}
	if (plane_code==1010)
	{
		return(7000*seat_num);
	}
		if (plane_code==1011)
	{
		return(18000*seat_num);
	}
	if (plane_code==1012)
	{
		return(18000*seat_num);
	}
	if (plane_code==1013)
	{
		return(13000*seat_num);
	}
	if (plane_code==1014)
	{
		return(13000*seat_num);
	}
	if (plane_code==1015)
	{
		return(46000*seat_num);
	}
	if (plane_code==1016)
	{
		return(46000*seat_num);
	}
	if (plane_code==1017)
	{
		return(66000*seat_num);
	}
	if (plane_code==1018)
	{
		return(66000*seat_num);
	}
	if (plane_code==1019)
	{
		return(72000*seat_num);
	}
	if (plane_code==1020)
	{
		return(72000*seat_num);
	}
	break;
	case '2':	
			if (plane_code==1001)
	{
		return(5000*seat_num);
	}
	if (plane_code==1002)
	{
		return(5000*seat_num);
	}
	if (plane_code==1003)
	{
		return(4500*seat_num);
	}
	if (plane_code==1004)
	{
		return(4500*seat_num);
	}
	if (plane_code==1005)
	{
		return(4000*seat_num);
	}
	if (plane_code==1006)
	{
		return(4000*seat_num);
	}
	if (plane_code==1007)
	{
		return(3500*seat_num);
	}
	if (plane_code==1008)
	{
		return(3500*seat_num);
	}
	if (plane_code==1009)
	{
		return(6000*seat_num);
	}
	if (plane_code==1010)
	{
		return(6000*seat_num);
	}
		if (plane_code==1011)
	{
		return(17000*seat_num);
	}
	if (plane_code==1012)
	{
		return(16000*seat_num);
	}
	if (plane_code==1013)
	{
		return(12000*seat_num);
	}
	if (plane_code==1014)
	{
		return(12000*seat_num);
	}
	if (plane_code==1015)
	{
		return(45000*seat_num);
	}
	if (plane_code==1016)
	{
		return(45000*seat_num);
	}
	if (plane_code==1017)
	{
		return(65000*seat_num);
	}
	if (plane_code==1018)
	{
		return(65000*seat_num);
	}
	if (plane_code==1019)
	{
		return(70000*seat_num);
	}
	if (plane_code==1020)
	{
		return(70000*seat_num);
	}
	}
}
void seat_avaliblity(char choice,int seat){
	int total_seats[100],total_seats_eco[100];
    int i=0,j=0;
    int total,total1,num,num1;
    int seat_available[100]={2000},seat_available_eco[100]={2000};
    int sn,sn1,seatno,seatno1,seat_nos[100],seat_nos_eco[100],SAL=0,SAL1=0;
    char opt,optt;
	
		if(choice == '1'){/*business class*/
		business:
		FILE *file = fopen("check seats.txt", "r");
    while(fscanf(file, "%d", &num)!=EOF)
	{
        total_seats[i] = num;
        i++;
    }
    fclose(file);
    for(i=0;i<10;i++)
	{
    	if (total_seats[i]==0)
		{
			seat_available[SAL]=i+1;
        	SAL++;
		}	
	}
	total=SAL/2;/*total ko SAL sy divide is liye kiya hai ly hum ko shuru ki 10 seats ki booking mil jye*/
	if(total==0)
		{
				printf(" \n\n\t%d Seats are Not Available in this Flight!!!");
			return ;
		}
		system("cls");
			printf("\n\n\t\tAvailable Seats in Buisness Class\n\n");	
	for (i=0;i<10;i++){
    	if (total_seats[i]==0)
		 printf("%d ",i+1);
    }
//		printf("\n\n   Enter total seats You want  = ");
//		scanf("%d",&sn);
		
		if(seat>total)
		{
		printf(" \n\n\t%d Seats are Not Available in this Flight !!!",sn);
		printf("\nSeats Are Available in Economy Class.\n\n Press y to Proceed. :");
		scanf("%c",&opt);
		if(opt=='y')goto economy;
		return;	
		} 
		int x=0;
		for (i=0;i<seat;i++)
		{
			start :
			printf("\n\t %d.Enter Seat Number = ",i+1);
			scanf("%d",&seatno);
			int count=0;
			for(int j=0;j<total;j++){
				if(seatno==seat_available[j])
				{
					count++;
					seat_nos[x]=seatno;
					x++;
				}
				
			}
			if(count==1){
				;
			}
			else{
				printf("\n\t This Seat is Not Availabe in this Class\n\nEnter Again\n");
				goto start;
			} 
		}
		for(i=0;i<seat;i++){
			printf(" \n\n\t\t Your seat nos = ");
			printf(" %d ",seat_nos[i]);
		}
		for(i=0;i<seat;i++){
			int a=0;
			a=seat_nos[i]-1;
			total_seats[a]=1;
		}
		FILE *f = fopen("check seats.txt", "w");
		for(i=0;i<10;i++)
		fprintf(f, "%d\n", total_seats[i]);
	    fclose(f);	
		}else if(choice != 1){	/*Starting of economy class*/
			economy:
		FILE *file = fopen("economy seats.txt", "r");
    while(fscanf(file, "%d", &num1)!=EOF)
	{
        total_seats_eco[j] = num1;
        j++;
    }
    fclose(file);
    for(j=0;j<10;j++)
	{
    	if (total_seats_eco[j]==0)
		{
			seat_available_eco[SAL1]=j+1;
        	SAL1++;
		}	
	}
	total1=SAL1/2;/*total ko SAL sy divide is liye kiya hai ly hum ko shuru ki 10 seats ki booking mil jye*/
	if(total1==0)
		{
				printf(" \n\n\t%d Seats are Not Available in this Flight !!!");
			return;
		}
			
				printf("\t\tAvailable Number of Seats in Economy Class\n\n");
	for (j=0;j<10;j++){
    	if (total_seats_eco[j]==0)
		 printf("%d ",j+1);
    }
    
//		scanf("%d",&sn1);
//		printf("\n\n   Enter total seats You want  = ");
		
		if(seat>SAL1)
		{
//		printf(" \n\n\t%d Seats are Not Available in this Flight !!!",sn);
		printf(" \n\n\t%d Seats are Not Available in this Flight !!!",sn1);
		printf("\nSeats Are Available in Buisness Class.\n\n Press y to Proceed.  :");
		scanf(" %c",&optt);
		if(optt=='y')goto business;
		return;	
		} 
		for (j=0;j<seat;j++)
		{
			start1 :
			printf("\n\t %d.Enter Seat Number = ",j+1);
			scanf("%d",&seatno1);
			int count1=0;
			for(int k=0;k<SAL1;k++){
				if(seatno1==seat_available_eco[k])
				count1++;
			}
			if(count1==1){
				for(j=0;j<seat;j++)
				{
				if(seatno1==seat_nos_eco[j])
				{
				printf("\n\n\tYou Have Already Selected This Seat...\n\nENTER AGAIN !!!\n\n");
				goto start1;
				} 		   
				}
				seat_nos_eco[j]=seatno1;
			}
			else{
				printf("\n\t This Seat is Not Availabe Enter Again\n");
			    goto start1;
			} 
		}
		for(j=0;j<seat;j++){
			printf(" \n\n\t\t Your seat nos = ");
			printf(" %d ",seat_nos_eco[j]);
		}
		for(j=0;j<seat;j++){
			int a1=0;
			a1=seat_nos_eco[j]-1;
			total_seats_eco[a1]=1;
		}
		FILE *f = fopen("economy seats.txt", "w");
		for(j=0;j<10;j++)
		fprintf(f, "%d\n", total_seats_eco[j]);
	    fclose(f);
//	    return sn1;
		}	
}
void information_specific(int plane_code){
	
	if (plane_code==1001)
	{
		printf("\n\tPlane_code:\t\t\tPK-1001");
		printf("\n\tDestination:\t\tKarachi to Islamabad");
		printf("\n\tDeparture:\t\t08:00 ");
	}
	if (plane_code==1002)
	{
		printf("\n\tPlane_code:\t\t\tPK-1002");
		printf("\n\tDestination:\t\tIslamabad to Karachi");
		printf("\n\tDeparture:\t\t09:15");
	}
	if (plane_code==1003)
	{
		printf("\n\tPlane_code:\t\t\tPK-1003");
		printf("\n\tDestination:\t\tKarachi to Lahore");
		printf("\n\tDeparture:\t\t09:55");
	}
	if (plane_code==1004)
	{
		printf("\n\tPlane_code:\t\t\tPK-1004");
		printf("\n\tDestination:\t\tLahore to Karachi");
		printf("\n\tDeparture:\t\t11:00");
	}
	if (plane_code==1005)
	{
		printf("\n\tPlane_code:\t\t\tPK-1005");
		printf("\n\tDestination:\t\tKarachi to Multan");
		printf("\n\tDeparture:\t\t13:00");
	}
	if (plane_code==1006)
	{
		printf("\n\tPlane_code:\t\t\tPK-1006");
		printf("\n\tDestination:\t\tMultan to Karachi");
		printf("\n\tDeparture:\t\t15:00");
	}
	if (plane_code==1007)
	{
		printf("\n\tPlane_code:\t\t\tPK-1007");
		printf("\n\tDestination:\t\tKarachi to Faisalabad");
		printf("\n\tDeparture:\t\t18:00");
	}
	if (plane_code==1008)
	{
		printf("\n\tPlane_code:\t\t\tPK-1008");
		printf("\n\tDestination:\t\tFaisalabad to Karachi");
		printf("\n\tDeparture:\t\t19:45");
	}
	if (plane_code==1009)
	{
		printf("\n\tPlane_code:\t\t\tPK-1009");
		printf("\n\tDestination:\t\tKarachi to Peshawar");
		printf("\n\tDeparture:\t\t22:45");
	}
	if (plane_code==1010)
	{
		printf("\n\tPlane_code:\t\t\tPK-1010");
		printf("\n\tDestination:\t\tPeshawar to Karachi");
		printf("\n\tDeparture:\t\t00:15");
	}
		if (plane_code==1011)
	{
		printf("\n\tPlane_code:\t\t\tPK-1011");
		printf("\n\tDestination:\t\tKarachi to Dubai");
		printf("\n\tDeparture:\t\t08:20");
	}
	if (plane_code==1012)
	{
		printf("\n\tPlane_code:\t\t\tPK-1012");
		printf("\n\tDestination:\t\tDubai to Karachi");
		printf("\n\tDeparture:\t\t09:30");
	}
	if (plane_code==1013)
	{
		printf("\n\tPlane_code:\t\t\tPK-1013");
		printf("\n\tDestination:\t\tKarachi to Muscat");
		printf("\n\tDeparture:\t\t10:00");
	}
	if (plane_code==1014)
	{
		printf("\n\tPlane_code:\t\t\tPK-1014");
		printf("\n\tDestination:\t\tMuscat to Karachi");
		printf("\n\tDeparture:\t\t11:10");
	}
	if (plane_code==1015)
	{
		printf("\n\tPlane_code:\t\t\tPK-1015");
		printf("\n\tDestination:\t\tKarachi to London");
		printf("\n\tDeparture:\t\t13:40");
	}
	if (plane_code==1016)
	{
		printf("\n\tPlane_code:\t\t\tPK-1016");
		printf("\n\tDestination:\t\tLondon to Karachi");
		printf("\n\tDeparture:\t\t15:15");
	}
	if (plane_code==1017)
	{
		printf("\n\tPlane_code:\t\t\tPK-1017");
		printf("\n\tDestination:\t\tKarachi to Toronto");
		printf("\n\tDeparture:\t\t17:50");
	}
	if (plane_code==1018)
	{
		printf("\n\tPlane_code:\t\t\tPK-1018");
		printf("\n\tDestination:\t\tToronto to Karachi");
		printf("\n\tDeparture:\t\t19:55");
	}
	if (plane_code==1019)
	{
		printf("\n\tPlane_code:\t\t\tPK-1019");
		printf("\n\tDestination:\t\tKarachi to Newyork");
		printf("\n\tDeparture:\t\t23:05");
	}
	if (plane_code==1020)
	{
		printf("\n\tPlane_code:\t\t\tPK-1020");
		printf("\n\tDestination:\t\tNewyork to Karachi");
		printf("\n\tDeparture:\t\t00:30");
	}
}
void seat_check(){
		int total_seats[100],total_seats_eco[100];
    int choice,i=0,j=0;
    int total,total1,num,num1;
    int seat_available[100]={2000},seat_available_eco[100]={2000};
    int sn,sn1,seatno,seatno1,seat_nos[100],seat_nos_eco[100],SAL=0,SAL1=0;
    char opt;
    printf("\n\nFor Seats Availability in Business class,Press 1 :  \n\n Seat Availability in Economy Class,Press 2 :");
    scanf(" %c",&opt);
    if(opt=='1'){
//    	system("cls");
    	FILE *file = fopen("check seats.txt", "r");
    while(fscanf(file, "%d", &num)!=EOF)
	{
        total_seats[i] = num;
        i++;
    }
    fclose(file);
    for(i=0;i<10;i++)
	{
    	if (total_seats[i]==0)
		{
			seat_available[SAL]=i+1;
        	SAL++;
		}	
	}
	total=SAL/2;/*total ko SAL sy divide is liye kiya hai ly hum ko shuru ki 10 seats ki booking mil jye*/
	if(total==0)
		{
				printf(" \n\n\t%d Seats are Not Available in this Flight !!!");
		}else if(total != 0){
			
			printf("\n\n\t\tAvailable Seats in Business Class\n\n");	
	for (i=0;i<10;i++){
    	if (total_seats[i]==0)
		 printf("%d ",i+1);
    }
		}
		 printf("\n\n Enter Any Key  : ");
		 getch();
	}else if(opt=='2'){
		system("cls");
		FILE *file = fopen("economy seats.txt", "r");
    while(fscanf(file, "%d", &num1)!=EOF)
	{
        total_seats_eco[j] = num1;
        j++;
    }
    fclose(file);
    for(j=0;j<10;j++)
	{
    	if (total_seats_eco[j]==0)
		{
			seat_available_eco[SAL1]=j+1;
        	SAL1++;
		}	
	}
	total1=SAL1/2;/*total ko SAL sy divide is liye kiya hai ly hum ko shuru ki 10 seats ki booking mil jye*/
	if(total1==0)
		{
				printf(" \n\n\t%d Seats are Not Available in this Flight !!!");
		}else if(total1 != 0){
			
				printf("\n\n\t\t Available Seats in Economy class\n\n");
	for (j=0;j<10;j++){
    	if (total_seats_eco[j]==0)
		 printf("%d ",j+1);
    }
		}
			
	}
	printf("\nEnter Any Key :");
		 getch();
}
void printticket(char name[],char CNIC[],int plane_code,char opt,int seats,float fares){
	system("cls");
	printf("-------------------==========TICKET DETAILS=========-------------------\n\n");
	printf("\tPassenger Name:\t\t\t%s",name);
	printf("\n\tNumber Of Seats:\t%d",seats);
	printf("\n\tCNIC Number of Passenger:\t\t%s",CNIC);
	information_specific(plane_code);
	printf("\nFare:\t\t%.2f",fares);
printf("\n\n*********************HAVE A SAFE JOURNEY****************");

}
void cancellation(){
	char n; 
	int total_seats[100],total_seats_eco[100];
    int i=0,j=0;
    int total,total1,num,num1;
    int seat_available[100]={2000},seat_available_eco[100]={2000};
    int sn,sn1,seatno,seatno1,seat_nos[100],seat_nos_eco[100],SAL=0,SAL1=0;
	system("cls");
	printf("\n\n\t\t==============FLIGHT CANCELLATION===============\n\n1.Business Class\n\n2.Ecoconmy Class");
	scanf(" %c",&n);
	if(n=='1'){
		printf("*****************Welcome To Bussiness Class Cancellation*******************");
			FILE *file = fopen("check seats.txt", "r");
			while(fscanf(file, "%d", &num)!=EOF)
	{
        total_seats[i] = num;
        i++;
    }
    fclose(file);
    for(i=0;i<10;i++)
	{
    	if (total_seats[i]!=0)
		{
			seat_available[SAL]=i+1;
        	SAL++;
		}	
	}
	total=SAL/2;
	printf("\n\nNumbers of Seats Want to Cancel = ");
		scanf("%d",&sn);
		int mxx=0;
		for (i=0;i<sn;i++)
		{
			start :
			printf("\n\t %d.Enter Seat Number = ",i+1);
			scanf("%d",&seatno);
			int count=0;
			for(int j=0;j<total;j++){
				if(seatno==seat_available[j])
				{
					count++;
					seat_nos[mxx]=seatno;
					mxx++;
				}
				
			}
			if(count==1){
				;
			}
			else{
				printf("\n\tInvalid Cancellation\n");
				goto start;
			}
			for(i=0;i<sn;i++){
			int a=0;
			a=seat_nos[i]-1;
			total_seats[a]=0;
		}
		FILE *f = fopen("check seats.txt", "w");
		for(i=0;i<10;i++)
		fprintf(f, "%d\n", total_seats[i]);
	    fclose(f); 
		}
		printf("\nCANCELLATION HAVE BEEN DONE SUCCESSFULLY!!!");
				printf("\n\n =====================THANKYOU==================");
		system("cls");
	}else if(n=='2'){
			printf("*****************Welcome To Economy Class Cancellation*******************");
			FILE *file = fopen("economy seats.txt", "r");
			while(fscanf(file, "%d", &num1)!=EOF)
	{
        total_seats_eco[i] = num1;
        i++;
    }
    fclose(file);
    for(i=0;i<10;i++)
	{
    	if (total_seats_eco[i]!=0)
		{
			seat_available_eco[SAL1]=i+1;
        	SAL1++;
		}	
	}
	total1=SAL1/2;
	printf("\n\nNumber of Seats Want to Cancel = ");
		scanf("%d",&sn1);
		int xx=0;
		for (i=0;i<sn1;i++)
		{
			start1:
			printf("\n\t %d.Enter Seat Number = ",i+1);
			scanf("%d",&seatno1);
			int count1=0;
			for(int j=0;j<total1;j++){
				if(seatno1==seat_available_eco[j])
				{
					count1++;
					seat_nos_eco[xx]=seatno1;
					xx++;
				}
				
			}
			if(count1==1){
				;
			}
			else{
				printf("\n\tInvalid Cancellation\n");
				goto start1;
			}
			for(i=0;i<sn1;i++){
			int a1=0;
			a1=seat_nos_eco[i]-1;
			total_seats_eco[a1]=0;
		}
		FILE *f = fopen("economy seats.txt", "w");
		for(i=0;i<10;i++)
		fprintf(f, "%d\n", total_seats_eco[i]);
	    fclose(f); 
		}
		printf("\nCANCELLATION HAVE BEEN DONE SUCCESSFULLY!!!");
		printf("\n\n =====================THANKYOU==================");
		system("cls");
	}
}
void distance(){

	char city[100];
	int i,j;
	char ch;
	char choice;
	
//	system("cls");
//	start:
		 
		 printf("\n\n\t\t ===================WELCOME TO AIRLINES DISTANCE DETAILS==========================");
	
//	   a:
	printf("\n\nPress 'I' for International and 'D' for Domestic:");
	
		fflush(stdin);
	scanf("%c",&ch);
	
	fflush(stdin);
//	if(ch==0);
//	exit(0);
      switch(ch){
      	
      	  case  'I':
           	system("cls");
           	
    printf("\n\n\t\t======== WELCOME TO INTERNATIONAL DISTANCE DETAILS =========");
	printf("\n-Plane.Code\t\t\tDestinations\t\t\n");
	printf("\n1-PK-1001\t\tKarachi to Islamabad\t\t\t");
	printf("\n2-PK-1002\t\tIslamabad To Karachi\t\t\t");
	printf("\n3-PK-1003\t\tKarachi To Lahore\t\t\t");
	printf("\n4-PK-1004\t\tLahore To Karachi\t\t\t");
	printf("\n5-PK-1005\t\tKarachi To Multan\t\t\t");
	printf("\n6-PK-1006\t\tMultan To Karachi\t\t\t");
    printf("\n7-PK-1007\t\tKarachi To Faisalabad\t\t\t");	
    printf("\n8-PK-1008\t\tFaisalabad To Karachi\t\t\t");
    printf("\n9-PK-1009\t\tKarachi To Peshawar\t\t\t");
    printf("\n10-PK-1010\t\tPeshawar To Karachi\t\t\t\n");

        printf("\n\nPress AnY List Number  to know details about Destinations.");
         scanf("%d",&i);
    
           
           
	 	

//	 srt:    
        if(i==1 || i==2){
    	printf("\nKarachi\t\tto\tIslamabad");
    	printf("\nIslamabad\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 13000 ft.");
    	printf("\n\nAnd distance to be travelled is 1,479.1 km ");
    	printf("\n\nTravel time will be 2 Hours 0 Minutes.");
    	getch();
    	
//    	goto start;
	}
	if(i==3 || i==4){
    	printf("\nKarachi\tto\tLahore");
    	printf("\nLahore\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 8000 ft");
    	printf("\n\nAnd distance to be travelled is 1,342.8 km");
    	printf("\n\nTravel time will be 1 Hour 50 Minutes.");
	        	getch();
	
	}
	if(i==5 || i==6){
    	printf("\nKarachi\t\tto\tMultan");
    	printf("\nMultan\t\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 8500 ft.");
    	printf("\n\nAnd distance to be travelled is 937.1 km");
    	printf("\n\nTravel time will be 1 Hour 25 Minutes.");
	        	getch();    	
	
	}
	if(i==7 || i==8){
    	printf("\nKarachi\t\tto\tFaisalabad");
    	printf("\nFaisalabad\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 9500 ft.");
    	printf("\n\nAnd distance to be travelled is 1,166.2 km");
    	printf("\n\nTravel time will be 1 Hour 45 Minutes.");
	       	getch();
	}
	if(i==9 || i==10){
    	printf("\nKarachi\t\tto\tPeshawar");
    	printf("\nPeshawar\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 11000.");
    	printf("\n\nAnd distance to be travelled is 1,359.3 km");
    	printf("\n\nTravel time will be 1 hour 55 Minutes.");
	    
	        	getch();
	
	}

//        printf("\n\n\ Press Enter to Go back to Main Menu.");
//		ch=getche();
//		if(ch=='y'){
//         exit(0);
//		}
		
//		else
//		printf("\n\n Press ESC to Back to Main Menu :");
//		ch=getch();
//		if(ch==27){
//	    	}
//		 
//        goto start;  
         
         break;
         case 'D':

        

        	
       system("cls"); 	
            printf("\n\n\t\t======== WELCOME TO DOMESTIC DISTANCE DETAILS =========");
    printf("\nPlane.Code\t\t\tDestinations");
	printf("\n1-PK-1011\t\tKarachi to Dubai\t\t\t");
	printf("\n2-PK-1012\t\tDubai To Karachi\t\t\t");
	printf("\n3-PK-1013\t\tKarachi To Muscat\t\t\t");
	printf("\n4-PK-1014\t\tMuscat To Karachi\t\t\t");
	printf("\n5-PK-1015\t\tKarachi To London\t\t\t");
	printf("\n6-PK-1016\t\tLondon To Karachi\t\t\t");
    printf("\n7-PK-1017\t\tKarachi To Toronto\t\t\t");	
    printf("\n8-PK-1018\t\tToronto To Karachi\t\t\t");
    printf("\n9-PK-1019\t\tKarachi To New York\t\t\t");
    printf("\n10-PK-1020\t\tNew York To Karachi\t\t\t");
 
    printf("\n\nPress AnY List Number  to know details about Destinations.");
    scanf("%d",&j);
     if(j==1 || j==2){
        printf("\n\nKarachi\t\tto\tDubai");
    	printf("\nDubai\t\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 13,500 ft.");
    	printf("\n\nAnd distance to be travelled is 4,101.5 km ");
    	printf("\n\nTravel time will be 2 Hours 5 Minutes.");
         
             	getch();
	 
	 }
     if(j==3 || j==4){
        printf("\n\nKarachi\t\tto\tMusqat");
    	printf("\nMusqat\t\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 15,000 ft.");
    	printf("\n\nAnd distance to be travelled is 4,429.1 km ");
    	printf("\n\nTravel time will be 2 Hours 45 Minutes.");
     
	        	getch();
	 }
     if(j==5 || j==6){
        printf("\n\nKarachi\t\tto\tLondon");
    	printf("\nLondon\t\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 25,000 ft.");
    	printf("\n\nAnd distance to be travelled is 7,937.8 km ");
    	printf("\n\nTravel time will be 7 Hours 45 Minutes.");
      
          	getch();
 
 }
     if(j==7 || j==8){
        printf("\n\nKarachi\t\tto\tToronto");
    	printf("\nToronto\t\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 30,000 ft.");
    	printf("\n\nAnd distance to be travelled is 11,643.1 km ");
    	printf("\n\nTravel time will be 13 Hours 30 Minutes.");
         	getch();
	    
	 }
     
     if(j==9 || j==10){
        printf("\n\nKarachi\t\tto\tNew York");
    	printf("\nNew York\tto\tKarachi");
    	printf("\n\nPlane will fly at the height of 30,000 ft.");
    	printf("\n\nAnd distance to be travelled is 11,672.1 km ");
    	printf("\n\nTravel time will be 15 Hours 35 Minutes plus one destination stop.");
         
         
             	getch();
	 
	 }
     
//     printf("\n\n\ Press Enter to Go back to Main Menu :");
//		ch=getche();
//		if(ch=='y'){
//         exit(0);
//		}
	 
//          goto start;
         break;  
//         exit(0);
      default:
      	printf("\n\n Please Enter a Valid Detail:");
//      	goto a;
}
}
void delay (unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void load(){ 
          
	   printf("\n\n");
       delay(1000);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       printf("=");
              delay(100);
       

}
void loop_load(){
				printf("\n");
			int i;
			
			for(i=1;i<=195;i++){
				printf("\xDB");
//				printticket()

				delay(15);
			}
}

void airport_detail()
{
	int select;
	char c;
	begin:
				system("cls");
	printf("________________________________________<WELCOME TO AIRPORT DETAILS SECTION>_________________________________________\n\n\n");
	printf("            ( INTERNATIONAL AIRPORTS )\n\n\n");

	printf("1)DUBAI\n2)MUSCAT\n3)LONDON\n4)TORONTO\n5)NEWYORK\n");
		printf("_______________________________________________________________\n\n");
	printf("              ( DOMESTIC AIRPORTS )\n\n\n");

	printf("6)KARACHI\n7)ISLAMABAD\n8)LAHORE\n9)MULTAN\n10)FAISALABAD\n11)PESHAWAR \n MAIN MENU(M/N)\n");
		printf("_______________________________________________________________\n\n");
	printf("Please Enter Your Desired Choice:\n>>");
	scanf("%d",&select);
	system("cls");
	switch(select)
	{
	case 1:
		
			printf("       ________DUBAI International Airport___________\n\n");
			printf("Dubai International Airport is the primary international airport serving Dubai, \nUnited Arab Emirates and is the world's busiest airport by international passenger traffic\n");
			printf("Address: Dubai - United Arab Emirates\n\n");
			printf("Code: DXB\n\n");
			printf("Phone: +971 4 224 5555\n\n");
			printf("Owner: Dubai\n\n");
			printf("Passenger count: 88,242,099\n\n");
			printf("Did you know: Dubai International Airport is the second-busiest airport in Asia by total passengers annually (83,654,250)\n");
			printf("Return to Airport Details(y/n):");
			break;
            printf("\n\n Return to Main Menu?\nPress ESC ");
			scanf("%c",&c);
//			ch=getche();
//			cha/r ch;
//			if()
			if(c=='y')
			{
			system("cls");
			goto begin;
		}
			else if(c=='n'){
			break;
			}
//			else 
//			goto ;
			
			
			
			
	case 2:
		printf("             ___________MUSCAT International Aiport_______________\n\n");
	        printf("Muscat International Airport, formerly Seeb International Airport, is the main international airport in Oman and is situated 32 km from the old city and capital Muscat within the Muscat metropolitan area\n");
			printf("Address: Muscat, Oman\n\n");
			printf("Code: MCT\n\n");
			printf("Phone: +968 24 519223\n\n");
			printf("Hub for: Oman Air; SalamAir\n\n");
			break;
	printf("\n\nReturn to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 3:
		printf("          ______________LONDON International Airport_____________\n\n");
            printf("London International Airport is located 5 nautical miles northeast of the city of London, Ontario, Canada. In 2016, the airport handled 514,685 passengers, and, in 2011, was the 20th busiest in Canada in terms of aircraft movements, with 94,747\n");
            printf("Address: 1750 Crumlin Rd, London, ON N5V 3B6, Canada\n\n");
            printf("Code: YXU\n\n");
            printf("Province: Ontario\n\n");
            printf("Phone: +1 519-452-4015\n\n");
    break;
	printf("\n\nReturn to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 4:
		printf("            _______________TORONTO International Airport______________\n\n");
	        printf("Toronto Pearson International Airport, officially named Lester B. Pearson International Airport, is an international airport that serves the city of Toronto, Ontario, Canada, the Greater Toronto Area, and the Golden Horseshoe\n");
			printf("Address: 6301 Silver Dart Dr, Mississauga, ON L5P 1B2, Canada\n\n");
			printf("Code: YYZ\n\n");
			printf("Province: Ontario\n\n");
			printf("Phone: +1 416-247-7678\n\n");
			printf("Did you know: Toronto Pearson International Airport is the busiest airport in Canada by total passengers annually\n");        
     break;
	 printf("\n\nReturn to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
    case 5:
    	printf("             _________________NEW-YORK International Airport_______________\n\n"); 
    	    printf("John F. Kennedy International Airport, often referred to as Kennedy Airport, or simply JFK, is the primary international airport serving New York City\n");
    	    printf("Address: Queens, NY 11430, USA\n\n");
    	    printf("Code: JFK\n\n");
    	    printf("Phone: +1 718-244-4444\n\n");
    	    printf("Borough: Queens\n\n");
    	    printf("Did you know: John F. Kennedy International Airport is the fifth-busiest airport in North America by passengers (56,827,154).\n");
    break;
	printf("return to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 6:
		printf("                   _______________KARACHI International Airport___________________\n\n");
		printf("Name:Jinnah International Airport\n");
	        printf("Jinnah International Airport is Pakistan's largest and busiest international and domestic airport. Located in Karachi, the largest city of Pakistan and capital of the province of Sindh, it is named after Muhammad Ali Jinnah, the founder of Pakistan.\n");
			printf("Address: Airport Road Karachi\n\n");
			printf("Code: KHI\n\n");
			printf("Phone: (021) 34579126\n\n");
			printf("Hub for: airblue, Pakistan International Airlines, Shaheen Air, MORE\n\n");
			printf("Elevation: 30 m\n\n");	    
    break;
	printf("return to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 7:
		printf("                     __________________ISLAMABAD International Airport__________________\n\n");
		printf("Name:Benazir Bhutto International Airport\n");
    	    printf("Benazir Bhutto International Airport is the third-largest airport in Pakistan, serving the capital Islamabad and its twin city Rawalpindi in the province of Punjab\n");
    	    printf("Address: Airport Road Rawalpindi 46-200\n\n");
    	    printf("Code: ISB\n\n");
    	    printf("Phone: (051) 99280300\n\n");
    	    printf("Owner: Government of Pakistan\n\n");
    break;
	printf("return to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 8:
		
		printf("                  __________________LAHORE International Airport______________________\n\n");
	        printf("Name:Allama Iqbal International Airport\n");
			printf("Allama Iqbal International Airport is the second largest civil airport in Pakistan, serving Lahore, the capital of Punjab province as well a large portion of the travellers from the Punjab province\n");
			printf("Address: Airport Road? Lahore 54000\n\n");
			printf("Code: LHE\n\n");
			printf("Phone: (042) 99031000\n\n");
			printf("Serves: Lahore\n\n");
			printf("Elevation: 213 m\n\n");	    
	break;
	printf("return to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 9:
		printf("                  __________________MULTAN International Airport___________________\n\n");
			printf("Multan International Airport is situated 4 km west of the city Multan in Punjab, Pakistan. The airport is southern Punjab's largest and busiest airport\n");
		    printf("Address: Airport Road? Multan 60000\n\n");
		    printf("Code: MUX\n\n");
		    printf("Phone: (061) 9200301\n\n");
		    printf("Owner: Government of Pakistan\n\n");
    break;
	printf("return to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 10:
		printf("                     ___________________FAISALABAD International Airport______________________\n\n");
			printf("Faisalabad International Airport is an international airport and standby Pakistan Air Force military base situated on Jhang Road, 10 kilometres south west from the city centre of Faisalabad, in the Punjab province of Pakistan.\n");
    	    printf("Address: Airport Rd, Faisalabad\n\n");
    	    printf("Code: LYP\n\n");
    	    printf("Phone: (041) 111 222 114\n\n");
    	    printf("Serves: Faisalabad, Tandlianwala, Jaranwala, Jhang, Chiniot, MORE\n\n");
    break;
	printf("return to Airport Details(y/n):");
			scanf("%c",&c);
	if(c=='y')
			goto begin;
			else if(c=='n')
			break;
	case 11:
		printf("                  _________________PESHAWAR International Airport_____________________\n\n");
		printf("Name:Bacha Khan International Airport\n");
    	    printf("Bacha Khan International Airport, previously called Peshawar International Airport, is an international airport located in the city of Peshawar in the Khyber Pakhtunkhwa province of Pakistan\n");
    	    printf("Address: Airport Avenue Peshawar\n\n");
    	    printf("Code: PEW\n\n");
    	    printf("Serves: Peshawar\n\n");
    	    printf("Elevation: 353 m\n\n");
    	    break;
			printf("return to Airport Details(y/n):");
			scanf("%c",&c);
			if(c=='y'){
			
			goto begin;
			}
			
			else if(c=='n'){
				
			okay:
			break;
		}
            default:
	
		printf("\n\nPlease Enter a Valid Choice.");
//		printf("\n\n Return to Airport Details(y/n):");
//		char a;
//			scanf("%c",&a);
//	     	if(a=='y'){
//			 goto begin;
//			 }
//			else if(c=='n')
//			break;
//		    
}
		printf("\n\n Return to Main Menu? PRESS ANY KEY.");
		printf("\n\n Return to Airport Details(y/n):");
		char ch;
		ch=getche();
		if(ch=='y'){
		getch(); 
goto begin;
//else 
//break;
}

//else if(ch=='n')
//exit(0);
char h;
ch=getche();
if(h=='m'){
exit(0);
}
else
return;
//break;
//char a;
//			scanf("%c",&a);
//	     	if(a=='y'){
//			 goto start;
//			 }
//			else if(c=='n')
			
		
}

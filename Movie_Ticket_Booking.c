#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void dashboard();
void ADMINISTRATOR();
void seats();
void default_key();
void seating();

main()
{       
        FILE *fptr;
        int m1, m2, m3, m4, m5;
        char mov[100];
        char ch='A,a,B,b,C,c,D,d,E,e,R,r,X,x',h,o;
        int tm1=5,tm2=5,tm3=5,i=1,n,seat,row,mo_no,ticket_code;
        char user_name[10], *admin_name = "admin", user_password[5], *admin_password = "ds";
	int main_menu, movie_select, theater_select, menu_main, edit_movie, edit_theater, edit_time, user_choice, choose_by_time, select_movie;
        
        main_menu:
        system("clear");
        getchar();
        printf("\n\t\t\t\t\t====================================");
        printf("\n\t\t\t\t\t||                                ||");
        printf("\n\t\t\t\t\t||  (((((((((((((())))))))))))))  ||");
        printf("\n\t\t\t\t\t||  ((((( ---------------- )))))  ||");
        printf("\n\t\t\t\t\t||    ((( | BOOK_MY_SHOW | )))    ||");
        printf("\n\t\t\t\t\t||  ((((( ---------------- )))))  ||");
        printf("\n\t\t\t\t\t||  (((((((((((((())))))))))))))  ||");
        printf("\n\t\t\t\t\t||                                ||");  
        printf("\n\t\t\t\t\t====================================");
                
	printf("\n\n\n\n\n\t\t\t\t\t ENTER YOUR NAME : ");
	gets(user_name);
	
	if(strcmp(user_name, admin_name) == 0)
	{
	        printf("\n\t\t\t\t\t Enter the PASSWORD :: ");
	        gets(user_password);
	        
	        if(strcmp(user_password, admin_password) == 0)
	        {
	                while(1)
	                {
                                ADMINISTRATOR();
                                menu_main:
                                system("clear");                        
                                printf("\n\n\n\n\n\t\t\t\tPRESS...");
                                printf("\n\t\t\t\t\t 1_FOR_INSERT_1st_MOVIE");
                                printf("\n\t\t\t\t\t 2_FOR_INSERT_2nd_MOVIE");
                                printf("\n\t\t\t\t\t 3_FOR_INSERT_3rd_MOVIE");
                                printf("\n\t\t\t\t\t 4_FOR_INSERT_4th_MOVIE");
                                printf("\n\t\t\t\t\t 5_FOR_INSERT_5th_MOVIE");
                                printf("\n\t\t\t\t\t 9_EXIT");
		                printf("\n\t\t\t\t\t\t\t\t PRESS_0_TO_RETURN_MAIN_MENU...");
                                scanf("%d",&movie_select);
                                switch(movie_select)
                                {
                                        case 9: 
                                                return 0;
                                                
			                case 0:
				                goto main_menu;
				                
		                        case 1:
		                                system("clear");
		                                fptr = (fopen("movie1.txt", "w"));
		                                printf("\n\t\t\t Enter the Movie : ");
		                                scanf("%s",&mov);
		                                insertmovie(mov);
		                                fprintf(fptr,"%s",mov);
		                                fclose(fptr);
		                            goto menu_main;

                                        case 2:
		                                system("clear");
		                                fptr = (fopen("movie2.txt", "w"));
		                                printf("\n\t\t\t Enter the Movie : ");
		                                scanf("%s",&mov);
		                                insertmovie(mov);
		                                fprintf(fptr,"%s",mov);
		                                fclose(fptr);
		                            goto menu_main;
		                        
		                        case 3:
		                                system("clear");
		                                fptr = (fopen("movie3.txt", "w"));
		                                printf("\n\t\t\t Enter the Movie : ");
		                                scanf("%s",&mov);
		                                insertmovie(mov);
		                                fprintf(fptr,"%s",mov);
		                                fclose(fptr);
		                            goto menu_main;
		                        
		                        case 4:
		                                system("clear");
		                                fptr = (fopen("movie4.txt", "w"));
		                                printf("\n\t\t\t Enter the Movie : ");
		                                scanf("%s",&mov);
		                                insertmovie(mov);
		                                fprintf(fptr,"%s",mov);
		                                fclose(fptr);
		                            goto menu_main;
		                            
		                        case 5:
		                                system("clear");
		                                fptr = (fopen("movie5.txt", "w"));
		                                printf("\n\t\t\t Enter the Movie : ");
		                                scanf("%s",&mov);
		                                insertmovie(mov);
		                                fprintf(fptr,"%s",mov);
		                                fclose(fptr);
		                            goto menu_main;
                                            
	                                default:
                        		        default_key();
	                                    goto menu_main;
	                                    getchar();
                                }
                        }
                }
                else
                {
                        system("clear");
                        printf("\n \t\t\ttry again letter...");
                        getchar();
                        getchar();
                        goto main_menu;
                }
	}
	else
	{
	       {
	                user_choice:
	                system("clear");
                        dashboard();

                printf("\n---------------------------------------------------------------------------------------------------");
              	printf("\n\t\t Welcome %s ",user_name);
      		printf("\n---------------------------------------------------------------------------------------------------");
                      	
                      	printf("\n\t\t\t\t\t================================");
                      	printf("\n\t\t\t\t\t\tChoose the Movie\n");
                      	printf("\t\t\t\t\t================================");
                      	
                      	fptr = fopen("movie1.txt" , "r");
                        m1 = fgetc(fptr);
                        printf("\n\t\t\t\t\t PRESS~A~For~");
                        while(m1 != EOF)
                        {
                                printf("%c",m1);
                                m1 = fgetc(fptr);
                        }
	                fclose(fptr);
	                
	                fptr = fopen("movie2.txt" , "r");
	                m2 = fgetc(fptr);
                        printf("\n\t\t\t\t\t PRESS~B~For~");
                        while(m2 != EOF)
                        {
                                printf("%c",m2);
                                m2 = fgetc(fptr);
                        }
	                fclose(fptr);
	                
	                fptr = fopen("movie3.txt" , "r");
	                m3 = fgetc(fptr);
                        printf("\n\t\t\t\t\t PRESS~C~For~");
                        while(m3 != EOF)
                        {
                                printf("%c",m3);
                                m3 = fgetc(fptr);
                        }
	                fclose(fptr);
	                
	                fptr = fopen("movie4.txt" , "r");
	                m4 = fgetc(fptr);
                        printf("\n\t\t\t\t\t PRESS~D~For~");
                        while(m4 != EOF)
                        {
                                printf("%c",m4);
                                m4 = fgetc(fptr);
                        }
	                fclose(fptr);
	                
	                fptr = fopen("movie5.txt" , "r");
	                m5 = fgetc(fptr);
                        printf("\n\t\t\t\t\t PRESS~E~For~");
                        while(m5 != EOF)
                        {
                                printf("%c",m5);
                                m5 = fgetc(fptr);
                        }
	                fclose(fptr);
	                printf("\n\t\t\t\t\t--------------------------------");
	                printf("\n\t\t\t\t\t PRESS~R~For~Return to Main Menu");
                      	printf("\n\t\t\t\t\t PRESS~X~For~EXIT");
                      	printf("\n\t\t\t\t\t================================\n");
                      	printf("\n\n");           
                      	scanf("%c",&select_movie);
                      	switch(select_movie)
                      	{
                      	        case 'R':
                      	        case 'r':
                      	                goto main_menu;
                      	                              	        
              	                case 'X':
              	                case 'x':
              	                        return 0;
                      	
                      	        case 'A':
                      	        case 'a':
                                        goto seatbooking;
                      	            
                      	        case 'B':
                      	        case 'b':
                       	                goto seatbooking;
                      	            
                      	        case 'C':
                      	        case 'c':
                      	                goto seatbooking;
                      	            
                      	            
                      	        case 'D':
                      	        case 'd':
                      	                goto seatbooking;
                      	            
                      	        case 'E':
                      	        case 'e':
                      	                goto seatbooking;

                      	        default : default_key();
                      	                goto user_choice;
                      	}
                }
	}

{// SEATING BOOKING
        seatbooking:
        system("clear");
        printf("\n\t\tSHOW TIMINGS FOR TODAY");
        printf("\n\n\n\t\t   1: 10:30AM");
        printf("\n\t\t   2:  2:30PM");
        printf("\n\t\t   3:  5:50PM");
        printf("\n\t\t   4:  8:30PM");
        printf("\n\t\t   5: 11:30PM");

        printf("\n\n\n\t\tSHOW TIME : ");
        scanf("%d",&tm1);
        switch(tm1)
        {
            case 1 :
                   goto select_seats;
                   
            case 2:
                   goto select_seats;
                   
            case 3:
                 goto select_seats;
                 
            case 4 :
                 goto select_seats;
                 
            case 5 :
                 goto select_seats;
           }
}
	
{
        select_seats:        
        seating();
        printf("\n\n\tDO YOU WANT ALL THE SEATS IN SAME ROW ? (Y/N)");
        scanf("%c",&o);
        scanf("%c",&o);
        if(o=='Y')
        {
            printf("\n\n\tENTER NUMMBER OF SEATS YOU WAN TO BOOK: ");
            scanf("%d",&n);
            printf("\n\n\tROW NAME: ");
            scanf("%c",&row);
            scanf("%c",&row);
            for(i=1;i<=n;i++)
            {
            printf("\n\n\tENTER SEAT NO :");
            scanf("%d",&seat);
            printf("\n\t %d %c selected",seat,row);
            }
            goto recipt;
        }
        else 
        {   row_again_book:
            printf("\n\n\tROW NAME: ");
            scanf("%c",&row);
            scanf("%c",&row);
            printf("\n\n\tENTER NUMMBER OF SEATS YOU WAN TO BOOK IN THIS PARTICULAR ROW: ");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
            printf("\n\n\tENTER SEAT NO :");
            scanf("%d",&seat);
            printf("\n\t %d %c selected",seat,row);
            }   
            printf("\n\n\tDO YOU WANT TO CONTINUE BOOKING  ? (Y/N)");
            scanf("%c",&h);
            scanf("%c",&h);
            if(h=='Y')
            {
                goto row_again_book;
            }
            else if(h=='N')
            {
                recipt:
                system("clear");
                printf("\n\t\t Enter your phone number : ");
                scanf("%d",&mo_no);
                ticket_code = mo_no + 12212121;
                system("clear");
                printf("\n\n\t==========================================================");
                printf("\n\t>>\t\t\t\t\t\t\t<<");
                printf("\n\t>>\t\t\t  RECIPT \t\t\t<<\n\t>>\t\t\t  ======\t\t\t<<\n");
                printf("\n\t  \tName        : %s \n",user_name);
                printf("\n\t  \tMOBILE_NO   : %d",mo_no);
                printf("\n\t  \tTicket Code : %d",ticket_code);
                printf("\n\n\t>>\tPAY & PROVIDE THIS SLIP AT TICKET COUNTER\t<<");
                printf("\n\t>>\t\t     ENJOY THE MOVIE\t\t\t<<");
                printf("\n\t>>\t\t\t\t\t\t\t<<");
                printf("\n\t==========================================================\n\n");
            }

        }
}
	


}

void dashboard()
{
	printf("\n |||          ||| |||||||| ||          || |||||| ||||||||  |||||| |||||| |||          ||| |||||||| ");
	printf("\n ||||        |||| ||    ||  ||        ||    ||   ||          ||     ||   ||||        |||| ||       ");
	printf("\n || ||      || || ||    ||   ||      ||     ||   ||          ||     ||   || ||      || || ||       ");
	printf("\n ||  ||    ||  || ||    ||    ||    ||      ||   ||||||||    ||     ||   ||  ||    ||  || |||||||| ");
	printf("\n ||   ||  ||   || ||    ||     ||  ||       ||   ||          ||     ||   ||   ||  ||   || ||       ");
	printf("\n ||    ||||    || ||    ||      ||||        ||   ||          ||     ||   ||    ||||    || ||       ");
	printf("\n ||     ||     || ||||||||       ||       |||||| ||||||||    ||   |||||| ||     ||     || |||||||| ");
}


void ADMINISTRATOR()
{
        printf("\n |||||| |||||| ||       || |||||| ||   || |||||| |||||| |||||| |||||| |||||| |||||| |||||| ||||||");
        printf("\n ||  ||  || || ||>     <||   ||   ||^  ||   ||   ||       ||   ||  || ||  ||   ||   ||  || ||  ||");
        printf("\n ||||||  || || || >   < ||   ||   || ^ ||   ||   ||||||   ||   |||||| ||||||   ||   ||  || ||||||");
        printf("\n ||  ||  || || ||  > <  ||   ||   ||  ^||   ||       ||   ||   ||!!   ||  ||   ||   ||  || ||!!  ");
        printf("\n ||  || |||||| ||   *   || |||||| ||   || |||||| ||||||   ||   ||  !! ||  ||   ||   |||||| ||  !!");
}

void seats()
{
        system("clear");
        printf("\n\t*****************************************************************\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t____________________________________________________\t*\n");
        printf("\t*\t| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |\t*\n");
        printf("\t*\t| A | A | A | A | A | A | A | A | A |  A |  A |  A |\t*\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| B | B |   | B | B | B | B | B | B |    | B  |  B |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| C | C |   | C | C | C | C | C | C |    | C  |  C |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| D | D |   | D | D | D | D | D | D |    | D  |  D |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| E | E |   | E | E | E | E | E | E |    | E  |  E |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n\t*\t\t\t\t\t\t\t\t*");
        printf("\n\t*\t\t[[[[[[[[[[[[[SCREEN]]]]]]]]]]]]]\t\t*\n");
        printf("\t*\t\t\t\t\t\t\t\t*\n\t*****************************************************************\n\n");
}

void default_key()
{
        system("clear");
        printf("\n\n\n\n\n\t\t\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("\n\t\t\t\t\t !! PLEASE_ENTER_VALID_OPTION !!");
        printf("\n\t\t\t\t\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("\n\n\t\t\t\t\t\t\t\t PRESS ENTER KEY...");
        getchar();
        getchar();
}

struct node
{
        char data[100];
        struct node *pre;
        struct node *nxt;
}*head, *last;

void insertmovie(char mov[100])
{
        struct node *var, *temp;
        var = (struct node *)malloc(sizeof(struct node));
        strncpy(var->data, mov, 100);
        
        if(head == NULL)
        {
                head=var;
                head->pre=NULL;
                head->nxt=NULL;
                last=head;
        }
           else
        {
                temp=var;
                temp->pre=NULL;
                temp->nxt=head;
                head->pre=temp;
                head=temp;
        }
}

void display()
{
	struct node *tr=head;
	if(head == NULL)
	{
		printf("\n\t\t\t\t\t  Movie not found...\n\n");
	}
	else
	{
		while(tr != NULL)
		{
			printf("\t\t\t\t\t  %s \n",tr->data);
			tr = tr->nxt;
		}
		printf("\n");
	}
}

void seating()
{
        printf("\n\n\n\n");
        system("clear");
        printf("\n\t*****************************************************************\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t____________________________________________________\t*\n");
        printf("\t*\t| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |\t*\n");
        printf("\t*\t| A | A | A | A | A | A | A | A | A |  A |  A |  A |\t*\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| B | B |   | B | B | B | B | B | B |    | B  |  B |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| C | C |   | C | C | C | C | C | C |    | C  |  C |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| D | D |   | D | D | D | D | D | D |    | D  |  D |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n");
        printf("\t*\t| 1 | 2 |   | 3 | 4 | 5 | 6 | 7 | 8 |    | 9  | 10 |\t*\t\n");
        printf("\t*\t| E | E |   | E | E | E | E | E | E |    | E  |  E |\t*\t\n");
        printf("\t*\t____________________________________________________\t*\n\t*\t\t\t\t\t\t\t\t*\n\t*\t\t\t\t\t\t\t\t*");
        printf("\n\t*\t\t[[[[[[[[[[[[[SCREEN]]]]]]]]]]]]]\t\t*\n");
        printf("\t*\t\t\t\t\t\t\t\t*\n\t*****************************************************************\n\n");
}

#include <stdio.h>
int main() {
    int days,i,try=3,gtry=3,b=1,a=1,query, roomnumber[10],numofguest,gpass, apass,groom,gchoice,choice,e;
    double total;
    char name[10];
    printf("************************Welcome to Mayfair Hotel************************\n");
    printf("\n");
    while (a>0){
        printf("Press 1 for Admin\npress 2 for Guest\nPress 3 to exit the terminal\n");
        scanf("%d",&choice);
        if (choice==1){
            try=3;
            while (try>0){
                printf("Enter The Admin Login Credentials\n");
                scanf("%d",&apass);
                if (apass==822){       //Admin Password
                    printf("******************** Welcome To Admin Portal ********************\n");
                    printf("\n");
                    printf("The current price of Rooms are 4600 per night\n");
                    printf("Enter the number of guest to add\n");
                    scanf("%d",&numofguest);
                    for (i=0;i<numofguest;i++){
                        printf("Enter the name of guest\n");
                        scanf("%s",&name[i]);
                        roomnumber[i]=100+i;
                        printf("enter the number of days guest is staying\n");
                        scanf("%d",&days);
                        total=days*4600;
                        printf("Your total amount is %.0f\n",total);
                    }
                break;
                }
                else{
                    printf("Invalid Credentials\n");
                    try--;
                    printf("number of tries left %d\n",try);
                }
            }
            if (try==0)(printf("Program ended\n"));
        }
        else if(choice==2){
            gtry=3;
            while (gtry>0){
                printf("Enter The Guest Login Credentials\n");
                scanf("%d",&gpass);
                if (gpass==1234){     //Guest Password
                    printf("******************** Welcome To Guest Portal ********************\n");
                    printf("The guest initials are \n");
                    for (i=0;i<numofguest;i++){ 
                        printf(" %c ",name[i]);
                    }
                    printf("\n");
                    printf("the guest room number are\n");
                    for (i=0;i<numofguest;i++){ 
                        printf(" %d ",roomnumber[i]);
                    }
                    printf("\n");
                    printf("Please Enter your room number for further preceding \n");
                    scanf("%d",&groom);
                    for (i=0;i<numofguest;i++){
                        if (groom==roomnumber[i]){
                            while (b>0){
                                printf("press 1 to know your wifi password\npress 2 to raise a query\npress 3 for in-room dining\npress 4 to exit\n");
                                scanf("%d",&gchoice); 
                                switch(gchoice){
                                    case 1:
                                        printf("WIFI password is your room number that is %d",roomnumber[i]);
                                        break;
                                    case 2:
                                        printf("Press 1 for electrical issue\nPress 2 for plumbing issue\nPress 3 for room cleaning\n ");
                                        scanf("%d",&query);
                                        printf("Your query has been succesfully registered we will get back to you shortly\n");
                                        break;
                                    case 3:
                                        printf("Your request has been raised our staff will be assigned to you shortly\n");
                                        break;
                                    case 4:
                                        b=0;
                                        break;
                                }
                            }
                        }
                        else(printf("Invalid room taking back to the menu\n"));

                    }
                    break;
                }
                else{
                    printf("Invalid Credentials\n");
                    gtry--;
                    printf("number of tries left %d\n",gtry);
                }
            }
        }
        else if(choice==3){
            printf("Thank You for visiting Mayfair Hope to serve you soon\n");
            a=0;
        }
        else{
            printf("Invalid choice\n");
        }
        
    }
}

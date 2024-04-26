#include<stdio.h>
#include<stdio.h>
#include<string.h>

struct MightyAirways{
    char departing[255];
    char arriving[255];
    int departdate;
    int arrivedate;
    int passengers;
    char name[255];
    char email[255];
    int passportNo;
    int phone;
    int age;
};

int main(){
    int ticket,OR,ID,confirmation=0;


    printf("Hello, Welcome to __ Transport Services.\nWhat can I do for you today?\nPress 1 to book a airplane ticket\nPress 2 to book an railway ticket\nPress 3 to book a metro ticket\nPress 4 to hail an outstation taxi\nPress 5 to book a tram ticket");
    printf("\nEnter which service you would like(1-5): ");
    scanf("%d", &ticket);
    switch(1-5){
        case 1:
        printf("Welcome to MightyAirways!. How can I help you today?");
        printf("Select between International and Domestic. Press 1 to book a international flight or Press 2 to book a domestic flight");
        printf("Enter type of flight(1-2): ");
        scanf("%d", &ID);
        break;

            switch(1-2){
                case 1: 
                printf("Select between Oneway or Roundtrip. Press 1 to book roundtrip ticket or Press 2 to book a one-way ticket.");
                printf("Enter type of ticket(1-2): ");
                scanf("%d", &OR);
                break;
                case 2: 
                printf("Select between Oneway or Roundtrip. Press 1 to book roundtrip ticket or Press 2 to book a one-way ticket.");
                printf("Enter type of ticket(1-2): ");
                scanf("%d", &OR);
                break;
                    switch(1-2){
                        case 1:
                        struct MightyAirways s1;
                        printf("Enter departing country: ");
                        fgets(s1.departing, sizeof(s1.departing), stdin);
                        printf("Enter departing date(DD MM YY): ");
                        scanf("%d", &s1.departdate);
                        printf("Enter arrival country: ");
                        fgets(s1.arriving, sizeof(s1.arriving), stdin);
                        printf("Enter arriving date(DD MM YY): ");
                        scanf("%d", &s1.arrivedate);
                        printf("Select number of passengers: ");
                        scanf("%d", s1.passengers);
                        for(int i=0; i<s1.passengers; i++){
                            printf("Enter details of the passenger: \n");
                            printf("Name: ");
                            fgets(s1.name, sizeof(s1.name), stdin);
                            printf("Phone No: ");
                            scanf("%d",&s1.phone);
                            printf("Email ID: ");
                            fgets(s1.email, sizeof(s1.email), stdin);
                            printf("Passport number: ");
                            scanf("%d", s1.passportNo);
                            printf("Enter Age: ");
                            scanf("%d", &s1.age);
                            if(s1.age<18 && s1.passengers == 1){
                                printf("You are not allowed to fly alone.");
                            }else{
                                continue;
                            }
                        }
                        printf("Are you sure you want to book a flight for %d passengers to %s on %d and return back on %d?", s1.passengers,s1.departing, s1.departdate, s1.arrivedate);
                        printf("Press 1 to Confirm your booking or Press 0 to Cancel: ");
                        scanf("%d", &confirmation);
                        if(confirmation > 1)
                        {
                        printf("Your booking is confirmed!");
                        printf("Booking Summary: \n");
                        printf("Roundtrip\nFLIGHT NO. SG2619J\nNo. of Passengers: %d\nDestination: %s\nDate of Departure: %d\nDate of Arrival: %d\n",s1.passengers,s1.departing,s1.departdate,s1.arrivedate);
                        printf("Your tickets will be sent to your respective email address.\nHave a great flight with MightyAirways!");
                        }
                        else{
                            printf("The process has been cancelled. Please let us know what went wrong.");                
                        }
                        break;
                    }
            }
    }
}

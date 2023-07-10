#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;



//Declaring variables

int dom_pnr=100;
int int_pnr=200;

// Class for domestic flight booking
class dom_booking{


    //Declaring variables

    protected:
        int d_pnr,dom_passengers,dom_meal_choice;
         char flight_dom[50],dom_meal[20], meal1[20];;
        char date_dom[10];
        char dom_dep[20],dom_arr[20];
        int choice_dom,source,destination;



    public:
        //Function for generating domestic ticket pnr numbers

    void generate_dom_pnr(){

        dom_pnr++;
        d_pnr=dom_pnr;
    };

    // Function for getting domestic travel information from the user

    int travel_details_dom()


    {

        cout << "\nPlease enter date of departure (DD/MM/YY):" <<  endl;
        cin >> date_dom;
        system("CLS");

        cout << "-----------------"<<endl;
        cout<<  "      SOURCE     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.Karachi(1)" << endl ;
        cout <<"2.Lahore(2)" << endl;

        cout <<"3.Islamabad(3)" << endl;
        cout <<"4.Peshawar(4) " << endl;
        cout << "------------------\n"<<endl;
        cout << "Enter your source:" << endl;
        cin >> source;



        cout << "-----------------"<<endl;
        cout<<  "  DESTINATION     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.Germany(1)" << endl;
        cout <<"2.England(2)" << endl;
        cout <<"3.Turkey(3)" << endl;
        cout <<"4.Dubia(4)" << endl;
        cout << "------------------\n"<<endl;
        cout << "Enter your destination :" << endl;
        cin >> destination;



        if((source==1 && destination==2) || (source==2 && destination==1))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "PIA(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "EMIRATES(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SWIFT(3)\t19:00\t\t22:05\t\tRs.6000\n";



        }

        else if((source==1 && destination==3) || (source==3 && destination==1))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\tPIA(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\tEMIRATES(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\tSWIFT(3)\t19:00\t\t22:05\t\tRs.6000\n";
        }

        else if((source==1 && destination==4) || (source==4 && destination==1))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "\PIA(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\EMIRATES(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\SWIFT(3)t18:00\t\t21:05\t\tRs.6000\n";
        }

        else if((source==2 && destination==3) || (source==3 && destination==2))
        {
            cout << "\t \t \tAvailable flights" << endl << endl;
           cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\PIA(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\EMIRATES(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\SWIFT(3)\t18:00\t\t21:05\t\tRs.6000\n";
        }

        else if((source==2 && destination==4) || (source==4 && destination==2))
        {
           cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\PIA(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\EMIRATES(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\SWIFT(3\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if((source==3 && destination==4) || (source==4 && destination==3))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\PIA(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\EMIRATES(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "\SWIFT(3)\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if(source==destination)
        {
            cout << "\nSource and destination are the same.Please enter try again.\n\n\n" << endl;
            return travel_details_dom();
        }
        else
        {
            cout <<"\nYou have entered the wrong input entered.Please try again\n\n\n" << endl;
            return travel_details_dom();
        }

    }







    //Function for selecting domestic flight
    int select_flight_dom()

    {

        cout << "\nEnter your choice : " << endl;
        cin >> choice_dom;



         // switch case
        switch(choice_dom)
        {
          case 1:
                cout << "\nYour travel information"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight name : Air pakistan"<<endl;
                strcpy(flight_dom,"Air pakistan");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(dom_dep,"08:00");
                strcpy(dom_arr,"11:05");


                break;
          case 2:
                cout << "\nYour travel information:"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight name : Karachi"<<endl;
                strcpy(flight_dom,"Karachi");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(dom_dep,"14:00");
                strcpy(dom_arr,"17:05");


                break;
          case 3:
                cout << "\nYour travel information" << endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight name : PIA" << endl;
                strcpy(flight_dom,"SpiceJet");
                cout << "Departure Time : 18:00" << endl;
                cout<<"Arrival Time: 21:05" << endl;
                strcpy(dom_dep,"18:00");
                strcpy(dom_arr,"21:05");


                break;
          default:
                cout << "\nYou have entered the wrong input entered.Try again\n\n\n" << endl;
                return select_flight_dom();
        }
    }



    //Function for selecting domestic flight meal
    int dom_meals(){


        cout<<"---------------------------------------"<<endl;

		cout <<"Please enter your meal preference : "<<endl;

		cout<<"---------------------------------------"<<endl;
		cout << "1.Vegetarian meal(1): Rs.350 \n";
		cout << "2.Non-Vegetarian meal(2) : Rs.450\n";
		cout << "3.No meal(3)\n\n";

		cout <<"Enter your choice :  ";
		cin >> dom_meal_choice;

		while(dom_meal_choice>3 || dom_meal_choice<1){
		cout<<"You have entered the wrong input.Please a number between 1 and 3\n";
		cin>>dom_meal_choice;
		}
		{

		if (dom_meal_choice == 1){
		strcpy(meal1,"vegetarian meal");
		}

		else if (dom_meal_choice == 2){
		strcpy(meal1,"non-Vegetarian meal");
		}

		else{
		strcpy(meal1,"no meal");
		}


		 cout<<"You have chosen "<<meal1<<endl;

        }
    }
};




//Class for international booking
class int_booking
{


    //Declaring variables
    protected:
        int i_pnr,int_passengers,int_meal_choice,int_meal_price;
        char flight_int[20],int_dep[20],int_arr[20],meal2[30],int_meal_choices[20];
        char date_int[20];
        int source_int,destination_int,choice_int;


    public:
        void generate_int_pnr()
        {
            int_pnr++;
           i_pnr=int_pnr;
        }



    // Function for getting international travel information from the user
    int travel_details_int()

    {


        cout << "\nEnter date of departure (DD/MM/YY) :" <<  endl;
        cin>>date_int;
        system("CLS");

        system("CLS");
        cout<<  "\n      SOURCE     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.Dubai(1)" << endl ;
        cout <<"2. Kuala Lumpur(2)" << endl ;

        cout <<"3.Hong Kong(3)" << endl ;
        cout <<"4.Delhi(4) " << endl ;
        cout << "------------------\n"<<endl;
        cout << "Enter your source:" << endl;
        cin >> source_int;



        cout<<  "\n  DESTINATION     "<<endl;
         cout << "-----------------"<<endl;
        cout << "1.Dubai(1)" << endl ;
        cout <<"2. Kuala Lumpur(2)" << endl;

        cout <<"3.Hong Kong(3)" << endl;
        cout <<"4.Delhi(4) " << endl ;
        cout << "------------------\n"<<endl;
        cout << "Enter your destination : \n" << endl;
        cin >> destination_int;



       if((source_int==1 && destination_int==2) || (source_int==2 && destination_int==1))
        {

            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";



        }

        else if((source_int==1 && destination_int==3) || (source_int==3 && destination_int==1))
        {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.23,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.28.340\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.29,320\n";
        }


        else if((source_int==1 && destination_int==4) || (source_int==4 && destination_int==1))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.10,500\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.9,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.10,550\n";

        }

        else if((source_int==2 && destination_int==3) || (source_int==3 && destination_int==2))
        {
          cout << "\t \t \tAvailable flights" << endl;
          cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";
        }


        else if((source_int==2 && destination_int==4) || (source_int==4 && destination_int==2))
        {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Ethiad(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";

        }
        else if((source_int==3 && destination_int==4) || (source_int==4 && destination_int==3))
         {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "Vistara(3)\t22:00\t\t02:10\t\tRs.12,500\n";

        }
        else if(source_int==destination_int)
        {
            cout << "\nSource and destination are the same.Please enter try again.\n\n\n" << endl;
            cout<<"\n\n\n"<<endl;
            return travel_details_int();
        }
        else
        {
            cout <<"\nYou have entered the wrong input entered.Try again\n\n\n" << endl;
            return travel_details_int();
        }
        }





  //Function for selecting international flight

    int select_flight_int()
    {
        cout << "\nEnter your choice : " << endl;
        cin >> choice_int;
        switch(choice_int){

        case 1:
            cout << "\nYour travel information" <<endl;

            cout<<"-----------------------------\n"<<endl;
            cout << "Flight name :Lufthansa" << endl;
            strcpy(flight_int,"Lufthansa");
            cout << "Departure Time: 04:10" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(int_dep,"10:00");
            strcpy(int_arr,"14:05");
            break;
        case 2:
               cout << "\nYour travel information" << endl;
              cout<<"-----------------------------\n"<<endl;
               cout << "Flight name:Emirates" << endl;
               strcpy(flight_int,"Emirates");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(int_dep,"14:00");
               strcpy(int_arr,"18:05");

               break;
        case 3:
            cout << "\nYour travel information" << endl;
            cout<<"-----------------------------\n"<<endl;
            cout << "Flight name:Vistara" << endl;
            strcpy(flight_int,"Vistara");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(int_dep,"18:00");
            strcpy(int_arr,"22:05");
            break;
        default:
            cout << "\nYou have entered the wrong input entered.Try again\n\n\n" << endl;
            return select_flight_int();}

        }




    //Function for selecting international flight meal
    int int_meal(){



        cout<<"------------------"<<endl;

		cout <<"Meal preferences "<<endl;

		cout<<"------------------"<<endl;
		cout << "1.Vegetarian meal(1): Rs.450 \n";
		cout << "2.Non-Vegetarian meal(2) : Rs.500\n";
		cout << "3.No meal(3)\n\n";

		cout <<"Enter your choice :  ";
		cin >> int_meal_choice;

		while(int_meal_choice>3 ||int_meal_choice<1){
		cout<<"You have entered the wrong input.Please enter a number between 1 and 3\n";
		cin>>int_meal_choice;
		}
        {

        if (int_meal_choice== 1){

		strcpy(meal2,"vegetarian meal");
		}

		else if (int_meal_choice == 2){
		strcpy(meal2,"non-vegetarian meal");
		}

		else{
		strcpy(meal2,"no meal");


		}
        }
        cout<<"You have chosen "<<meal2<<endl;

        }

};



//Class passenger inherits the classes dom_booking and int_booking
class passenger: public dom_booking,public int_booking
{


//Declaring variables
protected:
    char name[100],email[50],gender[20],pass_no[30],contact_no[30];

public:

    //Function for getting the details of the passengers

    void passenger_details(int x)


    //if - else statements for domestic and international booking selection

    {
        system("CLS");
         if(x==1)
        { travel_details_dom();
          select_flight_dom();

          dom_meals();
        }
          else
          {  travel_details_int();
             select_flight_int();

             int_meal();
          }

        system("CLS");
        cout << "\n\n\nEnter the required details:\n";
        cout<<"------------------------------------\n"<<endl;
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your email ID :";
        cin >> email;
        cout << "Enter your gender:";
        cin >> gender;
        cout<<"Enter your contact number:";
        cin>>contact_no;
        cout<<"Enter your passport number:";
        cin>>pass_no;
    }

    //Function to display passenger details
    void display_details(){
        system("CLS");
        cout << "\n\nPassenger details\n";
        cout<<"--------------------------------------\n"<<endl;;
        cout << "Name:" <<name<< endl;
        cout << "Gender:" << gender << endl;
        cout << "Email ID:" << email << endl;
        cout << "Contact No.:" << contact_no << endl;
        cout<<"Passport number :"<<pass_no<<endl;
    }


    //Function to get pnr for domestic booking
     int getpnr_dom()
        {
            return d_pnr;
        }


    //Function to get pnr for international booking
     int getpnr_int()
     {
         return i_pnr;
     }


    //Function to display details of domestic booking

     void disp_dom()
     {
         cout<<"PNR :" << d_pnr << endl;
         cout<<"Flight:" << flight_dom << endl;
         cout<<"Name:" <<name << endl;
         cout<<"Boarding date:" << date_dom << endl;
         cout<<"Departure Time:" << dom_dep << endl;
         cout<<"Arrival Time:" << dom_arr<<endl;
         cout<<"Meal choice:"<<meal1<<endl;
     }

     //Function to display details of international booking

      void disp_int()
     {
         cout<<"PNR:" << i_pnr << endl;
         cout<<"Flight:" << flight_int << endl;
         cout<<"Name:" << name<<endl;
         cout<<"Boarding date:" << date_int << endl;
         cout<<"Departure Time:" << int_dep << endl;
         cout<<"Arrival Time:" << int_arr<<endl;
         cout<<"Meal choice:"<<meal2<<endl;
     }

};


//class for payment
class payment{



        //Declaring variables
        protected:
            int choice3,bank,bank1,card,date,cvv,user_id;
            char password[30];

        public:

            //Function for getting and displaying payment details
            void payment_details()

            {

                system("CLS");
                cout << "\n\n\nMode of payment\n";
                cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
                cout << "\n\nEnter your choice :";
                cin >> choice3;
                switch(choice3)
                {
                case 1:
                    cout << "Enter card number:";
                    cin >> card;
                    cout << "Enter expiry date:";
                    cin >> date;
                    cout << "Enter CVV number:";
                    cin >> cvv;
                    cout << "Transaction Successful\n";
                    break;
                case 2:
                    cout << "Enter card number:";
                    cin >> card;
                    cout << "Enter expiry date:";
                    cin >> date;
                    cout << "Transaction Successful\n";
                    break;
                case 3:
                    cout << "\nBanks Available:\n----------- \n1.State bank of pakistan(1) \n2ICICI(2) \n3.Habib Bank(3) \n4.Meezan Bank(4)";
                    cout << "\nSelect your bank:";
                    cin >> bank;

                    cout << "\nYou have selected:" << bank;
                    cout << "\nEnter user id:";
                    cin >> user_id;
                    cout << "Enter password:";
                    cin >> password;
                    cout<<"-----------------------------";
                    cout << "\nTransaction Successful\n";
                    cout<<"-----------------------------";
                    break;
                default:
                    cout << "\nWrong input entered.\nTry again\n";
                    return payment_details();
                }
            }

        };



            // Function to create domestic flight ticket
            void createfile_dom(passenger y)
                {  ofstream file_out("Domestic_flight_details.txt",ios::binary|ios::app);
                    //writing to file
                   file_out.write((char*)&y,sizeof(y));
                   //closing file
                   file_out.close();
                }
            // Function to cancel domestic flight ticket
                void dom_cancelticket(int x)
                {  passenger y;
                    int f=0;
                   ifstream file_in("Domestic_flight_details.txt",ios::binary|ios::app);
                   ofstream file_out("Domestic_flight_details1.txt",ios::binary|ios::app);
                   file_in.read((char *)&y,sizeof(y));
                   while(file_in)
                   {  //checking if pnr exists
                     if(y.getpnr_dom()!=x)
                      file_out.write((char *)&y,sizeof(y));
                      else
                     {    //Calling function to display details
                         y.disp_dom();
                         cout<<"\nYour  ticket has been deleted\n";
                        //Incrementinf f if pnr is found
                         f++;
                     }
                     //reading another record from file
                     file_in.read((char *)&y,sizeof(y));
                   }
                   if(f==0)
                    cout<<"Ticket not found\n";
                   file_out.close();
                   file_in.close();

                    //deleting old file
                   remove("Domestic_flight_details.txt");
                    //renaming new file
                   rename("Domestic_flight_details1.txt","Domestic_flight_details.txt");

                }

                void dom_checkticket(int x)
                {  passenger y;
                   int f=0;
                   ifstream file_in("Domestic_flight_details.txt",ios::binary);
                   file_in.read((char *)&y,sizeof(y));
                   while(file_in)
                   { //checking pnr
                     if(y.getpnr_dom()==x)

                     {cout<<"\nTicket details\n"<<endl;
                      y.disp_dom();

                      f++;
                      break;
                     }
                      //reading another record from the same file
                     file_in.read((char *)&y,sizeof(y));

                   }
                   file_in.close();
                    //if f==0, pnr not found
                   if(f==0)
                   cout<<"This PNR number does not exist"<<endl;

                }
           // Function to create a file for international booking
            void createfile_int(passenger y)
            {  ofstream  file_out("International.txt",ios::binary|ios::app);
                file_out.write((char*)&y,sizeof(y));//writing to file
                file_out.close();//closing file
            }
            // Function to cancel a file for international booking
            void int_cancelticket(int x)
            {  passenger y;
               int f=0;
               ifstream file_in("International.txt",ios::binary|ios::app);
               ofstream  file_out("International1.txt",ios::binary|ios::app);
              file_in.read((char *)&y,sizeof(y));
               while(file_in)
               {
                 if(y.getpnr_int()!=x)
                    //writing to new file;
                  file_out.write((char *)&y,sizeof(y));
                  else
                 {  //Calling function to display details
                     y.disp_int();
                     cout<<"You ticket is being deleted\n";
                    //incrementing f if pnr found
                     f++;
                 }
                 //reading another record from old file
                file_in.read((char *)&y,sizeof(y));
               }
               //if f==0,pnr not found
               if(f==0)
                cout<<"\nTicket not found\n";
               file_in.close();
               file_out.close();
               //deleting old file
               remove("International.txt");
               //renaming new file
               rename("International1.txt","International.txt");

            }


            void int_checkticket(int x)
            {  passenger y;
               int f=0;
               ifstream file_in("International.txt",ios::binary);
              file_in.read((char *)&y,sizeof(y));
               while(file_in)
               {
                 //checking pnr
                 if(y.getpnr_int()==x)
                 {cout<<"\nTicket details\n"<<endl;
                  y.disp_int();
                  f++;
                  break;
                 }
                 //reading another record from the file
                 file_in.read((char *)&y,sizeof(y));

               }
              file_in.close();
              //if f==0, pnr not found
               if(f==0)
               cout<<"This PNR number does not exist"<<endl;

            }








int main(){
    //Creating objects for classes
    class dom_booking d;
    class int_booking i;
    class passenger p;
    class payment pay;

    //Declaring variables
    int choice,choice1,choice2,choice3,input;
    char input1;

    //Do-While loop
    do{
  system("CLS");

 cout<<"AIRLINE RESERVATION SYSTEM"<<endl;
 cout<<"--------------------------------"<<endl;
 cout << "1.Book flight(1) \n2.Cancel fight(2) \n3.Check your flight ticket(3) \n4.Exit(4)" << endl;
 cout<<"--------------------------------"<<endl;
 cout<<"Enter your choice:"<<endl;
 cin>>choice;


 //Switch-Case statements
 switch(choice)
      {
          case 1:
          system("CLS");
              cout<<"Please enter your choice"<<endl;
              cout << "1.Domestic Fights(1)\n2.International Flights(2)" << endl;
              cout << "\nEnter your option" << endl;
              cin >> choice1;


            switch(choice1){

                     //Booking domestic flight

                      case 1:
                            p.generate_dom_pnr();
                            p.passenger_details(1);
                            pay.payment_details();
                            p.display_details();
                            p.disp_dom();
                            createfile_dom(p);
                            break;


                        //Booking international ticket
                       case 2:
                            p.generate_int_pnr();
                            p.passenger_details(2);
                            pay.payment_details();
                            p.display_details();
                            p.disp_int();
                            createfile_int(p);
                            break;

                       default:
                        cout << "Wrong input.\n\nPlease enter 1 for domestic flight booking and 2 for international flight booking" << endl;
                        return main();
                  }
              break;

              //Canceling flight ticket
              case 2:

                  system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                     cout << "\nPlease enter your option" << endl;
                     cin >> choice2;
                      if(choice2==1)
                    {
                       cout << "Enter your PNR number :" << endl;
                       cin>>input;
                       dom_cancelticket(input);
                    }
                     else if(choice2==2)
                   {  cout << "Enter your PNR number :" << endl;
                      cin>>input;
                      int_cancelticket(input);
                   }
                   else
                   {
                       cout << "Wrong input.\n";
                       return main();
                   }
                   break;

              //Displaying booked ticket details
              case 3:
              system("CLS");
                      cout << "\Check your tickets" << endl;
                      cout<<"------------------------"<<endl;
                      cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                      cout << "\nEnter your option :" << endl;
                      cin >> choice3;
                      if(choice3==1)
                      {cout << "\nEnter your PNR number :" << endl;
                       cin>>input;
                       dom_checkticket(input);}//function call to display domestic ticket details
                      else if(choice3==2)
                      {  cout << "\nEnter your PNR number :" << endl;
                         cin>>input;
                         int_checkticket(input);//function call to display domestic ticket details
                      }
                       else
                   {
                       cout << "Wrong input.";
                       return main();
                   }
                   break;
                case 4:
                system("CLS");

                return 0;


                default://for wrong input
                cout << "Wrong input.Please enter the correct input \n\n\n\n" << endl;
                return main();
          }
        cout<<"\n\n\nDo you wish to continue? (Y/N)" << endl;
        cin >> input1;
  }while(input1=='Y' || input1=='y');
return 0;

}
#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include<conio.h>
#include<stdlib.h>
int t=0,tcategory,ticketno,b[100],time;
string a="english",a1="hindi",a2="telgu",a3="tamil";
class login
{ public:
  static int billno;
 string user="amrita",pass="tiwari",language,email,nm;
 char phn[10];
 int choice,theatre,loc;
  void location()
  { cout<<" Default state:: PUNJAB"<<endl;
    cout<<" select your city location"<<endl;
    cout<<"press 1 for !!Amritsar!!"<<endl;
    cout<<"press 2 for !!Jalandhar!!"<<endl;
    cout<<"press 3 for !!ludhiana!! "<<endl;
    cout<<"enter your city"<<endl;
    cin>>loc;
    switch(loc)
    {
    case 1:
        cout<<" PRESS 1 FOR !!CINEPOLIS : CELEBRATION MALL!!"<<endl;
         cout<<" PRESS 2 FOR !!CINEPOLIS : MALL OF AMRITSAR!!"<<endl;
         cin>>theatre;
         break;
         case 2:
        cout<<" PRESS 3 FOR !!CARNIVAL : VIVA COLLAGE!!"<<endl;
         cout<<" PRESS 4 FOR !!PVR:CURO JALANDHAR!!"<<endl;
         cin>>theatre;
         break;
         case 3:
        cout<<" PRESS 5 FOR !!PVR :FLAMEZ!!"<<endl;
         cout<<" PRESS 6 FOR !!PVR:PAVILION!!"<<endl;
         cin>>theatre;
         break;
         default:
         cout<<"select between 1-6";
    }
  }
  void acess()
  {string u,p;
   cout<<"user name:";
   cin>>u;
   cout<<" password:";
   cin>>p;
  if(user.compare(u)==0 &&pass.compare(p)==0)
   {
    cout<<"               ***WELCOME TO LOGIN PAGE***"<<endl;
    cout<<"                       LOGIN SUCESSFULL    "<<endl;
    t=1;
   }
  else
   {
    cout<< "              **!!!LOGIN UNSUCESSFULL!!!**"<<endl<<endl<<"                ***!!LOGIN AGAIN!!***"<<endl<<endl;
    cout<<"                       Click ON ANY KEY TO PROCEED "<<endl<<endl;
    getch();
    cout<<"user name:";
   cin>>u;
   cout<<" password:";
   cin>>p;
  if(user.compare(u)==0 &&pass.compare(p)==0)
   {
    cout<<"               ***WELCOME TO LOGIN PAGE***"<<endl;
    cout<<"                       LOGIN SUCESSFULL    "<<endl;
    t=1;
   }
   }
   void showtiming();
    if(t==1)
{      cout<<"enter your name : "<<endl;
       cin>>nm;
       fflush(stdin);
       cout<<" enter your email id : "<<endl;
       cin>>email;
       fflush(stdin);
       cout<<" enter your mobile no. : "<<endl;
       while(phn)
       cin>>phn;
       fflush(stdin);
       cout<<"please select movie "<<endl;
       cout<<"press 1 for movie CAPTAIN MARVEL"<<endl;
       cout<<"press 2 for movie US"<<endl;
       cout<<"press 3 for movie AVENGERS ENDGAME"<<endl;
       cout<<"press 4 for movie KESARI"<<endl;
       cout<<"press 5 for movie URI"<<endl;
       cout<<"press 6 for movie MANIKARNIKA: THE QUEEN OF JHANSI"<<endl;
       cout<<"enter your choice: "<<endl;
       cin>>choice;
       switch(choice)
       { case 1:
           cout<<" MOVIE: Captain marvel "<<endl<<"  duration: 2h 30m "<<endl<<" IN ENGLISH,HINDI,TELGU,TAMIL"<<endl;
           cout<<"select language";
           cin>>language;
           if(language!=a&&language!=a1&&language!=a2&&language!=a3)
            {
                cout<<"enter ur language again";
                cin>>language;
            }
            location();
        	showtiming();
           break;
           case 2:
        	cout<<"movie: Us"<<endl<<"  duration: 2h 30m"<<endl<<" IN ENGLISH"<<endl;
        	location();
            showtiming();
            break;
            case 3:
        	cout<<"movie: Avengers endgame"<<endl<<"  duration: 2h 30m"<<endl<<"  ENGLISH,HINDI,TELGU,TAMIL"<<endl;
        	cout<<"select language";
        	cin>>language;
            location();
        	showtiming();
        	break;
        case 4:
        	cout<<"movie: Kesari"<<endl<<"  duration: 2h 30m"<<endl<<" IN HINDI"<<endl;
        	location();
            showtiming();
            break;
        case 5:
            cout<<"movie: URI"<<endl<<"  duration: 2h 30m"<<endl<<" IN HINDI"<<endl;
            cout<<"select language";
            location();
            showtiming();
            break;
        case 6:
        	cout<<"movie: Manikarnika- The Queen of Jhansi"<<endl<<"  duration: 2h 30m"<<endl<<" IN HINDI"<<endl;
        	location();
            showtiming();
            break;
        default:
            cout<<"wrong choice"<<"**select between 1-6**";
            break;

       }

     }
    }
 friend void checkdetails(login l);
 friend void place(login l);
};
int login::billno= 121;
availability()
{
 int seat[100],i;
 cout<<"select seat between 1-40"<<endl;
 for(i=1;i<=ticketno;i++)
 {  cin>>seat[i];
   b[i]=seat[i];
 }
 for(i=1;i<=ticketno;i++)
 {
if(seat[i]>40 && seat[i]<100)
   {
        cout<<"enter valid seat no.";
        for(i=1;i<=ticketno;i++)
          {
           cin>>seat[i];
          }
    }
    for(i=1;i<=ticketno;i++)
    {
       b[i]=seat[i];
    }
    }
}
availability1()
{
 int seat[100],i;
 cout<<"select seat between 40-60"<<endl;
 for(i=1;i<=ticketno;i++)
 {  cin>>seat[i];
    b[i]=seat[i];
 }
 for(i=1;i<=ticketno;i++)
 {
if(seat[i]<40 && seat[i]<60)
   {
        cout<<"enter valid seat no.";
        for(i=1;i<=ticketno;i++)
          {
           cin>>seat[i];
          }
    }
    for(i=1;i<=ticketno;i++)
    {
       b[i]=seat[i];
    }
    }
}
availability2()
{
 int seat[100],i;
 cout<<"select seat between 60-70"<<endl;
 for(i=1;i<=ticketno;i++)
 {  cin>>seat[i];
   b[i]=seat[i];
 }
 for(i=1;i<=ticketno;i++)
 {
if(seat[i]!=60,61,62,63,64,65,66,67,68,69,70)
{
        cout<<"enter valid seat no.";
        for(i=1;i<=ticketno;i++)
          {
           cin>>seat[i];
          }
}
    for(i=1;i<=ticketno;i++)
    {
       b[i]=seat[i];
    }
    }
}
availability3()
{
 int seat[100],i;
 cout<<"select seat between 70-100"<<endl;
 for(i=1;i<=ticketno;i++)
 {  cin>>seat[i];
   b[i]=seat[i];
 }
 for(i=1;i<=ticketno;i++)
 {
if(seat[i]<70)
   {
        cout<<"enter valid seat no.";
        for(i=1;i<=ticketno;i++)
          {
           cin>>seat[i];
          }
    }
}
}
   void category()
{
   cout<<" price of normal tickets: Rs.160 "<<"\t\t\t\t\t!! click 1 for normal tickets!!\t\t\t\t\t"<<endl;
   cout<<"price of executive tickets: Rs.180"<<"\t\t\t\t!!!click 2 for executive tickets!!!\t\t\t\t"<<endl;
   cout<<"price of premium tickets: Rs.200"<<"\t\t\t!!!!click 3 for premium tickets!!!!\t\t\t"<<endl;
   cout<<"price of v.i.p tickets: Rs.350"<<"\t\t\t!!!!!click 4 for v.i.p tickets!!!!!\t\t"<<endl;
   cout<<" select the ticket category:"<<endl;
   cin>>tcategory;
   switch(tcategory)
   {
       case 1:
        cout<<"total price of your tickets = "<<ticketno*160<<endl;
         availability();
       break;
       case 2:
        cout<<"total price of your tickets = "<<ticketno*180<<endl;
        availability1();
        break;
       case 3:
         cout<<"total price of your tickets = "<<ticketno*200<<endl;
         availability2();
       break;
       case 4:
         cout<<"total price of your tickets = "<<ticketno*350<<endl;
         availability3();
       break;
       default:
        cout<<"select key from 1-4"<<endl;
        break;
    }
}
      void showtiming()
    { string a="10:00am-12:30pm",a1="1:00pm-3:30",a2="3:45-5:15pm",a3="6:00pm-8:30pm",a4="9:00pm-11:30pm";
        cout<<"TIMING :"<<a<<"\t!!PRESS 1 FOR FIRST SHOW!!\t"<<endl;
        cout<<"TIMING:"<<a1<<"\t\t!!PRESS 2 FOR SECOND SHOW!!!\t\t"<<endl;
        cout<<"TIMING:"<<a2<<"\t\t\t!!PRESS 3 FOR THIRD SHOW!!!!\t\t\t"<<endl;
        cout<<"TIMING:"<<a3<<"\t\t\t\t!!PRESS 4 FOR FOURTH SHOW!!!!!\t\t\t\t"<<endl;
        cout<<"TIMING:"<<a4<<"\t\t\t\t\t!!PRESS 5 FOR FIFTH SHOW!!!!!!\t\t\t\t\t"<<endl;
        cin>>time;
        switch(time)
        {
            case 1:
            cout<<"how many tickets you want to book"<<endl;
            cin>>ticketno;
            category();
            break;
            case 2:
            cout<<"how many tickets you want to book"<<endl;
            cin>>ticketno;
            category();
            break;
            case 3:
            cout<<"how many tickets you want to book"<<endl;
            cin>>ticketno;
            category();
            break;
            case 4:
            cout<<"how many tickets you want to book"<<endl;
            cin>>ticketno;
            category();
            break;
            case 5:
            cout<<"how many tickets you want to book"<<endl;
            cin>>ticketno;
            category();
            break;
            default:
            cout<<" select between 1-5"<<endl;
        }

    }
    void stime()
    {
        if(time==1)
           {
               cout<<" Show timing :: !!10:00 am -12:30!!"<<endl;
           }
           if(time==2)
           {
               cout<<" Show timing :: !!1:00 am - 3:30!!"<<endl;
           }
           if(time==3)
           {
               cout<<" Show timing :: !!3:45 am -5:15!!"<<endl;
           }
           if(time==4)
           {
               cout<<" Show timing :: !!6:00 am -8:30!!"<<endl;
           }
           if(time==5)
           {
               cout<<" Show timing :: !!9:00 am -11:30!!"<<endl;
           }
    }
    void place(login l)
    {
        if(l.loc==1)
        {
            cout<<" selected location :: !!AMRITSAR!!"<<endl;
        }
        if(l.loc==2)
        {
            cout<<" selected location :: !!JALANDHAR!!"<<endl;
        }
        if(l.loc==3)
        {
            cout<<" selected location :: !!LUDHIANA!!"<<endl;
        }
    }
    void price()
    {
        if(tcategory==1)
        {
         cout<<" Total Amount :: Rs."<<ticketno*160<<endl;
        }
        if(tcategory==2)
        {
         cout<<" Total Amount :: Rs."<<ticketno*180<<endl;
        }
        if(tcategory==3)
        {
         cout<<" Total Amount :: Rs."<<ticketno*200<<endl;
        }
        if(tcategory==4)
        {
         cout<<" Total Amount :: Rs."<<ticketno*350<<endl;
        }
    }
void cinema(login l)
{
    if(l.theatre==1)
    {
     cout<<" selected movie hall : !!CINEPOLIS : CELEBRATION MALL!!"<<endl;
    }
    if(l.theatre==2)
    {
     cout<<" selected movie hall :!!CINEPOLIS : MALL OF AMRITSAR!!"<<endl;
    }
    if(l.theatre==3)
    {
     cout<<" selected movie hall : !!CARNIVAL : VIVA COLLAGE!!"<<endl;
    }
    if(l.theatre==4)
    {
     cout<<" selected movie hall : !!PVR:CURO JALANDHAR!!"<<endl;
    }
    if(l.theatre==5)
    {
     cout<<" selected movie hall : !!PVR :FLAMEZ!!"<<endl;
    }
    if(l.theatre==6)
    {
     cout<<" selected movie hall : !!PVR:PAVILION!!"<<endl;
    }
}
    void checkdetails(login l)
     {  char ans;
        system("CLS");
        cout<<"          \t\t\t\t\t!!!!!check your details::!!!!!"<<endl;
        cout<< "bill no. : "<<l.billno<<endl;
        cout<<"name : "<<l.nm<<endl;
        cout<<"email Id : t"<<l.email<<endl;
        cout<<"mobile no.:"<<l.phn<<endl;
        if(l.choice==1)
        {
           cout<<"movie name:: **captain marvel**"<<endl;
           cout<<" your seat numbers::"<<endl;
           for(int j=1;j<=ticketno;j++)
           {
             cout<<b[j]<<endl;
           }
        }
        if(l.choice==2)
        {
             cout<<"movie name:: **US**"<<endl;
             cout<<" your seat numbers::"<<endl;
           for(int j=1;j<=ticketno;j++)
           {
             cout<<b[j]<<endl;
           }
        }
        if(l.choice==3)
         {
            cout<<"movie name:: **avengers endgame**"<<endl;
             cout<<" your seat numbers::"<<endl;
           for(int j=1;j<=ticketno;j++)
           {
            cout<<b[j]<<endl;
           }
         }
        if(l.choice==4)
        {
            cout<<"movie name:: **kesari**"<<endl;
             cout<<" your seat numbers::"<<endl;
           for(int j=1;j<=ticketno;j++)
           {
             cout<<b[j]<<endl;
           }
        }
        if(l.choice==5)
        {
             cout<<"movie name:: **URI**"<<endl;
             cout<<" your seat numbers::"<<endl;
           for(int j=1;j<=ticketno;j++)
           {
             cout<<b[j]<<endl;
           }
        }
        if(l.choice==6)
        {
             cout<<"movie name:: **MANIKARNIKA- THE QUEEN OF JHANSI**"<<endl;
             cout<<" your seat numbers::"<<endl;
           for(int j=1;j<=ticketno;j++)
           {
             cout<<b[j]<<endl;
           }
        }
        place(l);
        cinema(l);
        stime();
        price();
        cout<<" if details are  correct the say y/n"<<endl;
        cin>>ans;
        cout<<" press any key to proceed:"<<endl;
        getch();
}
class payment
{
char debit[16],credit[16],name[25];
int ok,o;
public:
int pay,cvv;
payment()
{
    cout<<"select payment mode:"<<endl;
    cout<<"press 1 for debit card"<<endl;
    cout<<"press 2 for credit card"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>pay;
    switch(pay)
    {
    case 1:
        cout<<" ENTER DEBIT CARD NO. -: "<<endl;
        cin>>debit;
        fflush(stdin);
        cout<<"CARD HOLDER NAME -: "<<endl;
        cin>>name;
        fflush(stdin);
        cout<<"\t\t\t\tExpiry(MM/YYYY)";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\t/";
			cin>>expiryyy;
        cout<<"\t\t\t\tENTER cvv -: ";
        cin>>cvv;
        cout<<" fill the Captcha "<<ok<<endl;
        cin>>o;
        if(o==ok)
        {
         cout<<" click any key to proceed further: "<<endl;
        }
        else
        {
            cout<<"fill the captcha "<<ok<<endl;
            cin>>o;
        }
        cout<<" Transaction In Process "<<endl<<"    please wait for a while"<<endl;
        getch();
        cout<<" TRANSACTION SUCESSFULL"<<endl<<" we have received your payment"<<endl<<" **** THANK YOU FOR THE BOOKING****";
        break;
        case 2:
        cout<<" ENTER CREDIT CARD NO. -: "<<endl;
        cin>>debit;
        fflush(stdin);
        cout<<"CARD HOLDER NAME -: "<<endl;
        cin>>name;
        fflush(stdin);
        cout<<"\t\t\t\tExpiry(MM/YYYY)";
			int expirym,expiryy;
			cin>>expirym;
			cout<<"\t\t\t\t/";
			cin>>expiryy;
        cout<<"\t\t\t\tENTER cvv -: ";
        cin>>cvv;
        cout<<" fill the Captcha "<<ok;
        cin>>o;
        if(o==ok)
        {
         cout<<" click any key to proceed further: "<<endl;
         getch();
        }
        else
        {
            cout<<"fill the captcha "<<ok<<endl;
            cin>>o;
        }
        cout<<" Transaction In Process "<<endl<<"   please wait for a while"<<endl;
        cout<<                              ".......................";
        cout<<"                            \t\t\tTRANSACTION SUCESSFULL\t\t\t"<<endl<<endl;
        cout<<"                     \t\t\t**** !!THANK YOU FOR THE BOOKING!! ****\t\t\t"<<endl;
        break;
        }
    }
};
int main()
{
login l;
l.acess();
checkdetails(l);
payment p;
        ofstream s;
        s.open("moviedata.txt",ios::out|ios::app);
        s.write((char*)&l,sizeof(l));
for(int j=1;j<=ticketno;j++)
{
    s<<b[j];
}
for(int i=0;i<=5;i++)
{
s<<a[i];
}
s.close();
ifstream r;
r.open("moviedata.txt");
r.read((char*)&l,sizeof(l));
cout<<endl<<" name "<<l.nm<<endl;
cout<<"email"<<l.email;
r.close();
}

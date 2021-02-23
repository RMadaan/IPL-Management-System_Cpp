//Made By:- Ritik Madaan; Reg No.:- 11801737; Roll Number:- 70; Sec:-K18EN/G2
using namespace std;
#include<iostream>
#include<string.h>
#include<fstream>
int main()
{
	string in;
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>> Welcome to the IPL cricket association access panel; please enter the type of information you want to get <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n";
    start:
	cout<<"For player information type 'player info'.\n";
	cout<<"For team information type 'team info'.\n";
	cout<<"For umpires information type 'umpires info'.\n";
	cout<<"For coaching and other staff information type 'staff info'.\n";
	cout<<"To enter the edit mode type 'edit admin'.\n";
	cout<<"\n**THE TEAMS ARE:- chennai super kings, rajasthan royals, mumbai indians and kings xi punjab.\n";

	
	getline(cin,in);
	
	if(in=="player info")
	{
		string t;
		cout<<"\nEnter the team name\n";
		getline(cin,t);
	
		if(t=="mumbai indians")
		{
			string p;
			void mumbai();
			cout<<"\nEnter the player name\n";
			getline(cin,p);
			if(p=="evin lewis")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 202\n";
			}
			if(p=="rohit sharma")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 232\n";
			}if(p=="siddhesh lad")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 242\n";
			}if(p=="suryakumar yadav")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 227\n";
			}if(p=="anmolpreet singh")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 223\n";
			}if(p=="hardik pandya")
			{
				cout<<"\nHe is an all-rounder with Strike Rate:- 232 and economy rate of 2.34\n";
			}if(p=="saurabh tiwary")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 145\n";
			}if(p=="sharad lumba")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 184\n";
			}if(p=="akila dananjaya")
			{
				cout<<"\nHe is an all-rounder with Strike Rate:- 147.5 and economy rate of 2.3\n";
			}if(p=="krunal pandya")
			{
				cout<<"\nHe is an all-rounder with Strike Rate:- 168 and economy rate of 2.34\n";
			}if(p=="ben cutting")
			{
				cout<<"\nHe is a batsman with Strike Rate:- 168\n";
			}if(p=="kieron pollard")
			{
				cout<<"\nHe is an all-rounder with Strike Rate:- 168 and economy rate of 1.32\n";
			}if(p=="anukul roy")
			{
				cout<<"\nHe is an all-rounder with Strike Rate:- 168\n";
			}if(p=="tajinder dhillon")
			{
				cout<<"\nHe is an all-rounder with Strike Rate:- 168 and economy rate of 2.34\n";
			}if(p=="aditya tare")
			{
				cout<<"\nHe is a Wicket-Keeper\n";
			}if(p=="ishan kishan")
			{
				cout<<"\nHe is a Wicket-Keeper\n";
			}if(p=="mayank markande")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 3.43\n";
			}if(p=="pradeep sangwan")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 2.32\n";
			}if(p=="mitchell mclenaghan")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 3.67\n";
			}if(p=="jasprit bumrah")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 2.11\n";
			}if(p=="rahul chahar")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 2.32\n";
			}if(p=="pat cummins")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 2.45\n";
			}if(p=="mohsin khan")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 3.61\n";
			}if(p=="m. d. nidheesh")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 3.43\n";
			}if(p=="jason behrendorff")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 2.87\n";
			}if(p=="adam milne")
			{
				cout<<"\nHe is a bowler with Economy Rate:- 2.12\n";
			}
			mumbai();
		}
	
		else if(t=="chennai super kings")
				{string p;
				cout<<"\nEnter the player name\n";

				void chennai();
				getline(cin,p);

				if (p== "chaitanya bishnoi")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.5\n";
				}	if (p== "mark wood")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.2\n";
				}	if (p== "shane watson")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 1.9\n";
				}	if (p== "lungi ngidi")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.5\n";
				}	if (p== "monu kumar")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 1.5\n";
				}	if (p== "km asif")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.2\n";
				}	if (p== "harbhajan singh")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.8\n";
				}	if (p== "kanishk seth")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.4\n";
				}	if (p== "shardul thakur")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.7\n";
				}	if (p== "mitchell antner")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.2\n";
				}	if (p== "deepak chahar")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 1.1\n";
				}	if (p== "imran tahir")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.6\n";
				}	if (p== "suresh raina")
				{
					cout<<"\nHe is a batsman\nwith strick rate of:- 204\n";
                }
				if (p== "ambati rayudu")
				{
					cout<<"\nHe is a batsman\nwith strick rate of:- 203\n";
                }if (p== "faf du plessis")
				{
					cout<<"\nHe is a batsman\nwith strick rate of:- 212\n";
                }if (p== "	dhruv shorey")
				{
					cout<<"\nHe is a batsman\nwith strick rate of:- 132\n";
                }if (p== "kedar jadhav")
				{
					cout<<"\nHe is a batsman\nwith strick rate of:- 132\n";
                }if (p== "murali vijay")
				{
					cout<<"\nHe is a batsman\nwith strick rate of:- 243\n";
                }
				if (p== "kshitiz sharma")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 210 and economy rate of :- 3.2\n";
                }
				if (p== "ravindra jadeja")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 220 and economy rate of :- 1.78\n";
                }
                	if (p== "karn sharma")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 157 and economy rate of :- 3.21\n";
                }	if (p== "dwayne bravo")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 203 and economy rate of :- 1.23\n";
                }	if (p== "david willey")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 223 and economy rate of :- 1.23\n";
                }
                chennai();
            }

                else if(t=="kings xi punjab")
				{string p;
                void punjab();
				cout<<"\nEnter the player name\n";
				getline(cin,p);
				if (p== "ankit rajpoot")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 3.2\n";
				}
				if (p== "arshdeep singh")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 3.34\n";
				}	if (p== "mark wood")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.32\n";
				}	if (p== "mohammed shami")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 1.22\n";
				}	if (p== "murugan ashwin")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 1.21\n";
				}	if (p== "andrew tye")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.21\n";
				}	if (p== "hardus viljoen")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.32\n";
				}	if (p== "mujeeb ur rahman")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 3.23\n";
				}	if (p== "mandeep singh")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 202\n";
                }
				if (p== "david miller")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 250.43\n";
                }if (p== "sarfaraz khan")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 150.34\n";
                }if (p== "mayank agarwal")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 164.33\n";
                }if (p== "karun nair")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 210.23\n";
                }if (p== "chris gayle")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 220.58\n";
                }
				if (p== "ravichandran ashwin")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 95.42 and economy rate of :- 11.23\n";
                }
				if (p== "sam curran")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 140.23 and economy rate of :- 5.32\n";
                }
				if (p== "moises henriques")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 122.45 and economy rate of :- 6.50\n";
                }	if (p== "varun chakravarthy")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 101.76 and economy rate of :- 4.34\n";
                }	if (p== "darshan nalkande")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 140.43 and economy rate of :- 6.54\n";
                }	if (p== "agnivesh ayachi")
				{
					cout<<"\nHe is an all-rounder\nwith strike rate of:- 110.23 and economy rate of :- 3.34\n";
                }	
               
                punjab();
			}
		
			else if(t=="rajasthan royals")
				{string p;
				cout<<"\nEnter the player name\n";

				void rajasthan();
				getline(cin,p);

				if (p== "umaid asif")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.3\n";
				}	if (p== "ish sodhi")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 3.23\n";
				}	if (p== "jaydev unadkat")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 3.22\n";
				}	if (p== "dhawal kulkarni")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.5\n";
				}	if (p== "dushmantha chameera")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.34\n";
				}	if (p== "zahir Kkhan pakteen")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.34\n";
				}	if (p== "sudhesan midhun")
				{
					cout<<"\nHe is a bowler\nwith economy rate of:- 2.8\n";
				}	if (p== "ajinkya rahane")
				{
					cout<<"\nHe is a batsman\nwith strike rate of:- 2.4\n";
				}	if (p== "rahul tripathi")
				{
					cout<<"\nHe is a batsman\nwith economy rate of:- 2.7\n";
				}	if (p== "jason sangha")
				{
					cout<<"\nHe is a batsman\nwith economy rate of:- 2.2\n";
				}	if (p== "mahipal lomror")
				{
					cout<<"\nHe is an all-rounder\nwith economy rate of:- 2.1\n";
				}	if (p== "krishnappa gowtham")
				{
					cout<<"\nHe is an all-rounder\nwith economy rate of:- 2.6\n";
				}	if (p== "ankit sharma")
				{
					cout<<"\nHe is an all-rounder\nwith strick rate of:- 189\n";
                }
				if (p== "d'arcy short")
				{
					cout<<"\nHe is an all-rounder\nwith strick rate of:- 221\n";
                }if (p== "jofra archer")
				{
					cout<<"\nHe is an all-rounder\nwith strick rate of:- 154\n";
                }if (p== "shreyas gopal")
				{
					cout<<"\nHe is an all-rounder\nwith strick rate of:- 134\n";
                }if (p== "stuart binny")
				{
					cout<<"\nHe is an all-rounder\nwith strick rate of:- 132\n";
                }if (p== "darren sammy")
				{
					cout<<"\nHe is an all-rounder\nwith strick rate of:- 243\n";
                }
				if (p== "sanju samson")
				{
					cout<<"\nHe is a Wicket Keeper\n";
                }
				if (p== "mohammad zahir")
				{
					cout<<"\nHe is a Wicket Keeper\n";
                }
                rajasthan();
            }
        }
        
///////////////////////////////////////////Block Seperated/////////////////////////////////////////////		
		
		if(in=="team info")
        {
            string team;
            cout<<"\nEnter the name of the team\n";
            getline(cin,team);
            if(team=="mumbai indians")
				{
					void t_mumbai();
					void mumbai();
					mumbai();
					t_mumbai();
					cout<<"\n\n";
				}
			if(team=="kings xi punjab")
				{
					void t_punjab();
					void punjab();
					punjab();
					t_punjab();
					cout<<"\n\n";	
				}
			if(team=="chennai super kings")
				{
					void t_chennai();
					void chennai();
					chennai();
					t_chennai();
					cout<<"\n\n";	
	
				}
			if(team=="rajasthan royals")
				{
					void t_royals();
					void rajasthan();
					rajasthan();
					t_royals();
					cout<<"\n\n";	
				}
			}
			
///////////////////////////////////////////Block Seperated/////////////////////////////////////////////				
		
			if(in== "staff info")
	    {
			string team;
            cout<<"\nEnter the name of the team\n";
            getline(cin,team);
            if(team=="mumbai indians")
            {
            	void mumbai();
				mumbai();
				void s_mumbai();
				s_mumbai();
			}
			if(team=="chennai super kings")
            {
            	void chennai();
				chennai();
				void s_chennai();
				s_chennai();
			}
			if(team=="rajasthan royals")
            {
            	void rajasthan();
				rajasthan();
				void s_rajasthan();
				s_rajasthan();
			}
			if(team=="kings xi punjab")
            {
            	void punjab();
				punjab();
				void s_punjab();
				s_punjab();
			}
		}
///////////////////////////////////////////Block Seperated/////////////////////////////////////////////		
		
		
			if(in=="umpires info")
        {
        	void umpire();
        	umpire();
     	}
     	
///////////////////////////////////////////Block Seperated/////////////////////////////////////////////		

     	
     		if(in=="edit admin")
        {
        	void edit();
        	edit();
     	}
		cout<<"\n";
		goto start;
}

///////////////////////////////////////////Logo Functions Block/////////////////////////////////////////////		


						void punjab()
                {
                		ifstream ob("punjab.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
            			void chennai()
                {
                		ifstream ob("chennai.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
						void mumbai()
                {
                		ifstream ob("mumbai.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
					void rajasthan()
                {
                		ifstream ob("rajasthan.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				
///////////////////////////////////////////Teams Functions Block/////////////////////////////////////////////		

				
					void t_mumbai()
                {
                		ifstream ob("t_mumbai.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				void t_royals()
                {
                		ifstream ob("t_royals.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				void t_chennai()
                {
                		ifstream ob("t_chennai.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				void t_punjab()
                {
                		ifstream ob("t_punjab.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				
///////////////////////////////////////////Staff Functions Block/////////////////////////////////////////////		
				
				
				void s_mumbai()
				{
					
                		ifstream ob("s_mumbai.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				void s_chennai()
				{
					
                		ifstream ob("s_chennai.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				void s_punjab()
				{
					
                		ifstream ob("s_punjab.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				void s_rajasthan()
				{
					
                		ifstream ob("s_rajasthan.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				
///////////////////////////////////////////Umpire Function Block/////////////////////////////////////////////		
				
				
				void umpire()
				{
						ifstream ob("um_ipl.txt");
						char ch;
						while (1)
						{ch=ob.get();
						if(ch==EOF)
						break;
						cout<<(ch);}
				}
				
///////////////////////////////////////////The Edit Function/////////////////////////////////////////////					
				
				void edit()
				{
					string team;
					cout<<"\nCaution! You have now entered the edit mode, press any key and then press enter to exit the edit mode.\n";
					cout<<"\nEnter the team name you want to edit\n";
					getline(cin,team);
					
					if(team=="mumbai indians")
					{
						void e_mumbai();
						e_mumbai();
					}
					if(team=="chennai super kings")
					{
						void e_chennai();
						e_chennai();
					}
					if(team=="rajasthan royals")
					{
						void e_rajasthan();
						e_rajasthan();
					}
					if(team=="kings xi punjab")
					{
						void e_punjab();
						e_punjab();
					}
				}
				void e_mumbai()
				{
					ofstream ob("t_mumbai.txt",ios::app);
					string s;
					cout<<"\n\n";
					cout<<"Enter the new player's name\n";
					getline(cin,s);
					ob<<s;
					cout<<"\nPlayer added successfully!!\n\n";
				}
				void e_punjab()
				{
					ofstream ob("t_punjab.txt",ios::app);
					string s;
					cout<<"\n\n";
					cout<<"Enter the new player's name\n";
					getline(cin,s);
					ob<<s;
					cout<<"\nPlayer added successfully!!\n\n";
				}
				void e_chennai()
				{
					ofstream ob("t_chennai.txt",ios::app);
					string s;
					cout<<"\n\n";
					cout<<"Enter the new player's name\n";
					getline(cin,s);
					ob<<s;
					cout<<"\nPlayer added successfully!!\n\n";
				}
				void e_rajasthan()
				{
					ofstream ob("t_royals.txt",ios::app);
					string s;
					cout<<"\n\n";
					cout<<"Enter the new player's name\n";
					getline(cin,s);
					ob<<s;
					cout<<"\nPlayer added successfully!!\n\n";
				}

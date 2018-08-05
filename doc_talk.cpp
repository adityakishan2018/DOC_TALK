#include<iostream>
#include<fstream>
using namespace std;
float paid_membership(int);
int mnth;
int main()
{



    int dis,ch,D1=0,D2=0,D3=0,i=0,pin,PIN=1234,total_amount,meter;
    char p,preg;
    int S[3];
    end:
    cout<<"ENTER YOUR LOGIN PIN"<<endl;
    cin>>pin;
    if(pin==PIN)
    {
    	do
		{ 
    char str[250];
   	ifstream fin;
	fin.open("DOC_TALK/afile.txt");
	while(fin)
	{
	fin.getline(str,250);
	cout<<str<<endl;
    }
	fin.close();
       
    cin>>ch;
    switch(ch)
    {
              case 1:
              	
			       cout<<"SYMPTOMS"<<endl;
                   cout<<"1.fever,headache"<<endl;
                   cout<<"2.dark red coloured rash on back and chest"<<endl;
                   cout<<"3.loss of appetite"<<endl;
                   cout<<"4.blue lips or fingernails"<<endl;
                   cout<<"5.chest pain and chest tightness"<<endl;
                   cout<<"6.cough and rapid breathing"<<endl;
                   cout<<"7.increased thirst,urination,dry mouth"<<endl;
                   cout<<"8.fatigue"<<endl;
                   cout<<"9.slow healing wounds"<<endl;
                   cout<<"ENTER ANY THREE SYMPTOMS YOU ARE SUFFERING FROM"<<endl;  	
                    cin>>S[0]>>S[1]>>S[2];
                   for(i=0;i<3;i++)
                   {
                   if(S[i]==1||S[i]==2||S[i]==3)
                   D1++;
                   else if(S[i]==4||S[i]==5||S[i]==6)
                   D2++;
                   else if(S[i]==7||S[i]==8||S[i]==9)
                   D3++;
                   else
                   cout<<"wrong entry!!!"<<endl;
                   }
                   if(D1>=2)
                   cout<<"you are suffering from CHICKEN POX,contact a doctor immediately!!"<<endl;
                   else if(D2>=2)
                   cout<<"you are suffering from ASTHAMA,contact a doctor immediately!!"<<endl;
                   else if(D3>=2)
                   cout<<"you are suffering from DIABETES,contact a doctor immediately!!"<<endl;
                   else 
                   cout<<"you don't seem to suffer from any specific disease"<<endl;
                   break;
              case 2:
                   cout<<"CURE/TREATMENT/CONTROL OF CERTAIN DISEASES"<<endl;
                   cout<<"==============*******===================="<<endl;
                   cout<<"1.CHICKEN POX"<<endl;
                   cout<<"2.ASTHAMA"<<endl;
                   cout<<"3.DIABETES"<<endl;
                   back:
                   cout<<"ENTER THE SERIAL NO. OF DISEASE WHOSE CURE/TREATMENT YOU WANT"<<endl;
                   cin>>dis;
                   if(dis<4)
                   {
                   switch(dis)
                   {
                   case 1:
                        cout<<"there is no vaccine against chicken pox as yet.but precaution must be taken as follows"<<endl;
                        cout<<"a)patient should be kept in isolation"<<endl;
                        cout<<"b)clothings,utensils used by patints should be sterilised"<<endl;
                        break;
                   case 2:
                        cout<<"there is no cure for asthama ,it can only be controlled"<<endl;
                        cout<<"a)use inhalers to get rid of breathing problems"<<endl;
                        cout<<"b)better contact a good pulmonologist"<<endl;
                        break;
                   case 3:
                        cout<<"there is no cure for diabetes ,it can only be controlled"<<endl;
                        cout<<"a)regular exercise "<<endl;
                        cout<<"b)diet control"<<endl;
                        break;
                    }
                    break;
                    }
                    else
                    {
                    	cout<<"you have given a wrong entry ______pls try it again"<<endl;
                    	goto back;
					}
              case 3:
              	   label:
                   cout<<"APPLICATION FOR PAID MEMBERSHIP"<<endl;
                   cout<<"ENTER NO. OF MONTHS YOU WANT THE SUBSCRIPTION FOR"<<endl;
                   cin>>mnth;
                   if(mnth < 36)
                   {
                   total_amount=paid_membership(mnth);
                   cout<<"total amount to be paid is ="<<total_amount<<endl;
                   break;
                   }
                   else
                   {
                   	cout<<"months should not exceed 36:";
                   	goto label;
				   }
    		case 4:
    			    cout<<"PREGNANT CARE METER"<<endl;
    			    cout<<"=======****========"<<endl;
    			    cout<<"1.I regularly do gentle exercises like brisk walking/yoga/pelvic floor exercises"<<endl;
    			    cout<<"2.I avoid drinking alcohol and related beverages"<<endl;
    			    cout<<"3.I avoid consuming caffeine related products like coffee,tea,cola"<<endl;
    			    cout<<"4.I have stopped Smoking"<<endl;
    			    cout<<"5.I am careful about my food hygiene"<<endl;
    			    cout<<"6.I am strictly following the diet chart recommended by my doctor"<<endl;
    			    cout<<"7.I am regularly taking all the health supplements"<<endl;
    			    cout<<"8. I keep myself hydrated drinking plain and healthy drinks"<<endl;
    			    
    			    for(i=1;i<9;i++)
    			    {
    			    	cout<<"for serial no. "<<i<<" enter 'y' if you follow else 'n' "<<endl;
    			    	cin>>preg;
    			    	if(preg=='y')
    			    	{
    			    		meter++;
						}
						else if(preg!='y'||preg!='n')
						{
							cout<<"wrong entry"<<endl;
						}
						else{
							continue;
						}
					}
					if(meter>=7)
					{
					cout<<"CONGRATULATION...!you are taking care of yourself in the best possible way."<<endl;
				    }
					else if(meter>=5&&meter<7)
					{
					cout<<"You are taking average care of yourself...try to abide by the guidelines mentioned above"<<endl;
			     	}
					else
					cout<<"We are extremely sorry to say but you don't seem to be concerned about your baby...try to bide by the guidelines mentioned above"<<endl;
                }
    } while(ch<5);
    cout<<"thank you ______we are glad to serve you:";
}
else
{
	cout<<"you have entered a wrong pin..........pls enter again:"<<endl;
	goto end;
}
   
return 0;
}
                   float paid_membership(int a)
                   {
                      float paid_membership;
                       paid_membership=a*100-(a*a);
                       return paid_membership;
                   }

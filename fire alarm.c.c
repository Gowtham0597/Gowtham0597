#include<pic.h>
#include<lcd.h>
unsigned char T,T1,T2,T3,T4;
unsigned char j,sec;
void main()
{
	char S[]="TEMPERATURE";
	
	TRISB=0X00;
	TRISD=0X00;
	TRISA=0X03;
	
	TICON=0X30;
	
	GIE=1;
	PEIE=1;
	TMR1IE=1;


	TRISA=0X80;
	ADCON1=0X80;
	ADCON0=0X01;

	Command(0x38);
	Command(0x06);
	Command(0x01);
	Command(0x0C);
	
while(1)
{
	
	if(j>=2)
	{
		sec++;
		j=0;
	}
	
	if(sec==2)
	{
	
	
		CHS2=0;
		CHS1=0; //A0
		CHS0=0;
	
		CHS2=0;
		CHS1=0; //A1
		CHS0=1;
		
		ADGO=1;
		while(ADGO==1);
		T=(ADRESH*256)+ADRESL;
	
		T=T/2.04;
	
		T1=T/100;
		T4=T%100;
		T2=T4/10;
		T3=T4%10;
		
		sec=0;

		Command(0x80);
		for(int i=0;S[i]!= '\0';i++)
		{
			Data(S[i]);
		}
			Command(0x8C);
			Data(':');
			Data(0X30+T1);
			Data(0X30+T2);
			Data(0X30+T3);
		

	}

		

	if(T>59 || RA1==1)

	{	

		RD3=1;
			
	}
		
	else if(T<59 && RA1==0)
	{
		RD3=0;
	}			
			
void interrupt ISR()
{
	if(TMR1IF==1)

	{
		TMR1IF=0;
		j++;
	}
}
	
	
		

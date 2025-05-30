#include<pic.h>
unsigned char i;
void main()
{
	TRISD=0X01;
	TRISC=0X00;
	
	while(1)
	{
		if(RD0==1)
		
	   {
		   while(RD0==1);
		   
		   {
			   i=i++;
			    i=i%4;
			}
		if(i==1)
		{
			RC0==1; //LIGHT
		}
		if(i==2)
		{
			RC1==1; //FAN
		}
		if(i==3)
		{
			RC1==0; //FAN
		}
	    if(i==0)
		{
			RC0==0; // LIGHT
		}
		
	   }
	 }
}
		    
			    
			    
			    
		
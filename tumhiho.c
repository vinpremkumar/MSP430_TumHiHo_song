#include<msp430g2553.h>
unsigned int i;

void sound(int a,int d)	    //a is freq,d is delay
{
int i;
for(i=0;i<=d*4;i++)
{
	if(a==0)
		TACCR0 = 0;
	if(a!=0)
	{
		TACCR0 = 0x7A12/a;
		TACCR1 = 0x7A12/a;
	}
}
}

void main()
{
	int c =131*5;
	int d =138*5;
	int e =156*5;
	int f =174*5;
	int g =196*5;
	int a =208*5;
	int b=233*5;
	int x;

	WDTCTL = WDTPW + WDTHOLD;   // Stop watchdog timer
	TACTL = TAIE + MC_3 + ID_3 + TASSEL_2;
	TACCTL1= CCIE+CAP;
	P1DIR = 0X04;
	P1OUT &=0x00;
	_BIS_SR(GIE) ;     //global interrupt enable
	while(1)
	{
		//250=half note,500=1 count,750=1 and a half counts
		//1000=2 counts,1500=3 counts,2000=4 counts

		if((P1IN & 0x01) == 0x00)
		{
				sound(c,450); sound(0,50);
				sound(f,200); sound(0,50);
				sound(e,200); sound(0,50);
				sound(e,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(c,200); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(c,200); sound(0,50);
				sound(c,200); sound(0,50);
				sound(c,450); sound(0,50);
				sound(b/2,425); sound(0,60);
				sound(b/2,215); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,425); sound(0,60);
				sound(b/2,215); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(g/2,450); sound(0,50);
				sound(f/2,200); sound(0,50);
				sound(e/2,200); sound(0,50);
				sound(f/2,925); sound(0,75);

				sound(c,450); sound(0,50);
				sound(f,200); sound(0,50);
				sound(e,200); sound(0,50);
				sound(e,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(c,200); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(c,450); sound(0,50);
				sound(c,450); sound(0,50);
				sound(b/2,425); sound(0,60);
				sound(b/2,215); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,425); sound(0,60);
				sound(b/2,215); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(g/2,450); sound(0,50);
				sound(f/2,200); sound(0,50);
				sound(e/2,200); sound(0,50);
				sound(f/2,450); sound(0,50);
				sound(f/2,200); sound(0,50);
				sound(g/2,200); sound(0,50);

				sound(g/2,450); sound(0,50);
				sound(g/2,200); sound(0,50);
				sound(f/2,200); sound(0,50);
				sound(g/2,450); sound(0,50);
				sound(g/2,200); sound(0,50);
				sound(d,200); sound(0,50);
				sound(c,450); sound(0,50);
				sound(c,200); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(c,450); sound(0,50);
				sound(c,200); sound(0,50);
				sound(f,200); sound(0,50);
				sound(f,450); sound(0,50);
				sound(e,200); sound(0,50);
				sound(c,200); sound(0,50);
				sound(c,450); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(a/2,1700); sound(0,50);
				sound(g/2,1425); sound(0,50);
				sound(0,275);
				sound(a/2,100); sound(0,25);
				sound(b/2,100); sound(0,25);

				sound(c,450); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,950); sound(0,50);
				sound(a/2,100); sound(0,25);
				sound(b/2,100); sound(0,25);
				sound(c,450); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,950); sound(0,50);
				sound(g/2,200); sound(0,50);
				sound(g/2,450); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(a/2,950); sound(0,50);
				sound(g/2,200); sound(0,50);
				sound(g/2,450); sound(0,50);
				sound(e/2,200); sound(0,50);
				sound(f/2,450); sound(0,50);
				sound(g/2,200); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,200); sound(0,50);

				sound(c,450); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,950); sound(0,50);
				sound(a/2,100); sound(0,25);
				sound(b/2,100); sound(0,25);
				sound(c,450); sound(0,50);
				sound(a/2,200); sound(0,50);
				sound(b/2,950); sound(0,50);
				sound(g/2,200); sound(0,50);
				sound(g/2,450); sound(0,50);
				sound(b/2,200); sound(0,50);
				sound(a/2,950); sound(0,50);
				sound(g/2,100); sound(0,25);
				sound(g/2,100); sound(0,25);
				sound(g/2,450); sound(0,50);
				sound(e/2,200); sound(0,50);
				sound(f/2,1450); sound(0,50);

			for(x=10000;x>0;x--)
				sound(0,5);		//delay

		}

	}
}


#pragma vector = TIMER0_A1_VECTOR
__interrupt void timerainterr ()
{
	if(TAIV)   // interrupt control register
	   P1OUT ^= 0x04;
}

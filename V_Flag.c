#include <stdlib.h>

int main(void)
{
 int a,b,c_flag,bi,q;
 int a7,b7,q7,v;

// c_flag= 0;
   c_flag=-1;

  printf("\n%x", c_flag);
  printf("\n%d", c_flag);
  printf("\n");

 //~ printf("\n  0123456789ABCDEF\n  0000000000000000");
 for(bi=0;bi<0x100;bi+=0x10)
 {
	printf("\n%02X",bi);
	printf("\n");
        for(a=0;a<0x100;a+=0x10)
	{
         b=~bi; //a-b
//       b=bi;  //a+b

	  q=a+b+(c_flag&1);
  	  printf("\ta (%2X) - bi (%02X) + c (%d) = ", a, bi, c_flag&1);
	  printf("\t%02X", q);

	  a7=b7=q7=0;
	  if((int)a&0x0080) a7=-1;
	  if((int)b&0x0080) b7=-1;
	  if((int)q&0x0080) q7=-1;

	  v=(a7^q7)&~(a7^b7);
	  if(v) printf("\t*"); else printf("\t.");
	  printf("\n");
	}
	printf("\n");
	printf("%02X",bi);
	printf("\n");
 }
 //~ printf("\n  0123456789ABCDEF\n  0000000000000000\n");
 return(0);
}

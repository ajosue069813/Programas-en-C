/*Este programa hace 4 calculos la mediana, la moda, la media encuentra el valor máximo y el valor mínimo de los valores introducidos, como mínimo 2 y máximo 5 
*/
#include "stdio.h"
#include "stdlib.h"

int a;
int max(int v[a]);
int min(int v[a]);
int media(int v[a]);
int mediana(int v[a]);
int moda (int v[a]);
int n;
void main(void)
{       int max1,min1,mediana1,mod;
        float med;
        int  v[]={};
	
        while(n<=1|n>5){
	printf ("Inserta al menos 2 números y máximo 5 en un rango del 0-99\n");
	printf ("inserta el numero de datos a ingresar\n");
        scanf ("%d",&n);
	  if(n<=1|n>5)
        {
           printf("números no válidos\n");
        }
	}
          if (n>=2|n<=5){
          int a=0;
          while (a<n)
       	{
	   printf("inserta los números de v[%d]",a);
           scanf("%d",&v[a]);
	   a++;
           if ('x'==getchar()) exit(-1);
	}	
        
	} 
      	max1=max(v);
	min1=min(v);
	med=media(v);
	mediana1=mediana(v);
	mod=moda(v);
}
//funciones
//Max
int max(int v[a])
{       int max1; 
        
	max1=v[0];
	for (int i=1;i<n;i++)
	   {
            if(max1>v[i])
	    {
              max1=max1;		    
	    }else 
		    max1=v[i];
	   }
	printf ("El máximo es:%d\n",max1);
        return max1;
}
//Men
int min(int v[a])
{
	int min1;
	min1=v[0];
	for (int i=1;i<n;i++)
	{
         if(min1<v[i])
	 {
		 min1=min1;
	 }else 
	 {
		 min1=v[i];
	 }
	}
	printf ("El minimo es:%d\n",min1);
	return min1;
}
//Media
int media(int v[a])
{
            float sum=0.0;
	    float med=0.0;
            	    
	    sum=v[0];
	    for (int i=1;i<n;i++)
	    {
		   sum=sum+v[i];
	    }
	    med=sum/n;
	    printf ("La media es:%f\n",med);
	    return med;


}
//Mediana 
int mediana(int v[a])
{       int pos,mediana1,w;

	
   for (int i=0; i<n; i++)
{
        for (int j=i+1; j<=n; j++)
        {
           if(v[i]>v[j])
           {
               pos = v[i];
               v[i] = v[j];
               v[j] = pos;
           }
        }
}
        if(n==3|n==5){w=(n/2)+1;}
	else{w=n/2;}
        mediana1=v[w];
	printf("La mediana es:%d\n",mediana1);
	return mediana1;
}
//Moda
int moda (int v[a])
{
       int m;
       int v2[5]={};
       for (int i=1;i<n;i++)
       {
	       for (int j=0;j<i;j++)
	       {
	           if (v[i]==v[j])
	           {
                     v2[i]=v2[i]+1;
		    
	           }
	       }
       }

       m=0;
       for (int i=1;i<n;i++)
        {      for(int j=0;j<i;j++)
		{
	          if(v2[i]>v2[j])
		  {
                    m=i;
		  }
		}
	}
       
if(m==0)
{
    printf("no hay moda\n");
}else 
{
	printf("la moda es: %d\n", v[m]);
}



}

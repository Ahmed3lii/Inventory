#include <stdio.h>
#include <stdlib.h>

void main()
{
 float c[6],p[6];
    int n[6],i,f[6],t[6];
    printf("            simulation and inventory analysis         \nEnter probability for daily demand:-?\n");
    for(i=0;i<6;i++){
        scanf("%f",&p[i]);
        n[i]=i;
        }

    c[0]=p[0];
    for(i=0;i<6;i++)
       c[i+1]=c[i]+p[i+1];
    f[0]=1;
    t[0]=c[0]*100;
    for(i=1;i<6;i++){
        f[i]=(c[i-1]*100)+1;
        t[i]= (c[i]*100);}
    printf("             *****  INVENTORY ***** \n");
    printf("===================================================================\n");
    printf(" n |  probability  |  cumulative  |  from  |  to   |\n");
    printf("===================================================================\n");
    for (i = 0; i < 6; i++)
    printf(" %d |       %.2f    |       %.2f   |   %2d   |   %4d |\n",n[i],p[i],c[i],f[i],t[i]);
    printf("------------------------------------------------------------------\n");
    int RN[10],demand[10],j;
    printf("Enter random number intervals for demand:- \n");
    for(j=0;j<10;j++)
        scanf("%d",&RN[j]);
        for(i=0;i<6;i++)
        for(j=0;j<10;j++)
    if(RN[j]>=f[i] && RN[j]<=t[i])
       demand[j]=n[i];
     printf("             *****  INVENTORY ***** \n");
    printf("=====================================\n");
    printf(" Random number  |  Demand \n");
    printf("=====================================\n");
       for(j=0;j<10;j++)
        printf("     %-2d          |    %d     \n",RN[j],demand[j]);
        float pr[3],cu[3];
        int lead[3],fr[3],to[3],k;
        printf("Enter probability for record lead time:-?\n");
        for(k=0;k<3;k++)
            {
            scanf("%f",&pr[k]);
            lead[k]=k+1;
            }
            cu[0]=pr[0];
        for(k=0;k<3;k++)
            cu[k+1]=cu[k]+pr[k+1];
        fr[0]=1;
        to[0]=cu[0]*100;
        for(k=1;k<3;k++){
            fr[k]=(cu[k-1]*100)+1;
            to[k]= (cu[k]*100);
        }
       printf("             *****  INVENTORY ***** \n");
    printf("===================================================================\n");
    printf(" lead |  probability  |  cumulative  |  from  |  to   |\n");
    printf("===================================================================\n");
    for (k = 0; k < 3; k++)
    printf(" %d   |       %.2f     |       %.2f    |   %2d    |   %-2d  |\n",lead[k],pr[k],cu[k],fr[k],to[k]);
    printf("------------------------------------------------------------------\n");
    int R[10],dem[10],m;
    printf("Enter random number intervals for lead time:- \n");
    for(m=0;m<10;m++)
        scanf("%d",&R[m]);
        for(k=0;k<3;k++)
        for(m=0;m<10;m++)
    if(R[m]>=fr[k] && R[m]<=to[k])
       dem[m]=lead[k];
     printf("             *****  INVENTORY ***** \n");
    printf("=====================================\n");
    printf(" Random number  |  Demand \n");
    printf("=====================================\n");
       for(m=0;m<3;m++)
        printf("     %-2d         |    %d     \n",R[m],dem[m]);

        printf("             *****  INVENTORY ***** \n");
    printf("=============================================================================================\n");
    printf("  day  |  UR   |   B   |   RN   |    demand|  end    |  lost   |  order   |   RN   |  lead  |\n");
    printf("=============================================================================================\n");


}

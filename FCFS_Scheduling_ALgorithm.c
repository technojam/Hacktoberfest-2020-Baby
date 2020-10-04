#include&lt;stdio.h&gt;
int main()
{
int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
float z,w;
printf(&quot;\nEnter number of processes : &quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nEnter Process Burst Time\n&quot;);
for(i=0;i&lt;n;i++)
{
printf(&quot;P[%d]:&quot;,i+1);
scanf(&quot;%d&quot;,&amp;bt[i]);
}
wt[0]=0;

for(i=1;i&lt;n;i++)
{
wt[i]=0;
for(j=0;j&lt;i;j++)
wt[i]+=bt[j];
}
printf(&quot;\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time&quot;);

for(i=0;i&lt;n;i++)
{
tat[i]=bt[i]+wt[i];
avwt+=wt[i];
avtat+=tat[i];
printf(&quot;\nP[%d]\t\t%d\t\t%d\t\t%d&quot;,i+1,bt[i],wt[i],tat[i]);
}
z=(float)avwt/(float)i;
w=(float)avtat/(float)i;
printf(&quot;\n\nAverage Waiting Time:%f&quot;,z);
printf(&quot;\nAverage Turnaround Time:%f&quot;,w);
return 0;
}

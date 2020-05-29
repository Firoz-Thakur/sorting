void segragate012(int ar[], int n)
{
    // Your Code Here
    
  int i=0;
  int j=0;
  int k=n-1;
  while(j<=k)
  {
      if(ar[j]==2)
      {
          swap(ar[j],ar[k]);
          k--;
      }
     else if(ar[j]==0)
     {
         swap(ar[i],ar[j]);
         j++;
         i++;
     }
    else
    {
        j++;
    }
  }
}

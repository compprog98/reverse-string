#include<stdio.h>
#include<string.h>
void revword(char *s);
int j=0;
int main()
{
	char s[100]="love from bhagalpur and munger";
	int i;
	int count=0;
	puts(s);
	
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')     // counting total number of words in given string
		count++;
	}

	
	strrev(s);
	
	
	for(i=0;i<=count;i++)
	{
		revword(s+j);                //calling function for every single word to rev
	}
	puts(s);
	
}
void revword(char *s)
{
	int k;
	char temp;
	int i=0;
	for(k=0;s[k]!=' ';k++,i++);  // counting number of letters in word and stored in i
	
	j=j+i+1;
	
	for(k=0;k<i/2;k++)
	  {
	  	temp=s[k];                            // reversing the word
	  	s[k]=s[i-k-1];
	  	s[i-k-1]=temp;
	  }
}

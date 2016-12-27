#include <stdio.h>
int main() {
	int a[99],b[99];						/*Input Array*/
	int s[99],carry;						/*Sum Array, Carry*/
	char c,i,j,x;							/*Other*/
	printf("Please enter integer!!\n\n");	/*Title*/
	while((c=getchar())!='\n'){				/*Get Input*/
		if(((c-'0')>=0)&&((c-'0')<=9)){		/*Check Input*/
			a[i]=c-'0';						/*ASCII -> Integer*/
			i++;							/*index++*/
			if(i>99){printf("Too Big, you are a bad user!! ByeBye\n");return 0;}/*<(_ _)>*/
		}
	}
	a[i--]='\0';							/*Null*/
	fflush(stdin);							/*Clear*/
	while((c=getchar())!='\n'){				/*Get Input*/
		if(((c-'0')>=0)&&((c-'0')<=9)){		/*Check Input*/
			b[j++]=c-'0';					/*ASCII -> Integer*/
			if(j>99){printf("Too Big, you are a bad user!! ByeBye\n");return 0;}/*<(_ _)>*/
		}
	}
	b[j--]='\0';							/*Null*/

	carry=0;								/*Reset carry value*/
	while((i>=0)&&(j>=0)){					/*Run to add*/
		s[x]=a[i]+b[j]+carry;
		carry=0;
		if(s[x]>=10){						/*IF sum>10 than Carry*/
			carry=s[x]/10;
			s[x]=s[x]%10;
			if((i==0)&&(j==0))s[++x]=a[--i]+b[--j]+carry;
		}
		i--;
		j--;
		x++;
	}
	while(i>=0){							/*IF i!=0*/
		s[x]=a[i]+carry;
		carry=0;
		if(s[x]>=10){						/*IF sum>10 than Carry*/
			carry=s[x]/10;
			s[x]=s[x]%10;
			if(i==0)s[++x]=a[--i]+carry;
		}
		i--;x++;
	}
	while(j>=0){							/*IF j!=0*/
		s[x]=b[j]+carry;
		carry=0;
		if(s[x]>=10){						/*IF sum>10 than Carry*/
			carry=s[x]/10;
			s[x]=s[x]%10;
			if(j==0)s[++x]=b[--j]+carry;
		}
		j--;x++;
	}
	for(x=x-1;x>=0;x--){					/*Output*/
//		printf("%d\n",x);
		printf("%d",s[x]);
	}
	return 0;
}

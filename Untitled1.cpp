#include<stdio.h>
int main(){
	int x[50],i,n;
	
	FILE *f;
	// nhap so phan tu cua day so 
	do{
		printf("nhap so phan tu cua day so :");
		scanf("%d",&n);
		
	}while(n<0||n>50);

	
	// ghi vao file
	f = fopen("C:\\BAITAP\\dayso.txt","r");
	for(i=0;i<n;i++)
	  fprintf(f,"%d",x[i]);
	  
	
	fclose(f);
	for(i=0;i<n;i++)
	  if(x[i]%2==1)
	    printf("%d\t",x[i]);
	
	return 0 ;
}

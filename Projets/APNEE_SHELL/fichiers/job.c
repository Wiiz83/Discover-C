#include "myshell.h"

int i,p;


job initialisation(job* TabJob)
{
	TabJob = malloc(sizeof(job) * MAXJOBS);
	
	if (TabJob == NULL) {
	    printf("Erreur d'allocation pour TabJob");
	}
	return *TabJob;
}

void afficher_test(job* TabJob,int TabJob_size)
{
	for(i=0; i<TabJob_size; i++)
	{
		printf("%d",TabJob[i].job_number);
		printf("%d",TabJob[i].sig);
		printf("\t");
	}
	printf("\n");	
}


//ERREUR DE TabJob[i] == NULL
/* 
int premiere_case(job *TabJob, int TabJob_size) 
{
	
 
	int pr;
	for(i=0; i<TabJob_size; i++)
	{
	
		if(TabJob[i] == NULL)
		{	
			pr= i;
		}
		else
		{
			pr= -1;
		}
	}
	return pr;	
}
*/

int numero_job(job *TabJob, int TabJob_size) 
{
	int num;
	for(i=0; i<TabJob_size; i++)
	{
		if(TabJob[i].sig==SIGCONT)
		{	
			num= TabJob[i].job_number;
		}
		else 
		{
			num = -1;
		}
	}
	return num;
}


void ajouter_job(job *TabJob, int *TabJob_size, int number, int sign)
{
		int j;
		j=*TabJob_size;
		while(j>i){
			TabJob[j]=TabJob[j-1];
			j--;
		}
		TabJob[i].job_number=number;
		TabJob[i].sig=sign;
		(*TabJob_size)++;
		

}


void supprime_job(job *TabJob, int *TabJob_size, int number)
{
	for(i=0;i<*TabJob_size; i++){
		if(TabJob[i].job_number == number){
			p=i;				
		}
	}
	
	//free(TabJob[i]);
	
	for(i=p;i<*TabJob_size; i++){
		TabJob[i]=TabJob[i+1];
	}
	(*TabJob_size)--;
		

}



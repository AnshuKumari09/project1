#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pogo{
    char name[15];
    char role[50];
    int age;
    char trait[50];
    char grade;
    }pogo;

    pogo arr[3]; // arr[0],arr[1],....arr[2]
    arr[0].grade='A';
    strcpy(arr[0].name,"Bheem");
    arr[0].age=10;
   strcpy(arr[0].role,"Protagonist");
   strcpy(arr[0].trait,"Brave");
    
  
    arr[1].grade='B';
   strcpy(arr[1].name,"kalia");
    arr[1].age=10;
    strcpy(arr[1].role,"Bheem`s Rival");
    strcpy(arr[1].trait,"OverConfident");
    

    arr[2].grade='C';
    strcpy(arr[2].name,"Dholu-Bholu");
    arr[2].age=10;
    strcpy(arr[2].role,"Kalia`s Sidekicks");
    strcpy(arr[2].trait,"Twin Brother");
    
    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%s\n",arr[i].role);
        printf("%d\n",arr[i].age);
        printf("%s\n",arr[i].trait);
        printf("%c\n\n",arr[i].grade);
    }
   

    return 0;
}

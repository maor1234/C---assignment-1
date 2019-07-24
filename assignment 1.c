#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
int x,y,z,ezer1,ezer2;
printf("please enter 3 numbers:");
int swap;
int ans;
scanf("%d%d%d",&x,&y,&z);
 int arr[]={x,y,z};
 int wrong=0;
 if((x>0)&&(y>0)&&(z>0)||(x>0)&&(z>0)&&(y==0)||(y>0)&&(z>0)&&(x==0)||(x>0)&&(y>0)&&(z==0)||(x>0)&&(z==0)&&(y==0)||(y>0)&&(z==0)&&(x==0)||(z>0)&&(x==0)&&(y==0)){
wrong = 1;//the conditions of the program
}
else{
    printf("invalid number");
    return 0;
 }


            for (int i = 0; i <=1; i++) {
    if (arr[i]>arr[i+1]){
 swap=arr[i+1];
arr[i+1]=arr[i];
     arr[i]=swap;
       }
               }
            if (arr[0]>arr[1]){//arrange the numbers
         swap=arr[1];
          arr[1]=arr[0];
      arr[0]=swap;
          }
                if(arr[2]==arr[0]+arr[1]){//who start
                     ans=0;// user
                }
                else{
                    ans=1;//computer
                }

 printf("packet sizes are:\n%d %d %d",arr[0],arr[1],arr[2] );
 printf(" \n please state how much to take ?\n");
                
             while ((arr[0]+arr[1]+arr[2]!=1)){
if(ans==0){//the computer side  
scanf("%d to %d",&ezer1,&ezer2);
if ((ezer1==arr[0])&&(ezer2<ezer1)&&(ezer2>=0)){
                               arr[0] = ezer2;
                               ans=1;
    }
  else if ((ezer1==arr[1])&&(ezer2<ezer1)&&(ezer2>=0)){
         arr[1] = ezer2;
          ans=1;
        }                              
   else if((ezer1==arr[2])&&(ezer2<ezer1)&&(ezer2>=0)){
                               arr[2] = ezer2;
                               ans=1;
                                }
                                else {
printf("invalid input");
                                    break;
       }
}
   for (int i = 0; i <=1; i++) {
  if (arr[i]>arr[i+1]){
      swap=arr[i+1];
      arr[i+1]=arr[i];
      arr[i]=swap;
      }
          }
            if (arr[0]>arr[1]){
 swap=arr[1];
 arr[1]=arr[0];
 arr[0]=swap;
 }
if(ans==1) { //the user side                             
if ((arr[2]>1)&&(arr[1]==0)&&(arr[0]==0)){
 printf("i turned  %d to:",arr[2]);
 arr[2]=1;
 printf( "%d\n",arr[2]);
  }
   else if ((arr[2]>1)&&(arr[1]==1)&&(arr[0]==0)){
       printf("i turned  %d to:",arr[2]);
   arr[2]=0;
  printf( "%d\n",arr[2]);

            }
else if((arr[2]>1)&&(arr[1]==1)&&(arr[0]==1)){
printf("i turned  %d to:",arr[2]);
     arr[2]=1;
 printf( "%d\n",arr[2]);

   }
    else if((arr[1]>1)&&(arr[2]>1)){
 printf("i turned  %d to:",arr[2]);
  swap=arr[1]-arr[0];
  arr[2]=swap;
     printf("%d\n",arr[2]);
      }
      for (int i = 0; i <=1; i++) {
if (arr[i]>arr[i+1]){//arrange the numbers
      swap=arr[i+1];
      arr[i+1]=arr[i];
      arr[i]=swap;
      }
          }
            if (arr[0]>arr[1]){
 swap=arr[1];
 arr[1]=arr[0];
 arr[0]=swap;
 }

   printf("packet sizes are now:\n%d %d %d",arr[0],arr[1],arr[2]);
   printf("\nyour turn:");
  ans=0;

          if(arr[0]+arr[1]+arr[2]==1){
      printf ( "Game Over - You Lost !!"); 
        }

}
  }

}  
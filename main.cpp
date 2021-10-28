
#include <iostream>
#include "tvlib.h"
#include <string.h>
#define size 3

using namespace std;


int main(void)
{
    
    FILE *tvptr;


    char a[50];
    string brand;


 
    Television tv[size];
          
    float cost;
    float sale_price;
    int stock= 0;
    int count= 0;
    int req = 0;	

    tvptr = fopen("stock.txt","r");
    if (tvptr == NULL)
    {
        printf("\nTelevision data file could not be opened");
    }
    else
    {			
       printf("\nFile successefuly opened ");	 
  	
  	  	

        fscanf(tvptr , "%s %d %f %f" , a, &stock, &cost , &sale_price);
         while(!feof(tvptr))
         {
            brand = a;
            tv[count].set_var(brand ,stock ,  cost , sale_price);
            fscanf(tvptr , "%s %d %f %f" , a, &stock, &cost , &sale_price); 
            count++;
         }

   		fclose(tvptr);			
   }
        
        
        while((req = Television::loopChoice())!= 0){
        	
        switch(req){
		
        	case 1:
        		cout << "    ####### " << endl;
        		for (int i = 0 ; i < size ; i++  ){
        			tv[i].display_message();
				}
        		
        		break;
        		
        	case 2:
			
			
			for (int i = 0 ; i < size ; i++){
				
				tv[i].stock_add();
			}	
			break;
			
			case 3:
				
				for (int i = 0 ; i < size ; i++){
					tv[i].stock_delete();
				}
				break;
				
			case 4:
			
			    for (int i = 0 ; i < size ; i++){
			    	
			    	tv[i].set_sell_price();
			    	
				}	
				break;
			case 5:
			
			    for (int i = 0 ; i < size ; i++){
			    	tv[i].sell_price_prozent();
				}	
        		break;
        	case 6:
			
			    for (int i = 0 ; i < size ; i++){
			    	tv[i].sell_price_discount();
				}	
        		break;
				
             default:
           	
           	cout << endl << "Please input value from board"<< endl;
           	
           	break;
		}
        
    

}
    return 0;
}












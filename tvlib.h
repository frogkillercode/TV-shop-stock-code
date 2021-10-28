#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Television {
	
	private:
	  string name;
	  float buy_price;
	  float sell_price;
	  int stock;
		
	public:
	 
	void set_var (string name_temp , int stock_amount_temp , float buy_price_temp , float sell_price_temp ){
		name = name_temp;
		buy_price = buy_price_temp;
		sell_price = sell_price_temp;  
	    stock = stock_amount_temp;
    
	}
	
    //end of set_var
  
    void display_message(){
		cout <<endl <<"Brand name : " << name <<endl;
		cout <<"Amount in stock : "<< stock << endl;
		cout <<"Buy price : " << buy_price << endl;
	    cout <<"Sell price : " << sell_price << endl ; 
	    cout <<"________________________" << endl << endl; 
	    
}

    //end of display_message
    
    void stock_add(){
    	int num;
    	cout << "Input number for " << name << ": " << endl;
    	cout << "--> " ;
    	cin >> num;
    	stock = stock + num;
    	
	}
	
	// end of stock_add
	
	void stock_delete(){
		int num;
    	cout << "Input number for " << name << ": " << endl;
    	cout << "--> " ;
    	cin >> num;
    	if(num < stock){
    	stock = stock - num;	
      } 
      
      
	  else
	  {
	  	cout << "!!!Input number less than: " << stock <<" !!!" << endl <<endl;
	  }

	  // end of stock_delete
	  
	}
	
	void set_sell_price(){
		double price;
		double temp = sell_price;
	    char p [] = {'p' , ' '};
	    char p2[] = {' ' , ' '};
	    
	
		
		cout << "Input new sell price for " << name << ": "<< endl;
		cout << "--> " ;
		cin >> price;
	
		if (price > sell_price){
			sell_price = price;
			cout << "New price is: " << sell_price << endl << "Old price is: "<< temp << endl << endl;
			
		}
		else if (price < sell_price){
			sell_price = price;
			cout << "New price is: " << sell_price << endl << "Old price is: "<< temp << endl << endl;
			
		}
	
	}
	
	
	void sell_price_discount(){
		
		  double number;
		   double temp = sell_price;
		   
		   cout << "Input discount prozent of sell price for " << name << ": "<<endl;
		   cout << "--> " ;
		   cin >> number; 
		   
		   sell_price =  sell_price * (100.00 / (number+100.00));  
		   
		   cout << "Old price is: " << temp << endl << "New price is: "  <<sell_price << endl << endl;
	}
	
      	
       
       void sell_price_prozent(){
           double number;
		   double temp = sell_price;
		   
		   cout << "Input increase prozent of sell price for " << name << ": "<<endl;
		   cout << "--> " ;
		   cin >> number; 
		   
		   sell_price =  sell_price * ((number+100.00) / 100.00);  
		   
		   cout << "Old price is: " << temp << endl << "New price is: "  <<sell_price << endl << endl;	
	   }
	   
	   //end of sell price prozent
	   
    static int loopChoice(){
    	
    	int req;
    	
    	
    	cout << endl << endl << "Press 0 to exit"<< endl;
    	cout << "Press 1 for displaying data"<< endl;
    	cout << "Press 2 for adding to stock" << endl;
    	cout << "Press 3 for deleting from stock" << endl;
    	cout << "Press 4 for changing sale price" << endl;
    	cout << "Press 5 for increasing sale price in prozent" << endl;
    	cout << "Press 6 for discount of sell price" << endl;
    	
    	cout << "--> " ;
    	cin >> req;
    	return req;
	}
	
    // end of loopChoice	
 
};

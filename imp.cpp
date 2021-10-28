#include "tvlib.h"



void Television::set_var (string name_temp , int stock_amount_temp , float buy_price_temp , float sell_price_temp ){
	name = name_temp;
	buy_price = buy_price_temp;
	sell_price = sell_price_temp;  
    stock_amount = stock_amount_temp;
}

void Television::display_message(){
	cout <<"Brand name : " << name <<endl;
	cout <<"Amount in stock : "<< stock_amount << endl;
	cout <<"Buy price : " << buy_price << endl;
    cout <<"Sell price :" << sell_price << endl; 
}



#include <stdio.h>
#include <stdlib.h>

int main (void){
	system ("COLOR C");
	float endorsement=0,profit=0,loss=0,shop_rent,flour_cost,worker_cost,other_bills,car_oil_costs,bread_cost,taxes,insurances,profit_goal,critical_level;
	int wastage,producted_bread,remained_bread,sold_bread,last_bread;
	
	printf ("------HELLO BOSS WELCOME TO YOUR OFFICIAL SYSTEM!!!------\n");
	printf ("PLEASE ENTER YOUR PROFIT GOAL:");
	scanf ("%f",&profit_goal);
	printf ("PLEASE ENTER YOUR CRITICAL LEVEL:");
	scanf ("%f",&critical_level);
	printf ("PLEASE ENTER THE BREAD COST:");
	scanf ("%f",&bread_cost); 
	printf ("PLEASE ENTER THE FLOUR COST:");
	scanf ("%f",&flour_cost);
	printf ("PLEASE ENTER YOUR PRODUCTION:");
	scanf ("%d",&producted_bread);
	printf ("PLEASE ENTER THE SOLD BREADS:");
	scanf ("%d",&sold_bread);
	printf ("PLEASE ENTER YOUR WASTAGE:");
	scanf ("%d",&wastage);
	printf ("PLEASE ENTER THE TAXES THAT YOU PAID:");
	scanf ("%f",&taxes);
	printf ("PLEASE ENTER THE INSURANCES THAT YOU PAID:");
	scanf ("%f",&insurances);
	printf ("PLEASE ENTER THE CAR COSTS:");
	scanf ("%f",&car_oil_costs);
	printf ("PLEASE ENTER THE SHOP RENT:");
	scanf ("%f",&shop_rent);
	printf ("PLEASE ENTER THE OTHER BILLS:");
	scanf ("%f",&other_bills);
	printf ("PLEASE ENTER THE WORKERS'COST:");
	scanf ("%f",&worker_cost);
	
	if (bread_cost <= 0 || car_oil_costs <= 0 || flour_cost <= 0 || insurances <= 0 || other_bills <= 0 || producted_bread <= 0 || shop_rent <= 0 || taxes <= 0 || worker_cost <= 0 || critical_level <= 0 || profit_goal <= 0 || profit_goal < critical_level){
		printf ("YOU ENTERED AN INVALID VALUE!!!");
		return 0;
	}
	remained_bread = (producted_bread-wastage);
	last_bread = (remained_bread - sold_bread);
	endorsement += (sold_bread * bread_cost);
	loss += ((wastage+last_bread)*bread_cost);
	profit += (endorsement - (car_oil_costs+flour_cost+insurances+loss+other_bills+shop_rent+taxes+worker_cost));
	
	printf ("YOUR ENDORSEMENT IS %.2f\n",endorsement);
	printf ("YOUR LOSS IS %.2f\n",loss);
	printf ("YOUR PROFIT IS %.2f\n\n\n",profit);
	
	if (profit <= critical_level){
		printf ("YOU ARE ON CRITICAL LEVEL!!!\n");
		printf ("YOU CAN DECREASE WORKERS' SALARY OR FIRE SOME WORKERS\n");
	}
	else if (profit > critical_level && profit < profit_goal){
		printf ("YOU HAVE TO DO SOMETHING FOR INCREASE YOUR PROFIT!!!\n");
		printf ("YOU CAN DECREASE OIL COSTS OR WORKERS' SALARY\n");
		printf ("YOU CAN ALSO SELL NEW PRODUCTS (CAKE OR PATISSERIES ETC...)\n");
	}
	else if (profit >= profit_goal){
		printf ("YOU ARE ON YOUR GOAL!!! BE CAREFUL AND CONTINUE THIS STYLE!!!\n");
		printf ("YOU CAN OPEN NEW SHOP OR INCREASE BREAD DELIVERS\n");
	}
	return 0;
}
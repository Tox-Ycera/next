/*Precious Waithera
Reg no: CT101/G/24685/24*/

#include <stdio.h>
int main(){
	int Customer_ID;
	char Customer_Name[50];
	int Unit_Consumed;
	
	float Charge_per_unit, Total_charge;
	
	printf("Enter Customer_ID:");
	scanf("%d",&Customer_ID);
	
	printf("Enter Customer_Name:");
	scanf("%s",&Customer_Name);
	
	printf("Enter Unit_Consumed:");
	scanf("%d",&Unit_Consumed);
	
	if(Unit_Consumed<0)
	Charge_per_unit = 100;
	else if(Unit_Consumed <= 199){
		Charge_per_unit=Unit_Consumed * 1.20;}
	else if(Unit_Consumed <400){
		Charge_per_unit=Unit_Consumed * 1.50;}
	else if(Unit_Consumed <600){
		Charge_per_unit=Unit_Consumed * 1.80;}
	else if(Unit_Consumed >600){
		Charge_per_unit=Unit_Consumed * 2.00;}
		
	if(Charge_per_unit >400)
	Total_charge= Charge_per_unit * 1.15;
	else
	Total_charge = Charge_per_unit;
	
	printf("%s\n", Customer_Name);
	printf("%d\n", Customer_ID);
	printf("%d\n", Unit_Consumed);
    printf("Charge_per_unit is: %2lf\n",Charge_per_unit);
	printf("Total_charge is: %2lf\n",Total_charge);
	
	return 0;
}

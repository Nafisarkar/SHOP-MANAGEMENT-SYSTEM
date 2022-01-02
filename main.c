
//S.M. HARIS     ID:211-15-14636
//PEYA PANDIT    ID:211-15-14633
//SHAON AN NAFI  ID:211-15-14645
//MK HAMIM       ID:211-15-14632

#include <stdio.h>    // this is the defult library
#include <stdlib.h>   // this is the stdlib library
#include <string.h>   // this is the string library
#include <windows.h>  // this is the windows api library
int rt=1;

//this is the structure it has some members that cant hold data;
struct month{
	int day;
	int month;
	int Solditems;
	int Profit;
	int Loss;
	int Total_sold;
	char SellerName[10];
};
//this is the array of the custom type ;
struct month dayzz[370];

//this function calcate the day and month;
int days(int day){
	int d2 = day%30;
	return d2;
}

//this function display the information in that node;
void display(int in){
	//this will return the day;
	int d = days(dayzz[in].day);
	system("cls");
	int rl=0;
	while(1){
	printf("index is %d \n",in);
	printf("+++++++++++++++\nDATE:%d/%d/2021\n+++++++++++++++\n",d,dayzz[in].month+1);
	printf("SellerName = %s\n",dayzz[in].SellerName);
	printf("Solditems = %d\n",dayzz[in].Solditems);
	printf("Profit = %d\n",dayzz[in].Profit);
	printf("Loss = %d\n",dayzz[in].Loss);
	printf("Total_sold = %d\n",dayzz[in].Total_sold);
	
	printf("\nEnter 0 to return\n");
	scanf("%d",&rl);
		if(rl==0){
			break;
		}
	}
}

//haris <<
//this function take input of the day and month
void FunctionDisplat(){
	system ("cls");
	int mm=0,dd=0;
	//this will take the month;
	printf("Enter the Month Number\n");
	scanf("%d",&mm);
	system ("cls");
	//this will take the day;
	printf("Enter the Date Number\n");
	scanf("%d",&dd);
	mm=(mm-1);

	if(mm==0){
		display(dd);
	}
	else{
		dd += mm*30;
		printf("index %d",dd);
		display(dd);
	}
}

//this will hendle all the invalid error
void invalid(){
				system ("cls");
				printf("\rinvalid choice\n 0.return\n");
				scanf("%d",&rt);
				
				while(1){
					if(rt==0){
						break;
					}
					else{
						printf("invalid command!\n");
						invalid();
				}
		}		
}
//pia <<

//input function
void input_data(int moth){
	system ("cls");
	int index=0;
	int date=0;
	int solditems=0;
	int profit=0;
	int loss=0;
	char name[10];

	//takes the date 
	printf("Enter the date: ");
	scanf("%d",&date);

	//month calculation
	//moth_chk(moth);
	moth=moth-1;
	if(moth==0){
		index = date;
		dayzz[index];
	}
	else{
		date += moth*30;
		index = date;
	}

	//this will input the data to the node;
	dayzz[index].day = date; //data input date data;
	dayzz[index].month =moth;//data inout for month;

	printf("Enter the number of solditems: ");
	scanf("%d",&solditems);
	int temp = solditems;
	int count=1;
	int soldprice;
	int actualprice=0;

	dayzz[index].Solditems = solditems; //data input for solditems;

	int totall=0;
	char sellername[10];

	printf("Seller name:");
	scanf("%s",sellername);
	strcpy(dayzz[index].SellerName,sellername); //data input for Sellername;

	//calculation for days with the days function
	date = days(date);
	while (temp != 0){
		system ("cls");

		printf("---------------------\nDATE: %d/%d/2021 - Seller:%s\n---------------------\n",date,moth+1,sellername);

		//takes the sold price;
		printf("Enter the Sold price of %d item +_+\n",count);
		scanf("%d",&soldprice);
		//takes the actule price;
		printf("Enter the actual price\n");
		scanf("%d",&actualprice);

		
		totall+= soldprice;

		if(soldprice>actualprice){
			profit+=soldprice-actualprice;
		}
		else{
			loss+=actualprice-soldprice;
		}
		actualprice=0;
		soldprice=0;
		count++;temp--;

	}
	//this will input the data to the node;
	dayzz[index].Profit = profit;
	dayzz[index].Loss = loss;
	dayzz[index].Total_sold = totall;
	//this will print the loss and profit;
	while(1){
		printf("Total Profit: %d\nTotal Loss: %d\nTotal Sold %d\nEnter 0 to return\n",profit,loss,totall);
		int ret;
		scanf("%d",&ret);
		if(ret==0){
			break;
		}
		else{
			invalid();
		}	
	}
}

//nafi <<

void inputday_data(){
	system ("cls");
	//this function print the month and take the month as a input;
	printf("1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.Septermber\n10.October\n11.November\n12.December\n0. Exit\n");
	int doing=0;
	scanf("%d",&doing);
	switch(doing){
		case 1:
			input_data(1);
			break;
		case 2:
			input_data(2);
			break;
		case 3:
			input_data(3);
			break;
		case 4:
			input_data(4);
			break;
		case 5:
			input_data(5);
			break;
		case 6:
			input_data(6);
			break;
		case 7:
			input_data(7);
			break;
		case 8:
			input_data(8);
			break;
		case 9:
			input_data(9);
			break;
		case 10:
			input_data(10);
			break;
		case 11:
			input_data(11);
			break;
		case 12:
			input_data(12);
			break;
		case 0:
			break;
		default:
			//this will hendle the error;
			invalid();
		break;
	}
}
//nafi
void Monthly(){
	system ("cls");
	int month_select;
	int t_profit=0;
	int t_loss=0;
	int t_sell=0;
	int t_items=0;
	printf("1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December\n0. Exit\n");
	scanf("%d",&month_select);
	while (month_select)
	{
		if(month_select==1){
			for(int i=1;i<=30;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==2){
			for(int i=31;i<=60;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==3){
			for(int i=61;i<=90;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==4){
			for(int i=91;i<=120;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==5){
			for(int i=121;i<=150;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==6){
			for(int i=151;i<=180;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==7){
			for(int i=181;i<=210;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==8){
			for(int i=211;i<=240;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==9){
			for(int i=241;i<=270;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==10){
			for(int i=271;i<=300;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==11){
			for(int i=301;i<=330;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else if(month_select==12){
			for(int i=331;i<=360;i++){
			t_loss +=dayzz[i].Loss;
			t_profit+=dayzz[i].Profit;
			t_sell+= dayzz[i].Total_sold;
			t_items+= dayzz[i].Solditems;
			}
			break;
		}
		else{
			invalid();
			break;
		}
	}
	
	while(1){
	system ("cls");
	int brk;
	printf("total loss = %d\n",t_loss);
	printf("total profit = %d\n",t_profit);
	printf("total sold = %d\n",t_sell);
	printf("total sold items = %d\n",t_items);

	printf("Enter 0 to return\n");
	scanf("%d",&brk);
		if(brk==0){
			break;
		}
	}
	
}
//nafi
void Yearly(){
	int y_profit=0,y_loss=0,y_sold=0,y_items=0;
		for(int i=0;i<=360;i++){
			y_items+= dayzz[i].Solditems;
			y_profit+= dayzz[i].Profit;
			y_loss+= dayzz[i].Loss;
			y_sold+= dayzz[i].Total_sold;
		}
	while(1){
	system ("cls");
	int brk;
	printf("total loss = %d\n",y_loss);
	printf("total profit = %d\n",y_profit);
	printf("total sold = %d\n",y_sold);
	printf("total sold items = %d\n",y_items);

	printf("Enter 0 to return\n");
	scanf("%d",&brk);
		if(brk==0){
			break;
		}
	}
}

void display_selection(){
	int disco=0;
	while(1){
	system ("cls");
	printf("> DISPLAY MENU \n 1.Daily records \n 2.Monthly records \n 3.Yearly \n 0.return \n");
	scanf("%d",&disco);

		switch(disco){
		
			case 1:
				FunctionDisplat();
				break;
			case 2:
				Monthly();
			case 3:
				Yearly();
			case 0:
				break;
			default:
				invalid();
			break;
		}
		break;
	}
}

//this is the main fucntion .
int main(){
	//this part is the title of the window
	SetConsoleTitle("> > Store Mangement System < <");
	int ch=0;
	while(1){
		system("cls");
		//this part will print the menu
		printf("\n\t\t\t>>Menu\n");
		printf("\t\t\t> 1.Input \n\t\t\t> 2.Display \n\t\t\t> 0.exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				//this will call the inputday data;
				inputday_data();
				break;
			case 2:
				//this will call the display function;
				display_selection();
				break;
			case 0:
				//this will end the function;
				exit(0);
			default:
				//this will call if anything goes wrong;
				invalid();
			break;
				
		}
	}
	return 0;
}
//hamim <<
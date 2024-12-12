#include <stdio.h>

	int Hours_worked;		 //so gio lam
	int Hourly_rate;		//luong theo gio
	int Base_pay;			//luong co ban
	int Worker_allowance;	//phu cap
	int Total_salary;		//Tong luong

int main() {
    
    printf("Nhap so gio lam viec trong thang: ");
    scanf("%d", &Hours_worked);
    printf("Nhap muc luong theo gio: ");
    scanf("%d", &Hourly_rate);
    Base_pay = Hours_worked * Hourly_rate;
	
	if (Hours_worked > 160) {
        Worker_allowance = Base_pay * 10 / 100;
        Total_salary = Base_pay + Worker_allowance;
        printf("Ban nhan duoc phu cap: %d\n", Worker_allowance);
    } else {
        Worker_allowance = 0;
        Total_salary = Base_pay;
    }
    
	printf("Luong co ban: %d\n", Base_pay);
    printf("Tong luong: %d\n", Total_salary);

    return 0;
}

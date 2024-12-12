#include <stdio.h>

int choice;					//chon don vi tien te can chuyen doi
float amount; 				//so tien can chuyen doi
float Currency_conversion;	//chuyen doi tien te

int main() {

	printf("==========CHUONG TRINH CHUYEN DOI TIEN TE=========\n");
	printf("1. USD -> VND\n");
    printf("2. EUR -> VND\n");
    printf("3. GBP -> VND\n");
    printf("4. JPY -> VND\n");
    printf("5. VND -> USD\n");
    printf("6. VND -> EUR\n");
    printf("7. VND -> GBP\n");
    printf("8. VND -> JPY\n");
	printf("Nhap don vi tien muon chuyen doi (1-8): ");
    scanf("%d", &choice);

    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &amount);

    switch(choice) {
        case 1:
            Currency_conversion = amount * 23500;
            printf("%.2f USD = %.2f VND\n", amount, Currency_conversion);
            break;
        case 2:
            Currency_conversion = amount * 25000;
            printf("%.2f EUR = %.2f VND\n", amount, Currency_conversion);
            break;
        case 3:
            Currency_conversion = amount * 28000;
            printf("%.2f GBP = %.2f VND\n", amount, Currency_conversion);
            break;
        case 4:
            Currency_conversion = amount * 180;
            printf("%.2f JPY = %.2f VND\n", amount, Currency_conversion);
            break;
    	case 5:
    		Currency_conversion = amount / 23500;
    		printf("%.2f VND = %.2f USD\n", amount, Currency_conversion);
    		break;
    		
	   case 6:
	   		Currency_conversion = amount / 25000;
    		printf("%.2f VND = %.2f EUR\n", amount, Currency_conversion);
    		break;
    		
    	case 7:
    		Currency_conversion = amount / 28000;
            printf("%.2f VND = %.2f GBP\n", amount, Currency_conversion);
            break;
	   
	   case 8: 
	   		Currency_conversion = amount / 180;
            printf("%.2f VND = %.2f JPY\n", amount, Currency_conversion);
            break;

	    default:
            printf("Lua chon khong hop le\n");
            break;
    }

    return 0;
}


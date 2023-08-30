#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct login_detail
{
    int password, age, dose, f1, f2, per_ind;
    float total_price, discount;
    char name[100], address[200], login_name[20], block[100];
    unsigned long long mobile_no, aadhar_no, passport_no;
} p[100], c;
struct airlines
{
    int price, seat, timehh, timemm;
    char airline_name[100], to[100], from[100];
    int n1, n2, n3;
    int flight_no, total_tic, user_flight, del_tic, flag, flag1, flag2;
    char class[100];
} e[10], e1[10], b[10], n, m;

void welcome_page()
{
    printf("****************************************************************************************************************************************************\n");
    printf("\t\t\t\t       Welcome to LJ's Group 12 C project for Online AIR ticket                \n");
    printf("****************************************************************************************************************************************************\n");
}
int login_page()
{
    int i, j;
    int count, rem, count1, count3;
    unsigned long long int temp, temp1;
    char a[1];
start2:
    fflush(stdin);
    printf("\nEnter your Full Name : ");
    gets(c.name);
    for (i = 0; c.name[i] != '\0'; i++)
    {
        if (c.name[i] >= '0' && c.name[i] <= '9')
        {
            printf("Name cannot be an integer type\n");
            goto start2;
        }
    }
    printf("Enter your Address   : ");
    gets(c.address);
    fflush(stdin);
    do
    {
        count = 0;
        fflush(stdin);
        printf("Enter your Mobile No : ");
        scanf("%llu", &c.mobile_no);
        temp = c.mobile_no;
        while (temp > 0)
        {
            
            count++;
            temp = temp / 10;
        }
        if (count == 10)
        {
        }
        else
        {
            printf("ERROR! Please Enter the 10 digit mobile number :\n");
        }
    } while (count != 10);
    printf("Enter the Number of Tickets you want to Purchase : ");
    fflush(stdin);
    scanf("%d", &n.total_tic);
    printf("\n");
start_1:
    for (i = 0; i < n.total_tic; i++)
    {
        printf("Enter the person %d Index : ", i + 1);
        scanf("%d", &p[i].per_ind);
        fflush(stdin);
        printf("Enter Name of Person %d : ", i + 1);
        gets(p[i].name);
        for (j = 0; p[j].name[j] != '\0'; j++)
        {
            if (p[j].name[j] >= '0' && p[j].name[j] <= '9')
            {
                printf("Name cannot be an integer type\n");
                goto start_1;
            }
        }
        fflush(stdin);
        printf("Enter Age of Person %d  : ", i + 1);
        scanf("%d", &p[i].age);
        fflush(stdin);
    }
    printf("\n");
start:
    for (i = 0; i < n.total_tic; i++)
    {\
        do
        {
            count1 = 0;
            printf("Enter Person[%d] Aadhar Card Number : ", i + 1);
            scanf("%llu", &p[i].aadhar_no);
            temp1 = p[i].aadhar_no;
            while (temp1 > 0)
            {
                count1++;
                temp1 = temp1 / 10;
            }
            if (count1 == 12)
            {
            }
            else
            {
                printf("ERROR! Please Enter the 12 digit Adhar card number : \n");
            }
        } while (count1 != 12);
    }
    for (i = 0; i < n.total_tic; i++)
    {
        for (j = i + 1; j < n.total_tic; j++)
        {
            if (p[i].aadhar_no == p[j].aadhar_no)
            {
                printf("Two Aadhar card Can't be same\n");
                goto start;
            }
        }
    }
start1:
    for (i = 0; i < n.total_tic; i++)
    {

        fflush(stdin);
        printf("Enter Person[%d] Passport Block Character : ", i + 1);
        gets(p[i].block);
        if (p[i].block[0] >= 'a' && p[i].block[0] <= 'z')
        {
            p[i].block[0] = p[i].block[0] - 32;
        }
        fflush(stdin);
        do
        {
            count1 = 0;
            printf("Enter Person[%d] Passport Number    : ", i + 1);
            scanf("%llu", &p[i].passport_no);
            temp1 = p[i].passport_no;
            while (temp1 > 0)
            {
                count1++;
                temp1 = temp1 / 10;
            }
            if (count1 == 7)
            {
            }
            else
            {
                printf("ERROR! Please Enter the 7 digit passport number : \n");
            }
        } while (count1 != 7);
    }
    for (i = 0; i < n.total_tic; i++)
    {
        for (j = i + 1; j < n.total_tic; j++)
        {
            if (p[i].block[0] == p[j].block[0] && p[i].passport_no == p[j].passport_no)
            {
                
                printf("Two Passport Number Can't be same\n");
                goto start1;
                
            }
        }
    }
    printf("\n");
}
void print_info()
{
    int i;
    printf("\nAddress                   :: %s\n", c.address);
    printf("Mobile No.                :: %llu\n", c.mobile_no);
    for (i = 0; i < n.total_tic; i++)
    {
        if (p[i].aadhar_no == 0)
        {
        }
        else
        {
            printf("Person Index              :: %d\n", p[i].per_ind);
            printf("Name of Person[%d]         :: %s\n", i + 1, p[i].name);
            printf("Aadhar NO. of Person[%d]   :: %llu\n", i + 1, p[i].aadhar_no);
            printf("Passport NO. OF Person[%d] :: %s%llu\n", i + 1, p[i].block, p[i].passport_no);
        }
    }
}

void economy()
{
    int i;
    printf("Enter the number of flights : \n");
    scanf("%d", &n.n1);
    for (i = 0; i < n.n1; i++)
    {
        // n.no[n.count]= ++n.flight_no;
        // n.count++;
        printf("\nEnter the flight number        : ");
        scanf("%d", &e[i].flight_no);
        fflush(stdin);
        printf("Enter the starting destination : ");
        gets(e[i].from);
        printf("Enter the final destination    : ");
        gets(e[i].to);
        printf("Enter the airline name         : ");
        gets(e[i].airline_name);
        fflush(stdin);
        printf("Enter the price                : ");
        scanf("%d", &e[i].price);
        printf("Enter the total seat of that class in airline : ");
        scanf("%d", &e[i].seat);
        printf("Enter the time scheduled       = ");
    time:
        scanf("%d %d", &e[i].timehh, &e[i].timemm);
        fflush(stdin);
        if (e[i].timehh >= 24 || e[i].timehh < 0)
        {
            printf("Enter the correct time format of hour\n");
            goto time;
        }
        if (e[i].timemm >= 60 || e[i].timemm < 0)
        {
            printf("Enter the correct time format of Minute\n");
            goto time;
        }
    }
}

void executive()
{
    int i;
    printf("\nEnter the number of flights =\n");
    scanf("%d", &n.n2);
    for (i = 0; i < n.n2; i++)
    {
        printf("Enter the flight number        : ");
        scanf("%d", &e1[i].flight_no);
        fflush(stdin);
        printf("Enter the starting destination : ");
        gets(e1[i].from);
        printf("Enter the final destination    : ");
        gets(e1[i].to);
        printf("Enter the airline name         : ");
        gets(e1[i].airline_name);
        fflush(stdin);
        printf("Enter the price                : ");
        scanf("%d", &e1[i].price);
        printf("Enter the total seat of that class in airline : ");
        scanf("%d", &e1[i].seat);
        printf("Enter the time scheduled       = ");
    time1:
        scanf("%d %d", &e1[i].timehh, &e1[i].timemm);
        fflush(stdin);
        if (e1[i].timehh >= 24 || e1[i].timehh < 0)
        {
            printf("Enter the correct time format of hour\n");
            goto time1;
        }
        if (e1[i].timemm >= 60 || e1[i].timemm < 0)
        {
            printf("Enter the correct time format of Minute\n");
            goto time1;
        }
    }
}

void bussiness()
{
    int i;
    printf("\nEnter the number of flights = \n");
    scanf("%d", &n.n3);
    for (i = 0; i < n.n3; i++)
    {
        printf("Enter the flight number        : ");
        scanf("%d", &b[i].flight_no);
        fflush(stdin);
        printf("Enter the starting destination : ");
        fflush(stdin);
        gets(b[i].from);
        printf("Enter the final destination    : ");
        gets(b[i].to);
        printf("Enter the airline name         : ");
        gets(b[i].airline_name);
        fflush(stdin);
        printf("Enter the price                : ");
        scanf("%d", &b[i].price);
        printf("Enter the total seat of that class in airline : ");
        scanf("%d", &b[i].seat);
        printf("Enter the time scheduled = ");
    time2:
        scanf("%d %d", &b[i].timehh, &b[i].timemm);
        fflush(stdin);
        if (b[i].timehh >= 24 || b[i].timehh < 0)
        {
            printf("Enter the correct time format of hour\n");
            goto time2;
        }
        if (b[i].timemm >= 60 || b[i].timemm < 0)
        {
            printf("Enter the correct time format of Minute\n");
            goto time2;
        }
    }
}

void airline_print_det()
{
    int i, count = 0;

    printf("\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("  CLASS    | FLIGHT NO | FROM | TO  | TIME | AIRLINE NAME | PRICE | SEATS |\n");
    printf("------------------------------------------------------------------------------------\n");

    for (i = 0; i < (n.n1); i++)
    {
        printf("Economy     %d           %s    %s  %d:%d   %s              %d    %d\n", e[i].flight_no, e[i].from, e[i].to, e[i].timehh, e[i].timemm, e[i].airline_name, e[i].price, e[i].seat);
        count++;
    }

    for (i = 0; i < (n.n2); i++)
    {
        printf("Executive   %d           %s    %s  %d:%d   %s              %d    %d\n", e1[i].flight_no, e1[i].from, e1[i].to, e1[i].timehh, e1[i].timemm, e1[i].airline_name, e1[i].price, e1[i].seat);
        count++;
    }

    for (i = 0; i < (n.n3); i++)
    {
        printf("Business    %d           %s    %s  %d:%d   %s              %d    %d\n", b[i].flight_no, b[i].from, b[i].to, b[i].timehh, b[i].timemm, b[i].airline_name, b[i].price, b[i].seat);
        count++;
    }
}

void flight_sort()
{
    char flight_name[30], yn;
    int copy1, copy2, copy3, flag1 = 0, flag2 = 0, flag3 = 0, ctr = 0;
jump:
    fflush(stdin);
    printf("\nEnter the name of your choice flight : ");
    gets(flight_name);
    printf("\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("  CLASS    | FLIGHT NO | FROM | TO  | TIME | AIRLINE NAME | PRICE | SEATS |\n");
    printf("------------------------------------------------------------------------------------\n");
    for (int i = 0; i < (n.n1 + n.n2 + n.n3); i++)
    {
        copy1 = strcmp(flight_name, e[i].airline_name);
        copy2 = strcmp(flight_name, e1[i].airline_name);
        copy3 = strcmp(flight_name, b[i].airline_name);
        if (copy1 == 0)
        {
            printf("Economy     %d           %s    %s   %d:%d   %s              %d    %d\n", e[i].flight_no, e[i].from, e[i].to, e[i].timehh, e[i].timemm, e[i].airline_name, e[i].price, e[i].seat);
            
            flag1 = 1;
        }
        if (copy2 == 0)
        {
           
            printf("Executive   %d           %s    %s   %d:%d   %s              %d    %d\n", e1[i].flight_no, e1[i].from, e1[i].to, e1[i].timehh, e1[i].timemm, e1[i].airline_name, e1[i].price, e1[i].seat);
            flag2 = 1;
        }
        
        if (copy3 == 0)
        {
            
            printf("Business    %d           %s    %s   %d:%d   %s              %d    %d\n", b[i].flight_no, b[i].from, b[i].to, b[i].timehh, b[i].timemm, b[i].airline_name, b[i].price, b[i].seat);
            flag3 = 1;
        }
    }
    if (flag1 == 1 || flag2 == 1 || flag3 == 1)
    {
    }
    else
    {
        printf("We don't have your choice flight please choose another airline");
        goto jump;
    }
}

void flight_starend_sort()
{
    int i, copy, copy1, count = 0,flag1=0,flag2=0,flag3=0;
    char start[30], end[30], yn;
jump:
    fflush(stdin);
    printf("Enter the starting and ending destination :\n");
    gets(start);
    strlwr(start);

    gets(end);
    strlwr(end);

    printf("------------------------------------------------------------------------------------\n");
    printf("  CLASS    | FLIGHT NO | FROM | TO  | TIME | AIRLINE NAME | PRICE | SEATS |\n");
    printf("------------------------------------------------------------------------------------\n");
    for (int i = 0; i < (n.n1 + n.n2 + n.n3); i++)
    {
        copy = strcmp(start, e[i].from);
        copy1 = strcmp(end, e[i].to);
        if (copy == 0 && copy1 == 0)
        {
            copy1 = i;
            printf("Economy:   %d           %s    %s   %d:%d   %s         %d    %d\n", e[i].flight_no, e[copy1].from, e[copy1].to, e[copy1].timehh, e[copy1].timemm, e[i].airline_name, e[copy1].price, e[copy1].seat);
            flag1=1;
        }

        copy = strcmp(start, e1[i].from);
        copy1 = strcmp(end, e1[i].to);
        if (copy == 0 && copy1 == 0)
        {
            copy1 = i;
            printf("Executive: %d           %s    %s   %d:%d   %s         %d    %d\n", e1[i].flight_no, e1[copy1].from, e1[copy1].to, e1[copy1].timehh, e1[copy1].timemm, e1[i].airline_name, e1[copy1].price, e1[copy1].seat);
            flag2=1;
        }
        copy = strcmp(start, b[i].from);
        copy1 = strcmp(end, b[i].to);
        if (copy == 0 && copy1 == 0)
        {
            copy1 = i;
            printf("Business:  %d           %s    %s   %d:%d   %s         %d    %d\n", b[i].flight_no, b[copy1].from, b[copy1].to, b[copy1].timehh, b[copy1].timemm, b[i].airline_name, b[copy1].price, b[copy1].seat);
            flag3=1;
        }
    }
     if (flag1 == 1 || flag2 == 1 || flag3 == 1)
    {
    }
    else
    {
        printf("We don't have your choice flight please choose another airline");
        goto jump;
    }
}
void reservation(int a, int d)
{
    char yn;
    int num, i;

    printf("\n");
    printf("Airline details after your Reservation\n");
    for (i = 0; i < (n.n1 + n.n2 + n.n3); i++)
    {
        if (a == e[i].flight_no)
        {
            if (e[i].seat == 0)
            {
                printf("Sorry no seat availabele\n");
            }
            else if (e[i].seat < d)
            {
                printf("less tickets available than ordered\n");
            }
            if (e[i].seat >= d)
            {
                e[i].seat = e[i].seat - d;
                n.flag = 1;
            }
        }
        if (a == e1[i].flight_no)
        {
            if (e1[i].seat == 0)
            {
                printf("Sorry no seat availabele\n");
            }
            else if (e1[i].seat < d)
            {
                printf("less tickets available than ordered\n");
            }
            if (e1[i].seat >= d)
            {
                e1[i].seat = e1[i].seat - d;
                n.flag1 = 1;
            }
        }
        if (a == b[i].flight_no)
        {
            if (b[i].seat == 0)
            {
                printf("Sorry no seat availabele\n");
            }
            else if (b[i].seat < d)
            {
                printf("less tickets available than ordered\n");
            }
            if (b[i].seat >= d)
            {
                b[i].seat = b[i].seat - d;
                n.flag2 = 1;
            }
        }
    }
    airline_print_det();
jump:
    printf("\n");
    printf("\nY.)Enter Yes to conform Your Reservation\n");
    printf("N.)Enter No to Enter Details again\n");
    printf("Enter->>");
    fflush(stdin);
    yn = getch(yn);
    if (yn == 'Y' || yn == 'y')
    {
    }
    else
    {
        login_page();
        printf("Hence this will be your final submission no futher changes will be accepted\n");
        printf("Enter Y for yes or N for no\n");
        printf("Enter->>");
        fflush(stdin);
        yn = getch(yn);
        if (yn == 'Y' || yn == 'y')
            print_info();
        else if (yn == 'N' || yn == 'n')
        {
            goto jump;
        }
    }
    printf("\n");
}

void vaccination()
{
    int i;
    printf("\nEnter your VACCINATION DOSE detail\n");
    for (i = 0; i < n.total_tic; i++)
    {
        if (p[i].aadhar_no == 0)
        {
        }
        else
        {
            if (p[i].age >= 15)
            {
            start:
                printf("Enter the DOSE NUMBER for person [%d] : ", i + 1);
                {
                    scanf("%d", &p[i].dose);
                    if (p[i].dose == 1 || p[i].dose == 2 || p[i].dose == 0)
                    {
                    }
                    else
                    {
                        printf("Enter the correct doses detail\n");
                        goto start;
                    }
                }
            }
        }
    }
}

void food()
{
start:
    printf("\nEnter the FOOD DETAILS :\n");
    printf("Enter total cuisine for VEG     :\n");
    scanf("%d", &c.f1);
    printf("Enter total cuisine for NON-veg :\n");
    scanf("%d", &c.f2);
    if ((c.f1 + c.f2) > n.total_tic)
    {
        printf("Sorry! But We deliver only 1 cuisene per person\n");
        goto start;
    }
}

void payment(int a, int d)
{
    int i;
    char yn;
    float sum = 0.0;
    for (i = 0; i < (n.n1 + n.n2 + n.n3); i++)
    {
        // sub = i;
        if (a == e[i].flight_no)
        {
            c.total_price = (float)e[i].price * d;
        }
        else if (a == e1[i].flight_no)
        {
            c.total_price = (float)e1[i].price * d;
        }
        else if (a == b[i].flight_no)
        {
            c.total_price = (float)b[i].price * d;
        }
    }
    for (i = 0; i < n.total_tic + n.del_tic; i++)
    {
        if (p[i].dose == 1)
        {
            sum = sum + 2.5;
        }
        if (p[i].dose == 2)
        {
            sum = sum + 5;
        }
    }
    c.discount = (sum * c.total_price) / 100;

    printf("\nTotal amt you have to pay is : %f Rs.\n", c.total_price);
    printf("Thus the discount you get for getting vaccinated is: %0.2f\n", c.total_price - c.discount);

jump:
    printf("\n");
    printf("Your Personal details are as follows\n");
    print_info();
    printf("\nEnter Yes if all information are correct else no\n");
    yn = getch(yn);
    if (yn == 'Y' || yn == 'y')
    {
    }
    else
    {
        login_page();
        printf("\nHence this will be your final submission no futher changes will be accepted.\n");
        printf("Enter Y for yes or N for no\n");
        printf("Enter->>");
        yn = getch(yn);
        if (yn == 'Y' || yn == 'y')
            print_info();
        else if (yn == 'N' || yn == 'n')
        {
            goto jump;
        }
    }
}

void paymentmethod()
{
    unsigned long long account_no, temp2;
    char upi_id[30], ex_month[15], cvv[3], ch;
    int ex_year, upi_password, count3, i, choice, flag = 0, j = 0;
    printf("ENTER PAYMENT DETAILS :\n");
    printf("1.) for Netbanking:\n");
    printf("2.) for UPI Payment:\n");
    printf("Enter->>");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        do
        {
            count3 = 0;
            printf("ENTER ACCOUNT NUMBER\n");
            scanf("%llu", &account_no);
            temp2 = account_no;
            while (temp2 > 0)
            {
                count3++;
                temp2 = temp2 / 10;
            }
            if (count3 == 12)
            {
            }
            else
            {
                printf("Enter the 12 digit Account number\n");
            }
        } while (count3 != 12);
    start:
        printf("Card expiry\n");
        printf("Enter Month in words:");
        fflush(stdin);
        gets(ex_month);
        strupr(ex_month);
        for (i = 0; i < ex_month[i] != '\0'; i++)
        {
            if (ex_month[i] >= 'A' && ex_month[i] <= 'Z')
            {
            }
            else
            {
                printf("Enter the correct Month name\n");
                goto start;
            }
        }
    year:
        printf("Enter Year\n");
        fflush(stdin);
        scanf("%d", &ex_year);
        if (ex_year <= 2022)
        {
            printf("Enter Valid year:\n");
            goto year;
        }
        printf("\n");
        printf("Enter Last 3 CVV Digits :\n");

        for (i = 0; i < 3; i++)
        {
            ch = getch();
            cvv[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        printf("\n");
        printf("The Expiry Date is %s-%d", ex_month, ex_year);
        break;

    case 2:
    start2:
        printf("\nEnter UPI Details:\n Ex:xyz@okbankname\n");
        fflush(stdin);
        gets(upi_id);
        for (i = 0; upi_id[i] != '\0'; i++)
        {
            if (upi_id[i] == '@' && (upi_id[i - 1] >= 'a' && upi_id[i - 1] <= 'z') || (upi_id[i - 1] >= 'A' && upi_id[i - 1] <= 'Z') || (upi_id[i - 1] >= '0' && upi_id[i - 1] <= '9') && (upi_id[i + 1] >= 'a' && upi_id[i + 1] <= 'z'))
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("Enter the valid upi_id\n");
            goto start2;
        }
        else
            printf("\nYour UPI id is %s\n", upi_id);
    default:
        break;
    }
}
void delete ()
{
    int flight_number, del_tic, count = 0, i;
    char yn, person[100];
    unsigned long long int aadhar_num;
    printf("\nPlease enter the FLIGHT NUMBER \n");
    scanf("%d", &flight_number);
    for (int i = 0; i < (n.n1 + n.n2 + n.n3); i++)
    {
        if (flight_number == e[i].flight_no)
        {
            printf("Economy     %d           %s    %s   %d:%d   %s              %d    %d\n", e[i].flight_no, e[i].from, e[i].to, e[i].timehh, e[i].timemm, e[i].airline_name, e[i].price, e[i].seat);
        }
        else if (flight_number == e1[i].flight_no)
        {
            printf("Executive   %d           %s    %s   %d:%d   %s              %d    %d\n", e1[i].flight_no, e1[i].from, e1[i].to, e1[i].timehh, e1[i].timemm, e1[i].airline_name, e1[i].price, e1[i].seat);
        }
        else if (flight_number == b[i].flight_no)
        {

            printf("Business    %d           %s    %s   %d:%d   %s              %d    %d\n", b[i].flight_no, b[i].from, b[i].to, b[i].timehh, b[i].timemm, b[i].airline_name, b[i].price, b[i].seat);
        }
    }
    printf("Enter y or Y if information shown is yours else N or n\n");
    yn = getch(yn);
    if (yn == 'y' || yn == 'Y')
    {
        printf("Enter the number of seat you wants to delete\n");
        scanf("%d", &n.del_tic);
        for (i = 1; i <= n.del_tic; i++)
        {
            printf("Please enter aadhar card number of person[%d]\n", i);
            scanf("%llu", &aadhar_num);
            for (int j = 0; j < n.total_tic; j++)
            {
                if (aadhar_num == p[j].aadhar_no)
                {
                    count++;
                    p[j].aadhar_no = 0;
                    p[j].passport_no = 0;
                    p[j].dose = 0;
                    n.total_tic--;
                    for (int i = 0; i < (n.n1 + n.n2 + n.n3); i++)
                    {
                        if (flight_number == e[i].flight_no)
                        {
                            e[i].seat++;
                        }
                        else if (flight_number == e1[i].flight_no)
                        {
                            e1[i].seat++;
                        }
                        else if (flight_number == b[i].flight_no)
                        {

                            b[i].seat++;
                        }
                    }
                }
            }
        }
    }
}

void print_ticket(int a)
{
    int j, i, flight_no;
    printf("\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("\t\t\t\tYOUR TICKET DETAILS ARE AS FOLLOWS\n");
    printf("------------------------------------------------------------------------------------\n");
ticket:
    printf("Please Enter your Flight number\n");
    scanf("%d", &flight_no);
    
    if (flight_no == n.user_flight)
    {
        for (i = 0; i < n.total_tic; i++)
        {
            if (p[i].aadhar_no == 0)
            {
            }
            else
            {
                printf("\nName of person : %s\n", p[i].name);
            }
            printf("------------------------------------------------------------------------------------\n");
            printf("  CLASS    | FLIGHT NO | FROM | TO  | TIME | AIRLINE NAME |\n");
            printf("------------------------------------------------------------------------------------\n");
            for (int j = 0; j < (n.n1 + n.n2 + n.n3); j++)
            {
                if (n.user_flight == e[j].flight_no)
                {
                    printf("Economy     %d           %s    %s   %d:%d   %s              \n", e[j].flight_no, e[j].from, e[j].to, e[j].timehh, e[j].timemm, e[j].airline_name);
                }
                if (n.user_flight == e1[j].flight_no)
                {
                    printf("Executive   %d           %s    %s   %d:%d   %s              \n", e1[j].flight_no, e1[j].from, e1[j].to, e1[j].timehh, e1[j].timemm, e1[j].airline_name);
                }
                if (n.user_flight == b[j].flight_no)
                {

                    printf("Business    %d           %s    %s   %d:%d   %s              \n", b[j].flight_no, b[j].from, b[j].to, b[j].timehh, b[j].timemm, b[j].airline_name);
                }
            }
        }
    }
    else
    {
        printf("Please enter your correct flight number That is against your login details\n");
        goto ticket;
    }
}
int main()
{
    welcome_page();
    n.del_tic = 0;
    n.flag = 0, n.flag1 = 0, n.flag2 = 0;
    int num1, num2, num3, class, user_num, main_num, flag = 0;
    while (1)
    {
    start:
        printf("\nEnter number for further process :\n");
        printf("1.) for Login Page\n");
        printf("2.) for Backend Process(Not for User Perspective)\n");
        printf("3.) for Confirmation And Payment Gateway\n");
        printf("4.) for Direct Exit\n");
        printf("Enter->>");
        scanf("%d", &main_num);
        switch (main_num)
        {
        case 1:
            while (1)
            {
                printf("\nEnter number for user data :\n");
                printf("1.) for scanning your personal details\n");
                printf("2.) for printing your personal details\n");
                printf("3.) for Entering the airlines detail\n");
                printf("Enter->>");
                scanf("%d", &num2);
                switch (num2)
                {
                case 1:
                    flag = 1;
                    login_page();
                    break;
                case 2:
                    print_info();
                    break;
                case 3:
                    goto start;
                }
            }
            break;
        case 2:
            printf("\nEnter number for backend purpose :\n");
            printf("1.) for scanning details\n");
            printf("2.) for printing the details\n");
            printf("Enter->>");
            scanf("%d", &num1);
            switch (num1)
            {
            case 1:
                while (1)
                {
                    printf("\nEnter your choice class\n");
                    printf("press :\n");
                    printf("1.) for economy\n");
                    printf("2.) for executive\n");
                    printf("3.) for bussines\n");
                    printf("4.) for exit\n");
                    printf("Enter->> ");
                    scanf("%d", &class);
                    switch (class)
                    {
                    case 1:
                        economy();
                        break;
                    case 2:
                        executive();
                        break;
                    case 3:
                        bussiness();
                        break;
                    case 4:
                        goto start;
                        break;
                    default:
                        ("Our Airlines system provides only 3 types of class\n");
                    }
                }
                break;
            case 2:
                airline_print_det();
                break;
            }

            break;
        case 3:
            while (1)
            {
                printf("\nEnter number for next steps :\n");
                printf("1.) for Reservation\n");
                printf("2.) for enter Vaccination details\n");
                printf("3.) for add Food details\n");
                printf("4.) for Payment\n");
                printf("5.) for Delete any Details\n");
                printf("6.) for ticket Generation\n");
                printf("7.) for Exit\n");
                printf("Enter->>");
                scanf("%d", &num2);

                switch (num2)
                {
                case 1:
                    printf("\nEnter your choice for booking the AIR TICKETS\n");
                    printf("1.) for choosing through Airlines Name\n");
                    printf("2.) for choosing through Starting and Ending Destination\n");
                    printf("Enter->> ");
                    scanf("%d", &user_num);
                    switch (user_num)
                    {
                    case 1:
                        flight_sort();
                        break;
                    case 2:
                        flight_starend_sort();
                        break;
                    }

                    printf("\nEnter your reservation details\n");
                    printf("Please enter the flight number that you wants to book :\n");
                    scanf("%d", &n.user_flight);
                    reservation(n.user_flight, n.total_tic);
                    break;

                case 2:
                    printf("\nDUE TO CURRENT PANDEMIC AND AS PER GOVT. GUIDLINES PLEASE GIVE YOUR VACCINATION STATUS : \n");
                    vaccination();
                    break;

                case 3:
                    food();
                    break;

                case 4:
                    payment(n.user_flight, n.total_tic);
                    paymentmethod();
                    break;

                case 5:
                    delete ();
                    break;

                case 6:
                    print_ticket(n.user_flight);
                    break;

                case 7:
                    printf("****************************************************************************************************************************************************\n");
                    printf("\t\t\t\t\t\t           Thanks For Booking                \n");
                    printf("****************************************************************************************************************************************************\n");
                    getch();
                    return 0;
                    break;
                }
            }
            break;
        case 4:
            return 0;
        }
    }
    return 0;
}

/*
Given Basic Salary, DA, HRA, TA and Other we have to calculate Net Salary of an employee
where tax dedication of PF and IT using C program.
        Basic salary                : Take from User (In ₹)
        DA (Dearness Allowance)     : 12% of Basic salary (12/100 = 0.12)
        HRA (House Rent Allowance)  : ₹ 1500
        TA (Travel Allowance)       : ₹ 900
        Others                      : ₹ 3000
        Tax deductions :–
            a) Provident Fund (PF)  : 14% of Basic salary (14/100 = .14)
            b) Income Tax (IT)      : 15% of Basic salary (15/100 = .15)

        Calculate the Net Salary using the formula:
            Net Salary = Basic Salary + DA + HRA + TA + Others − (PF + IT)
*/

#include <stdio.h>
int main()
{
    float basic_salary, da, hra, ta, pf, it, net_salary;
    hra = 1500;
    ta = 900;
    int other = 3000;
    printf("Enter Basic Salary\t:");
    scanf("%f", &basic_salary);

    da = basic_salary * .12;
    pf = basic_salary * .14;
    it = basic_salary * .15;
    net_salary = basic_salary + hra + da + ta + other - (pf + it);
    printf("Basic Salary \t:%.3f\n", basic_salary);
    printf("DA \t\t:%.3f\n", da);
    printf("HRA \t\t:%.3f\n", hra);
    printf("TA \t\t:%.3f\n", ta);
    printf("Other \t\t:%d\n", other);
    printf("PF Deducted\t\t:%.3f\n", pf);
    printf("Income Tax Deducted \t:%.3f\n", it);

    printf("Net Salary \t:%.3f",net_salary);
    return 0;
}
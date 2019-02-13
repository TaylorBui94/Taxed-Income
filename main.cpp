/*
 * Taylor Bui
 *Date: 09/5/18
 *The purpose of this program is to calculate the taxed income for user inputed income.
 *The user selects if they are single, married filed jointly, married filed separately, or head of the household
 *Then the income is generated
 */


#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, const char * argv[])
{
    int choice;
    double income, taxedAmount;

    cout << "Enter your filing status. Input 0 for single, 1 for Marrried Filed Jointly, 2 for Married filed separately, 3 for Head of Household" << endl;
    cin >> choice;
    
    if(choice == 0)
    {
        int up1 = 8350 , up2 = 33950, up3 = 82250, up4 = 171550 , up5 = 372950;
        cout << " You have entered 0 for single"<< endl << "Enter your income"<< endl;
        cin >> income;
        if(income <= up1)
        {
            taxedAmount = income *.10;
        }
        else
            if(income <= up2)
            {
                income = (income - up1);
                taxedAmount = income*.15;
                taxedAmount = taxedAmount + up1*.1;
            }else
                if(income <= up3)
                {
                    income = (income - up2);
                    taxedAmount = income*.25;
                    taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15;
                }else
                    if(income <= up4)
                    {
                        income = (income - up3);
                        taxedAmount = income*.28;
                        taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25;
                    }else
                        if(income <= up4)
                        {
                            income = (income -  up4);
                            taxedAmount = income*.33;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28;
                        }else
                        {
                            income = (income - up5);
                            taxedAmount = income*.35;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28 + (up5-up4)*.33;
                        }
       }
    if(choice == 1)
    {
        int up1 = 16700 , up2 = 67900, up3 = 137050, up4 = 208850 , up5 = 372950;
        cout << " You have entered 1 for Married Filed Jointly"<< endl << "Enter your income"<< endl;
        cin >> income;
        if(income <= up1)
        {
            taxedAmount = income *.10;
        }
        else
            if(income <= up2)
            {
                income = (income - up1);
                taxedAmount = income*.15;
                taxedAmount = taxedAmount + up1*.1;
            }else
                if(income <= up3)
                {
                    income = (income - up2);
                    taxedAmount = income*.25;
                    taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15;
                }else
                    if(income <= up4)
                    {
                        income = (income - up3);
                        taxedAmount = income*.28;
                        taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25;
                    }else
                        if(income <= up4)
                        {
                            income = (income -  up4);
                            taxedAmount = income*.33;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28;
                        }else
                        {
                            income = (income - up5);
                            taxedAmount = income*.35;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28 + (up5-up4)*.33;
                        }
    }
    
    
    if(choice == 2)
    {
        int up1 = 8350 , up2 = 33950, up3 = 68525, up4 = 104425 , up5 = 186475;
        cout << " You have entered 2 for Married filed Separately"<< endl << "Enter your income"<< endl;
        cin >> income;
        if(income <= up1)
        {
            taxedAmount = income *.10;
        }
        else
            if(income <= up2)
            {
                income = (income - up1);
                taxedAmount = income*.15;
                taxedAmount = taxedAmount + up1*.1;
            }else
                if(income <= up3)
                {
                    income = (income - up2);
                    taxedAmount = income*.25;
                    taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15;
                }else
                    if(income <= up4)
                    {
                        income = (income - up3);
                        taxedAmount = income*.28;
                        taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25;
                    }else
                        if(income <= up4)
                        {
                            income = (income -  up4);
                            taxedAmount = income*.33;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28;
                        }else
                        {
                            income = (income - up5);
                            taxedAmount = income*.35;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28 + (up5-up4)*.33;
                        }
    }
        
    if(choice == 3)
    {
        int up1 = 11950 , up2 = 45500, up3 = 117450, up4 = 190200 , up5 = 372950;
        cout << " You have entered 3 for Head of Household"<< endl << "Enter your income"<< endl;
        cin >> income;
        cin >> income;
        if(income <= up1)
        {
            taxedAmount = income *.10;
        }
        else
            if(income <= up2)
            {
                income = (income - up1);
                taxedAmount = income*.15;
                taxedAmount = taxedAmount + up1*.1;
            }else
                if(income <= up3)
                {
                    income = (income - up2);
                    taxedAmount = income*.25;
                    taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15;
                }else
                    if(income <= up4)
                    {
                        income = (income - up3);
                        taxedAmount = income*.28;
                        taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25;
                    }else
                        if(income <= up4)
                        {
                            income = (income -  up4);
                            taxedAmount = income*.33;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28;
                        }else
                        {
                            income = (income - up5);
                            taxedAmount = income*.35;
                            taxedAmount = taxedAmount + up1*.1 + (up2-up1)*.15 + (up3-up2)*.25 + (up4-up3)*.28 + (up5-up4)*.33;
                            
                        }
    }
        
    cout << "Your taxed amount is $" << fixed << setprecision(2)<< taxedAmount;
    
}


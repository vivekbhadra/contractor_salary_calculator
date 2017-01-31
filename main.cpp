#include <iostream>

using namespace std;

class Contract {
private:
    double hourly_rate;
    double hour_per_week;
    double daily_mileage;
    double monthly_salary;
    double weekly_corporation_tax;
    double accountant_fees;
    double insurance_fees;
    double weekly_net_dividend;
    double daily_fuel_cost;
    double weekly_travel_expense;
    double weekly_expenses;
public:
    Contract() : hourly_rate(0.0),
                hour_per_week(0.0),
                daily_mileage(0.0),
                monthly_salary(0.0),
                accountant_fees(0.0),
                insurance_fees(0.0),
                weekly_net_dividend (0.0),
                daily_fuel_cost(0.0),
                weekly_travel_expense(0.0),
                weekly_expenses(0.0)  {}
    double getWeeklySalary()
    {
        cout << "Enter the hourly rate = ";
        cin >> hourly_rate;
        cout << "Enter the hours done per week = ";
        cin >> hour_per_week;
        double weekly_gross = hourly_rate * hour_per_week;
        double weekly_invoice = weekly_gross + weekly_gross * 0.2;

        double weekly_vat_return = weekly_invoice * 0.145;
        double weekly_net_income = weekly_invoice - weekly_vat_return;

        cout << "Enter the daily mileage = ";
        cin >> daily_mileage;
        weekly_travel_expense = daily_mileage * 5 * 0.45;

        cout << "Enter the monthly director's salary = ";
        cin >> monthly_salary;

        cout << "Enter the monthly accountant fees = ";
        cin >> accountant_fees;

        cout << "Enter the insurance fees = ";
        cin >> insurance_fees;

        weekly_expenses = weekly_travel_expense + (monthly_salary/4) * 2 +
                            (accountant_fees/4) + insurance_fees;
        cout << endl;
        cout << endl;
        cout << " === Expenses === " << endl;
        cout << " Weekly director's salary = " << (monthly_salary/4) << " + " << (monthly_salary/4) <<
                        " Total =  " << (monthly_salary/4) * 2 << endl;
        cout << " Weekly_travel_expense = " << weekly_travel_expense << endl;
        cout << " Weekly accountant fees = " << accountant_fees << endl;
        cout << " insurance_fees = " << endl;
        cout << endl;
        cout << endl;
        weekly_net_income = weekly_net_income - weekly_expenses;
        weekly_corporation_tax = weekly_net_income * 0.2;
        cout << " Weekly corporation tax = " << weekly_corporation_tax << endl;

        weekly_net_dividend = weekly_net_income - weekly_corporation_tax;
        double total_weekly_income = (monthly_salary/4) * 2 + weekly_net_dividend + weekly_travel_expense - (daily_fuel_cost * 5);

        cout << "weekly_invoice = " << weekly_invoice << endl;
        cout << "weekly net dividend = " << weekly_net_dividend << endl;
        cout << "Total  = " << total_weekly_income << endl;
        cout << " Weekly saving = " << total_weekly_income - (3312.0 / 4) << endl;
    }
};

int main()
{
    Contract c1;
    c1.getWeeklySalary();

    return 0;
}

package me.twodee.CS2005.SalaryCalculation;

public class SalaryCalculator implements Salary, IncomeTax, Allowance
{
    @Override
    public double calculateAllowance(double salary)
    {
        return salary * 5 / 100;
    }

    @Override
    public double calculateIT(double salary)
    {

        return salary * 10/100;
    }

    @Override
    public double calculateSalary(double basicPay, double da, double hra)
    {
        return basicPay + da + hra;
    }
}

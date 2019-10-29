package me.twodee.CS2005.SalaryCalculation;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class SalaryApplication implements CommandLineApp
{

    @Override
    public void run(Scanner scanner)
    {
        SalaryCalculator calculator = new SalaryCalculator();
        System.out.print("Enter the basic pay: ");
        double basicPay = scanner.nextDouble();

        System.out.print("Enter the DA: ");
        double da = scanner.nextDouble();

        System.out.print("Enter the HRA: ");
        double hra = scanner.nextDouble();

        double salary = calculator.calculateSalary(basicPay, da, hra);
        double allowance = calculator.calculateAllowance(salary);

        double incomeTax = calculator.calculateIT(salary + allowance);
        
        System.out.println("Income Tax: " + incomeTax);
        System.out.println("Allowance: " + allowance);
        System.out.println("Total income: " + (salary + allowance - incomeTax));
    }
}

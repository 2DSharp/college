package me.twodee.CS2005.InterestCalculationOverriding;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class InterestCalculator implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        System.out.print("Enter principal amount: ");
        double principal = scanner.nextDouble();

        System.out.print("Enter tenure: ");
        int tenure = scanner.nextInt();

        System.out.println("Choose bank: 1) SBI 2) ICICI 3) Axis ");
        int bankSelection = scanner.nextInt();

        Bank bank;
        switch (bankSelection) {
            case 1:
                bank = new SBI();
                break;
            case 2:
                bank = new ICICI();
                break;
            case 3:
                bank = new Axis();
                break;

            default:
                bank = null;
                System.out.println("Invalid selection");
        }

        System.out.println("Interest rate is " + bank.getInterestRate());
        System.out.println("Net interest amount is: " + bank.getInterestAmount(principal, tenure));
    }
}

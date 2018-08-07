package me.twodee.BankingSystemBasic;

import me.twodee.CommandLineApp;

import java.util.Scanner;

public class BankingSystem implements CommandLineApp {

    @Override
    public void run(Scanner scanner)
    {
        System.out.print("Enter the name of the user: ");
        String name = scanner.nextLine();


        System.out.print("Enter account no.: ");
        int accountNumber = scanner.nextInt();

        System.out.print("Enter the balance: ");
        double balance = scanner.nextDouble();

        Account account = new Account(name, accountNumber, balance);
        System.out.println("Data: " + account.getName() + " " + account.getAccountNumber() + " "  +
                            + account.getBalance() + " " + account.bankName);
    }
}

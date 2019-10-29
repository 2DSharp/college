package me.twodee.CS2005.Quiz1;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class ATMMachine implements CommandLineApp
{
    private Account accounts[];

    public ATMMachine()
    {
        int i = 0;
        accounts = new Account[10];

        while (i < 10) {

            accounts[i] = new Account(i, 1000);
            System.out.println(i);
            i++;
        }
    }

    @Override
    public void run(Scanner scanner)
    {
        int id = getIDFromPrompt(scanner);

        if (id < 0 || id > 9) {
            System.out.println("Enter a correct ID;");
            id = getIDFromPrompt(scanner);
        }

        displayMainMenu(id, scanner);
    }

    private int getIDFromPrompt(Scanner scanner)
    {
        System.out.println("Enter the user ID: ");
        int id = scanner.nextInt();
        return id;
    }

    private void displayMainMenu(int id, Scanner scanner)
    {
        System.out.println("Main Menu");
        System.out.println("Enter your option: 1. Current balance. 2. Withdraw Money. 3. Deposit Money. 4. Exit");
        int option = scanner.nextInt();
        displayData(option, id, scanner);
    }

    private void displayData(int option, int id, Scanner scanner)
    {
        boolean exited = false;

        switch (option) {
            case 1:
                System.out.println("Amount: " + accounts[id].getBalance());
                break;

            case 2:
                withdrawCash(id, scanner);
                break;

            case 3:
                depositCash(id, scanner);
                break;
            case 4:
                exited = true;
                id = getIDFromPrompt(scanner);
                break;
        }

        if (!exited) {
            displayMainMenu(id, scanner);
        }
    }

    private void depositCash(int id, Scanner scanner)
    {
        System.out.println("Enter deposit amount");
        int amount = scanner.nextInt();
        accounts[id].deposit(amount);
        System.out.println("Deposit successful. Remaining balance: " + accounts[id].getBalance());
    }
    private void withdrawCash(int id, Scanner scanner)
    {
        System.out.println("Enter withdraw amount: ");
        int amount = scanner.nextInt();

        try {
            accounts[id].withdraw(amount);
            System.out.println("Withdraw successful. Balance: " + accounts[id].getBalance());
        }
        catch (Exception e) {
            e.getMessage();
        }
    }
}

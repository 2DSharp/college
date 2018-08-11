package me.twodee.SampleQuestionApp;

import me.twodee.CommandLineApp;

import java.util.Scanner;

public class IntegerSearch implements CommandLineApp
{

    @Override
    public void run(Scanner scanner)
    {
        System.out.print("Enter an integer: ");
        int num = scanner.nextInt();

        if (num >= 10 && num <= 9999999) {
            num = num/10;
            System.out.println(num%10);
        }
    }
}

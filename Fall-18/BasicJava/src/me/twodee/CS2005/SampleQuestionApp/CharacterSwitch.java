package me.twodee.CS2005.SampleQuestionApp;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class CharacterSwitch implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        System.out.print("Enter a character (R/G/B): ");
        char c = scanner.next().charAt(0);

        switch (c) {
            case 'R':
            case 'r':
                System.out.println("RED");
                break;
            case 'g':
            case 'G':
                System.out.println("GREEN");
                break;
            case 'b':
            case 'B':
                System.out.println("BLUE");
                break;

            default:
                System.out.println("UNDEFINED");
        }
    }
}

package me.twodee.CS2005.RandomClasswork;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class DummyNumberGen implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        int regNums[] = new int[65];

        for (int i = 0; i < regNums.length ; i++) {
            regNums[i] = getRandomNumber(1, 101);
            System.out.println((i + 1) + " " + regNums[i]);
        }

        System.out.print("Enter marks for number: ");
        int dummy = scanner.nextInt();

        for (int num : regNums) {


        }
    }

    int getRandomNumber(int min, int max)
    {
        int range = Math.abs(max - min) + 1;
        return (int) (Math.random() * range) + (min <= max ? min : max);
    }
}
